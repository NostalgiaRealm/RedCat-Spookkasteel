#!/usr/bin/env python3
"""Import Genesis3D ACTR/BOD^ actor geometry, textures and skeletal keyframes.

Reads an owned original installation. Uses Python 3 and Pillow, never Wine.
The JSON coordinate system is the original actor coordinate system; apply the
included initialRotationDegrees and scale from each actor's INI when placing it.
"""
from __future__ import annotations
import argparse
from collections import deque
import configparser
import hashlib
import io
import json
import math
import re
from pathlib import Path
import struct
import sys
from PIL import Image


class Reader:
    def __init__(self, data, pos=0): self.data, self.pos = data, pos
    def read(self, n):
        if n < 0 or self.pos + n > len(self.data): raise ValueError("Truncated Genesis3D record")
        value = self.data[self.pos:self.pos+n]; self.pos += n
        return value
    def unpack(self, fmt): return struct.unpack('<'+fmt, self.read(struct.calcsize('<'+fmt)))
    def value(self, fmt): return self.unpack(fmt)[0]


def vfs(data):
    r = Reader(data)
    if r.read(4) != b'VF00': raise ValueError('Expected VF00 actor archive')
    version, dispersed, directory, length, end = r.unpack('H2x4I')
    if version or dispersed: raise ValueError('Unsupported dispersed VF00 archive')
    if end > len(data) or directory >= len(data): raise ValueError('Invalid VF00 directory bounds')
    r.pos = directory
    if r.read(4) != b'DT01': raise ValueError('Expected DT01 directory')
    size = r.value('I')
    if size + directory > len(data): raise ValueError('Invalid directory size')
    files = {}
    def node(parent='', depth=0):
        if depth > 256: raise ValueError('Archive directory too deep')
        marker = r.value('I')
        if marker == 0xffffffff: return
        if marker != 0: raise ValueError('Invalid directory marker')
        name = r.read(r.value('I')).rstrip(b'\0').decode('cp1252')
        if '/' in name or '\\' in name or name in ['.', '..']: raise ValueError('Unsafe archive path')
        r.read(8)
        attributes, file_size, offset, hint_size = r.unpack('4I')
        r.read(hint_size)
        path = parent + '/' + name if parent else name
        if not attributes & 2:
            if offset + file_size > len(data): raise ValueError('Archive member outside data')
            files[path] = data[offset:offset+file_size]
        node(path,depth+1); node(parent,depth+1)
    node()
    return files


def strings(r):
    if r.read(4) != b'SBKB': raise ValueError('Unsupported string block format')
    count, size = r.unpack('2I'); data = r.read(size)
    if count * 4 > size: raise ValueError('Invalid string table size')
    return [data[o:].split(b'\0',1)[0].decode('cp1252') for o in struct.unpack_from('<'+str(count)+'I',data)]


def geometry(data):
    r=Reader(data)
    if r.read(4)!=b'BOD^' or r.value('I') != 0xf1: raise ValueError('Unsupported actor body version')
    bounding=r.unpack('6f')
    vertices=[r.unpack('5fBx h') for _ in range(r.value('h'))]
    normals=[r.unpack('3fBx h') for _ in range(r.value('h'))]
    bones=[]
    for _ in range(r.value('h')):
        item=r.unpack('18fh2x')
        bones.append({'parent':item[18], 'attachment':list(item[6:18])})
    names=strings(r)
    for bone,name in zip(bones,names): bone['name']=name
    mats=[r.unpack('I3f') for _ in range(r.value('h'))]
    mat_names=strings(r)
    lod_count=r.value('I')
    if not 0 < lod_count <=16: raise ValueError('Unexpected LOD count')
    faces=[]
    for lod in range(lod_count):
        triangles=[r.unpack('7h') for _ in range(r.value('I'))]
        if lod==0:faces=triangles
    if r.pos != len(data): raise ValueError(f'Unexpected body trailing bytes: {len(data)-r.pos}')
    return vertices,normals,bones,mats,mat_names,faces


def bytes_per_pixel(fmt):
    if fmt in (1,2):return 1
    if 3<=fmt<=8:return 2
    if 9<=fmt<=11:return 3
    if 12<=fmt<=19:return 4
    raise ValueError(f'Unsupported pixel format {fmt}')


