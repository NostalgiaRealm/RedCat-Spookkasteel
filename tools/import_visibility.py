#!/usr/bin/env python3
"""Preserve GBSP leaf/cluster/PVS/area visibility and match existing mesh spans."""
import argparse
import hashlib
import json
from collections import defaultdict
from pathlib import Path
from import_levels import read_chunks, records, require, dot

ROOT=Path(__file__).resolve().parents[1]

def export_visibility(source,levels,output):
    data=source.read_bytes();chunks,_=read_chunks(data)
    level=json.loads((levels/source.stem.lower()/'level.json').read_text())
    require(level['source']['sha256']==hashlib.sha256(data).hexdigest(),'Visibility and level sources differ')
    faces=records(chunks,11,'<8i4B');vertices=records(chunks,14,'<3f');indices=[r[0] for r in records(chunks,13,'<i')]
    infos=records(chunks,17,'<10fI4fi');models=records(chunks,1,'<2i9f9i');leaves=records(chunks,4,'<i6f8i')
    face_models=[0]*len(faces)
    for model,m in enumerate(models):
        for face in range(m[11],m[11]+m[12]):face_models[face]=model
    batches=defaultdict(list)
    for i,face in enumerate(faces):
        first,count,_,_,tex=face[:5];info=infos[tex];flags=info[10]
        alpha=max(0,min(1,info[13]/255)) if flags&16 else 1
        key=(info[-1],face_models[i],flags,alpha)
        points=[vertices[indices[k]] for k in range(first,first+count)];size=0
        for k in range(1,len(points)-1):
            a=[points[k][j]-points[0][j] for j in range(3)];b=[points[k+1][j]-points[0][j] for j in range(3)]
            cross=[a[1]*b[2]-a[2]*b[1],a[2]*b[0]-a[0]*b[2],a[0]*b[1]-a[1]*b[0]]
            if dot(cross,cross)>=1e-12:size+=3
        if size:batches[key].append([i,size])
    spans=[];cursor=0
    require(len(batches)==len(level['groups']),'Mesh grouping mismatch')
    for (key,batch),group in zip(sorted(batches.items()),level['groups']):
        require(key==(group['texture'],group['model'],group['flags'],group['alpha']),'Mesh material mismatch')
        require(cursor==group['start'] and sum(n for _,n in batch)==group['count'],'Mesh span mismatch')
        for face,size in batch:spans.append([face,cursor,size]);cursor+=size
    leaf_faces=[r[0] for r in records(chunks,12,'<i')]
    require(all(0<=f<len(faces) for f in leaf_faces),'Invalid leaf face')
    clusters=[r[0] for r in records(chunks,5,'<i')];pvs=chunks[21][2];row_bytes=(len(clusters)+7)//8
    require(all(o<0 or o+row_bytes<=len(pvs) for o in clusters),'Invalid PVS offset')
    output.mkdir(parents=True,exist_ok=True);name=source.stem.lower()
    (output/(name+'.bin')).write_bytes(pvs)
    result={'format':'redcat-gbsp-visibility-v1','sourceSha256':level['source']['sha256'],'pvsFile':name+'.bin','clusters':clusters,
            'leaves':[[l[11],l[12],l[7],l[8]] for l in leaves], 'leafFaces':leaf_faces,'faceSpans':spans,'faceCount':len(faces),
            'areas':records(chunks,6,'<2i'),'areaPortals':records(chunks,7,'<2i')}
    (output/(name+'.json')).write_text(json.dumps(result,separators=(',',':'))+'\n')
    return result

if __name__=='__main__':
    parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('--installation',type=Path,required=True)
    parser.add_argument('--levels',type=Path,default=ROOT/'data/levels');parser.add_argument('--output',type=Path,default=ROOT/'data/visibility')
    args=parser.parse_args()
    for source in sorted((args.installation/'Levels').iterdir()):
        if source.suffix.lower()!='.bsp':continue
        v=export_visibility(source,args.levels,args.output)
        print(f'{source.stem}: {len(v["clusters"])} PVS clusters, {len(v["faceSpans"])} verified face spans')
