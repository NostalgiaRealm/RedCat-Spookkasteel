#!/bin/bash
# Usage: run-scenes.sh <project-dir> <log-dir> [scene files...]
# Runs each browser scene script sequentially with the Playwright Chromium.
project="$1"; logs="$2"; shift 2
[ -n "$UNLOCK_PRELOAD" ] && export NODE_OPTIONS="--import $UNLOCK_PRELOAD"
export CHROME_PATH="$HOME/.local/share/ms-playwright/chromium-1208/chrome-linux64/chrome"
mkdir -p "$logs"; cd "$project" || exit 1
files=("$@"); [ ${#files[@]} -eq 0 ] && files=($(ls tests/*-scenes.mjs tests/*scenes*.mjs 2>/dev/null | sort -u))
: > "$logs/summary.txt"
for f in "${files[@]}"; do
  name=$(basename "$f" .mjs)
  start=$(date +%s)
  timeout 300 node "$f" > "$logs/$name.log" 2>&1; code=$?
  echo "$code $(( $(date +%s)-start ))s $f" >> "$logs/summary.txt"
done
