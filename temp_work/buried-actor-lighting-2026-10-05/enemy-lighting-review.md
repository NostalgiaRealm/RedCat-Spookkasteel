# Knight and guardian follow-up

The ten castle knights are persistent examples of the buried-root lighting issue. The tower guardian is a transient spawn pose that normal movement fixes.

## Evidence

`enemy-lighting-review.mjs` reconstructs production actor setup, cached setup bounds, original Sun selection and visibility, floor sampling, and enemy movement. It runs 300 active enemy updates at 60 Hz with a distant player and a nearby player. Results are retained in `enemy-lighting-review.json`. No dynamic lights, camera visibility, or rendered pixel captures are included; vertex counts below characterize the ambient-plus-Sun input, not final visible pixels.

- All ten affected `StandingEnemy` knights remain at authored root Y=86 after five seconds in both scenarios. The relevant floor is Y=87 or Y=87.086044. Their native ambient stays null throughout.
- They are enabled and visible, have no ambush state or boss state, and are not attached to models. Original knight.ini enables floor ambient and Sun without ambient overrides or default-Sun fallback.
- `moveEnemy` explicitly excludes stationary `StandingEnemy` actors from movement recovery. Its downward trace starts solid and cannot move these roots onto the floor. Ordinary gameplay updates therefore do not repair their floor sample.
- Each knight recovers its own nearby floor on the first center probe. Its recovered RGB is positive and capped normally. The initial Sun lookup succeeds for all ten, but 138–163 of 307 mesh vertex normals receive zero ambient-plus-Sun illumination because floor ambient is absent. They are not necessarily wholly black; the missing ambient can blacken the sides facing away from the Sun.
- Tower `MovingEnemy5` / `guard05` starts at [-377,-3809,577] with its floor at Y=-3808. On the second active update (0.033333 seconds), normal patrol stepping clears the root. It settles at Y=-3807.95 and has valid native floor ambient while patrolling afterward. No movement-recovery relocation occurs. The initial Sun lookup also succeeds.

## Recommendation

Permit the existing bounded lighting probe for `knight.act` when instantiated as a `StandingEnemy` (Type 2 is an optional additional exact-classification guard). Retain setup bounds, first-valid-sample priority, black-sample preservation and cache behavior. Change only lighting; lifting the knight geometry would alter placement and collision unnecessarily.

Keep `guardian.act` on native sampling because its only observed case clears through existing locomotion within two frames, before a player beginning at the level spawn can reach it. This is evidence-based transient-case exclusion, not a general exclusion of enemies.

Do not override visibility or enable state. Existing `traverseVisible`, actor visibility, and render-residency checks already prevent lighting work from showing hidden actors. Ordinary disabled knights can deliberately remain visible as stationary combat actors; a bounded floor sample changes their lighting without changing that existing behavior.

The scripts initialized with neither enemiesFrozen nor cutscene active in both audited levels. Simulations call updateEnemy directly to isolate active locomotion; these results do not claim that inactive/frozen entities advance.
