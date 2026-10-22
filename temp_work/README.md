# Retained research and investigation data

`temp_work` retains native-code research, REA output, investigation notes and scripts, unique source snapshots, performance measurements, campaign findings and release verification.

Browser test profiles, copied saves, screenshots, generated caches and redundant copies were removed on 22 October 2026. Mixed reports retain their findings with compact summaries replacing full saved-game payloads. The documented Android toolchain and original resource-extraction evidence remain.

See the [cleanup and research index](cleanup-2026-10-22/README.md) for the retained directories, verification and a lookup from removed duplicate files to their canonical copies. Historical references to discarded screenshots and test profiles are expected.

## Repository copies

The GitHub/GitLab archive contains the retained research and diagnostic logs. The installed Android JDK and its downloaded distribution archive remain local; reproduce that installation using [ANDROID.md](../ANDROID.md#optional-reproduce-the-local-jdk-installation). Original release/checksum metadata remains in the research directory.

The large animation measurement dataset is distributed losslessly as [rebuild-samples.jsonl.gz](enemy-actor-animations-2026-10-12/assets/rebuild-samples.jsonl.gz); see its [checksum and extraction instructions](enemy-actor-animations-2026-10-12/assets/RESEARCH_DATA.md). Local unpacked data is ignored by Git.

Reference-engine and Help-decompiler sources are plain snapshots with recorded upstream commits and original license files, rather than incomplete submodule links. Host-specific test symlinks are excluded; [publication provenance](publication-2026-10-22/) records their targets and the reference sources.
