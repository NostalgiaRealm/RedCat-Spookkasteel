# Room-aware graphics streaming

Implemented **19 October 2026** for the shared browser/Electron source. This is
a requested refinement of the port's performance adaptations, using the
original BSP's architectural areas and door connections. It is not a claim that
the native game unloaded its CPU assets this way.

## Selection policy

Ordinary play keeps **RedCat's current authored room and its immediately
door-connected neighbors** eligible for graphics. A closed or locked door's
neighbor is prepared before entering; loading its artwork does not unlock or
open that door. Nearby rooms across an unrelated wall, ceiling or floor are
excluded even when inside the old distance threshold.

A view through several open doors can still reveal a farther room. The selector
traverses open door connections only while their projected doorway rectangles
overlap the view through the preceding doors. This avoids both flooding every
open room and making the view disappear after the first doorway. The rectangle
tests are conservative graphics tests, not navigation or player pathfinding.

Eligible scenery still uses the existing camera frustum, PVS, **576-unit**
near preparation radius and **2048-unit** drawing range. Smooth travel supplies
a preparation-only lead of at most **0.4 seconds / 192 units**, allowing the
next chunk to finish before crossing that range boundary. It never expands
the draw/required-view masks or admits unrelated rooms. See
[forward-walking continuity](room-loading-hitches.md#forward-walking-range-boundary-follow-up).
Whole authored faces
and moving brush assemblies remain intact. Large rooms are not split into
arbitrary reachable floor tiles: their original area remains eligible.
The complete Tower witch room is one area; its normal view is preserved.

## Why the basement is now different

The copied local save places RedCat in Castle **area 19**, leaf 3789, cluster
848, at approximately `[-180.12, -143.06, -1433.55]`, with no-clip enabled.
There was no running game/debug endpoint available during inspection; the
saved profile was copied and inspected read-only. The original save was not
modified. Reproduction details are retained in
[the save manifest](../temp_work/room-streaming-2026-10-19/save/reproduction.json).

That basement connects to:

| Door model | Destination area | Purpose |
| --- | ---: | --- |
| 9, `doorhallway02_02` | 22 | One staircase side |
| 10, `doorhallway02_03` | 20 | Adjacent passage/alcove |
| 11, `doorhallway02_04` | 16 | Other staircase side |
| 13, `secretdoor02` | 20 | Secret entrance to the same adjacent area |

The saved doors are all closed and unlocked. Its eligible area set is therefore
**16, 19, 20, 22**. The floor above, **area 18**, is excluded. Entering a doorway
updates the neighborhood before selecting graphics for the next frame.

All five chapters' static render faces have exactly **one** valid world-area
owner. This was verified against the imported original leaf-face references.
Brush-model leaves are excluded from that ownership calculation. Their default
area-zero records must not contaminate static world ownership.

The Tower's isolated starting shaft and two other chambers really are separate
teleport spaces. Its large witch room is area 1 and its entrance is area 2,
connected by the paired boss doors. There is no need to merge the whole Tower
to keep that room visible. The original BSP's general portal record array is
empty in all five chapters; the available connection graph is the authored
area/door graph, not a recovered general walkable-space graph.

[Detailed topology inventory and reproducible analysis](../temp_work/room-streaming-2026-10-19/topology/findings.md).

## Graphics and memory ownership

- Static chunks are partitioned by **room ownership, material and spatial
  cell**. Two floors sharing a texture and cell cannot retain each other's
  vertex buffers. Faces are not cut up.
- A disallowed room's world chunks unload immediately, even inside the old
  retention radius. Their last world-texture user releases the texture and
  decoded image. The twelve-second return-turn grace still applies within
  the eligible neighborhood. The lantern-turn follow-up additionally retains
  preparation for previously admitted, still-open-connected rooms for up to
  twelve seconds with the same anchor room. This separate preparation mask
  never expands drawing/readiness. Closing the connection, changing anchor
  or expiry removes the exception; unrelated/never-admitted rooms still unload
  immediately. See [the exact policy and evidence](room-loading-hitches.md#forest-lantern-camera-turn-follow-up).
- Moving brushes use their current transformed artwork bounds for room
  eligibility and retain their native conservative model/PVS bounds for
  rendering. Their collision and authored motion state do not change.
- Managed actors use their complete authored artwork bounds for room
  eligibility. Animation-safe view padding still applies to frustum/PVS tests;
  it cannot incorrectly assign an upstairs actor to the basement.
- Rejected actors stop requesting artwork and release unshared GPU resources.
  Shared player, nearby actor and effect resources remain protected. Actor
  decoded images retain their existing **twelve-second idle grace**; this is
  separate from immediate world-chunk eviction.
- Pooled fragment texture requests and nearby crate-fragment reservations use
  the same room selection. Saved-room selection is primed before preparing
  effects, so loading a save does not warm the old spawn room's crates.
- Flame/glow and beam submissions use cached conservative room-volume tests.
  Fixed spout/corona sources are also checked, so a huge torch sprite's bounds
  cannot make an unrelated emitter appear through a floor. Particle simulation,
  activation, lifetime and sound clocks continue.
- Effect-room queries cache enclosing 64-unit boxes, with at most 4,096 entries.
  Numeric hashes are checked against all six box coordinates, so collisions
  cannot select the wrong room. They avoid per-particle transient arrays,
  strings and repeated detailed BSP queries.
- Global sky textures, lightmaps and small shared effect artwork remain
  available. CPU level data, collision, scripts, buttons, enemies, puzzles and
  saves are not unloaded or disabled. This is not removal of every byte
  associated with an excluded room.

## Cameras, doors and exceptional views

The ordinary room anchor is RedCat, while the actual camera still controls
distance and frustum tests. An ordinary camera outside that neighborhood uses
the current/last valid player-room PVS rather than exposing unrelated rooms or
hiding the basement entirely.

An exterior no-clip player retains the last valid player room until entering a
real room. A camera crossing an upstairs room by itself cannot change that
selection. This permits the kind of outside-room inspection in the screenshot.

Authored fixed/route cameras select their own room. A non-no-clip camera more
than 512 units away during a long camera transition also keeps its current
view prepared until it reaches RedCat. Save-loading effect preparation explicitly
uses restored player coordinates before the final camera is positioned.
An authored/remote camera without a valid BSP room falls back to the previous
conservative camera-distance/frustum behavior. Missing topology is conservative
too. Ordinary player-room fallback never replaces a valid authored remote view.

The port's existing view-readiness hold remains: uncached artwork is completed
before presenting the new playable view. Obsolete asynchronous requests cannot
activate a room that was excluded in the meantime. No door locks, automatic
interaction, puzzle commands, collision masks or audio/music scheduling were
changed.

The original's raw PVS area flood remains conservatively open. The new room
selector is an additional graphics-admission policy; it does not reuse the
incompletely recovered native temporary door-portal callbacks as gameplay
locks. See [native loading and visibility](native-asset-loading-and-camera-visibility.md).

## Focused verification

```sh
node --test tests/room-streaming.test.mjs
node temp_work/room-streaming-2026-10-19/room-scenes.mjs
```

Thirteen new unit cases cover stacked rooms, same-cell separation, open
sightlines, closing doors, immediate eviction, remote/outside cameras, shared
textures, obsolete pending loads, actor padding, fragment preparation, unchanged
spout clocks, all five chapters' static ownership and long camera transitions
versus save-loading priming. Only this work's focused tests were run.

The source browser checks restore a **copy** of the local basement save in an
isolated browser profile. They compare room filtering against the same frozen
scene with room filtering disabled: eleven views across all five chapters,
including an outside-basement inspection. All ten ordinary views have zero
pixels differing by more than 30 summed RGB units at 640×360. The exterior
inspection deliberately differs because unrelated rooms are removed.
The Tower boss view remains unchanged. Gameplay snapshots remain equal and
no browser/script errors occurred.

Four doorway-area crossings are separately checked with the actual saved
Castle data: **19 ↔ 22, 19 ↔ 20, 19 ↔ 16, 19 ↔ 20**. These are position-probe
graphics-readiness checks, not a new physical campaign playthrough. Remote valid
and invalid views and return to the basement are also checked.

For the saved basement view:

| Resource | Distance-only eligibility | Room-aware eligibility |
| --- | ---: | ---: |
| Resident world vertices | 10,755 | 3,231 |
| Resident world chunks | 142 | 54 |
| Loaded world textures | 32 | 10 |

That is about **70% fewer resident world vertices** in this view, with unchanged
visible room artwork. These are local residency measurements, not an FPS
guarantee or the entire game's memory use.

Research, source snapshots, retained failed/review logs, paired images and final
reports are in [`temp_work/room-streaming-2026-10-19/`](../temp_work/room-streaming-2026-10-19/).
[Browser report](../temp_work/room-streaming-2026-10-19/render/report.json);
[unit log](../temp_work/room-streaming-2026-10-19/unit-verified-final.log).
No new packages were built or published.

The subsequent [room-loading hitch fix](room-loading-hitches.md) retains this
drawing policy and adds shared, bounded CPU/GPU preparation before assets are
drawn. Its lantern-turn follow-up separates short-lived room preparation from
the exact drawing mask and leaves audio flowing through brief readiness waits.
It also handles cancelled uploads and rapid eviction/return safely.
