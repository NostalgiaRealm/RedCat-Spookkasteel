#!/usr/bin/env bash
# Publish the browser version to the Nginx webserver in one command.
#
#   tools/deploy-website.sh            refresh, stage, upload and verify
#   tools/deploy-website.sh --dry-run  show what would change on the server
#
# Settings (environment, or ~/.config/redcat-spookkasteel/deploy.env):
#   REDCAT_DEPLOY_HOST  SSH target, e.g. rick@SERVER ("local" = a local folder, for tests)
#   REDCAT_DEPLOY_PATH  web folder on the server
#   REDCAT_DEPLOY_URL   public address checked after the upload ("" skips the check)
#
# The upload mirrors only the web runtime (docs/nginx-hosting.md) with rsync
# over SSH: changed files only, all put in place at the end (--delay-updates),
# and files that no longer exist removed afterwards. Nginx keeps running; the
# refreshed cache keys in index.html make browsers load the new files.
set -euo pipefail

root="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
config="${XDG_CONFIG_HOME:-$HOME/.config}/redcat-spookkasteel/deploy.env"
[ -f "$config" ] && . "$config"
host="${REDCAT_DEPLOY_HOST:-rick@SERVER}"
dest="${REDCAT_DEPLOY_PATH:-/var/www/games.nostalgiarealm.com/redcatspookkasteel/redcat-website}"
url="${REDCAT_DEPLOY_URL-https://games.nostalgiarealm.com/redcatspookkasteel/}"
stage="$root/temp_work/web-deploy/redcatspookkasteel"
dry=
case "${1:-}" in
  -n|--dry-run) dry=--dry-run ;;
  "") ;;
  *) echo "Usage: $0 [--dry-run]" >&2; exit 2 ;;
esac

# Never mirror into a guessed folder: the destination must be the absolute
# redcat-website folder (or end in it, for a local test copy).
dest="${dest%/}"
case "$dest" in
  /*/redcat-website) ;;
  *) echo "Refusing to deploy to '$dest': expected an absolute path ending in /redcat-website" >&2; exit 1 ;;
esac

cd "$root"
for file in node_modules/three/build/three.module.js node_modules/three/build/three.core.js \
            assets/media/intronl.webm data/levels/lvl00a/level.json; do
  [ -f "$file" ] || { echo "Missing $file; see docs/building.md" >&2; exit 1; }
done

echo "== Refreshing the runtime bundle"
npm run --silent web:refresh

echo "== Staging the web files in $stage"
mkdir -p "$stage/node_modules"
rsync -a --delete index.html src assets data "$stage/"
rsync -a --delete node_modules/three "$stage/node_modules/"
[ -s "$stage/index.html" ] && [ -s "$stage/src/game.bundle.js" ] || { echo "Staging incomplete" >&2; exit 1; }
du -sh "$stage" | cut -f1 | sed 's/^/   size: /'

if [ "$host" = local ]; then target="$dest/"; mkdir -p "$dest"
else target="$host:$dest/"; fi
echo "== Uploading to $target${dry:+ (dry run)}"
rsync -az --no-owner --no-group --delete-delay --delay-updates --chmod=D755,F644 --info=stats1 --itemize-changes \
  ${dry:+"$dry"} "$stage/" "$target"

if [ -n "$dry" ] || [ -z "$url" ] || [ "$host" = local ]; then exit 0; fi
echo "== Checking $url"
want=$(sha256sum < "$stage/index.html" | cut -d' ' -f1)
live=$(curl -fsSL --max-time 20 "$url" | sha256sum | cut -d' ' -f1) || live=unreachable
if [ "$live" = "$want" ]; then echo "   The live site serves the new index.html."
else echo "   Warning: the live index.html differs from the upload ($live); check the Nginx root or a cache." >&2; exit 1; fi
