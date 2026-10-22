#!/usr/bin/env bash
set -euo pipefail
export TMPDIR="$PWD/temp_work/release-1.0.0-2026-10-20/build-temp"
export REDCAT_PACKAGE_VERSION=1.0.0
npm run build:windows > temp_work/release-1.0.0-2026-10-20/build-windows-x64.log 2>&1
npx --no-install electron-builder --linux dir --arm64 --publish never -c.extraMetadata.version=1.0.0 > temp_work/release-1.0.0-2026-10-20/build-linux-arm64.log 2>&1
npx --no-install electron-builder --win dir --arm64 --publish never -c.extraMetadata.version=1.0.0 > temp_work/release-1.0.0-2026-10-20/build-windows-arm64.log 2>&1
npx --no-install electron-builder --mac dir --x64 --publish never -c.extraMetadata.version=1.0.0 -c.mac.notarize=false > temp_work/release-1.0.0-2026-10-20/build-mac-x64.log 2>&1
npx --no-install electron-builder --mac dir --arm64 --publish never -c.extraMetadata.version=1.0.0 -c.mac.notarize=false > temp_work/release-1.0.0-2026-10-20/build-mac-arm64.log 2>&1
