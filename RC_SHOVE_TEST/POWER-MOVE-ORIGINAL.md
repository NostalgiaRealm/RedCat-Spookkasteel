# The original RedCat power-move investigation

Investigation date: 5 October 2026.

The installed original game contains a setting and a skill flag for a
**power-move**, but this investigation did not recover a working player action
attached to them. The green crates examined in Het Kasteel move through a
button and scripted animation paths. They do not establish that RedCat could
push crates using this skill.

My earlier description of a confirmed original “shove action” was too strong.
I had treated evidence that the game could store a capability as evidence that
it implemented the action. Following the executable code, inputs, animations,
and level commands did not support that conclusion. The accurate finding is
**“no working power-move was recovered in the examined build,”** rather than
“every possible implementation has been proven absent.”

The investigation used the installed `RcHcGame.dat`, original settings files,
RedCat's actor data, and the original castle BSP. It is primarily an examination
of executable code and authored game data, not a claim that every possible
input combination was tried in a running original game. The executable's
SHA-256 is:

```text
e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5
```

Addresses below are virtual addresses in that executable. They are not file
offsets or guarantees about other releases. Source hashes and extracted records
are retained in [native-evidence.json](docs/native-evidence.json) and the
[detailed investigation](docs/native-shove-investigation.md).

**The flag is real; granting it only changes stored state.**

`Settings/Game.ini` contains `ReqPotionPowerMove=0`. The native skill routine
at `0x436ea0` maps script skill indices to the following bit masks:

| Script index | Mask | Associated capability |
| --- | --- | --- |
| 0 | `1` / `0x01` | Ordinary shot |
| 1 | `2` / `0x02` | Power shot |
| 2 | `4` / `0x04` | Super shot |
| 3 | `8` / `0x08` | Super jump |
| 4 | `16` / `0x10` | Power-move flag |

The index-4 branch at `0x436f14` supplies `0x10` to the grant helper at
`0x439ee0`. That helper ORs the mask into an object field at offset `+0x68`.
Its relevant operation is equivalent to `skills |= 0x10`: it records a bit.
It does not itself start an animation, move RedCat, select a crate, or apply
force to an object. A potion requirement of zero also does not create those
missing operations.

**The recovered gameplay checks do not activate a power-move.**

The skill-test helper at `0x439f10` has seven identified direct callers:

| Caller addresses | Masks checked | Recovered use |
| --- | --- | --- |
| `0x434e54`, `0x434e68` | `4`, `2` | Shot selection |
| `0x435ae4` | `8` | Super-jump eligibility |
| `0x4c6e00`, `0x4c6e5d`, `0x4c6ebd`, `0x4c6f1d` | `4`, `8`, `2`, `1` | Debug skill cycling |

None of those direct calls tests mask `16`. The debug code can clear that
flag, but clearing a flag is not a playable action. The two identified direct
callers of the full-mask getter at `0x439f30` were also examined; they did not
reveal a dedicated power-move behavior. A generic test of whether any skill bit
is set must not be mistaken for a specific shove implementation.

This is a finding about the recovered paths. Direct-call inspection cannot
by itself rule out every indirect call, inline bit test, or unrelated mechanism
elsewhere in the binary. The claim is therefore limited to what was found.

**The shipped input and animation definitions provide no matching action.**

The configured list of 30 input actions in `Settings/Game.ini`, and the default
bindings in `Settings/PlayerDef.ini`, include firing, jumping, walking, movement,
weapon selection, and camera/menu controls. Neither contains an identified
shove or power-move action or binding. The lab's Q binding does not come from
these files. See the [original settings excerpts](docs/original-settings-excerpts.txt).

The verified RedCat actor has 16 named animation clips, covering movement,
jumping/falling, respawn, firing/charging, injury, death, and idle. No clip is
named shove, push, or power-move. The native motion-name table likewise provides
no identified shove clip. An action could theoretically reuse an existing
animation or be automatic, so neither observation alone proves absence. They
support the code findings rather than replacing them.

**The green-crate puzzle explains why pushing seemed plausible.**

There are conflicting versions of Fleurifee's tutorial line `FLGen34`:

| File | How it describes moving the green crates |
| --- | --- |
| Active `LanguageNL.ini`, line 353 | “door op een knop te drukken” — by pressing a button |
| `LanguageEN.ini`, line 312, also written in Dutch | “door er tegenaan te lopen” — by walking into them |

The second line could reflect an earlier design or stale text. That is an
inference: the files do not establish when or why the wording changed, or
whether a working push mechanic ever accompanied it. The name “power-move”
also does not prove that crate pushing was its intended purpose.

The castle level data supplies stronger evidence of the shipped mechanism.
The three crate groups, `crates01`, `crates02`, and `crates03`, are animated
`DoorModel` objects. Each has `TouchToOpen=0` and `TriggerRadius=0`; direct
contact and proximity are not their configured opening triggers.

The wall button `knopstoragecrates01` has `TouchToSwitch=1` and
`ShootToSwitch=0`. Its `AfterSwitchOnCommand` explicitly contains:

```text
camera10.enable;
knopstrg_rood_02.disable;
knopstrg_groen_02.enable;
crates01.open;
crates02.open;
crates03.open;
```

No power-move skill check appears in that command. Touching the button starts
its own one-second motion. After it reaches its endpoint successfully, the
callback starts the three crate paths together:

| Group | Translation along original +Z | Movement duration |
| --- | ---: | ---: |
| `crates01` | 91 units | 1.7 seconds |
| `crates02` | 116 units | 2.5 seconds |
| `crates03` | 93 units | 1.0 second |

These paths translate the crate groups without rotation and leave them at
their open endpoints. Native button and door code advances the motion clocks
at normal speed. State transitions add frame-dependent callback latency, and
an obstruction can prevent a moving model from advancing, so these durations
are not a promise of identical wall-clock completion in every situation.
The [original BSP entity records](docs/native-crate-entities.json) and
[extracted geometry and motions](assets/native-crate-puzzle.json) preserve
the source data.

An earlier investigation also found a cave reward script that checks
`RcHasAllPotions(2)` but grants `RcEnableSkill(4)`. It sets the power-move flag
where the intended shooting reward requires another bit. This shows that
original content can grant the flag; it does not supply the missing action.
The separate [ability investigation](../docs/player-abilities-native.md)
documents that inconsistency and the port's scoped correction.

**What this means for the test and for historical claims.**

The available evidence supports treating the power-move as an unused or
unfinished capability in this examined build. It does not establish whether
Davilex implemented it in an earlier version, removed it, reserved the name for
another mechanic, or simply left unused scaffolding. Those explanations would
need additional evidence, such as another executable, development source, or
an original gameplay trace reaching a demonstrable action.

`RC_SHOVE_TEST` therefore separates two things. Its original-puzzle mode uses
the recovered button commands and crate paths. Its Q-plus-movement mode is a
new, explicitly labelled pushing experiment using original artwork and crate
collision geometry. That mode lets you try a possible use for a power-move;
it does not unlock hidden original code and is not evidence that the original
skill behaved that way. No dedicated original shove animation was recovered,
so the experiment uses existing walking animation.

The investigation and test did not add this experimental mechanic to the
ported game. Full disassembly and working evidence remain in
[`temp_work/shove-investigation-2026-10-05`](../temp_work/shove-investigation-2026-10-05/).