def pixels(data,fmt,count):
    if fmt==2:return [(x,x,x,255) for x in data]
    if fmt in (9,10):
        return [(data[i],data[i+1],data[i+2],255) if fmt==9 else (data[i+2],data[i+1],data[i],255)
                for i in range(0,len(data),3)]
    if 12<=fmt<=19:
        layouts={12:'RGBX',13:'XRGB',14:'BGRX',15:'XBGR',16:'RGBA',17:'ARGB',18:'BGRA',19:'ABGR'}
        # Genesis formats are named by packed integer bit order, little-endian
        # in memory; the 24-bit RGB/BGR formats above are byte-ordered.
        layout=layouts[fmt][::-1]
        return [tuple(data[i+layout.index(c)] if c in layout else 255 for c in 'RGBA')
                for i in range(0,len(data),4)]
    if 3<=fmt<=8:
        result=[]
        for (v,) in struct.iter_unpack('<H',data):
            a=255
            if fmt in (3,4,8):
                rr=((v>>10)&31)*255//31;gg=((v>>5)&31)*255//31;bb=(v&31)*255//31
                if fmt==8:a=255 if v&32768 else 0
                if fmt==4:rr,bb=bb,rr
            elif fmt in (5,6):
                rr=((v>>11)&31)*255//31;gg=((v>>5)&63)*255//63;bb=(v&31)*255//31
                if fmt==6:rr,bb=bb,rr
            else:rr=((v>>8)&15)*17;gg=((v>>4)&15)*17;bb=(v&15)*17;a=((v>>12)&15)*17
            result.append((rr,gg,bb,a))
        return result
    raise ValueError(f'Unsupported direct image format {fmt}')


def bitmap(data):
    r=data if isinstance(data,Reader) else Reader(data)
    signature=r.read(4)
    if signature!=b'GeBm':
        if isinstance(data,Reader):raise ValueError('Unexpected nested alpha bitmap')
        return Image.open(io.BytesIO(data)).convert('RGBA')
    version=r.value('B')
    flags,fmt,mips=r.unpack('3B')
    if flags&1:
        wh=r.value('B');w=1<<(wh>>4);h=1<<(wh&15)
    elif flags&32:w,h=r.unpack('2B')
    else:w,h=r.unpack('2H')
    if w*h>16777216:raise ValueError('Texture too large')
    bpp=bytes_per_pixel(fmt)
    colorkey=r.read(bpp) if flags&2 else None
    palette=None
    if flags&8:
        palflags=r.value('B');pf=palflags&31
        if palflags&64:raise ValueError('Compressed palette unsupported')
        pcount=256 if palflags&32 else r.value('B')
        palette=pixels(r.read(pcount*bytes_per_pixel(pf)),pf,pcount)
    base=None
    while True:
        mipflags=r.value('B');level=mipflags&15
        if level>mips>>4:break
        if mipflags&0x30:raise ValueError('Compressed bitmap mip unsupported')
        pw=max(1,(w+(1<<level)-1)>>level);ph=max(1,(h+(1<<level)-1)>>level)
        raw=r.read(pw*ph*bpp)
        if level==0:base=raw
    if base is None:raise ValueError('Texture missing base mip')
    colors=[palette[x] for x in base] if fmt==1 and palette else pixels(base,fmt,w*h)
    if colorkey is not None:
        colors=[(*color[:3],0) if base[i*bpp:(i+1)*bpp]==colorkey else color for i,color in enumerate(colors)]
    image=Image.new('RGBA',(w,h));image.putdata(colors)
    if flags&4:image.putalpha(bitmap(r).convert('L'))
    return image


def bleed_transparent_rgb(image):
    """Keep alpha/visible pixels exact; remove color-key halos during filtering.

    Original hardware color keys discarded magenta before drawing. PNG/WebGL
    filtering blends that invisible RGB unless transparent texels have suitable
    edge colors. Flood nearest opaque colors into alpha-zero texels only.
    """
    image = image.convert('RGBA')
    width, height = image.size
    colors = list(image.get_flattened_data() if hasattr(image, 'get_flattened_data') else image.getdata())
    seen = bytearray(pixel[3] != 0 for pixel in colors)
    if all(seen) or not any(seen):
        return image
    queue = deque()
    def neighbors(index):
        x = index % width
        if x: yield index - 1
        if x + 1 < width: yield index + 1
        if index >= width: yield index - width
        if index + width < len(colors): yield index + width
    for index, filled in enumerate(seen):
        if filled and any(not seen[other] for other in neighbors(index)):
            queue.append(index)
    while queue:
        index = queue.popleft()
        for other in neighbors(index):
            if not seen[other]:
                colors[other] = (*colors[index][:3], 0)
                seen[other] = 1
                queue.append(other)
    result = Image.new('RGBA', image.size)
    result.putdata(colors)
    return result


IDENTITY=[1,0,0,0,1,0,0,0,1,0,0,0]
def transform(m,v,normal=False):
    return [sum(m[a*3+b]*v[b] for b in range(3))+(0 if normal else m[9+a]) for a in range(3)]
def multiply(a,b):
    return [sum(a[row*3+k]*b[k*3+col] for k in range(3)) for row in range(3) for col in range(3)]+transform(a,b[9:12])


