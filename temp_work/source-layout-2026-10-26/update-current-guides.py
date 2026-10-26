from pathlib import Path
import difflib,json
root=Path(__file__).resolve().parents[2]
changes=[]
def save(name,text):
 p=root/name;old=p.read_text() if p.exists() else ''
 if text==old:return
 p.write_text(text);changes.append({'file':name,'patch':''.join(difflib.unified_diff(old.splitlines(True),text.splitlines(True),fromfile=name,tofile=name))})
p=root/'docs/building.md';s=p.read_text();s=s.replace('Browser integration tests start and stop their own local server:\n\n```sh\nnpm run test:smoke\nnpm run test:scripts\n```','Current bundle and hosting browser checks start and stop their own local server:\n\n```sh\nnode tests/runtime-bundle-scenes.mjs\nnode tests/web-subpath-scenes.mjs\n```\n\n`npm run test:smoke` retains the earlier flat-menu assumptions and should not be\nused as a current release gate without migrating that harness. The focused\nchecks above cover the prepared runtime and current menu. `npm run test:scripts`\nis a separate script-scene harness; it does not establish a full campaign run.')
s=s.replace('The full smoke test explicitly plays the intro, so it requires converted media even if you chose `--skip-media` during import. It also checks HTTP errors: the menu currently requests `assets/menu/cover.jpg` even when optional cover art was omitted. For a clean full smoke pass, include that artwork with `--album-dir` during import. Running unit tests alone does not check either requirement.','Media checks require converted intro/outro files even if you chose `--skip-media`\nduring import. The restored original menu does not request the optional\n`assets/menu/cover.jpg`; omitting that cover scan is not a current menu failure.\nUnit tests alone do not establish browser media playback.')
s=s.replace('CHROME_PATH=/path/to/chromium npm run test:smoke','CHROME_PATH=/path/to/chromium node tests/runtime-bundle-scenes.mjs').replace('npm run test:smoke\n```\n\nIn a Linux','node tests/runtime-bundle-scenes.mjs\n```\n\nIn a Linux')
s=s.replace('as done for 0.9.9 and repeated for 1.0.0.','as recorded for all desktop targets in the [1.0.3 release](portability.md).')
s=s.replace('local content loading and lifecycle/audio integration; physical-device, save-recovery and release validation remain.','local content loading, lifecycle/audio integration and signed APK/AAB packaging; physical-device persistence, document-provider and Play Console checks remain.')
save('docs/building.md',s)
save('START_COMMAND_LOCAL',"# Run from the current source checkout; preparation generates the runtime bundle.\ncd '/home/rick/Documents/Rebuilds/RedCat Spookkasteel/RCSPOOK_NEW'\nnpm start -- --ozone-platform=x11\n")
save('INITIAL_IMPORT_SOURCE_GITHUB',r'''# Initial Git import only; this existing checkout already has its remotes.
# Do not rerun git init or remote add for a normal update. Use PUBLISH_CURRENT_BUILD.
cd '/home/rick/Documents/Rebuilds/RedCat Spookkasteel/RCSPOOK_NEW'

git init -b main
git config user.name "NostalgiaRealm"
git config user.email "info@Nostalgiarealm.com"
git remote add origin https://github.com/NostalgiaRealm/RedCat-Spookkasteel.git
git remote add gitlab https://gitlab.com/Nostalgia_Realm/RedCat-Spookkasteel.git

# assets/ and data/ are no longer ignored. Include editable modules and runtime.
git add -A -- \
  .gitignore README.md DESCRIPTION.md ANDROID.md index.html \
  package.json package-lock.json Start-RedCat.sh Start-RedCat.bat \
  source/ src/ electron/ android/ tools/ tests/ docs/ assets/ data/ \
  RC_ACTOR_TEST/ RC_COIN_TEST/ RC_SHOVE_TEST/ \
  PUBLISH_CURRENT_BUILD INITIAL_IMPORT_SOURCE_GITHUB LOCAL_LLM_INSTRUCTIONS

# The full original research is mandatory, including logs normally ignored.
git add -f -- RC_ORIGINAL_DECOMPILED/

# Select any additional retained research/release notes after reviewing it.
# Never stage local signing keys/passwords, browser profiles or build outputs.
git diff --cached --stat
git status --short
git diff --cached

# Review the staged changes, then commit/push the same source to both remotes.
# Release tags/builds/assets follow PUBLISH_CURRENT_BUILD; these commands alone
# do not create a release or upload prebuilt packages.
''')
save('copy website to server',r'''# Manual server-side recipe: this file does not deploy anything automatically.
# First prepare files as described in docs/nginx-hosting.md. The mounted share
# must contain index.html, src/ (bundle + CSS), assets/, data/ and Three.js.
# source/ is development input and is not needed on the webhost.
# Verify /mnt/redcat-website is the mounted prepared tree on your Debian server;
# substitute the actual mount if different. The trailing slash copies contents.
test -f /mnt/redcat-website/index.html
test -f /mnt/redcat-website/src/game.bundle.js
sudo rsync -avh /mnt/redcat-website/ /var/www/games.nostalgiarealm.com/redcatspookkasteel/

# For live updates, use the complete-directory switch procedure in
# docs/nginx-hosting.md to avoid serving a mixture during copying. Revalidate
# HTML/bundle caches; keep the public origin unchanged to preserve browser saves.
''')
for name,header in [('WHAT_TO_WORK_ON.txt','Historical request notebook — not the current task list.\n\nThe original menu/artwork/voices, loading screen, water-contact feedback and\nCPU-performance work listed below have since been implemented. Read\ndocs/native-parity-audit.md for remaining limits, docs/original-menu-native.md\nand docs/menu-audio.md for current menu behavior, and docs/water-contact-native.md\nfor water behavior. The original request text is retained below for provenance.\n\n'),('ORIGINAL_MENU_VOICE','Historical voice-selection reference. The menu audio is implemented; this list\nis not an outstanding task list. Current mappings and playback rules are in\ndocs/menu-audio.md and source/menu-audio.js. Original wording is retained below.\n\n')]:
 save(name,header+(root/name).read_text())
