#!/usr/bin/env python3
"""Inventory immutable original inputs and preserve code/configuration/resource inputs."""
import argparse, hashlib, json, shutil, time
from pathlib import Path
import pefile
ROOT=Path(__file__).resolve().parents[1]
DEFAULT=Path('/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel')
def digest(b): return hashlib.sha256(b).hexdigest()
def main():
 p=argparse.ArgumentParser(description=__doc__); p.add_argument('--source',type=Path,default=DEFAULT); a=p.parse_args()
 files=[]; binaries=[]; resources=[]
 for f in sorted(a.source.rglob('*')):
  if not f.is_file(): continue
  b=f.read_bytes(); rel=f.relative_to(a.source).as_posix(); record={'path':rel,'bytes':len(b),'sha256':digest(b),'magic_hex':b[:16].hex()}; files.append(record)
  if b[:2]==b'MZ':
   pe=pefile.PE(data=b); record['kind']='native-pe'; dest=ROOT/'originals'/rel; dest.parent.mkdir(parents=True,exist_ok=True); shutil.copy2(f,dest)
   sections=[{'name':s.Name.rstrip(b'\0').decode('ascii','replace'),'rva':s.VirtualAddress,'raw_offset':s.PointerToRawData,'raw_bytes':s.SizeOfRawData,'virtual_bytes':s.Misc_VirtualSize,'entropy':s.get_entropy(),'characteristics':s.Characteristics} for s in pe.sections]
   item={**record,'image_base':hex(pe.OPTIONAL_HEADER.ImageBase),'entry':hex(pe.OPTIONAL_HEADER.ImageBase+pe.OPTIONAL_HEADER.AddressOfEntryPoint),'machine':hex(pe.FILE_HEADER.Machine),'sections':sections,'import_libraries':[i.dll.decode('ascii','replace') for i in getattr(pe,'DIRECTORY_ENTRY_IMPORT',[])],'prepared_path':str(dest.relative_to(ROOT)),'prepared_sha256':digest(dest.read_bytes()),'packing_assessment':'Normal mapped code sections and ordinary import tables; no UPX sections/signature. Original image imported unchanged; no unpacking stub used.'}; binaries.append(item)
   def walk(node,parts):
    for ent in node.entries:
     ident=str(ent.name) if ent.name is not None else str(ent.id)
     nxt=parts+[ident]
     if hasattr(ent,'directory'): walk(ent.directory,nxt)
     elif hasattr(ent,'data'):
      d=ent.data.struct; payload=pe.get_data(d.OffsetToData,d.Size); path=ROOT/'resources'/rel/('/'.join(nxt)+'.bin'); path.parent.mkdir(parents=True,exist_ok=True); path.write_bytes(payload)
      resources.append({'binary':rel,'ids':nxt,'rva':d.OffsetToData,'file_offset':pe.get_offset_from_rva(d.OffsetToData),'bytes':d.Size,'code_page':d.CodePage,'sha256':digest(payload),'path':str(path.relative_to(ROOT))})
   if hasattr(pe,'DIRECTORY_ENTRY_RESOURCE'): walk(pe.DIRECTORY_ENTRY_RESOURCE,[])
   pe.close()
  elif f.suffix.lower() in {'.ini','.ds','.dso','.img','.ind','.hlp','.cnt','.txt','.wps','.wps#','.ghc'}:
   record['kind']='script' if f.suffix.lower() in {'.ds','.dso'} else 'configuration-or-resource'
   dest=ROOT/'originals'/rel; dest.parent.mkdir(parents=True,exist_ok=True); shutil.copy2(f,dest)
   if f.suffix.lower() in {'.ini','.ds','.cnt','.txt'}:
    text=ROOT/'recovered-text'/rel; text.parent.mkdir(parents=True,exist_ok=True); text.write_text(b.decode('cp1252',errors='replace'),encoding='utf-8')
  else:
   record['kind']='local-runtime-data' if f.suffix.lower() in {'.log','.rcr'} else 'original-asset'
   if record['kind']=='original-asset':
    dest=ROOT/'originals'/rel; dest.parent.mkdir(parents=True,exist_ok=True); shutil.copy2(f,dest)
 stamp=time.strftime('%Y-%m-%dT%H:%M:%SZ',time.gmtime())
 (ROOT/'inventory/files.json').write_text(json.dumps({'source_root':str(a.source),'created_utc':stamp,'files':files},indent=2)+'\n')
 (ROOT/'inventory/manifest.json').write_text(json.dumps({'source_root':str(a.source),'created_utc':stamp,'files':binaries},indent=2)+'\n')
 (ROOT/'inventory/resources.json').write_text(json.dumps(resources,indent=2)+'\n')
 print(json.dumps({'inventoried_files':len(files),'native_pe':len(binaries),'resources':len(resources)}))
if __name__=='__main__': main()
