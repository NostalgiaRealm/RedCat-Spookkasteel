# Documentation status cleanup — 5 October 2026

This review compared README and maintained `docs/*.md` with current source and
the later native-recovery notes. Archived research under `temp_work/` was
preserved rather than rewritten. Original versions of every edited document are
retained under `before/`; `documentation-review.diff` records this pass alone,
separately from the project's pre-existing uncommitted changes.

Corrected stale unfinished-work claims for the script VM, enemy waypoint
decisions, projectile origins/collision/impact callbacks, harmless mushroom
ribbons, portal/destructible effects, fairy particle-state saves, smoke/flame
pools, lighting and world shadows, world streaming, camera approach and replay
tutorial policy. Updated obsolete touch controls, two-second skip wording,
asset tracking, project location, audio ranges and packaging/mobile guidance.
Historic verification remains historic; no old results were presented as new
tests. Original executable addresses and research provenance were retained.

The central status document is `docs/native-parity-audit.md`. It retains actual
limits: current-source campaign/platform validation, camera/collision/blending
adaptations, knight-specific armour breakup, bounded lighting and query budgets,
fixed-step/local-random effects, legacy effect-save reconstruction and optional
original RCR save import. Existing successful manual campaign runs of an older
build are distinguished from verification of subsequent source changes.

Validation: `check_documentation.py` compares edited files with their backups,
writes a task-only diff and checks local Markdown paths/heading anchors. The
final report is `documentation-checks.json`. `git diff --check -- README.md docs`
also passed. Only documentation checks ran; no gameplay/import/browser tests,
asset reimports, runtime changes, builds or package generation were performed.
The website staging directory was not used or modified.
