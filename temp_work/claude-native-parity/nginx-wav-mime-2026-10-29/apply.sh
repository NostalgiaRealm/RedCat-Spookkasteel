#!/bin/bash
# Run on the server as root (29 October 2026): add audio/wav to the RedCat
# Spookkasteel location of the games.nostalgiarealm.com site. Backs up the
# live file, installs the patched copy, and restores the backup if nginx -t
# fails. Refuses to run if the live file changed since the copy was made.
set -euo pipefail
here="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
site=/etc/nginx/sites-available/games.nostalgiarealm.com
expected=b45f4a7570cbf528ae7db87bb4505fa8ef2234bef050d3de0c1910e8719b9e76
[ "$(sha256sum < "$site" | cut -d' ' -f1)" = "$expected" ] \
  || { echo "The live $site changed since it was copied; nothing was changed." >&2; exit 1; }
mkdir -p /etc/nginx/backups
backup=/etc/nginx/backups/games.nostalgiarealm.com.$(date +%Y%m%d-%H%M%S).before-wav-mime
cp -a "$site" "$backup"
install -m 644 -o root -g root "$here/games.nostalgiarealm.com.new" "$site"
if nginx -t; then
  systemctl reload nginx
  echo "Done: Nginx reloaded. Backup: $backup"
  rm -rf "$here"
else
  cp -a "$backup" "$site"
  echo "nginx -t failed; the previous configuration was restored from $backup." >&2
  exit 1
fi
