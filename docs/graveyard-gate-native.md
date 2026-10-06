# Graveyard explosive-crate gate

The apparently doubled gate in Het Kerkhof was the rear surface of one
alpha-textured actor showing through its front. It was not a duplicated level
object. The fix uses front-face rendering for `hekdoor.act` and its matching
`hekdoor_s1.act` fragments. Both original outer surfaces remain, so the gate is
visible from either side. Other actor materials retain their existing behavior.

## Original evidence

The original `lvl02a` BSP contains one `hekacteur` (`AdamAnyActor71`, entity
262) at `[3568,-64,1456]`. It has no model attachment. Its two gate leaves each
have front and rear grate faces ten units apart, with correctly wound outward
normals. The crate `brcrate_hek` (`AdamAnyActor72`, entity 263) runs
`hekacteur.destroy` in its compiled `AfterDestroyCommand` handler.

The installed executable's actor renderer rejects backfaces in both its
world-space path (`0x5cddac–0x5cddf6`) and projected path
(`0x5cec29–0x5cec87`). Rendering this closed shell with `DoubleSide` exposed
its inward-facing rear bars through the front texture's gaps.

Raw entity comparisons, source hashes, geometry checks and disassembly are
retained in `current_work/graveyard-gate-2026-10-04/`. The change does not alter
the original gate position, collision, crate command, damage or fragment count.

## Focused validation

```sh
node tests/graveyard-gate-scenes.mjs
# Optionally reproduce a copied save in the isolated test browser:
node tests/graveyard-gate-scenes.mjs path/to/copied-save.json
```

The test renders the actual gate from both sides, compares against the previous
double-sided material, shoots its explosive crate through the gameplay hit
handler, and reloads the resulting save. It checks that one gate is present,
both sides remain visible, destruction produces the two authored fragments,
and the gate no longer renders or blocks passage after destruction or reload.

On 2026-10-04 this passed using a copy of the player's current save. The
comparison removed 3,517 and 4,419 duplicate pixels in the two 640×360 views,
with no browser errors. Screenshots and results are under
`current_work/graveyard-gate-2026-10-04/scenes-1791145413391/`.
The running game and its save were not modified. No packages were built.
