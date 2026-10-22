# 1.0.0 release platform review — 20 October 2026

Scope: read-only platform/configuration audit; source and distribution builders are owned by the parent task. `docs/building.md` was subsequently updated with the parent’s authorization. No builder, distribution mutation or publication was performed by this audit agent.

## Confirmed configuration

- Project: `/home/rick/Documents/Rebuilds/RedCat Spookkasteel/RCSPOOK_NEW`.
- `package.json`, package-lock root and package-lock root package metadata: version `1.0.0`.
- Menu `index.html`: `Versie 1.0`.
- Android preview `versionName = "1.0"`, `versionCode = 2`; separate from six requested desktop packages.
- Installed Node 24.13.1, npm 11.8.0, Electron 44.3.0 and electron-builder 26.15.3.
- All six Electron 44.3.0 platform ZIP archives are already in `~/.cache/electron/f9c7436ab4a2c1ed6ac6cea2902187de75bd5b7a60c0973ad8967c318a6313c3/`.
- Wine, zip, 7z and xvfb-run available. Source `assets/` 114 MiB, `data/` 56 MiB, node_modules 420 MiB. Approx 1.4 TiB free.
- `dist/` was empty before the parent began the first 1.0.0 build, so no existing output needed preservation in this run. For later runs, move prior complete output directories and archives to an appropriately named retained `temp_work/` folder before reusing the same paths.

## Exact build commands

Run from the project root, with temporary build-tool files kept in the retained project folder:

```sh
mkdir -p temp_work/release-1.0.0-2026-10-20/tmp
export TMPDIR="$PWD/temp_work/release-1.0.0-2026-10-20/tmp"
export REDCAT_PACKAGE_VERSION=1.0.0
npm run build:linux
npm run build:windows
npx --no-install electron-builder --linux dir --arm64 --publish never -c.extraMetadata.version=1.0.0
npx --no-install electron-builder --win dir --arm64 --publish never -c.extraMetadata.version=1.0.0
npx --no-install electron-builder --mac dir --x64 --publish never -c.extraMetadata.version=1.0.0 -c.mac.notarize=false
npx --no-install electron-builder --mac dir --arm64 --publish never -c.extraMetadata.version=1.0.0 -c.mac.notarize=false
```

Expected outputs: `linux-unpacked`, `win-unpacked`, `linux-arm64-unpacked`, `win-arm64-unpacked`, `mac`, `mac-arm64` below `dist/`. The two project helper scripts hardcode x64; `--arm64` appended to npm helper calls does not change the architecture. Direct builder calls must receive the extraMetadata version explicitly.

Prior successful command evidence: `temp_work/release-0.9.9-publish/build-remaining.sh`.

## Packaging/signing limits

- Windows uses `win.signExecutable: false`, retaining executable icon/metadata editing. `signAndEditExecutable: false` is not an equivalent replacement.
- Installed `node_modules/app-builder-lib/out/codeSign/macCodeSign.js::isSignAllowed()` returns false on every non-darwin host and emits “skipped macOS application code signing”. The Mac directory bundles can be generated on Fedora, but are unsigned and not notarized; adding `mac.identity=-` does not give Linux macOS signing support.
- Keep complete portable directories and full .app bundles. Use `zip -yr` for Mac archives so framework symlinks survive rather than being expanded to duplicate files.
- Check architectures (`file` ELF/PE/Mach-O), package metadata inside app.asar, Mac Info.plist short/bundle versions, icon presence, archive integrity and SHA256SUMS. Run the Linux x64 package in an isolated retained profile where practical. None of these cross-host checks establish native ARM, Windows or Mac gameplay compatibility.
- No Android package was requested by PUBLISH_CURRENT_BUILD’s six-target list.

## Documentation correction

`docs/building.md` contradicted the current release with “upcoming 0.9.9”, “Over 0.9.9” and “current validation source-only” wording. Updated with parent authorization to 1.0.0/menu 1.0, prior successfully generated six-target 0.9.9 crosspackages, fresh 1.0.0 packaging in progress, unsigned Linux Mac recipe, and native hardware validation still pending outside Linux x64. Publication recipe’s old path and version must be adapted by parent to the current checkout and v1.0.0; its plain ZIP recipe requires the symlink-preserving Mac adjustment above.
