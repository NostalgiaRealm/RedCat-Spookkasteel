from pathlib import Path
import difflib,json
root=Path(__file__).resolve().parents[2]
changes=[]
def edit(name,old,new):
 p=root/name;text=p.read_text()
 if old not in text: raise RuntimeError(f'Expected text absent: {name}: {old[:80]}')
 updated=text.replace(old,new,1)
 p.write_text(updated)
 changes.append({'file':name,'patch':''.join(difflib.unified_diff(text.splitlines(True),updated.splitlines(True),fromfile=name,tofile=name))})
edit('LOCAL_LLM_INSTRUCTIONS',Path(root/'LOCAL_LLM_INSTRUCTIONS').read_text(),'''Run only tests for the behavior changed in the current task, not the entire historical suite.
Do not create new builds unless the current user request authorizes them.
Match the original game unless the user deliberately requested different behavior; preserve those changes.

Current project and builds folder:
/home/rick/Documents/Rebuilds/RedCat Spookkasteel/RCSPOOK_NEW/

Keep temporary work, disassembly, logs and retained investigation evidence in appropriately named subfolders of:
/home/rick/Documents/Rebuilds/RedCat Spookkasteel/RCSPOOK_NEW/temp_work/
Do not use /tmp/ for project work, and do not remove retained evidence without a user cleanup request.

Screenshots supplied by the user are normally in /home/rick/Pictures/Screenshots/.
Original installations and CD contents are read-only references. Do not modify RCSPOOK_WEBSITE/.
''')
edit('README.md','Electron-builder creates Linux and Windows portable directories.','Electron-builder creates Linux/Windows portable directories and macOS app bundles.')
edit('README.md','| Menus and input |','| Android application | Kotlin and AndroidX WebView package the same game for offline play; Electron is not used on Android. |\n| Menus and input |')
start='The [15–18 October source validation](docs/campaign-validation-2026-10-18.md) completed'
p=root/'README.md';s=p.read_text();a=s.index(start);b=s.index('\n\nKnown differences',a)
edit('README.md',s[a:b],'''The [15–18 October source campaign](docs/campaign-validation-2026-10-18.md) completed all five levels, earned upgrades, required puzzles, bosses and the full ending without cheats. All 13 secret routes were checked across that campaign and separate continuations; this was not a single 100% save. That instrumented run predates later source changes. A new complete campaign and long-session media run on the current release remain useful; focused checks do not replace them. See [current platform validation](docs/portability.md) for the published packages, Android emulator coverage, signing limits and outstanding hardware checks.''')
a=s.find('**macOS Intel/Apple Silicon and Linux/Windows ARM64**')
# This paragraph duplicates the platform inventory and is now reached through the preceding link.
s=p.read_text();a=s.index('**macOS Intel/Apple Silicon and Linux/Windows ARM64**');b=s.index('\n\n## Technical documentation',a)
edit('README.md',s[a:b],'''Build instructions are separate from validation claims: [desktop packaging](docs/building.md), [Android APK/AAB building](ANDROID.md) and [Google Play publication](docs/android-google-play-release.md). Keep a consistent app identity, origin and signing key when updating so existing saves remain accessible.''')
edit('README.md','[future platforms](docs/portability.md)','[platform support and validation](docs/portability.md)')
edit('docs/portability.md','# Platform architecture and remaining ports','# Platform architecture and validation')
edit('docs/portability.md',"Its optional `window.desktop` bridge provides display, quit and save-export actions, plus platform identification.","Its optional `window.desktop` bridge provides display, quit and save import/export actions, plus platform identification.")
edit('docs/portability.md','Mobile browser input is implemented; that does not establish a validated Android application package or Apple Silicon release.','Mobile browser input is implemented. Platform-specific build and runtime evidence is listed below; one platform’s success does not establish another’s compatibility.\n\nThis is the central platform-status reference. The [build guide](building.md) contains reproducible commands; the [implementation audit](native-parity-audit.md) covers gameplay fidelity. Status was reconciled with the retained release and Android records on 26 October 2026; this documentation update did not run builds or new platform tests.')
edit('docs/portability.md','All four Linux/Windows targets were packaged and published for 1.0.1, with archive contents and uploaded checksums verified. Linux x64 has packaged-runtime coverage; Windows and ARM hardware runtime validation remains outstanding.','All four Linux/Windows targets were built, archived and published for **1.0.3**, as recorded in the [release record](../temp_work/release-1.0.3-2026-10-26/release-record.json). The six desktop archives and their uploaded checksums were verified; **1.0.3 package tests were deliberately not run**. Earlier Linux x64 packaged-runtime coverage, including a 1.0.1 software-rendered startup/save check, does not establish a new 1.0.3 runtime pass. Windows and ARM hardware runtime validation remains outstanding.')
edit('docs/portability.md','Unsigned Intel and Apple Silicon bundles were packaged on Linux and published for 1.0.1. The [release verification](../temp_work/release-1.0.1-2026-10-20/release-verification.json) records their contents, architectures and archive checks. This does not establish native Mac runtime support. Remaining validation and distribution polish:','Unsigned Intel and Apple Silicon bundles were built on Linux and published for **1.0.3**; the [release record](../temp_work/release-1.0.3-2026-10-26/release-record.json) lists successful builds and verified upload hashes. No 1.0.3 package tests were run. Earlier [1.0.1 architecture and archive checks](../temp_work/release-1.0.1-2026-10-20/release-verification.json) retain their historical scope. Neither record establishes native Mac runtime support. Remaining validation and distribution polish:')
p=root/'docs/building.md';s=p.read_text();a=s.index('| Target | Build host');b=s.index('\n\n`npm run build:linux`',a)
edit('docs/building.md',s[a:b],'''| Target | Build host for the instructions below | Output under `dist/` |
| --- | --- | --- |
| Linux x64 | Linux | `linux-unpacked/` |
| Windows x64 | Windows or Linux | `win-unpacked/` |
| Linux ARM64 | Linux, including an x64 build host | `linux-arm64-unpacked/` |
| Windows ARM64 | Windows or Linux | `win-arm64-unpacked/` |
| macOS Intel (x64) | macOS for signing/testing; Linux for unsigned bundles | `mac/RedCat Spookkasteel.app` |
| macOS Apple Silicon (ARM64) | macOS for signing/testing; Linux for unsigned bundles | `mac-arm64/RedCat Spookkasteel.app` |

All six desktop targets were built and published for **1.0.3**. Package tests
were deliberately skipped for that release; successful builds and verified
upload hashes are not runtime validation. See [platform support and validation](portability.md)
for the release evidence, earlier Linux runtime coverage, unsigned/notarized
status and outstanding Windows/macOS/ARM hardware checks.''')
edit('docs/building.md','unsigned/notarized\nstatus','signing/notarization\nstatus')
edit('docs/native-parity-audit.md','on 22 October; that review added no tests, builds or new campaign run.','on 22 October; that review added no tests, builds or new campaign run.\nPlatform references were reconciled on 26 October with the 1.0.3 release and\nAndroid evidence; [portability](portability.md) is the current platform-status\nreference. The earlier verification records below retain their original scope.')
edit('docs/native-parity-audit.md','a fresh 1.0.1 playthrough.','a fresh current-release playthrough.')
p=root/'docs/native-parity-audit.md';s=p.read_text();a=s.index('2. **Extend current-release coverage');b=s.index('\n3. **Optional exact-fidelity',a)
edit('docs/native-parity-audit.md',s[a:b],'''2. **Extend current-release coverage on actual devices.** Six 1.0.3 desktop
   archives and signed Android APK/AAB files have been produced. Build success,
   upload verification and the focused Android emulator run do not establish a
   full current-release campaign on physical hardware. Check controls,
   fullscreen/resolution, audio/video, persistence and sustained performance.
   See [platform validation and remaining checks](portability.md) for the exact
   desktop, browser and Android boundaries. The earlier Normal campaign does
   not establish a single 100% collection run or every difficulty.''')
