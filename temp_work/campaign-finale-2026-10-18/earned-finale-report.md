# Earned Caves finale and complete Tower — 18 October 2026

This continues the same earned Forest → Castle → Graveyard → Caves campaign
handed over by the parent after all four Caves altars. No save import, position,
inventory, health, enemy-health or puzzle-state assignment was made in this
handoff. Movement, camera aiming, jumps, attacks, saves, reloads and recovery used
the normal entry points. The source browser used manually advanced game frames;
video playback used real wall time. No build or package validation was performed.

All evidence below is retained in
`../campaign-validation-2026-10-15/playthrough-1792088801065/`. Every command is
also retained in that directory's `live-commands.jsonl`; responses are in the
parent directory's `resume-responses-2026-10-18.jsonl`. Failed attempts are kept.
The temporary `guarded-stages.js` helpers are navigation aids, not game fixes.

## Caves finale

The Fire handoff was alive at [352.45,-15.95,823.99], health 5/max 12, lives 5,
46 potions, skill 11, mirror 3, score 9390, kills 85, coins 137, secrets 7. The actual
`unlock_max` count was 4. The fairy naturally granted BIGBENG (skill 11→15), after
one ordinary potion pickup (47 total). Max was reached over the first lava gap
using the already earned SuperSkippie jump. A normal full-health pickup restored
health 5→12. Three charged projectiles defeated Max (11→7→3→0); interruptions
during the final charge cost 2 health. Another normal pickup restored health 12.

The second ordinary jump landed safely at approximately [0,-20.95,-2877.15].
The helper's destination overshoot guard fired, but grounded contact, unchanged
health and the subsequent walk prove that this was a helper assertion, not a
fall or game failure. The fourth mirror was physically collected and the exit
trigger produced the real Caves debrief:

- 47/50 potions; 16/64 money; 38/42 enemies; 4/4 secrets.
- Bonus 1575; score 9715→11290; health 12/max 12, lives 5, mirror 4, skill 15.
- No death, recovery or reload occurred in the Caves finale handoff.

Route refinements from this actual replay: approach the final hub doors at
[0,800]→[0,500] before asking the read-only floor planner for the fairy route.
Those proximity doors were initially closed even though the altars had unlocked
them. For Max, use [-100,-1180]→[-10,-1180]→[-10,-1500] rather than a diagonal
from [-100,-1200], which runs into the gate wall. A fairy's skill change can
precede the queued cutscene by a frame; wait for the scene to start and finish.
An immediate Enter at the new debrief was ignored during its animation; after
240 normal frames the actual continue button loaded Tower.

Evidence: `earned-finale-handoff-2026-10-18.json`, `earned-bigbeng-2026-10-18.json`,
`earned-max-gap-2026-10-18.json`, `earned-max-shot1-2026-10-18.json`,
`earned-max-defeated-2026-10-18.json`, `earned-caves-mirror4-2026-10-18.json`,
`earned-caves-completed-2026-10-18.json` and their living-save/screenshot exports.

## Tower traversal and both bonus rooms

Normal chapter progression loaded Tower at [-227,-3919.95,-454] with the above
earned inventory. The introduction, base combat and entire spiral staircase
were physically traversed. The four staircase health pickups were reached at
approximately [-333,523] y-3808, [-553,-111] y-3691, [2,-516] y-3576 and
[547,-111] y-3472. The portal at [367,600] y-3354 transported the player normally
to the upper hall. The [0,931] checkpoint was touched and retained.

Both upper side portals, every bonus pickup and both return portals were then
used in this earned campaign. All 32 pickups are collected: one heart container,
one extra life, eight health pickups and 22 money bags. The heart container raised
maximum health 12→14; the bonus life raised lives 4→5 after the earlier base death.
All four portal trigger counts were 1. No damage, death or reload occurred during
either bonus loop. The resulting state was health 14/max 14, lives 5, score 12700,
coins 377, kills 88, mirror 4, skill 15; these bonus rooms do not count as secrets.

Evidence: `earned-tower-entry-2026-10-18.json`, `earned-tower-ascent-2026-10-18.json`,
`earned-tower-upper-save-2026-10-18.json`, `earned-tower-bonus-A-2026-10-18.json`,
`earned-tower-bonus-B-2026-10-18.json`, `earned-tower-bonus-proof-2026-10-18.json`,
`earned-tower-bonuses-save-2026-10-18.json` and the upper/return screenshots.

## Every Tower failure and recovery boundary

1. The initial introduction exceeded a helper's 2400-frame deadline while the
   actual cutscene continued. More normal dialogue input completed it without
   health loss. This was a helper timeout.
2. A charge helper aimed at guard01 while autoaim had bat01 locked. Its strict
   target condition prevented release and health fell 12→4. Ordinary F9 restored
   the retained living introduction save (health 12/lives 5). This was one living
   save reload, not a death. `earned-tower-first-combat-stall-2026-10-18.json`.
3. **First actual death:** subsequent base combat reduced health 12→0 and
   lives 5→4. Guard01 died at that boundary; bat01 remained at about 3.089 health.
   The normal checkpoint respawn retained the defeated guard. Walking back and
   releasing a charged shot killed bat01. `earned-tower-base-combat-2026-10-18.json`
   and `earned-tower-checkpoint-bat-2026-10-18.json` preserve the sequence.
