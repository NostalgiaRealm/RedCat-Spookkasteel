#!/bin/bash
set -euo pipefail
export TMPDIR="$PWD/temp_work/release-0.9.9-publish/tmp"
export REDCAT_PACKAGE_VERSION=0.9.9
npm run build:windows > temp_work/release-0.9.9-publish/windows-x64.log 2>&1
npx --no-install electron-builder --linux dir --arm64 --publish never -c.extraMetadata.version=0.9.9 > temp_work/release-0.9.9-publish/linux-arm64.log 2>&1
npx --no-install electron-builder --win dir --arm64 --publish never -c.extraMetadata.version=0.9.9 > temp_work/release-0.9.9-publish/windows-arm64.log 2>&1
npx --no-install electron-builder --mac dir --x64 --publish never -c.extraMetadata.version=0.9.9 -c.mac.notarize=false > temp_work/release-0.9.9-publish/mac-x64.log 2>&1
npx --no-install electron-builder --mac dir --arm64 --publish never -c.extraMetadata.version=0.9.9 -c.mac.notarize=false > temp_work/release-0.9.9-publish/mac-arm64.log 2>&1
