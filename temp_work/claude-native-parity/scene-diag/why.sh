#!/bin/bash
# Usage: why.sh <logdir> <scene-name...>: first error, its scene line, actual/expected.
d="$1"; shift
for n in "$@"; do
  l="$d/$n.log"; echo "=== $n"
  grep -vE "^\s*$" "$l" | grep -m1 -E "Error|PASS" | cut -c1-260
  ln=$(grep -oE "tests/$n\.mjs:[0-9]+" "$l" | head -1 | cut -d: -f2)
  [ -n "$ln" ] && echo "  L$ln: $(sed -n "${ln}p" tests/$n.mjs | cut -c1-260)"
  grep -E "^\s+(actual|expected):" "$l" | head -2 | cut -c1-200
done