4. **Second actual death:** the mirror helper incorrectly waited for mirror 5
   after the introduction; the fifth piece is a physical pickup at [-484,226],
   not an introduction reward. Stationary waiting after the scene ended let
   enemies kill the player (health 14→0, lives 5→4). Normal upper-checkpoint respawn
   restored health 14 and preserved the earned bonus pickups.
   `earned-tower-intro-wait-death-2026-10-18.json`.
5. On the following attempt, first-stand contact had already advanced its count,
   but the helper kept chasing a 10-unit destination tolerance which collision
   prevented. Health fell 14→2 while stalled. The rest of that mirror circuit
   accepted all five stands without further damage. Its final scene also exceeded
   an overly short helper deadline. The state and recovery choices are retained
   in `earned-tower-mirror-low-health-2026-10-18.json`.
6. The actual pause recovery UI loaded its 2-minute choice, a normal health 14/
   lives 5 save at the bonus B return with all 32 pickups already collected. This
   was **one recovery selection**, with no JSON import. It restored a state from
   before the second death; that does not erase the death from this report.
   `earned-tower-mirror-recovery-2026-10-18.json`.
7. Correcting only the temporary helper's wait condition and movement tolerance
   allowed the full mirror circuit to pass without damage. It physically collected
   mirror 5, accepted all five stands and completed the Witch introduction.

Totals before the Witch: **two actual deaths and two natural checkpoint respawns,
one F9 living-save reload, one normal 2-minute recovery selection**. Final lives 5
reflects the earned bonus life and recovery, not an absence of deaths. The bad
wait/tolerance conditions were test-helper errors; the base death was an actual
unsuccessful combat attempt. These are not presented as game-source defects.

## Witch, authored ending and debrief

The corrected mirror route uses 12-unit tolerances and trusts the already accepted
stand count rather than repeatedly pushing into its collision. The fifth mirror
is collected at [-484,226]. All five stand counts reached 1 and `witch_enable`
reached 5 with full health 14. The resulting legitimate pre-Witch F5 save is
`earned-tower-pre-witch-save-2026-10-18.json`; count/state/screenshot proof is
`earned-tower-five-mirrors-2026-10-18.json` and its PNG.

The first stationary charge wait ended during the Witch's long flight phase and
cost 2 health. The follow-up kept normal target aiming and alternating A/D strafe,
then released each full charge during her actual `shoot` phase. Two 4-damage
projectiles defeated her (8→4→0), with health 12 preserved through both shots.
There was no Witch death or reload. The failed wait and successful shots are all
retained in `earned-witch-first-charge-condition-2026-10-18.json`,
`earned-witch-observed-shot1-2026-10-18.json` and
`earned-witch-defeat-2026-10-18.json`/PNG.

No keys were held and no scene skip was sent during the entire final authored
sequence. From the recorded defeated state at game time 317.062 to the actual
debrief at 382.712, the sequence ran for about 65.65 game seconds. It produced
`completed:true`, with script errors[], VM error null and unsupported commands[].
Tower debrief: 0/0 potions, 22/27 money, 3/11 enemies, 0/0 secrets; bonus 375 and final
score 13150. Final player: health 12/max 14, lives 5, mirror 5, skill 15, coins 377,
kills 89, secrets 7, no-clip false. Evidence:
`earned-ending-midpoint-2026-10-18.json`/PNG,
`earned-ending-complete-2026-10-18.json`,
`earned-tower-completed-save-2026-10-18.json` and
`earned-tower-debrief-2026-10-18.png`.

## Outro observation

The first actual debrief-button transition failed before media metadata or
playback: Chrome reported `MEDIA_ELEMENT_ERROR: Player load failure: error
creating media player` at time 0. The game displayed its media error screen.
The correct `outronl.webm` URL was requested. This failure is retained in
`earned-outro-start-2026-10-18.json`/PNG and
`earned-outro-load-failure-2026-10-18.json`.

An ordinary browser reload followed by Continue restored the completed Tower
debrief, with the same player and score and no bonus awarded twice. The actual
continue button then started the same outro normally: metadata duration 55.047s
and native `playing` were observed. This is one additional browser reload after
completion, distinct from gameplay deaths/recovery. No asset/source change or
save import was used. `earned-outro-retry-start-2026-10-18.json`/PNG retains the
successful start. The long-session startup failure must remain visible alongside
the final playback result; its underlying cause is not established here.

The retry ran unskipped to its native 55.047-second end: the retained event log
records `playing`, `pause` at 55.047, then `ended` and mode `menu`. The application's
normal completion handler clears the video source before the diagnostic listener
runs, so its final element fields reset to time 0/duration null/ended false; the
native event and preceding full-duration pause remain in the evidence. Final
`menuVisible:true`, `completed:true`, no fatal error, no-clip false, script
errors[], VM null and unsupported[] are recorded in
`earned-outro-complete-2026-10-18.json`. The final retained save and screenshot
are `earned-campaign-completed-save-2026-10-18.json` and
`earned-campaign-menu-2026-10-18.png`. This is live command 531. API 4511 control
was released to the parent at the menu, with no further game actions planned.

The five-level earned campaign therefore reached its full game ending and menu,
with the stated ordinary recovery/reload boundaries. It is not a deathless run,
a 100-percent collectible/enemy sweep, target-package validation or a new
frame-for-frame comparison with the original executable. All 13 authored secret
objects have separate physical route evidence, but the final earned save has 7
secrets; the fixture/continuation checks must not be represented as 13 collected
in this campaign.
