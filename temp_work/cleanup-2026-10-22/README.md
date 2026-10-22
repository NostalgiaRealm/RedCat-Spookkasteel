# temp_work cleanup — 22 October 2026

This cleanup followed the request to retain useful investigation data while removing browser profiles, saves, screenshots and duplicates. It applies only to `temp_work`.

## What was kept

Native disassemblies and REA snapshots; original Help resource extractions; analysis scripts and notes; unique historical source snapshots and patches; animation measurements; CPU profiles and traces; campaign reports and release verification. The installed Android JDK and its distribution archive remain because the documented Android workflow uses this toolchain.

`cpu-profile.json` and `.cpuprofile` files are performance measurements, not browser user profiles. REA `.snapshot` files are analysis data, not game saves. Original Help BMP resources and candidate source SVGs were preserved; rendered screenshots and contact sheets were removed.

## What was removed

- 327 browser/Electron profile directories plus a partial profile, copied save databases and generated runtime caches.
- 182 standalone saved-game files.
- 1420 screenshots, derived previews and disposable test-fixture media.
- 621 exact copies of files elsewhere in the project, plus 720 duplicate research copies. At least one canonical copy remains.
- 133 full save payloads embedded in 68 diagnostic reports. Each payload was replaced with an explicit cleanup marker and compact hash, level, position and state metadata. Surrounding diagnostic events and results remain. These summaries cannot be loaded as saves.

## Finding retained evidence

- [Duplicate location lookup](duplicate-locations.tsv): removed path → retained project path, SHA-256 and Git blob where tracked. Source commit at cleanup: `71a2b234e5941a61e31e82c204728111e850713f`. This also lets a historical copy be recovered from Git if a canonical tracked source file changes later.
- [Cleanup results](cleanup-result.json) and [verification](verification.json).
- [Changed reports](modified-reports.json): hashes and byte counts before/after save-payload removal.
- [Save summary inventory](save-candidates-performance-audit.json): compact reproduction locations and exact report paths, without full saves.
- `inventory-before.json.gz` and `cleanup-plan.json.gz`: complete pre-cleanup metadata and removal/retention decisions. [Compression checks](compressed-inventories.json) include hashes of their original JSON. Read with `gzip -dc FILE.json.gz`; no need to retain an uncompressed copy.
- [Retained directory index](retained-directory-index.json).

Historical reports and harnesses can still mention deleted screenshots/profiles/saves. These were intentionally removed. They describe historical runs, not a promise that the disposable fixtures remain. Consult the duplicate lookup for removed source/data copies; recreate fresh test profiles/saves if rerunning a harness.

The cleanup scripts in this directory record this one-time operation. Do not treat them as a recurring cleanup command or rerun a destructive plan against a changed directory. No gameplay tests or builds were needed. Retained files were hash-checked, and a separate final scan found no full game saves or browser-profile markers in the reviewed research directories. Main source and actual user save storage were not changed.

## Retained investigation directories

