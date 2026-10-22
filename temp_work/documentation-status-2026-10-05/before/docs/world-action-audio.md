# Fairy, button, door and portal audio

The source is the installed `RcHcGame.dat`, its x86 disassembly, and the original BSP entities, compiled Davi programs and motion timelines imported into `data/`. No replacement recordings are generated.

## Fairy distance

`idlefee1.wav` keeps its existing authored gain and active/deactivated lifetime. Its entire distance curve is expanded by exactly three: castle near/far 5/25 m becomes 15/75 m, cave 5/30 m becomes 15/90 m, and the other levels multiply the native minimum radius by three (which also scales the maximum). This is the requested mix adjustment, not a claim about original native attenuation.

Only this fairy loop uses RedCat's position as its listener. Scripted camera moves can no longer push its gain down while RedCat remains beside the activated lantern. Other effects keep their existing camera listener and ranges.

## Buttons and doors

Native `CAdamButtonModel` at `0x4cb180` maps ButtonType 1/2/3 to `SwitchPushButton.wav`, `SwitchHandle.wav` and `SwitchTrigger.wav`. Resource constructors are `0x51e4c0`, `0x51e5d0`, `0x51e6e0`; both switch directions invoke the selector (`0x4cb539`, `0x4cb701`). The gameplay button event now starts that positional one-shot on an accepted transition, including physical contact. Holding contact does not replay it each frame.

Native `CAdamDoorModel` at `0x4cc140` maps DoorType 1/2/3/4 to `OpenDoorNormal.wav`, `OpenDoorKey.wav`, `OpenDoorSecret.wav`, and `empty.wav`. The selector is used for opening and closing (`0x4ccc78`, `0x4cce54`). Type 4 really is silent; no missing door-motion sample was found.

To satisfy the requested audible doors, `door-audio.js` explicitly gives visible type-4 door panels an existing normal/secret door recording. The bounded panel names cover castle doors/fence, graveyard church/frogger/maze panels and cave laboratory doors. This is a deliberate deviation from native silence. Type-4 steps, slopes, moving hedges and other mechanisms remain excluded. Visible mechanisms explicitly authored as type 1/2/3 retain their original sound choice, including the chapel lift.

The former forest `deur1_mc`–`deur12_mc` fallback was incorrect: all twelve are invisible area-control barriers with only zero-opacity `Air_Wtr01` faces, DoorType 4, and no touch/proximity activation. Walking through successive authored triggers opens and closes them, causing the reported repeated door snippets. These barriers are silent again; their callbacks and collision transitions still execute. The actual forest `knopdeur_l_mc`/`knopdeur_r_mc` gate panels retain their type-1 sound. Automatic door cues also require a non-hidden object and at least one visible non-sky brush surface when level geometry is available. This excludes faceless controllers and the graveyard's invisible `rc_fall_mc` cinematic carrier. Enabled/locked status is deliberately not used as a visibility test: real script-operated and secret doors retain their cues.

Authored `DoorBeforeOpenCommand`/`DoorBeforeCloseCommand` sounds take precedence over automatic sounds for that transition. The castle uses one shared `snd_OpenDoorSecret` EffectSound for several secret panels: explicitly enabling a non-looping sound now replays it even when its enabled flag was already set. Its editor position was unrelated to later invoking doors, so a shared non-3D door cue is located at the invoking panel for the castle's local mix. Both changes fix later silent doors without layering a second sample over their authored cue.

## Portal departure and arrival

Native TeleporterFX constructs `Magiev18.wav` at `0x4712b0` (resource `0x6b86f8`) and `Magiev1.wav` at `0x471400` (`0x6b86e8`). Its constructor stores them in sound slots 0 and 1 at `0x47215a`/`0x47216d`. The indexed sound player is `0x4763c0`: Show plays slot 0 at `0x4758fb`, and the final particle stage plays slot 1 at `0x475976`. These are distinct startup and terminal recordings. Native actor Hide/Show (`0x502680`/`0x502710`) do not themselves choose a sound.

The existing pad startup `Magiev18.wav` remains. A fresh scripted TeleporterFX.Show arms its terminal cue; the corresponding actual RedCat disappearance or reappearance emits `Magiev1.wav` once at that pad. This aligns the native terminal sample to the requested actor transition instead of duplicating startup audio. It does not recreate the native terminal sound's dynamic volume envelope.

Both the graveyard's source-pad Shows in trigger/button handlers and the tower's Shows inside controller motions are covered. There are six graveyard journeys (including the Easter-egg return) and five tower journeys. Repeated visibility calls do not create extra sounds. Saving between Show and the transition preserves the pending cue; skipping a cutscene suppresses it while completing the original teleport.

## Focused verification

Heart containers also use their distinct native `IHart.wav` pickup sample (`0x43d46e`), preserving the health-capacity reward rather than playing the large-health recording.

`node --test tests/world-action-sounds.test.mjs` checks seven cases: the exact threefold fairy curve in every level and independence from camera moves; collision contact on the original chapel button plus all native button types; native door samples and bounded type-4 fallbacks; two sequential shared secret-door callbacks without double playback; the heart-container cue; all eleven original portal journeys with sounds on the exact visibility-changing callback; and pending portal save/restore, ordinary visibility calls, and skip behavior.

`node tests/world-action-audio-scenes.mjs` checks real browser WAV loading and full media completion through the main event bridge for buttons, two successive shared secret doors and both portal transitions, plus the fairy loop's camera independence.

For the invisible-door regression, only the affected cases were run:

```sh
node --test --test-name-pattern='native door types|forest area crossings|door cues exclude|shared scripted door cues' tests/world-action-sounds.test.mjs
```

These cover the twelve silent forest controls, the original area-crossing callbacks, real door/chapel lift cues, hidden/faceless carriers and shared scripted secret-door sounds. No build was generated.
