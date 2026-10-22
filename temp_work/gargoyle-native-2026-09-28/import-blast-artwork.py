from pathlib import Path
from PIL import Image
import hashlib,json
root=Path(__file__).resolve().parents[2]
source=Path('/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/Bitmaps')
files={p.name.lower():p for p in source.iterdir() if p.is_file()}
color,mask='kaboom.bmp','kaboom_a.bmp'
rgba=Image.open(files[color]).convert('RGBA');alpha=Image.open(files[mask]).convert('L')
assert rgba.size==alpha.size
rgba.putalpha(alpha)
name='kaboom-kaboom_a.png';rgba.save(root/'assets/effects'/name)
p=root/'assets/effects/manifest.json';manifest=json.loads(p.read_text())
manifest['textures'][color+'|'+mask]={'file':name,'width':rgba.width,'height':rgba.height}
for original in [color,mask]:manifest['sources'][original]=hashlib.sha256(files[original].read_bytes()).hexdigest()
p.write_text(json.dumps(manifest,indent=2)+'\n')
print(name,rgba.size)
