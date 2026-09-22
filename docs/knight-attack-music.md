# Knight combat music at shooting range

Attacking a targeted knight now starts the level's original Action music at
shooting range. In Het Kasteel that file is `Endbosses.wav`. Looking at a knight
alone, shooting scenery or buttons, and firing without an enemy target do not
start enemy music.

The previous trigger depended only on enemy perception. The original Normal
knight has `SenseRange=100`, `VisualRange=100` and
`TimeToRememberVisual=3`; RedCat can target an enemy from 480 units away. The
remake also failed to refresh a regular knight's awareness when a pellet hit
outside those perception ranges.

## Original hit behavior

Research used the installed `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.

- The common enemy hit handler at `0x4232a0` writes the current game time to
  the remembered-player timestamp at `0x4232c4` (enemy offset `+0x168`).
- The stationary knight handler at `0x40e400` delegates normal hits to that
  handler. Its armored/non-damaging branch also refreshes this timestamp at
  `0x40e446`.
- Detection helper `0x422f30` honors that memory for `TimeToRememberVisual`.
- Combat-state constructors at `0x403610` and `0x403700` attach a threat through
  virtual `+0x54` to `0x422630`; teardown detaches through `+0x58` to `0x422740`.
  The first ordinary threat starts Action music. Clearing the final threat
  returns to Ambient unless boss music takes priority.

Actual enemy hits now refresh **`alerted`, `lastSeenAt`, and
`lastSeenPosition`**, including non-damaging hits. The authored perception and
attack ranges are unchanged. This fixes the missing native hit-memory behavior
for both aimed and free-aim projectile impacts.

## Starting music when an attack begins

To provide the requested immediate onset, an accepted attack against the valid
locked enemy records `lastAttackedAt`. That enemy counts toward combat music for
its original memory duration, even before the pellet arrives. This music
trigger does not grant early AI awareness; impact supplies the native awareness
update above. Native evidence confirms hit memory, but does not establish that
the original music transition preceded projectile impact.

Subsequent attacks and hits keep the combat state active. Missed attacks expire
after the same finite duration. The last enemy's death ends its contribution
immediately; other engaged enemies and boss music retain their normal priority.
Repeated shots do not restart the track or its crossfade. The attack timestamp
is saved and restored and follows existing enemy timer freezing during scripted
pauses. The existing per-level music slots and two-second crossfades are retained.

## Focused verification

```sh
node --test tests/knight-attack-music.test.mjs
node tests/knight-attack-music-scenes.mjs
```

Seven affected unit cases passed. They cover immediate onset, false triggers,
native hit memory, zero-damage hits, expiry, multiple threats/boss priority,
saving and freezing. The zero-damage case was run separately after adding that
native edge case; earlier successful checks were not repeated.

The browser fixture uses the actual castle knight `StandingEnemy7`, its native
stats, a dry original floor and normal hand-fired pellets. At **270 units**,
looking alone kept ambient music. An accepted attack selected `Endbosses.wav`
before pellet release or impact; all five real hits kept combat music active.
Defeat restored `Level 2- -The Castle.wav`. The real audio records followed those
events, with no browser, HTTP or script errors. RedCat's position and health
remained unchanged.

Results: `artifacts/knight-attack-music-scenes.json`.
No unrelated suites, builds or version bumps were run. Play the updated source
with `npm start -- --ozone-platform=x11` on Linux; existing packages remain older.
