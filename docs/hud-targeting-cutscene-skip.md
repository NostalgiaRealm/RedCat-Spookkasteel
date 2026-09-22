# Original HUD, enemy targeting and dialogue skipping

Source changes only; no release build was generated for this work.

## Evidence from the original game

The reference executable is the installed `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
Research used the local executable, settings, bitmaps, compiled level scripts
and the supplied original screenshot. Original files were not modified.

`tools/import_hud.py` imports `HUDicon.bmp` with `HUDiconA.bmp`, the original
`crosshair.bmp`/`crosshair_A.bmp`, and positions/sprite rectangles from
`Settings/HUDIcon.ini`. Both resulting PNGs preserve every source RGB/alpha
pixel. The complete asset importer invokes this additional step. Existing
prepared projects can run just this importer with `--installation PATH`.

The HUD displays the original health glove and full/half/empty hearts,
RedCat portrait and life count, potion count/level total, treasure chest and
score. One heart represents two health points. Enemy health and its portrait
appear while attack lock is active. The logical 640×480 layout scales with
height; right-side counters remain attached to the right edge on widescreen
and stay inside the fitted game image when a 4:3 resolution is selected.
An accessible text equivalent remains in the DOM. The extra “II” pause button
has been removed from gameplay; Escape and P still open the pause menu.

HUD enemy drawing at `0x453560` reads the brain's portrait getter at vtable
slot `+0xb4`, configured maximum health and current health. Verified portrait
indices are bats 0–2, ghosts 3–5, spiders 6–8, both Brutus variants 9,
Jester Max 10, Dungeon Max 11, skeleton 12, zombie 13, knight 14,
guardian 15, witch 16, gargoyle 17, frog 18 and plant 19.

`RCTargetList` at `0x42c280`/`0x42cb60` caches selection for 500 ms,
checks distance and half the caller's cone, sorts candidates by distance and
checks visibility. The player caller at `0x4368d0` supplies a PI-wide cone
and Player.DetectionRange (480). The portable selector follows these rules,
immediately dropping dead, hidden, disabled or out-of-range enemies. Dormant
ambush enemies remain concealed. Firing maintains a valid current target.
Player lock state at `0x4332c7` and camera setup at `0x434900` engage the
attack camera and enemy HUD; releasing the attack releases the view. Pellets
aim from the animated right-hand release point at 80% of the target hull's
height, rather than traveling parallel to a line from RedCat's feet.

`RcTargetEffect` loads the original crosshair at `0x46fe10`. Its update at
`0x470710` uses a width that oscillates between 25 and 50 at 25 units/second,
rotation at 3.5 radians/second, and RGB channels cycling between 20 and 255
at 700 units/second. The reconstructed billboard uses those values and sits
10 units toward the camera from the target hull surface. Rendering and camera
smoothing use the portable renderer; the original camera's full spring solver
and triangle-exact ring attachment are not claimed as identical.

## Requested new skip control

During a scripted cutscene, the bottom-right **Overslaan** circle fills while
E is held continuously for two seconds. Releasing E or pausing resets it.
A completed hold is latched until key release, preventing accidental use of a
button or skipping a second scene with the same press.

Skipping advances the original motion callbacks in chronological steps until
`StopCutScene`. It retains skill rewards, model movement, teleports, door
commands, enemy activation and freeze changes. Voices and transient sound/UI
are suppressed during this fast-forward; final music and looped ambient sound
states are restored. Player physics and enemy damage do not fast-forward.
A bounded loop prevents a broken script from hanging the app. Ordinary door
auto-close timers resume with gameplay, including the cave arena door whose
before-close command enables Max.

The original `GRintro3` dialogue entry has a voice and intentionally empty
text. `ScriptHost.say()` now preserves that empty subtitle and never shows an
internal resource ID as fallback text. The witch's laughter still plays.

## Focused validation

- `node --test tests/hud.test.mjs`: native atlas layout, half hearts, lives,
  level potion total, score, enemy portraits and widescreen anchoring.
- `node --test tests/targeting.test.mjs`: front cone/range/visibility,
  selection cache, stable lock/release, dormant/removed targets, hand-origin
  aiming and native ring animation/placement.
- `node --test tests/cutscene-skip.test.mjs`: hold/reset/latch, original forest
  introduction and skill dialogue, cave stand-in withdrawal and arena door
  callback, and empty witch laughter subtitle.
- `node tests/hud-target-skip-scenes.mjs`: real browser keyboard hold/release,
  original intro completion, rendered HUD at widescreen/4:3, target ring pixels
  and attack camera alignment/release. `--target-only` limits the scene check
  to HUD/target changes without repeating the keyboard skip regression.
  `--skip-only` checks the removed pause overlay, two-second keyboard hold,
  progress/reset and Escape pause without rerunning targeting or HUD checks.

Only changed-system checks were run. No full historical suite or builds were run.

For the two-second hold and pause-overlay update, the isolated hold/reset/latch
unit check and `--skip-only` browser check passed. The actual keyboard hold
completed after 2.012 seconds, with no browser or asset-loading errors.
