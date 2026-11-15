#!/bin/bash
# Reference runs with input: the scripted scenarios of tools/sound-scenarios.txt on the original
# under Wine, then each trace as JSON and WAV, and when each step of the script ended and where.
# About 7 minutes for all five. Run on the host (from the distrobox:
# distrobox-host-exec tools/reference-wine/scenarios.sh [name]). Needs prepare.sh first.
# The same scripts drive the port: node tools/sound-scenarios.mjs.
set -u
HERE="$(cd "$(dirname "$0")" && pwd)"
PROJECT="$(cd "$HERE/../.." && pwd)"
REFWINE="${REFWINE:-$PROJECT/tools/out/reference-wine}"
EVIDENCE="$PROJECT/evidence/reference-wine"
export REFWINE_TIMEOUT="${REFWINE_TIMEOUT:-260}"
ONLY="${1:-}"
mkdir -p "$EVIDENCE" "$REFWINE/audio"
grep -v '^#' "$PROJECT/tools/sound-scenarios.txt" | while IFS='|' read -r name world seconds script; do
  [ -z "$name" ] && continue
  [ -n "$ONLY" ] && [ "$ONLY" != "$name" ] && continue
  "$HERE/run.sh" --name "in-$name" --world "$world" --seconds "$seconds" \
    --ini 'Settings\Player1.ini|Player|Skill|1' --script "$script" < /dev/null | tail -1 | cut -c1-160
  python3 "$HERE/parse.py" parse --run "$REFWINE/logs/in-$name" --out "$EVIDENCE/dsound-in-$name.json" \
    --audio "$REFWINE/audio/in-$name.wav" --relative-to "$PROJECT" < /dev/null || exit 1
  python3 -c 'import json, sys; json.dump(json.load(open(sys.argv[1]))["script"], open(sys.argv[2], "w"))' \
    "$REFWINE/logs/in-$name/run.json" "$EVIDENCE/in-$name.steps.json" < /dev/null
  if [ -f "$REFWINE/logs/in-$name/wine.log" ]; then gzip -1 -f "$REFWINE/logs/in-$name/wine.log"; fi
done
