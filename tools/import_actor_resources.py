#!/usr/bin/env python3
"""Index byte-identical actor artwork and identical imported render geometry.

Regenerates assets/actors/shared-resources.json from cached imported assets;
the original installation, Pillow and an actor reimport are not required.
Only render arrays/groups and exact PNG bytes participate in sharing. Actor
settings, animation, skeleton, collision and other gameplay data stay separate.
"""
from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path


FORMAT = 'redcat-actor-resources-v1'
GEOMETRY_FIELDS = ('positions', 'normals', 'uvs', 'indices', 'groups')


def _actor_file(root: Path, filename: str) -> Path:
    """Accept only cached actor files within the imported asset directory."""
    path = (root / filename).resolve()
    if not path.is_relative_to(root.resolve()):
        raise ValueError(f'Actor manifest file is outside its directory: {filename}')
    return path


def build_shared_resources(actors_dir: Path) -> dict:
    root = Path(actors_dir)
    manifest = json.loads((root / 'manifest.json').read_text(encoding='utf-8'))
    if manifest.get('format') != 'redcat-actors-v1' or not isinstance(manifest.get('actors'), dict):
        raise ValueError('Expected a redcat-actors-v1 actor manifest')

    geometry_aliases = {}
    geometry_canonical = {}
    for stem, entry in sorted(manifest['actors'].items()):
        filename = entry if isinstance(entry, str) else entry['file']
        actor = json.loads(_actor_file(root, filename).read_text(encoding='utf-8'))
        missing = [name for name in GEOMETRY_FIELDS if name not in actor]
        if missing:
            raise ValueError(f'{filename}: missing render fields: {", ".join(missing)}')
        payload = json.dumps({name: actor[name] for name in GEOMETRY_FIELDS},
                             sort_keys=True, separators=(',', ':'), allow_nan=False).encode('utf-8')
        digest = hashlib.sha256(payload).hexdigest()
        canonical = geometry_canonical.setdefault(digest, stem)
        if canonical != stem:
            geometry_aliases[stem] = canonical

    texture_aliases = {}
    texture_canonical = {}
    texture_dir = root / 'textures'
    textures = sorted(path for path in texture_dir.rglob('*')
                      if path.is_file() and path.suffix.lower() == '.png')
    for path in textures:
        relative = path.relative_to(root).as_posix()
        digest = hashlib.sha256(path.read_bytes()).hexdigest()
        canonical = texture_canonical.setdefault(digest, relative)
        if canonical != relative:
            texture_aliases[relative] = canonical

    return {'format': FORMAT, 'geometry': geometry_aliases, 'textures': texture_aliases}


def write_shared_resources(actors_dir: Path, output: Path | None = None) -> dict:
    index = build_shared_resources(actors_dir)
    destination = Path(output) if output is not None else Path(actors_dir) / 'shared-resources.json'
    destination.parent.mkdir(parents=True, exist_ok=True)
    destination.write_text(json.dumps(index, indent=2, ensure_ascii=False) + '\n', encoding='utf-8')
    return index


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--actors', type=Path,
                        default=Path(__file__).resolve().parents[1] / 'assets' / 'actors',
                        help='Cached imported actor directory, containing manifest.json and textures/')
    parser.add_argument('--output', type=Path,
                        help='Index destination; defaults to shared-resources.json in --actors')
    args = parser.parse_args()
    index = write_shared_resources(args.actors, args.output)
    print(f"Indexed {len(index['geometry'])} geometry aliases and {len(index['textures'])} exact PNG aliases")
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