save('PUBLISH_CURRENT_BUILD',r'''# Build and publish the current release to both repositories

Run this procedure only when a release is requested. It creates packages,
commits source, tags it and publishes externally. An ordinary source/docs edit
does not require these steps. Do not retag or overwrite an existing release
unless the user explicitly requests replacing that release.

## 1. Prepare and freeze one source revision

Use the version requested for the new release; the source at this document's
26 October 2026 review is 1.0.3, which is already published. Update package.json,
the lockfile, About and Android version metadata together as applicable, and
write RELEASE_NOTES_VERSION before beginning. Keep intentional differences and
save/storage identities unchanged. Follow docs/building.md for focused source
checks. If the user says not to test built packages, build/archive/upload them
without package runtime tests, and state that boundary in the release record.

```bash
cd '/home/rick/Documents/Rebuilds/RedCat Spookkasteel/RCSPOOK_NEW'
read -r -p 'New release version (three integers, e.g. 1.0.4): ' REDCAT_RELEASE_VERSION
export REDCAT_RELEASE_VERSION
REDCAT_RELEASE_TAG="v${REDCAT_RELEASE_VERSION}"
REDCAT_RELEASE_NOTES="RELEASE_NOTES_${REDCAT_RELEASE_VERSION}"
test -s "$REDCAT_RELEASE_NOTES"
node --input-type=module -e 'import fs from "node:fs"; const p=JSON.parse(fs.readFileSync("package.json")); if (!/^\d+\.\d+\.\d+$/.test(process.env.REDCAT_RELEASE_VERSION) || p.version !== process.env.REDCAT_RELEASE_VERSION) throw new Error("Set the requested source version before releasing");'
git status --short
git remote -v
git fetch origin
git fetch gitlab
```

Both remotes must contain the intended base history before freezing. Resolve
any incoming commits first; do not rebase the release after building its
artifacts. Confirm origin is GitHub NostalgiaRealm/RedCat-Spookkasteel and gitlab
is GitLab Nostalgia_Realm/RedCat-Spookkasteel. Use the same source commit on both.

MANDATORY FOR EVERY RELEASE: retain the entire original decompilation, including
original inputs, saved Ghidra projects, logs and every recovered file. See
docs/original-decompiled-publication.md. This helper copies the complete research
and generates its archive, checksum and file manifest; inspect its result.

```bash
python3 tools/prepare-original-decompiled.py --version "$REDCAT_RELEASE_VERSION"
npm run web:refresh
git add -A -- .gitignore README.md DESCRIPTION.md ANDROID.md index.html \
  package.json package-lock.json Start-RedCat.sh Start-RedCat.bat \
  source/ src/ electron/ android/ tools/ tests/ docs/ assets/ data/ \
  RC_ACTOR_TEST/ RC_COIN_TEST/ RC_SHOVE_TEST/ \
  PUBLISH_CURRENT_BUILD INITIAL_IMPORT_SOURCE_GITHUB LOCAL_LLM_INSTRUCTIONS \
  "$REDCAT_RELEASE_NOTES"
git add -f -- RC_ORIGINAL_DECOMPILED/
git diff --cached --stat
git status --short
git diff --cached
```

Stage any other intended retained research explicitly after review. Never stage
local signing credentials, browser profiles or generated desktop/Android builds.
The individual source/ modules belong in the source commit even though normal
runtime packages use only the generated src/ bundle. Check the displayed version,
package metadata and release notes agree before committing.

```bash
git commit -m "Release ${REDCAT_RELEASE_VERSION}"
REDCAT_RELEASE_COMMIT=$(git rev-parse HEAD)
```

## 2. Build, archive and checksum the frozen revision

Build all six desktop targets with docs/building.md: Linux x64/ARM64,
Windows x64/ARM64, and macOS Intel/Apple Silicon. Pass this release version to
all package commands (REDCAT_PACKAGE_VERSION for the npm helpers; explicit
-c.extraMetadata.version for direct electron-builder calls). All builds must
succeed. Do not silently upload a previous dist/ tree after a failed build.
Android APK/AAB publication is separately covered by ANDROID.md and
docs/android-google-play-release.md when Android is part of the requested release.

Use a new archive directory so zip cannot retain entries from an older archive:

```bash
REDCAT_ARCHIVE_DIR="$PWD/dist/release-${REDCAT_RELEASE_VERSION}"
mkdir "$REDCAT_ARCHIVE_DIR"
(
  cd dist
  zip -r "$REDCAT_ARCHIVE_DIR/RedCat-Spookkasteel-${REDCAT_RELEASE_VERSION}-linux-x64.zip" linux-unpacked/
  zip -r "$REDCAT_ARCHIVE_DIR/RedCat-Spookkasteel-${REDCAT_RELEASE_VERSION}-linux-arm64.zip" linux-arm64-unpacked/
  zip -r "$REDCAT_ARCHIVE_DIR/RedCat-Spookkasteel-${REDCAT_RELEASE_VERSION}-windows-x64.zip" win-unpacked/
  zip -r "$REDCAT_ARCHIVE_DIR/RedCat-Spookkasteel-${REDCAT_RELEASE_VERSION}-windows-arm64.zip" win-arm64-unpacked/
  zip -r "$REDCAT_ARCHIVE_DIR/RedCat-Spookkasteel-${REDCAT_RELEASE_VERSION}-mac-x64.zip" mac/
  zip -r "$REDCAT_ARCHIVE_DIR/RedCat-Spookkasteel-${REDCAT_RELEASE_VERSION}-mac-arm64.zip" mac-arm64/
)
cp "dist/original-decompiled/RC_ORIGINAL_DECOMPILED-${REDCAT_RELEASE_VERSION}.tar.gz" \
   "dist/original-decompiled/RC_ORIGINAL_DECOMPILED-${REDCAT_RELEASE_VERSION}.sha256" \
   "dist/original-decompiled/RC_ORIGINAL_DECOMPILED-${REDCAT_RELEASE_VERSION}.manifest.json" \
   "$REDCAT_ARCHIVE_DIR/"
(
  cd "$REDCAT_ARCHIVE_DIR"
  sha256sum -- *.zip *.tar.gz *.sha256 *.manifest.json > SHA256SUMS.txt
  sha256sum --check SHA256SUMS.txt
)
git diff --exit-code
git diff --cached --exit-code
test "$(git rev-parse HEAD)" = "$REDCAT_RELEASE_COMMIT"
```

Stop on any failed command. If a build/preparation changes tracked runtime
files, investigate and repeat the source freeze and affected builds; do not tag
artifacts that differ from their source commit. Preserve build logs, file hashes
and validation scope under temp_work/release-VERSION-DATE/.

## 3. Push the same commit and annotated tag to both hosts

```bash
git push origin HEAD:main
git push gitlab HEAD:main
git tag -a "$REDCAT_RELEASE_TAG" -m "RedCat Spookkasteel ${REDCAT_RELEASE_VERSION}" "$REDCAT_RELEASE_COMMIT"
git push origin "$REDCAT_RELEASE_TAG"
git push gitlab "$REDCAT_RELEASE_TAG"
```

Do not force-push or push unrelated tags. Confirm both remote tags resolve to
REDCAT_RELEASE_COMMIT before publishing. A rejected tag means stop and inspect
the already published tag; it is not permission to replace it.

## 4. Publish every artifact on GitHub and GitLab

Authenticate gh/glab to the correct accounts first. The complete directory from
step 2 contains six desktop ZIPs, the three mandatory original-decompilation
files and SHA256SUMS.txt. Use the hand-written versioned release notes.

```bash
gh release create "$REDCAT_RELEASE_TAG" "$REDCAT_ARCHIVE_DIR/"* \
  --repo NostalgiaRealm/RedCat-Spookkasteel --verify-tag \
  --title "RedCat Spookkasteel ${REDCAT_RELEASE_VERSION}" \
  --notes-file "$REDCAT_RELEASE_NOTES"
glab release create "$REDCAT_RELEASE_TAG" "$REDCAT_ARCHIVE_DIR/"* \
  --repo Nostalgia_Realm/RedCat-Spookkasteel --no-update \
  --name "RedCat Spookkasteel ${REDCAT_RELEASE_VERSION}" \
  --notes-file "$REDCAT_RELEASE_NOTES" \
  --use-package-registry --package-name redcat-spookkasteel
```

The GitLab command uploads the files to its generic package registry and links
them from the release. This replaces the old incomplete `glab release create`
example. If using the API instead, send JSON with Content-Type: application/json
and include every asset link. Do not print credentials in logs.

## 5. Independently verify both published releases

Verify title, notes, tag/commit, public/non-draft status and the complete asset
list on each host. A successful upload command alone is insufficient. Compare
uploaded sizes/digests with the local originals, or download into fresh isolated
directories and compare the hashes. These commands download release files; they
do not launch or test packaged games:

```bash
REDCAT_VERIFY_DIR=$(mktemp -d "$PWD/temp_work/release-${REDCAT_RELEASE_VERSION}-verify.XXXXXX")
gh release download "$REDCAT_RELEASE_TAG" \
  --repo NostalgiaRealm/RedCat-Spookkasteel --dir "$REDCAT_VERIFY_DIR/github"
glab release download "$REDCAT_RELEASE_TAG" \
  --repo Nostalgia_Realm/RedCat-Spookkasteel --dir "$REDCAT_VERIFY_DIR/gitlab"
(
  cd "$REDCAT_VERIFY_DIR/github"
  sha256sum --check "$REDCAT_ARCHIVE_DIR/SHA256SUMS.txt"
  cmp SHA256SUMS.txt "$REDCAT_ARCHIVE_DIR/SHA256SUMS.txt"
)
(
  cd "$REDCAT_VERIFY_DIR/gitlab"
  sha256sum --check "$REDCAT_ARCHIVE_DIR/SHA256SUMS.txt"
  cmp SHA256SUMS.txt "$REDCAT_ARCHIVE_DIR/SHA256SUMS.txt"
)
```

Retain a consolidated verification record with both public release URLs,
source commit, exact assets/hashes and build/test boundaries. The full
RC_ORIGINAL_DECOMPILED folder must remain in every future source release and
its complete archive/manifest/checksum must be attached on BOTH hosts.
''')
(root/'temp_work/source-layout-2026-10-26/current-guide-updates.patch').write_text(''.join(c['patch'] for c in changes))
print('updated', [c['file'] for c in changes])