| Directory/file | Files | MiB |
| --- | ---: | ---: |
| `about-debriefing-2026-10-01` | 2 | 0.01 |
| `about-donations-2026-10-01` | 1 | 0.00 |
| `about-menu-0.9.4` | 1 | 0.00 |
| `actor-browser` | 36 | 0.00 |
| `actor-comparison-2026-10-13` | 2 | 0.06 |
| `actor-test-2026-10-13` | 9 | 0.06 |
| `adaptive-msaa-2026-10-20` | 3 | 0.01 |
| `android-initial-2026-10-06` | 314 | 543.06 |
| `android-roadmap-2026-10-05` | 8 | 0.07 |
| `android-target-api36-2026-10-06` | 9 | 0.07 |
| `app-icon` | 1 | 0.00 |
| `audio-media-lifetime-2026-10-18` | 9 | 0.19 |
| `audio-save-2026-10-15` | 11 | 0.16 |
| `black-levels` | 5 | 0.00 |
| `boss-interruptions-2026-10-15` | 12 | 0.47 |
| `buried-actor-lighting-2026-10-05` | 23 | 6.74 |
| `camera-toggle-2026-10-13` | 3 | 0.01 |
| `camera-wall-overhead-2026-10-03` | 9 | 1.58 |
| `campaign-finale-2026-10-18` | 3 | 0.03 |
| `campaign-validation-2026-10-15` | 172 | 33.63 |
| `castle-optional-secrets-2026-10-18` | 7 | 0.14 |
| `caves-earth-2026-10-18` | 11 | 2.01 |
| `caves-fire-input-2026-10-18` | 12 | 0.43 |
| `caves-full-input-2026-10-18` | 103 | 20.27 |
| `caves-input-encounter-2026-10-15` | 16 | 4.38 |
| `circling-hitch-2026-10-01` | 19 | 20.13 |
| `coin-bag-comparison-2026-10-13` | 3 | 0.00 |
| `coin-browser` | 12 | 0.00 |
| `coin-test-2026-10-13` | 5 | 0.00 |
| `com.google.Chrome.1Yo7KK` | 1 | 0.00 |
| `com.google.Chrome.chrome_chrome_url_fetcher_.0d2J79` | 1 | 0.01 |
| `com.google.Chrome.chrome_chrome_url_fetcher_.1xNo80` | 1 | 0.01 |
| `com.google.Chrome.chrome_chrome_url_fetcher_.877Jop` | 1 | 0.01 |
| `controller-skip-icon-2026-10-03` | 1 | 0.00 |
| `controller-support-2026-10-03` | 10 | 0.01 |
| `cpu-browser-followup-2026-10-18` | 106 | 7.24 |
| `cpu-deeper-2026-10-18` | 62 | 2.83 |
| `cpu-low-end-2026-10-18` | 61 | 3.14 |
| `crate-performance-2026-10-18` | 129 | 71.89 |
| `death-save-2026-10-18` | 8 | 0.08 |
| `debriefing-layout-1790799928604` | 1 | 0.03 |
| `debriefing-layout-2026-09-30T20-24-21-867Z` | 1 | 0.06 |
| `difficulty-menu-audio` | 1 | 0.00 |
| `distant-work-2026-10-19` | 64 | 2.72 |
| `documentation-status-2026-10-05` | 43 | 0.42 |
| `effects-save-2026-10-15` | 15 | 0.30 |
| `enemy-actor-animations-2026-10-12` | 61 | 158.17 |
| `enemy-movement-native-2026-10-05` | 82 | 12.87 |
| `enemy-parity-2026-10-13` | 37 | 2.93 |
| `enemy-pursuit-attacks-2026-10-14` | 6 | 0.06 |
| `enemy-pursuit-interruptions-2026-10-14` | 35 | 3.50 |
| `explosion-audio-audit-2026-10-04` | 8 | 0.24 |
| `explosion-damage-2026-10-14` | 65 | 1.20 |
| `explosion-frame-2026-10-15` | 7 | 0.04 |
| `fairy-idle-audio-1792328494825` | 2 | 0.00 |
| `fairy-idle-regression-2026-10-18` | 51 | 5.05 |
| `fairy-ribbon-fade-2026-10-14` | 23 | 4.35 |
| `fixture-lights-2026-09-30` | 7 | 0.12 |
| `footstep-audio-audit-2026-10-04` | 4 | 0.04 |
| `forward-hitches-2026-10-19` | 25 | 3.85 |
| `fps-uncap-2026-10-18` | 9 | 0.03 |
| `full-health-pickups-2026-10-05` | 3 | 0.01 |
| `gargoyle-native-2026-09-28` | 22 | 0.52 |
| `gargoyle-transparency-2026-09-29` | 290 | 7.27 |
| `gpu-residency-2026-10-18` | 15 | 0.28 |
| `graveyard-gate-2026-10-04` | 8 | 0.21 |
| `graveyard-maze-respawn-2026-10-05` | 6 | 0.02 |
| `graveyard-secrets-2026-10-18` | 25 | 0.35 |
| `graveyard-sky-gap-2026-10-09` | 15 | 0.31 |
| `graveyard-wall-gap` | 5 | 0.09 |
| `health-extension-2026-09-28` | 7 | 0.02 |
| `icoinl-tail-2026-10-13` | 16 | 4.40 |
| `intentional-departures-doc-hits-2026-10-06.txt` | 1 | 0.05 |
| `intentional-documentation-2026-10-06` | 4 | 0.05 |
| `intro-autoplay-2026-10-02` | 2 | 0.00 |
| `lantern-hitch-2026-10-19` | 32 | 7.30 |
| `level-selection-menu` | 1 | 0.00 |
| `loading-screen-2026-10-09` | 5 | 0.02 |
| `mangohud-wayland` | 35 | 0.19 |
| `markdown-directory-rename-2026-10-07` | 3 | 0.69 |
| `markdown-directory-rename-files-2026-10-07.txt` | 1 | 0.00 |
| `menu-audio` | 1 | 0.00 |
| `menu-bottom-right` | 1 | 0.00 |
| `menu-help-about-buttons` | 1 | 0.00 |
| `menu-input-device-2026-10-20` | 9 | 0.03 |
| `menu-ok-close` | 1 | 0.00 |
| `menu-settings-button` | 1 | 0.00 |
| `menu-stop` | 1 | 0.00 |
| `menu-stop-layout` | 1 | 0.00 |
| `menu-welcome` | 1 | 0.00 |
| `moat-water-2026-10-01` | 3 | 0.00 |
| `movement-recovery-audit-2026-09-27` | 3 | 0.01 |
| `movement-recovery-controllers-2026-09-27.log` | 1 | 0.00 |
| `movement-recovery-scenes-2026-09-27-first.log` | 1 | 0.00 |
| `movement-recovery-scenes-2026-09-27-ledge-exit.log` | 1 | 0.00 |
| `movement-recovery-scenes-2026-09-27-well-probe.log` | 1 | 0.00 |
| `movement-recovery-scenes-2026-09-27T12-16-09-671Z` | 1 | 0.00 |
| `movement-recovery-scenes-2026-09-27T12-17-20-151Z` | 1 | 0.00 |
| `movement-recovery-scenes-2026-09-27T19-03-58-969Z` | 1 | 0.00 |
| `movement-recovery-tests-2026-09-27` | 3 | 0.00 |
| `msaa-settings-2026-10-20` | 8 | 0.03 |
| `music-fade-2026-10-15` | 2 | 0.27 |
| `music-loop-2026-09-28` | 17 | 0.06 |
| `music-loop-render-2026-09-28T08-15-49-062Z` | 1 | 0.00 |
| `music-loop-render-2026-09-28T08-16-44-337Z` | 1 | 0.00 |
| `music-loop-render-2026-09-28T12-59-23-867Z` | 1 | 0.00 |
| `music-loop-render-2026-09-28T13-02-38-326Z` | 1 | 0.01 |
| `music-loop-render-2026-09-28T13-03-47-118Z` | 1 | 0.01 |
| `native-asset-lifetime-2026-10-19` | 126 | 9.67 |
| `native-menu-restoration-2026-10-20` | 151 | 3.76 |
| `native-refresh-2026-10-01` | 28 | 0.58 |
| `native-spouts-2026-10-05` | 28 | 0.55 |
| `new-adventure-skills-2026-10-03` | 2 | 0.00 |
| `packaging-audit-repair-2026-10-12` | 5 | 0.15 |
| `pickup-native-call-decode.py` | 1 | 0.00 |
| `pickup-native-details-probe.py` | 1 | 0.00 |
| `pickup-native-findings.md` | 1 | 0.01 |
| `pickup-native-geometry-and-color.txt` | 1 | 0.01 |
| `pickup-native-orbit-arguments.txt` | 1 | 0.00 |
| `pickup-native-orbit-initializer.txt` | 1 | 0.00 |
| `pickup-native-orbit-update.txt` | 1 | 0.00 |
| `pickup-placement-2026-10-09` | 24 | 0.68 |
| `platform-build-docs-2026-10-05` | 6 | 0.04 |
| `player-profiles` | 3 | 0.00 |
| `player-profiles-native` | 6 | 27.11 |
| `player-projectile-audio-2026-10-04` | 3 | 0.00 |
| `player-shadow-2026-10-04` | 14 | 0.15 |
| `player-world-light-2026-10-04` | 12 | 37.92 |
| `readme-introduction-2026-10-05` | 3 | 0.05 |
| `redcat-animation-native-2026-10-12` | 46 | 30.27 |
| `redcat-native-score-disasm.txt` | 1 | 37.89 |
| `redcat-reward-probe.py` | 1 | 0.00 |
| `release-0.9.9-publish` | 26 | 18.11 |
| `release-1.0.0-2026-10-20` | 15 | 0.03 |
| `release-1.0.0-final-2026-10-20` | 27 | 0.37 |
| `release-1.0.1-2026-10-20` | 30 | 0.35 |
| `release-housekeeping-2026-10-15` | 26 | 1.00 |
| `release-notes-0.9.9-refresh-2026-10-18` | 2 | 0.02 |
| `render-quality` | 1 | 0.00 |
| `render-scale-300` | 1 | 0.00 |
| `replayed-level-intros-2026-10-05` | 20 | 0.28 |
| `reward-artwork-verification-2026-09-27.json` | 1 | 0.00 |
| `reward-effects-import-2026-09-26.log` | 1 | 0.00 |
| `reward-scenes-2026-09-26T21-21-56-239Z` | 1 | 0.00 |
| `reward-scenes-2026-09-26T21-23-44-556Z` | 1 | 0.00 |
| `reward-scenes-2026-09-27T11-59-25-508Z` | 1 | 0.00 |
| `reward-scenes-test-2026-09-26-attempt2.log` | 1 | 0.00 |
| `reward-scenes-test-2026-09-26-attempt3.log` | 1 | 0.00 |
| `reward-scenes-test-2026-09-26.log` | 1 | 0.00 |
| `reward-scenes-test-2026-09-27-final.log` | 1 | 0.00 |
| `reward-unit-test-2026-09-26-with-trails.log` | 1 | 0.00 |
| `reward-unit-test-2026-09-26.log` | 1 | 0.00 |
| `room-hitches-2026-10-19` | 49 | 5.03 |
| `room-item-sharing-2026-10-19` | 40 | 7.98 |
| `room-streaming-2026-10-19` | 28 | 1.44 |
| `save-residency-2026-10-20` | 7 | 0.10 |
| `saved-adventure-menu-2026-10-03` | 2 | 0.00 |
| `settings-sections-1.0.1-2026-10-20` | 2 | 0.01 |
| `shooter-wait-2026-10-15` | 7 | 0.03 |
| `shooting-audio-audit-2026-10-03` | 2 | 0.01 |
| `shove-investigation-2026-10-05` | 33 | 0.09 |
| `skeleton-hit-2026-10-15` | 5 | 0.07 |
| `skybox-dimensions-2026-10-05` | 5 | 0.02 |
| `skybox-native-2026-10-12` | 18 | 0.18 |
| `slider-audio` | 1 | 0.00 |
| `startup-ui-2026-10-03` | 7 | 0.01 |
| `t` | 27 | 0.04 |
| `threshold-2026-10-15` | 4 | 0.03 |
| `torch-flames-2026-10-05` | 16 | 3.92 |
| `torch-flames-all-check-2026-10-05` | 37 | 4.48 |
| `touch-camera-2026-09-28` | 1 | 0.00 |
| `touch-menu-2026-09-30T19-59-52-158Z` | 1 | 0.01 |
| `touch-menu-2026-09-30T20-01-04-154Z` | 1 | 0.01 |
| `tower-ascent-2026-10-18` | 6 | 0.11 |
| `tower-bonus-2026-10-18` | 7 | 0.15 |
| `water-contact-2026-10-11` | 25 | 0.30 |
| `water-footstep-reachability-2026-10-06` | 5 | 0.09 |
| `web-cache-2026-10-20` | 7 | 0.60 |
| `web-cache-tests` | 27 | 4.42 |
| `well-live-2026-09-27` | 8 | 2.82 |
| `well-recovery-2026-09-27T19-21-43-413Z` | 1 | 0.01 |
| `well-recovery-review-2026-09-27` | 3 | 0.01 |
| `world-light-shadows-2026-10-05` | 20 | 0.10 |
| `world-streaming-2026-09-30` | 12 | 0.09 |
| `zombie-rise-smooth-2026-10-05` | 54 | 32.08 |
