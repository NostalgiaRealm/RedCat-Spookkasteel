# Intentional fixes, improvements and original-game findings

Reviewed against the project documentation and current source on **6 October
2026**. Here, **native** means the original Windows game. This catalog records
the current deliberate departures; validation/performance fixes were added
18–19 October 2026, and portable original-menu adaptations on 20 October 2026.
Superseded tuning and reverted experiments
are not instructions to restore old behavior. The linked feature notes provide
the original evidence, implementation details and their recorded checks.

There are three kinds of difference below: requested changes to the experience,
corrections to original content defects, and technical adaptations for a new
engine. A technical approximation with unresolved fidelity is identified as
such; it is not automatically a desired change to the original game.

Keep investigation output in named `temp_work/` subfolders. Retain useful
research, measurements and unique source evidence; disposable browser profiles,
copied saves, screenshots and duplicates were removed in the
[22 October cleanup](../temp_work/cleanup-2026-10-22/README.md). Its index
identifies retained evidence and canonical copies of deduplicated files.

## At a glance

- Automatic saving and recent recovery saves, overwrite warnings, cheats and
  permanent campaign progress.
- Recovery from geometry traps and the unfinished graveyard maze, corrected
  BIG BENG rewards, and damageable Max turret parts.
- Two-second cutscene skipping, protected dialogue, automatic replay tutorial
  skipping and one active Fleurifee encounter at a time.
- Adjusted environmental sound ranges, quieter Tower fire, clearer fairy audio,
  audible silent doors and complete audio playback.
- Flames following all moving hand torches, readable distant projectiles,
  reliable floor lighting and a camera that avoids RedCat's body near walls.
- Widescreen/resolution settings, touch/controller input, responsive menus and
  scoreboards, and bounded rendering/navigation/effect work.
- Portable original Help, per-player save export/import, retained advanced menu
  settings and a leaderboard that keeps each player's best result.

## Saving, access and recovery

