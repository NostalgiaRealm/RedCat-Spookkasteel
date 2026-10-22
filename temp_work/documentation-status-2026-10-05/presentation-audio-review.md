# Presentation, lighting, effects and audio documentation status review

2026-10-05. Documentation-only review against current source and later recovery notes.

## Edited documents

- `presentation-native.md`: replaces obsolete fairy steering/pool/save approximation claims with recovered movement, reusable pool, saved particles/RNG/trails and legacy fallback; retains fixed-tick/RNG/attenuation limits.
- `presentation-native-recovery.md`: distinguishes bitmap-sized fixture coronas from world-sized native smoke/flame spouts.
- `world-effects-native.md`: current corona occlusion/fade, actor versus world light selection, per-luxel shadows and remaining fixed-step/slot-budget boundaries.
- `native-visuals-2026-09-22.md`: complete fairy-state saves supersede age-only replay; age replay remains legacy fallback.
- `audio.md`: separates native 50m hearing radius from current 175.5m configuration and current local ranges; removes nonexistent portal terminal envelope claim; preserves real replay/music-envelope verification limits.
- `audio-completion-native.md`: explains deliberate bounded audible-door fallback while preserving native silence for other type-4 models.
- `gameplay-sound-native.md`: strict frame deadlines and next-update rearming, verified native sprite sizing plus readability adaptation, verified null RcEnemyShot effect factories.
- `world-action-audio.md`: current fairy 3x local ranges, full terminal WAV and once-only fallback, no native terminal envelope found.
- `player-protection-progress-and-local-audio.md`: visual-only mushroom ribbons, Start opnieuw skill reset after successful load, current Castle/Cave/Tower ranges.
- `environment-interactions-native.md`: later debris/placement/smoke scheduling recovery supersedes the old unrecovered claim; collision/RNG/unused variants remain limits.
- `cave-ambience-range.md`: current 17.55–105.3m endpoints; old measurements explicitly historical; later BSP audio obstruction linked.

## Evidence inspected

Current `src/ambience-ranges.js`, `src/audio-settings.js`, `src/door-audio.js`, `src/gameplay-audio.js`, `src/explosion-native.js`, `src/debris-native.js`, `src/campaign-progress.js`, `src/main.js`, `src/world-effects.js`, plus `fairy-save-restoration.md`, `spout-effects-native.md`, `portal-audio-native.md`, `native-projectile-animation.md`, `projectile-visibility.md`, `enemy-combat-effects-native.md`, `debris-native-recovery.md` and lighting recovery notes.

`actor-lighting-native.md`, `actor-floor-lighting-native.md`, `world-light-falloff-research.md` and `world-light-shadows-native.md` were reviewed but needed no status edits. The native octagonal distance approximation, precision/collision differences, fixed GPU light budget and root-0-only shadow casting are valid boundaries, not missing functionality. Nonzero replay-delay scheduling and the exact music fade curve remain unverified; no audio timing/range changes were made. Generic spout pool snapshots remain unimplemented and that limitation remains documented.

## Review scope

Original edited documents are retained under `before/docs/`; preexisting backups were not overwritten. Compared changed text to backups and reviewed remaining limitation phrases. No code, assets, tests, builds, website files or runtime state were changed. No test execution or new test-pass claim is part of this cleanup.
