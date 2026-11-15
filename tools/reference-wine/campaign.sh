#!/bin/bash
# Everything evidence/reference-wine/dsound-worlds.md is based on: one start per world without input,
# one start of world 1 with the Up key held, then the JSON files, the WAV files and the summary.
# About 6 minutes. Run on the host (from the distrobox: distrobox-host-exec tools/reference-wine/campaign.sh).
# Needs prepare.sh first.
set -u
HERE="$(cd "$(dirname "$0")" && pwd)"
PROJECT="$(cd "$HERE/../.." && pwd)"
REFWINE="${REFWINE:-$PROJECT/tools/out/reference-wine}"
EVIDENCE="$PROJECT/evidence/reference-wine"
export REFWINE_TIMEOUT="${REFWINE_TIMEOUT:-260}"

for w in 1 2 3 4 5; do
  "$HERE/run.sh" --name "world$w" --world "$w" --seconds 42 | tail -1 | cut -c1-200
done
"$HERE/run.sh" --name world1-walk --world 1 --seconds 42 --key Up --key-at 20 --key-for 10 | tail -1 | cut -c1-200

mkdir -p "$EVIDENCE" "$REFWINE/audio"
for n in world1 world2 world3 world4 world5 world1-walk; do
  python3 "$HERE/parse.py" parse --run "$REFWINE/logs/$n" --out "$EVIDENCE/dsound-$n.json" \
    --audio "$REFWINE/audio/$n.wav" --relative-to "$PROJECT" || exit 1
  [ -f "$REFWINE/logs/$n/wine.log" ] && gzip -1 "$REFWINE/logs/$n/wine.log"
done
python3 "$HERE/parse.py" report --json "$EVIDENCE"/dsound-world{1,2,3,4,5}.json --walk "$EVIDENCE/dsound-world1-walk.json" \
  --tail "$HERE/report-tail.md" --out "$EVIDENCE/dsound-worlds.md"