| Change | Current behavior and reason | Detail |
| --- | --- | --- |
| Automatic saving | Save every 60 seconds of active play, alongside manual saves and checkpoints. This reduces progress lost after interruptions. | [Autosaves](autosave.md) |
| Preserve living saves | Reject new saves while RedCat has no health, preserving the latest living save and recovery history through death, menu/quit and player changes. Saving resumes after respawn; existing death-animation saves remain loadable. | [Autosaves](autosave.md), [focused evidence](../temp_work/death-save-2026-10-18/verified-fix.md) |
| Recovery history | Offer saves from approximately 2, 5 and 10 minutes of playing time ago. Retain at most eleven minute checkpoints; older ones are discarded. Paused/offline time does not age them. | [Recovery storage and retention](autosave.md#retention-and-storage) |
| Transient-state continuity | New saves retain smoke/flame pools, knight fragment physics, active WAV positions, dialogue queues, loop waits and crossfade progress. Loading continues these states instead of restarting them. This extends the port's save format; it is not a claim about the original RCR format. | [Effect continuity](effects-save-continuity.md), [audio continuity](audio-save-continuity.md) |
| Safer adventure replacement | The original **Avontuur → Startinfo** route continues an existing save. **Meer opties → Opnieuw beginnen** retains confirmation; **Snelspel** selects a chapter without replacing the save until **Level Spelen** is confirmed. Replacement occurs only after the new level loads successfully. | [Starting a new adventure](autosave.md#starting-a-new-adventure), [original menu](original-menu-native.md) |
| Export and import a player's save | **Spelerlijst → Exporteren** copies the selected player's primary save and permanent progress. **Importeren** validates that JSON backup and asks before replacing the selected player’s save, progress and gameplay options. Other players, shared settings and local recovery points remain. Browser, desktop and Android share the same format; native RCR files are unsupported. | [Save backups](save-export.md) |
| Optional cheats | A settings submenu fills mirror pieces and potions to their limits, adds 9000 points, unlocks all chapters, or enables free flight. Supplies do not collect actual level objects or complete their scripts. | [Cheat implementation](../source/cheats.js), [chapter access](campaign-menu-native.md) |
| Invulnerable no-clip | Free flight ignores all damage, including enemies, liquids, beams and scripted kills. Exiting inside geometry seeks a safe position; if none is available, flight and protection stay enabled. | [No-clip protection](player-protection-progress-and-local-audio.md#no-clip-protection) |
| Campaign ownership | Unlocks and earned abilities are stored separately from individual checkpoints. Earlier chapter replays and recovery loads retain them. A confirmed new adventure resets shooting upgrades, SuperSkippie and played-level history; chapter unlocks and preferences remain. | [Permanent abilities](player-protection-progress-and-local-audio.md#earned-abilities-across-chapter-replays), [replay history](replayed-level-intros-native.md#automatic-replay-policy-in-the-port) |
| Accessible final chapter | The original fifth-card handler has an additional, unexplained comparison. The port makes the Tower selectable once legitimately unlocked, without reproducing that restriction. | [Original chapter-menu evidence](campaign-menu-native.md#original-evidence) |
| Stuck-character recovery | RedCat and independently moving enemies try a small clear offset or a recently verified safe position after a sustained geometry wedge. Recovery checks support, hazards and the escape route. A bounded player-only search can also return from a narrow fall trap to an already reached higher safe position, as needed behind the Castle warehouse crates. Scripted doors/platforms/hazards are not relocated. | [Movement recovery](movement-recovery.md) |
| Graveyard maze reset | An unfinished moving-hedge maze resets its progression triggers, walls and door on respawn. The specific stranded entrance pattern in older saves is repaired on load. Completed mazes and unrelated progress stay intact. | [Maze recovery](graveyard-maze-recovery.md) |

The maze change fixes an original design trap: its one-use progression triggers
and hedge motions have no authored respawn reset. Re-entering after death could
leave both routes closed. The catalog does not assign a release version to this
fix because the source and separately generated packages can differ.

## Ability, combat and cutscene changes

### Corrected BIG BENG reward and starting skill

The cave `trigger_cuts04` asks `RcHasAllPotions(2)` but awards
`RcEnableSkill(4)`. Index 4 sets the unused power-move flag; it cannot enable
BIG BENG. The host changes this particular reward call to index 2 only in
`lvl03a`, during that trigger's `CommandOnEnter`. The original potion gate and
`cutscene04a`/`cutscene04b` choice still execute. Index 4 elsewhere keeps its
original bit-16 mapping.

The original Caves `StandardSkill=7` also includes BIG BENG before this encounter.
Fresh Caves construction removes that default super-shot bit, making the fairy
reward meaningful. Campaign carry and restored legitimate ownership still
apply. Ambiguous old saves retain their stored skills rather than having an
upgrade revoked. See [player abilities](player-abilities-native.md#fairy-rewards).

| Change | Current behavior and fidelity boundary | Detail |
| --- | --- | --- |
| SuperSkippie animation integration | A successful boost immediately restarts `jump2`. The port consumes the slowdown latch on that selection and allows one boost per flight. Original state reuse could retain that latch longer; the immediate animation and guard are explicit adaptations. | [Movement/boost evidence](player-movement-native.md), [SuperSkippie input](player-abilities-native.md#superskippie-input-and-movement) |
| Damageable Dungeon Max vehicle | Hits on the bottom, crate and animated lid all damage Max. The original lid disables shot collision; including it is the requested playability change. The assembly retains player collision and ignores Max's own shots. | [Boss fidelity limits](boss-phases-native.md#fidelity-limits), [vehicle hits](enemy-ambush-flight.md) |
| Hold-to-skip dialogue | Hold E, the touch skip control or the controller equivalent for two seconds, with an **Overslaan** progress circle. Fast-forward completes the remaining authored callbacks and rewards. Release/pause resets an incomplete hold. | [Skip control](hud-targeting-cutscene-skip.md#requested-new-skip-control), [controller support](controller-support.md) |
| Fairy cleanup when skipping | Successful skip removes the participating fairies, particles, trails and audio, including fairies enabled by intervening callbacks. Future encounters remain available. | [Skip lifecycle](fairy-skip-audio-2026-09-22.md) |
| Protected dialogue and completed levels | RedCat is invulnerable during cutscenes and the pending level-completion wait. During dialogue he returns to idle, pending attacks/charges are cancelled, and defeated enemies finish their death/fade/smoke sequence while living combatants stay frozen. This explicitly prevents a post-boss conversation becoming a death trap. | [Cutscene completion](enemy-combat-effects-native.md), [health/completion protection](debriefing-and-hearts-native.md), [damage gate](../source/gameplay.js) |
| Automatic replay policy | Visiting a previously played chapter selects the original connected quick-play tutorial branches through the existing chapter menu. The restored **Avontuur/Snelspel** menu routes share one campaign/save system rather than independent game modes; visited-level history determines replay behavior. Eight Forest and two Graveyard tutorials are skipped; required rewards, bosses and exits remain. | [Replay branches](replayed-level-intros-native.md) |
| Exclusive Fleurifee encounters | Fresh levels keep fairies dormant until an encounter enables them, overriding two originally enabled later-encounter entities. Enabling another fairy retires the previous one. This enforces the requested single active encounter; legacy multiple-fairy saves are resolved using the saved player position. | [Fairy identity and activation](fairy-dialogue-pickup-lifecycle.md#wrong-fairy-identities) |

### Native parity corrections (27–28 October 2026)

At the user's request, these former port behaviours now follow the original
game. They are no longer intentional departures:

- the 0.65 s damage immunity;
- the life deducted at the fatal hit;
- the “Deze deur zit op slot.” toast (D3);
- press-only jumping (D2);
- the port's 22×56 player box (D1);
- the port's camera framing and camera solver (D5; rebuilt from the original on 28 October, see [native camera](native-camera.md); direct mouse/touch look, first person and the wall lift remain as requested extras);
- the camera trigger edge cases (D8);
- MultiplyVolume carrying over to a new track (D9).

The guardian Easy repair (D4) stays a content correction. The retry screen
(D6), the unreachable script APIs (D7) and the per-frame sight check (D10)
remain documented differences. See
[the parity review](claude-native-parity-review.md).

## Audio choices

Original recordings, per-file gains and recovered attenuation arithmetic remain
the basis of the mix. The following range and scheduling choices are deliberate;
future native-effect work should preserve them.

### Environmental hearing ranges

| Scope | Current choice | Difference from native |
| --- | --- | --- |
| Normal distance curve in all five levels | Full-distance-gain radius **175.5 m**, maximum-distance factor **150**. | The original chapter radius is 50 m. Later requested increases expand hearing in every chapter; more specific policies below take priority. |
| Het Kasteel positioned effects | Full gain to **17.55 m**, smooth fade to silence at **87.75 m**. | Localizes boulders, lifts and other positioned sounds, including original non-3D EffectSounds with positions. |
| De Grotten spatial repeating effects | Full gain to **17.55 m**, smooth fade to silence at **105.3 m**. | Waterfalls, flowing water, wind, turbines, lava, rocks, machinery, torch and delayed repeating sounds are heard near their section instead of across the level. |
| Tower fire `LV4snd16.wav` | Gain multiplier **0.65**, fade from **10.53 to 63.18 m**. | Quiets/localizes nine torch emitters and the cauldron fire. The separately authored bubbles sound is unaffected by this specific rule. |
| Active fairy `idlefee1.wav` | Distance curve expanded **3×**; use RedCat as listener and bypass camera-PVS muting. | Keeps the active fairy audible when a cutscene moves the camera away. Castle range becomes **52.65–263.25 m**; Caves becomes **52.65–315.9 m**. Other chapters scale their configured curve. |

Distances use 32 original world units per metre. Current values are checked in
[ambience-ranges.js](../source/ambience-ranges.js) and
[audio-settings.js](../source/audio-settings.js). The initial 5–30 m Cave range,
5–25 m Castle range and 3–18 m Tower-fire range are historical values, not the
present settings. Sources: [Cave ambience](cave-ambience-range.md),
[Castle/Tower local audio](player-protection-progress-and-local-audio.md#deliberately-shorter-sound-ranges),
[fairy distance](world-action-audio.md#fairy-distance) and [current mix](audio.md).

### Cues and playback scheduling

| Choice | Current behavior and original evidence | Detail |
| --- | --- | --- |
| Audible originally silent door panels | Selected visible DoorType-4 panels use original normal/secret door recordings, despite native type 4 selecting `empty.wav`. Invisible area barriers, faceless carriers, hedges and other mechanisms stay excluded. | [Door fallback](world-action-audio.md#buttons-and-doors), [selector](../source/door-audio.js) |
| Shared secret-door source placement | Castle's shared non-3D secret-door cue is located at the invoking panel for the localized mix. Its editor position is unrelated to some later doors. | [Shared scripted door cues](world-action-audio.md#buttons-and-doors) |
| Combat music on accepted attack | A valid targeted enemy contributes to combat music immediately when the attack starts, before the pellet hits. Actual hits separately refresh the recovered native awareness. Native evidence establishes hit memory, but does not establish music onset before impact. Since the D9 correction, a track started this way begins at full gain and discards an earlier MultiplyVolume ([parity review](claude-native-parity-review.md#d9)). | [Knight music timing](knight-attack-music.md#starting-music-when-an-attack-begins) |
| User-selected fairy cue | Appearance uses `gri5fx11.wav` once, active idle loops `idlefee1.wav`, and ordinary disappearance uses `magiev12.wav` once. The appearance assignment follows the user's corrected choice; the recordings themselves are original assets. | [Fairy sound selection](fairy-skip-audio-2026-09-22.md) |
| Complete speech and pickup tails | Queue dialogue by actual playback completion, wait for it at natural scene end, and wait for pickup/voice tails before the level overview. Pause/resume preserves all active audio positions. This is the portable scheduling guarantee for uninterrupted recordings, not a claim about identical native decoder internals. | [Dialogue/pickup lifetime](fairy-dialogue-pickup-lifecycle.md), [completion wait](player-protection-progress-and-local-audio.md#focused-verification) |
| Music continuity | Loop the complete decoded track and resume its in-session playhead after combat instead of restarting every return to ambient music. Reuse/reverse an outgoing fade to avoid duplicate voices. Explicit stops and level resets clear remembered positions. | [Music loops and continuity](audio.md#complete-music-loops-and-encounter-continuity) |
| Portal terminal cue alignment | Play original `Magiev1.wav` at the actual disappearance and reappearance associated with a pad's pending sequence, once per transition. Native code selects it at the terminal visual stage; the port aligns it to the requested actor transition, with that stage as fallback. | [Portal transitions](world-action-audio.md#portal-departure-and-arrival), [portal audio](portal-audio-native.md) |
| Audio query budget and outside-map fallback | Cache sound visibility/obstruction checks at 10 Hz or after significant movement. A no-clip camera outside valid map visibility retains distance/pan audibility. | [Spatial audio](audio.md) |
| Explicit browser-player cleanup | Unload completed/stopped HTML audio at existing release points instead of relying on garbage collection. Buffered pickup tails, active playback, pause/resume and deliberate music scheduling are preserved. This is a browser resource-lifetime fix, not a native timing change. | [Audio lifetime evidence](audio-media-lifetime.md) |

## Presentation, controls and menus

| Change | Current behavior | Detail |
| --- | --- | --- |
| Modern display options | Widescreen, ultrawide and HD/4K resolution selection, automatic window sizing and a stored fullscreen preference. Fullscreen defaults on; browsers request it on an eligible user gesture. Original movies keep their 4:3 framing. | [README display overview](../README.md#modern-controls-saving-and-performance), [startup/fullscreen](startup-behavior.md) |
| Modern input | Camera-relative keyboard/mouse controls, touch overlays with automatic mobile detection and an off switch, and standard-mapped controllers for gameplay/menus. Touch labels use **Schieten**; redundant Gebruik/Meer save-load controls are removed because contact controls and Menu cover them. | [Movement adaptations](player-movement-native.md#scope), [touch controls](touch-controls.md), [controllers](controller-support.md) |
| Camera protection near walls | The camera follows the original logic ([native camera](native-camera.md)). The additions: when RedCat backs into a wall and the native pull-in would leave the camera inside his model, it rises along an arc over him; under a low ceiling it takes a clear side or front view instead, and only with no external view at all is his model hidden for that frame. Authored fixed cameras still own their timer and cannot be cancelled by look input. | [Native camera](native-camera.md), [wall lift](../source/third-person-camera.js) |
| Direct look and first person | The original has no mouse-look or first-person view. Mouse, touch-drag and right-stick look turn RedCat and the camera together at once, without the native smoothing, as in release 1.0.4; keyboard steering keeps the native follow camera. The first-person toggle remains. | [Native camera](native-camera.md#port-behaviour-and-extras) |
| Full-screen level overview | Stretch the original background to fill any window, including portrait displays, while keeping text/icons proportional. Use **KLIK/TIK hier om verder te gaan** on every device instead of the original shooting prompt. | [Responsive overview](touch-controls.md), [renderer](../source/debriefing.js) |
| Updated menu/help/About | A modern responsive HTML interface hosts display/input settings, cheats, recovery saves and **Over** with project version, donations and website/YouTube links. Requested promotional/development text and the redundant gameplay II overlay/menu Afsluiten button are removed. | [Menu markup](../index.html), [menu source](../source/main.js), [historical UI cleanup](native-parity-audit.md#historical-audit-changes-and-checks-23-september) |
| First-time control hints | Desktop and touch help appear once for ten seconds after the first Forest opening camera/cutscene returns control. Each input hint is remembered independently across restarts; controller use changes the desktop hint text. | [First-time startup help](startup-behavior.md) |
| Browser intro fallback | Attempt audible intro autoplay, then muted autoplay with **Geluid inschakelen** if blocked. A playback button remains when the browser blocks both. This accommodates browser policy without restarting the movie to unmute. | [Intro playback](startup-behavior.md) |
| Distant projectile readability | Small shots grow toward 24 pixels and ribbons toward 6 pixels at 1080-pixel viewport height, capped at 2.5× native size. Close shots retain native dimensions. Collision, damage, flight and timing do not grow with the artwork. | [Projectile visibility](projectile-visibility.md#deliberate-visibility-improvement) |
| All moving hand torches lit | Add the 16 missing flames and attach flame/light to all 32 moving hand tips. Reuse existing original artwork/emitters. The 95 already-lit stationary torches retain their stationary behavior. | [Torch inventory and attachment](torch-flames.md), [preserved emitter enhancement](spout-effects-native.md#preserved-intentional-torch-behavior) |
| Opaque Graveyard wall trim | Seal two narrow structural wall faces beside the descending passage that reuse the transparent gate bitmap. Keep their original geometry and palette colors, while retaining actual gate and foliage cutouts. This is a scoped content repair, not a claim of identical original renderer behavior. | [Wall transparency evidence and correction](graveyard-wall-transparency.md) |
| Deterministic actor-lighting recovery | Retry valid floor lighting when authored shifts invalidate native samples; permit bounded local probes for verified buried origins. Clamp out-of-range luxels and avoid inherited ambient from the previous actor or mutable unrelated trace masks. | [Floor-light safeguards](actor-floor-lighting-native.md), [actor lighting](actor-lighting-native.md) |

Lighting recovery covers the hand-torch sampling failures, all 60 Forest corner
trees, nine affected Castle trees and 37 additional buried-origin actors: 22
Tower candlesticks, four Graveyard markers and one bench, and ten Castle standing
knights. It preserves valid darkness, authored placement and collision. The
probes are a deterministic compatibility repair; they are not recovered native
probe locations. See [buried-origin audit](actor-floor-lighting-native.md#audit-of-other-buried-origins).

## Engine and performance adaptations

These are documented implementation choices needed for the portable engine.
They can cause small differences, so they must not be described as exact native
simulation. Normal levels, scripts and gameplay should remain active while work
is bounded.

| Adaptation | Behavior and boundary | Detail |
| --- | --- | --- |
| Graphics streaming | Admit the current room and immediate doorway neighbors, plus farther views through aligned open doors. Reject unrelated nearby floors/rooms before requesting graphics. Near preparation remains 576 world units and drawing is bounded to 2048 units. Preparation also measures from a predicted travel position, at most 0.4 seconds / 192 units ahead, to finish before crossing the draw boundary; this is a directional strip, not a larger radius everywhere. Unused eligible sections beyond 1152 units have a twelve-second return-turn window. Background preparation completes admitted open-connected rooms, keeping previously admitted rooms for up to twelve seconds with the same anchor and open connection; this never widens drawing. Other rejected world rooms unload immediately. New room-image owners acquire before departed owners release, preserving shared pending decodes. Authored remote cameras retain their own view and large rooms stay whole. Native chapter loading and draw-demand driver texture caching do not provide an equivalent camera-distance eviction path in the inspected code, so this requested adaptation is retained. CPU collision, scripts and offscreen AI remain available; uncached views hold simulation/saving until ready. Audio continues during brief waits and pauses only when the 250 ms loading overlay appears. Native per-face PVS rejection remains; raw PVS area flooding stays conservative. | [World streaming](world-streaming.md), [room-aware policy](room-aware-streaming.md), [lantern-turn continuity](room-loading-hitches.md#forest-lantern-camera-turn-follow-up), [forward-walking continuity](room-loading-hitches.md#forward-walking-range-boundary-follow-up), [native loading/cache investigation](native-asset-loading-and-camera-visibility.md) |
| Bounded navigation | Pursuit searches are spread across frames with shared trace limits and cached failures/edges. Patrols use their authored edges directly. Body-clearance, bat separation/detours and arbitrary-position route endpoints use reconstructed safeguards. | [Navigation performance](graveyard-performance-regression.md), [waypoint movement](enemy-waypoint-movement.md), [bat collision boundary](bat-native.md) |
| Bounded graphics preparation | Share a three-job/1.5 ms preparation allowance across room geometry and actor/world textures, checking time between indivisible jobs. Prepare GPU storage before exposure and compile shaders under the level-loading screen. Camera-turn and bounded travel prefetch preserve room admission and drawing distance. Cold cuts can still hold the last complete frame while new artwork prepares. | [Room-loading hitches](room-loading-hitches.md) |
| Light and corona budgets | Select at most eight active world-surface lights and cache shadow rays. Corona visibility performs at most eight traces per update and refreshes an individual check no faster than 100 ms; halo radius still animates every frame. These budgets can differ from native light counts/query timing. | [World-light budget](world-light-falloff-research.md), [corona sampling](presentation-native-recovery.md#corona-visibility-and-fading) |
| Stable effect clocks and RNG | Portal/Fleurifee/spout effects, enemy death smoke, Jester teleport swirls and beacon UV movement use fixed visual steps rather than display-dependent updates. Saved/local random streams preserve repeatable effects and enemy choices but do not reproduce the original process-wide random sequence. Ordinary death smoke and Jester teleport swirls now follow recovered native update ordering on that fixed clock; pickup/score envelopes retain their documented continuous approximation. | [Portal timing](portal-native-recovery.md#timing-saves-and-renderer-boundaries), [spout differences](spout-effects-native.md#portable-implementation-and-verification), [beacon clock](presentation-native-recovery.md#save-beacon-texture-movement), [enemy death smoke](enemy-death-effects-native.md) |
| Stable projectile flight | Recovered accelerate/cap/gravity-before-motion and post-motion homing run on a canonical 60 Hz flight clock with smooth partial movement. Player acceleration is summed in constant work. Enemy curved flight consumes at most 100 ms / seven segments per update; exceptional larger direct calls retain validated saved time debt. Normal game updates already stay within 100 ms. Straight gravity-free shots retain one sweep. This preserves refresh-independent gameplay and bounded CPU work rather than recreating native variable-frame artifacts. | [Player flight](player-projectiles-native.md), [enemy flight](native-enemy-projectile-flight.md) |
| Collision/numerical safeguards | Portable hull/mesh sweeps replace Genesis collision. Debris can escape a shallow initial overlap within a bounded distance; malformed explosion counts are capped. A vertical spout-view basis gets a finite fallback instead of a zero cross product. | [Moving-solid limits](moving-solid-collision.md), [debris boundaries](debris-native-recovery.md#portable-boundaries), [spout differences](spout-effects-native.md#portable-implementation-and-verification) |
| Display refresh and automatic mobile quality | Render through the display-synchronized browser frame loop. The Linux launcher removes an inherited MangoHud cap unless a launch-specific cap was supplied. The Android wrapper has its own automatic rendering-size budget; explicit resolution selection remains available. | [Refresh investigation](native-refresh-performance.md), [Android adapter](../source/android-host.js), [Android setup](../ANDROID.md) |

Remaining fidelity gaps are tracked in [the native audit](native-parity-audit.md),
rather than promoted to intentional design goals. Portable collision tolerances,
global random sequencing and hardware audio timing still have boundaries.
Cross-clip blending and knight
armour's native particle rules are now implemented. Fresh skeletons retain a
settled pile on initial loading instead of visibly reversing from a standing
pose; subsequent wake and settling transitions use the recovered motions
([lifecycle details](enemy-lifecycles-native.md)).
Current portal, Fleurifee and smoke/flame snapshots preserve their particle
state, and knight fragments and audio now retain their live state too. Original
Windows RCR save import and additional platform validation remain separate work.

## Portable original menu and Help

The original menu artwork, page flow, button sounds and Dutch help content
are restored. The following adaptations deliberately remain:

- **Geavanceerd** contains resolution, render scale and selectable MSAA
  (Uit/2x/4x/8x, subject to device support). Other added options
  remain under **Meer instellingen**, below the music slider. Automatic
  touch/controller support and the gameplay touch Menu button remain available.
- Original 800×600 screens scale on wide displays and reflow on narrow portrait
  displays, so controls stay accessible.
- Windows Help/Microsoft Agent is replaced by a searchable in-game viewer
  containing the original 38 Dutch topics. Six native crosslinks are retained;
  two malformed original links are repaired. Old hardware-specific instructions
  remain identifiable as original text.
- Keyboard remapping exposes eleven actions instead of the original seven.
  Quality presets use 50%, 75% and 100% rendering scale; these are portable
  mappings, not recovered DirectDraw device settings.
- Highscores retain one best entry per player and their actual chapter,
  avoiding repeated duplicate entries and the original misleading **Klaar!**
  label on older entries.
- Player saves, recent recovery saves, restart safeguards and save export/import
  remain available alongside the original menu routes.

See [native menu evidence and verification](original-menu-native.md) and
[save export](save-export.md). None of these changes adds another campaign
save mode or changes the intentional gameplay audio scheduling.

## Interesting findings: power-move and green crates

The original has a **power-move flag**, but no confirmed playable input,
animation or consuming action was recovered in the examined build. The main
port preserves the flag without inventing a crate-shoving mechanic. The separate
local `RC_SHOVE_TEST` investigation is not part of the campaign or its packages.

It is tempting to associate the flag with the Castle's green crates, but that
association remains an inference. The shipped level moves three crate groups
through a wall button and scripted paths. Conflicting tutorial text suggests an
older design; it does not establish a working shove action.

### Language file evidence

Both `LanguageIT.ini` (line 288) and `LanguageEN.ini` (line 312) contain this
Dutch line describing walking into crates:

```ini
FLGen34=	Wat heeft Grizella hier een zooitje gemaakt! Je zult wat moeten wegduwen voordat je er door kunt. Je kunt de groene kistjes verplaatsen door er tegenaan te lopen.
```

The active `LanguageNL.ini` (line 353) describes pressing a button:

```ini
FLGen34=Wat heeft Grizella hier een zooitje gemaakt! Je zult wat moeten wegduwen voordat je er door kunt. Je kunt de groene kistjes verplaatsen door op een knop te drukken.
```

The crate groups `crates01`, `crates02` and `crates03` are moving DoorModels,
with `TouchToOpen=0` and `TriggerRadius=0`. The wall button
`knopstoragecrates01` has `TouchToSwitch=1`, and its callback opens those groups.
This is the verified usable mechanism.

### Executable evidence

The addresses in this finding refer to the installed **`RcHcGame.dat`**, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
The previous `RcHcSpel.dat` heading was an incorrect reference for these addresses.

The native `RcEnableSkill` wrapper at `0x56b190` calls `0x436ea0`. Its jump table
maps indices 0, 1, 2, 3, 4 to masks 1, 2, 4, 8, 16: ordinary shot, power shot,
super shot, super jump and power-move. Settings include `ReqPotionPowerMove`.
Granting mask 16 stores a capability; it does not itself move anything.

The identified gameplay callers of bit-test helper `0x439f10` check shooting
bits 4 and 2 (`0x434e54`, `0x434e68`) and jump bit 8 (`0x435ae4`); its other
direct callers are debug checks. The inspected full-mask getter `0x439f30`
callers use shooting/aiming paths. Input/actor definitions expose no identified
shove input or clip. This bounds the conclusion to **no working power-move
recovered in this build**, not proof of absence from every possible binary path
or game release.

See [the corrected shove finding](player-reactions-and-projectile-contact-native.md#correction-to-the-earlier-shove-finding)
and [the original-build reference notes](native-reference-builds.md).

## Scope of this catalog

Restoring original water, portraits, heart pickup rules, contact buttons,
projectile artwork, sound selections, enemy activation, sky textures and authored
light shadows is native reconstruction or regression repair. Those features
are not new departures merely because the remake initially lacked them.
Likewise, the unused mushroom `TrailDamage` field and removed invented enemy
smoke trails are corrected research findings, not invitations to add mechanics.

This catalog summarizes source changes and their linked evidence; it does not
establish that a release package has been rebuilt or deployed. Each feature's
notes state the focused checks performed and any remaining validation limits.
