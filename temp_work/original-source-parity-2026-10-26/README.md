# Full original-source recovery and port comparison — 26 October 2026

Requested scope: preserve a complete decompilation of the original installed
game in the separate sibling `RC_ORIGINAL_DECOMPILED` folder; compare the port
against recovered executable behavior; correct confirmed unintended differences;
preserve deliberate improvements and document changes separately.

Port starting commit: `59d6298a214124ab8d4d69f153c182f280d7c822` (1.0.2).
Original game SHA-256:
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
Original installation remains read-only. Generated C is decompiler pseudocode,
not the lost original source or an automatically buildable replacement.

Work tracks:

- Complete artifact inventory, decompilation, function index and coverage audit.
- Enemy/combat/animation comparison against recovered native behavior.
- Menu/audio/effect comparison, preserving intentional scheduling and controls.
- Script VM, environment/player/world behavior and integration review.
- Focused regressions for changed behavior and a separate consolidated report.

Historical evidence is checked against its binary identity before reusing an
address. Early Davi-Script notes refer to a different executable hash; matching
numeric addresses alone is not evidence that two functions are identical.

No package generation or publication is part of this task.
