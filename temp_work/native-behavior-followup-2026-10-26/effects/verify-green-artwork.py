"""Verify imported green images against original RGB plus original grayscale mask.
All input source files remain read-only. No resampling or color reinterpretation.
"""
from pathlib import Path
from PIL import Image
import hashlib,json,subprocess
ROOT=Path(__file__).resolve().parents[3]
SOURCE=Path('/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/Bitmaps')
FILES={p.name.lower():p for p in SOURCE.iterdir() if p.is_file()}
manifest=json.loads((ROOT/'assets/effects/manifest.json').read_text())
keys=[f'expl_sup{i:02}.bmp|expl_sup{i:02}_a.bmp' for i in range(1,9)]+['ring.bmp|ring_a.bmp']
rows=[]
for key in keys:
    color,mask=key.split('|');entry=manifest['textures'][key]
    with Image.open(FILES[color]) as source:expected=source.convert('RGBA')
    with Image.open(FILES[mask]) as source:alpha=source.convert('L')
    expected.putalpha(alpha)
    with Image.open(ROOT/'assets/effects'/entry['file']) as image:actual=image.convert('RGBA')
    assert actual.size==expected.size and actual.tobytes()==expected.tobytes(),key
    for name in (color,mask):assert manifest['sources'][name]==hashlib.sha256(FILES[name].read_bytes()).hexdigest()
    rows.append({'key':key,'dimensions':actual.size,'rgbaPixelExact':True,'alphaRange':alpha.getextrema()})
changed=subprocess.check_output(['git','diff','--name-only','--','assets/effects'],cwd=ROOT,text=True).splitlines()
assert changed==['assets/effects/manifest.json'],changed
report={'result':'PASS','newImages':rows,'previousTrackedArtworkUnchanged':True}
Path(__file__).with_name('green-artwork-verification.json').write_text(json.dumps(report,indent=2)+'\n')
print('PASS: nine original RGBA assets, all pixels and source SHA256 match; previous artwork unchanged.')