def keyframes(r,rotation):
    block=Reader(r.read(r.value('I')))
    flags,count=block.unpack('2I');compression=(flags>>8)&255
    if compression&~3:raise ValueError('Unsupported animation compression')
    if compression&2:
        start,step=block.unpack('2f');times=[start+i*step for i in range(count)]
    else:times=list(block.unpack(str(count)+'f'))
    if rotation and compression&1:
        axis=block.unpack('3f');values=[]
        for _ in range(count):
            angle=block.value('f')*.5;values.extend([v*math.sin(angle) for v in axis]+[math.cos(angle)])
    elif rotation:
        values=[]
        for _ in range(count):
            # geQuaternion on disk is W,X,Y,Z; Three.js uses X,Y,Z,W.
            w,x,y,z=block.unpack('4f');values.extend([x,y,z,w])
    else:values=list(block.unpack(str(count*3)+'f'))
    if block.pos!=len(block.data):raise ValueError('Unconsumed animation block bytes')
    return {'times':times,'values':values,'interpolation':(flags>>16)&255,'loop':bool(flags&1)}


def motion(data):
    r=Reader(data)
    if r.read(4)!=b'MTNB' or r.value('I')!=0xf0:raise ValueError('Unsupported motion format')
    header=r.value('I');name=r.read(header&65535).rstrip(b'\0').decode('cp1252')
    count,checksum,flags=r.unpack('3I')
    if flags&1:raise ValueError('Motion events not yet decoded')
    names=strings(r) if flags&2 else [str(i) for i in range(count)]
    tracks=[];duration=0
    for i in range(count):
        h=r.value('I')
        if h>>16!=0x1001:raise ValueError('Unsupported path format')
        track={'bone':names[i]}
        if h&2:track['translation']=keyframes(r,False)
        if h&1:track['rotation']=keyframes(r,True)
        for channel in ['translation','rotation']:
            if track.get(channel,{}).get('times'):duration=max(duration,max(track[channel]['times']))
        tracks.append(track)
    if r.pos!=len(data):raise ValueError('Motion trailing data')
    return {'name':name,'duration':duration,'tracks':tracks}


def actor_settings(path):
    # Native ActorInitialRotationX defaults to -90 (RcHcGame 0x4a3faf),
    # with Y/Z defaulting to zero. Actors such as the five castle portraits
    # have no INI: their Z-up body still needs this basis before entity turns.
    initial_rotation=[-90,0,0]
    settings={'scale':1.0,'initialRotationDegrees':initial_rotation, 'rotationDegreesPerSecond':[0,0,0], 'blocksPlayer':False, 'blocksLOS':False, 'canBeShot':False}
    # Windows resolved asset filenames case-insensitively. Preserve that behavior
    # when the import runs on a case-sensitive Linux/macOS filesystem.
    ini=next((p for p in path.parent.iterdir() if p.name.lower()==path.stem.lower()+'.ini'),path.with_suffix('.ini'))
    if ini.exists():
        p=configparser.ConfigParser(interpolation=None,inline_comment_prefixes=(';',),strict=False)
        p.read(ini,encoding='cp1252')
        if p.has_section('Actor'):
            settings['scale']=p.getfloat('Actor','ActorScale',fallback=1.0)
            settings['initialRotationDegrees']=[p.getfloat('Actor','ActorInitialRotation'+axis,fallback=default) for axis,default in zip('XYZ',initial_rotation)]
            settings['rotationDegreesPerSecond']=[p.getfloat('Actor','ActorRotationSpeed'+axis,fallback=0) for axis in 'XYZ']
            for field,key in [('blocksPlayer','ActorBlocksPlayer'),('blocksLOS','ActorBlocksLOS'),('canBeShot','ActorCanBeShot')]:
                settings[field]=p.getboolean('Actor',key,fallback=False)
            settings['destroyable']=p.getboolean('Actor','ActorDestroyable',fallback=False)
            settings['damageThreshold']=[p.getfloat('Actor','Actor'+key+'Damage',fallback=1) for key in ('Min','Max')]
        if p.has_section('Explosion'):
            settings['explosion']={key:p.getfloat('Explosion','Explode'+key,fallback=0) for key in ('DamagePercentage','SizePercentage','NrExplosions','Electric','SmokeOnly','Green')}
        if p.has_section('Particle'):
            settings['debris']={key:p.getfloat('Particle','Particle'+key,fallback=0) for key in ('Gravity','MustFade','TestCollision','MustRotate','RotationSpeed','FloorOffset','MinLifeTimeSeconds','MaxLifeTimeSeconds','Elasticity','Friction','AirFriction')}
            settings['debris']['types']=[]
            for section in p.sections():
                if re.fullmatch(r'ParticleType\d+',section,re.IGNORECASE):
                    settings['debris']['types'].append({'actor':p.get(section,'ActorDefName',fallback=''), **{key:p.getfloat(section,key,fallback=0) for key in ('MinNr','MaxNr','MinVelocity','MaxVelocity')}})
    return settings


