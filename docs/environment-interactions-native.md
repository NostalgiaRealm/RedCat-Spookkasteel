# Original environmental interactions

These changes are source-only. No release packages were generated. Original
installation files remain unchanged.

## Contact switches

The original BSP `ButtonModel` entities specify `TouchToSwitch`,
`ShootToSwitch`, `MaxSwitchTimes` and the switch/after-switch commands. In the
graveyard, `puzbut1_mc` through `puzbut5_mc` have `TouchToSwitch=1`. Their
after-switch handlers enable the respective puzzle piece and release the
button. The original button animation takes 0.5 seconds.

Collision places RedCat just outside a solid brush (a small collision epsilon).
Testing only brush contents therefore missed floor tiles and wall buttons.
The remake now accepts the actual contacted model, and a 0.1-unit contact
tolerance while standing on a tile. Entry latching prevents repeats until
RedCat steps away. Buttons without `TouchToSwitch` retain their authored
interaction requirements. The original Davi-Script handlers still determine
which doors, lights and moving models react.

Door brush contacts and automatic door/button proximity now use the recovered
[native activation rules](door-activation-native.md), including offset origins
that preserve one-way passages and the chapel's walk-on floor lift.

## Fans and spring boxes

The cave fans and spring boxes are original `Trigger` brush volumes with
`AddPlayerSpeed` vectors. They are not separate hard-coded physics objects.

| Original object | AddPlayerSpeed (metres/second) | Purpose |
| --- | --- | --- |
| `jump01` | `5 12 0` | Spring up and sideways |
| `jump02`, `jump03` | `0 12 -5` | Spring up and forward |
| `jump05`, `jump06` | `0 15 0` | Higher spring |
| `jump05a`, `jump06a` | `0 0 12` / `0 0 -12` | Upper horizontal stream |
| `wind01` | `-10 -5 0` | First horizontal fan group |
| `wind02` | `0 -5 -10` | Alternate fan group |
| `wind03` | `0 5 -1` | Rising air stream |
| `wind04` | `-10 -5 0` | Final sideways fan |

Read-only examination of `RcHcGame.dat` confirms that `CAdamTriggerModel`
adds the vector on entry (`0x4d3b98` calling `0x4d68e0`) and removes it on
leave (`0x4d40e8` calling `0x4d6920`). The vector is accumulated in the player
fields at `+0x1b4..+0x1bc`. Positive vertical speed refreshes the airborne
launch on every movement update at `0x4d7aed`; the regular movement path includes the external vector at
`0x4dae30`. Thus wind is a sustained velocity while overlapping its volume,
not an impulse accumulated every frame.

The portable controller uses 32 world units per metre, adds the vectors
from enabled overlapping authored volumes, and sweeps the resulting movement
against walls. Upward streams refresh the separate launch velocity even when
RedCat is already airborne. Leaving or disabling the volume removes its
external contribution; the launched flight continues under gravity. The
controller uses the original half-gravity displacement integration, allowing
the vertical return fan to reach its platform. See the
[vertical fan investigation](vertical-fan-native.md) for the precise native
formula, scope and physical route checks. No-clip ignores these forces. The existing cave
button group commands switch the fan volumes and their moving fan blades
together.

## Secret-room feedback

The cave `secret_trigger01` behind the small `secret_button01` has `IsSecret=1`
and empty entry/leave commands. The other cave secret triggers and graveyard
secret rooms use the same built-in flag. Relying only on their scripts omitted
the secret discovery feedback. Discovery now increments the secret count and
plays the original `SecretFound.wav` once. The per-object discovery flag is saved;
walking out and back in does not replay it. Secret doors and buttons use the
same built-in flag handling.

## Destructible actors

The actor importer now retains original `ActorDestroyable`, minimum/maximum
damage thresholds, `[Explosion]`, `[Particle]` and `[ParticleTypeN]` settings.
Both `brcrate.ini` and `wkcrate.ini` have a damage threshold of one. Their
original debris consists of `*_s1.act` and `*_s2.act`, with 5–8 and 5–7 pieces,
velocities 125–180 and 200–250, and lifetimes of 3–4 seconds. The stronger
`brcrate` blast uses 25% size; `wkcrate` uses a much smaller 0.5% blast.

Destruction now starts the original eight-frame `Explosie01..08` bitmap/alpha
sequence, smoke, the original fragment meshes and `expl6.wav`. The
[destruction audio audit](destruction-audio-native.md) corrected the earlier
`Explosion.wav` assumption and restored native blast-size volume scaling. Scripts
which destroy several props create effects for each prop at its rendered
position, including attached moving actors. Fragment counts, meshes,
initial velocity ranges, spin, lifetimes, collision and fade flags come from
the INI. The native actor destruction path (`0x4a7fd2` to `0x58d710`) uses
the orange `Explosie` sequence. It schedules frames at 0, 100, 200, 300, 400,
500, 600 and 699 ms (`0x58dd70`), with scale factors 0.5, 0.6, 0.8, 0.9,
0.95, 0.9, 0.8 and 0.7 applied to `SizePercentage / 100 * 20`. These frame
times/scales are reproduced. The later [debris recovery](debris-native-recovery.md)
also implements native fragment integration, source-volume launch positions,
velocity-dependent spin, collision response and settle-only fading. Blast
placement uses the recovered lookup table and staggered delays; each blast's
smoke follows a finite four-particle schedule at 200/600/1000/1400 ms with the
original artwork, motion, lifetime, size and opacity rules. Remaining limits
are the portable collision tolerances, per-effect random sequence and native
frame-boundary variation, rather than an unrecovered smoke schedule. Unused
green-flash and electrical variants remain outside that recovery.

The first collision with a projectile may identify an actor rather than a
BSP model. That actor identity now routes the hit to the destructible prop
or enemy. This also permits Max's turret collision to damage its owner.

## Focused validation

- `node --test tests/environment-interactions.test.mjs`: six tests for contact
  tiles, fan switching, collision, spring height, saved secret feedback and
  destructible projectile hits.
- `python3 -m unittest tests.test_actor_texture.ColorKeyFilteringTest.test_destructible_actor_keeps_original_explosion_and_debris_properties`
- `node tests/environment-interaction-scenes.mjs`: rendered source checks on
  the original graveyard/cave levels. Checks original switch completion,
  changing blast frames and visible debris, fan movement and disable,
  spring-box launch and single secret cue. Results are stored in
  `artifacts/environment-interaction-scenes.json`.
- `node --test --test-name-pattern='carrying ignores' tests/moving-solids.test.mjs`:
  the existing fix excludes only the moving floor's own attached prop from
  the carry trace; unrelated props still block it.

No full regression suite or package build was run for these changes.
