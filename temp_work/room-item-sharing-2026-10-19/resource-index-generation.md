# Reproducible actor resource alias index

Implemented 19 October 2026, without reimporting original files or building
packages. Runtime integration is owned separately by the root agent.

Files changed for this subtask:

- `tools/import_actor_resources.py`: standalone Python-standard-library-only
  generator, with `build_shared_resources(actors_dir)` and
  `write_shared_resources(actors_dir, output=None)` reusable entry points.
- `assets/actors/shared-resources.json`: generated alias-only index.
- `tools/import_actors.py`: invoke the writer after its manifest is saved. The
  helper import occurs inside `main`, preserving existing importlib-based use
  of the actor parsing functions without adding a tools-path dependency at
  module import time.

Regenerate the index from the already imported cache:

```sh
python tools/import_actor_resources.py
```

For another imported cache, without an original installation:

```sh
python tools/import_actor_resources.py --actors /path/to/assets/actors
```

Optional `--output /path/to/shared-resources.json` changes only the destination.
The generator never edits actor JSON, PNG images, settings or animation data.

The format is `redcat-actor-resources-v1`, with `geometry` mapping actor stem
aliases to canonical actor stems and `textures` mapping imported relative PNG
paths to canonical relative PNG paths. Only duplicates appear; every canonical
is the lexicographically first matching member and no alias chains are emitted.
Geometry SHA-256 covers exact parsed positions, normals, UVs, indices and groups
using deterministic JSON serialization. Settings, materials, skeletons and
animation are excluded and must remain per actor definition at runtime. Texture
SHA-256 covers the exact complete PNG bytes; there is no image conversion.

Current cache results:

- 165 actor definitions, 31 geometry aliases, 134 distinct render geometries.
- 174 PNG files, 81 aliases, 93 distinct PNG byte sequences.
- Generated index SHA-256:
  `e602d3a6999b4ebfa196c9ecc1214803cedfe1e84edaf8c2187c9bfc45c68d76`.

Focused Python checks are retained in `check-resource-index.py`, its console
output in `resource-index-check.log`, and fixture/report files in
`resource-index-check-1792421796864265926/`. Ten focused check categories passed:
deterministic output, lexical direct canonical selection, all five render
fields participating, settings/animation independence, exact PNG matching,
standalone CLI regeneration, unchanged cached inputs, malformed/outside input
rejection, existing importer importlib loading, and every actual alias resolving
to exact matching content with no chains. No historical test suites were run.
