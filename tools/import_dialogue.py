#!/usr/bin/env python3
"""Import original Dutch subtitles with case-insensitive voice filenames and durations."""
import argparse
import json
from pathlib import Path
import wave

ROOT=Path(__file__).resolve().parents[1]
DEFAULT=Path('/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel')

def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--source',type=Path,default=DEFAULT)
    parser.add_argument('--output',type=Path,default=ROOT/'data/dialogue/nl.json')
    args=parser.parse_args()
    voices={p.stem.lower():p for p in (args.source/'VoiceNL').iterdir() if p.suffix.lower()=='.wav'}
    lines={}
    for line in (args.source/'Settings/LanguageNL.ini').read_text('cp1252').splitlines():
        if not line.strip() or line.lstrip().startswith((';','[','//')):continue
        if '=' in line:key,text=line.split('=',1)
        elif '\t' in line:key,text=line.split('\t',1)
        else:continue
        key=key.strip().lower();entry={'text':text.strip()}
        if key in voices:
            entry['voice']=voices[key].name.lower()
            with wave.open(str(voices[key]),'rb') as wav:entry['duration']=wav.getnframes()/wav.getframerate()
        lines[key]=entry
    args.output.parent.mkdir(parents=True,exist_ok=True)
    args.output.write_text(json.dumps(lines,ensure_ascii=False,indent=2)+'\n')
    print(f'Imported {len(lines)} text entries, {sum("voice" in e for e in lines.values())} voiced lines')

if __name__=='__main__':main()
