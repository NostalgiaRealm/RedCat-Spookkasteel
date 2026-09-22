#!/usr/bin/env python3
"""Rebuild portable assets from an owned installation and optional mounted CD."""
import argparse
import json
from pathlib import Path
import shutil
import subprocess
import sys

ROOT=Path(__file__).resolve().parents[1]

def run(name,*args):
    subprocess.run([sys.executable,str(ROOT/'tools'/name),*map(str,args)],check=True,cwd=ROOT)

def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--installation',type=Path,required=True)
    parser.add_argument('--cd',type=Path)
    parser.add_argument('--album-dir',type=Path)
    parser.add_argument('--skip-media',action='store_true')
    args=parser.parse_args()
    if not (args.installation/'Levels').is_dir():parser.error('Installation needs a Levels directory')
    run('import_levels.py','--source',args.installation)
    run('import_actor_overrides.py','--installation',args.installation)
    run('import_scripts.py','--source',args.installation)
    run('import_motions.py')
    run('import_dialogue.py','--source',args.installation)
    run('import_actors.py','--installation',args.installation)
    run('import_ghost_alpha.py',args.installation)
    run('import_projectiles.py','--installation',args.installation)
    run('import_hazards.py','--installation',args.installation)
    run('import_world_effects.py','--installation',args.installation)
    run('import_hud.py','--installation',args.installation)
    run('import_gameplay_settings.py','--source',args.installation/'Settings')
    run('import_audio_settings.py','--source',args.installation/'Settings')
    menu=['--installation',args.installation]
    if args.cd:menu+=['--cd',args.cd]
    if args.album_dir:menu+=['--album-dir',args.album_dir]
    if args.skip_media:menu+=['--skip-media']
    run('extract_menu.py',*menu)
    for folder,destination in [('Sounds','audio'),('VoiceNL','voices')]:
        output=ROOT/'assets'/destination;output.mkdir(parents=True,exist_ok=True);manifest={}
        for source in (args.installation/folder).iterdir():
            if source.suffix.lower()=='.wav':
                filename=source.name.lower();shutil.copyfile(source,output/filename);manifest[filename]=filename
        (output/'manifest.json').write_text(json.dumps(manifest,indent=2),encoding='utf-8')
    print('Portable assets imported. Original installation unchanged. Run npm start.')

if __name__=='__main__':main()
