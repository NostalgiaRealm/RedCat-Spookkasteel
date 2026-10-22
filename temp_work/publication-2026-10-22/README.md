# Publishing the retained research archive

The cleaned research was prepared for the project's GitHub and GitLab `main` branches on 22 October 2026. This is a research archive update, without a new game release or builds.

The archive includes investigation notes, native disassembly, unique source snapshots, reference code, CPU measurements, campaign results, retained diagnostic logs and cleanup provenance.

Distribution adjustments:

- The locally installed Android JDK and downloaded JDK archive are excluded from Git. The pinned URL, checksum and installation commands are in `ANDROID.md` at the project root.
- The 164,682,243-byte animation measurement file is published as `enemy-actor-animations-2026-10-12/assets/rebuild-samples.jsonl.gz`, a 59,878,401-byte lossless archive. Its decompressed SHA-256 was checked against the original. See `assets/RESEARCH_DATA.md` alongside it.
- Genesis3D and HelpDeco are plain source snapshots, with original licenses and upstream commit IDs. No nested Git metadata or submodule pointer is published. See [reference-sources.json](reference-sources.json).
- Four obsolete, host-specific Android test-fixture symlinks remain local and are excluded. Thirty-six orphaned browser lock/cookie links were removed. See [local-links.json](local-links.json). These contain no retained research content.

The staged archive was checked for GitHub's 100 MiB per-file limit, unexpected submodule links, host-specific symlinks and credentials before publication. The game source, assets, version and release packages are unchanged.

The final file review also removed 49 Chromium temporary files (48 empty files and one PNG capture without a filename extension). Their paths and hashes are recorded in `additional-cleanup.json`.