def import_actor(path,output):
    source=path.read_bytes();archive=vfs(source);body=vfs(archive['Body'])
    verts,norms,bones,mats,mat_names,faces=geometry(body['Geometry'])
    globals=[]
    for b in bones:
        parent=b['parent']
        if parent>=len(globals):raise ValueError('Invalid bone hierarchy')
        globals.append(multiply(globals[parent],b['attachment']) if parent>=0 else b['attachment'])
    stem=path.stem.lower();materials=[];warnings=[]
    for i,(texture,red,green,blue) in enumerate(mats):
        m={'name':mat_names[i],'color':[red/255,green/255,blue/255]}
        if texture:
            texture_name=f'textures/{stem}-{i}.png'
            image=bleed_transparent_rgb(bitmap(body[f'Bitmaps/{i}']));image.save(output/texture_name)
            m['texture']=texture_name
            m['transparent']=image.getextrema()[3][0]<255
        materials.append(m)
    # Split vertices at normal seams, preserving both sets of rigid-bone indices.
    mapping={};positions=[];normals=[];uvs=[];indices=[];joints=[];normal_joints=[];local_positions=[];local_normals=[];groups=[]
    for triangle in faces:
        if not groups or groups[-1]['materialIndex']!=triangle[6]:
            groups.append({'start':len(indices),'count':0,'materialIndex':triangle[6]})
        for vi,ni in zip(triangle[:3],triangle[3:6]):
            if not(0<=vi<len(verts) and 0<=ni<len(norms)):raise ValueError('Invalid triangle index')
            key=(vi,ni)
            if key not in mapping:
                v=verts[vi];n=norms[ni];bi=v[-1];bn=n[-1]
                mapping[key]=len(positions)//3
                positions.extend(transform(globals[bi] if bi>=0 else IDENTITY,v))
                normals.extend(transform(globals[bn] if bn>=0 else IDENTITY,n,True))
                uvs.extend([v[3],1-v[4]])
                joints.append(bi);normal_joints.append(bn);local_positions.extend(v[:3]);local_normals.extend(n[:3])
            indices.append(mapping[key]);groups[-1]['count']+=1
    clips=[]
    for name,data in archive.items():
        if name.startswith('Motions/'):
            try:clips.append(motion(data))
            except ValueError as exc:warnings.append(f'{name}: {exc}')
    actor={'format':'redcat-actor-v1','source':path.name,'sha256':hashlib.sha256(source).hexdigest(),
           'positions':positions,'normals':normals,'uvs':uvs,'indices':indices,'groups':groups,'materials':materials,
           'bounds':{'min':[min(positions[c::3]) for c in range(3)],'max':[max(positions[c::3]) for c in range(3)]},
           'bones':bones,'joints':joints,'normalJoints':normal_joints,'localPositions':local_positions,'localNormals':local_normals,
           'animations':clips,'settings':actor_settings(path),'warnings':warnings}
    (output/f'{stem}.json').write_text(json.dumps(actor,separators=(',',':'),allow_nan=False)+'\n',encoding='utf-8')
    return actor


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--installation',type=Path,required=True)
    p.add_argument('--output',type=Path,default=Path(__file__).resolve().parents[1]/'assets'/'actors')
    p.add_argument('--actor',help='Only import one actor filename (case insensitive)')
    args=p.parse_args();args.output.mkdir(parents=True,exist_ok=True);(args.output/'textures').mkdir(exist_ok=True)
    actors={};errors={}
    paths=sorted([path for path in (args.installation/'Actors').iterdir() if path.suffix.lower()=='.act'])
    if args.actor:paths=[path for path in paths if path.name.lower()==args.actor.lower()]
    if not paths:raise SystemExit('No matching .act files found')
    for path in paths:
        try:
            a=import_actor(path,args.output)
            actors[path.stem.lower()]={'file':path.stem.lower()+'.json','vertices':len(a['positions'])//3,
                                     'triangles':len(a['indices'])//3,'animations':[c['name'] for c in a['animations']],
                                     'warnings':a['warnings'],'settings':a['settings']}
            print(f"{path.name}: {len(a['positions'])//3} vertices, {len(a['indices'])//3} triangles, {len(a['animations'])} motions",flush=True)
        except Exception as exc:errors[path.name]=str(exc);print(f'{path.name}: {exc}',file=sys.stderr,flush=True)
    manifest={'format':'redcat-actors-v1','actors':actors,'errors':errors}
    (args.output/'manifest.json').write_text(json.dumps(manifest,indent=2)+'\n',encoding='utf-8')
    return 1 if errors else 0


if __name__=='__main__':raise SystemExit(main())