s=p.read_text();a=s.index('2. **Build generation and publication');b=s.index('\n4. **Original RCR',a)
edit('docs/native-parity-audit.md',s[a:b],'''2. **Platform validation is tracked in one place.** See
   [platform support and validation](portability.md) for the six published
   1.0.3 desktop variants, historical Linux runtime coverage, signed Android
   APK/AAB and offline Android 16 debug-emulator checks. It distinguishes
   build/archive inspection from runtime tests, physical-device checks and
   Play review. No 1.0.3 desktop or Android release artifact was launch-tested.
3. **Current-source checks do not refresh historical campaign results.**
   Focused browser/desktop preparation and compatibility checks are recorded
   with the changed systems. They preserve the earlier campaign’s evidence
   rather than implying it was rerun after every change.''')
for name in ['docs/source-followup-2026-09-22.md','docs/graveyard-and-fairy-corrections.md']:
 edit(name,'cd /home/rick/RCSPOOK_NEW','# Run from your project checkout root.')
edit('docs/source-followup-2026-09-22.md','They change source and\nimported assets only; the existing Linux and Windows packages have not\nbeen rebuilt.','This historical pass changed source and\nimported assets without rebuilding packages. It does not describe the contents\nof packages produced by later releases.')
edit('docs/graveyard-and-fairy-corrections.md','`Start-RedCat.sh` prefers the older prepared package.','`Start-RedCat.sh` prefers an existing prepared package, which may lag behind source changes.')
edit('docs/targetable-props-camera.md','This follow-up updates source only. Existing Linux and Windows packages are\nunchanged. Run `npm start -- --ozone-platform=x11` on Linux to try the source;\nthe packaged launcher still uses the older executable resources.','This historical follow-up changed source without rebuilding packages. Run\n`npm start -- --ozone-platform=x11` on Linux to try current source. The launcher\nprefers an existing package, which may lag behind source changes; this note\ndoes not describe packages produced by later releases.')
edit('docs/campaign-validation-2026-10-18.md','- [Completed campaign save](../temp_work/campaign-validation-2026-10-15/playthrough-1792088801065/earned-campaign-completed-save-2026-10-18.json)\n- [Menu after the complete outro](../temp_work/campaign-validation-2026-10-15/playthrough-1792088801065/earned-campaign-menu-2026-10-18.png)','\nThe completed save and post-outro screenshot were generated during that run,\nthen intentionally removed in the [22 October cleanup](../temp_work/cleanup-2026-10-22/README.md).\nThe retained finale and outro-event reports above preserve the observations;\nthey are not loadable substitutes for the deleted save.')
edit('docs/enemy-pursuit-interruptions-native.md','The [rendered pose](../temp_work/enemy-pursuit-interruptions-2026-10-14/skeleton-retreat-1791931788105/skeleton-walkbw.png)\nwas inspected.','The rendered pose was inspected during that run; its screenshot was later\nremoved in the [22 October cleanup](../temp_work/cleanup-2026-10-22/README.md).\nThe linked report retains the observations.')
edit('docs/explosion-damage-native.md','and [screenshot](../temp_work/explosion-damage-2026-10-14/scenes-1791930166308/crate-explosion.png)\nare retained.','is retained. The rendered screenshot was removed in the\n[22 October cleanup](../temp_work/cleanup-2026-10-22/README.md).')
edit('docs/release-source-validation-2026-10-15.md','All harnesses, profiles, captures, source hashes and reports are retained in','Retained harnesses, source hashes and reports are in')
edit('docs/release-source-validation-2026-10-15.md','links the results by check and distinguishes their scope. Main captures/reports:','links the results by check and distinguishes their scope. Disposable profiles\nand captures were removed in the [22 October cleanup](../temp_work/cleanup-2026-10-22/README.md);\nthe historical observations remain in these reports:')
edit('docs/release-source-validation-2026-10-15.md','- [Native desktop/profile run](../temp_work/release-housekeeping-2026-10-15/platform-1792090299506/report.json)\n  and [actual window capture](../temp_work/release-housekeeping-2026-10-15/platform-1792090299506/native-window.png).','- [Native desktop/profile run](../temp_work/release-housekeeping-2026-10-15/platform-1792090299506/report.json), including the recorded actual-window check.')
(root/'temp_work/efficiency-2026-10-26/documentation-changes.patch').write_text(''.join(c['patch'] for c in changes))
print(json.dumps({'changedFiles':sorted(set(c['file'] for c in changes)),'edits':len(changes)},indent=2))
