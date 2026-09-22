# Graveyard zombie activation

Inactive graveyard zombies no longer protrude through unopened graves. Their
original scripts destroy the grave cover and then enable the zombie. The
existing movement, perception and waypoint logic takes over on activation.
The two zombies that the original level enables from the start remain visible.

## Original evidence

The graveyard (`lvl02a`) contains twelve `MovingEnemy` entities with `Type=4`.
Ten start disabled: `zombie1` through `zombie5`, `frogzom1` through `frogzom4`,
and `ghost1`. `mausozom1` and `mausozom2` start enabled. Entity names are not
reliable type identifiers: `ghost1` is a zombie, whereas `zombie6` is a ghost.

| Zombie | Authored activation |
| --- | --- |
| zombie1 | graf1_trigger |
| zombie2 | graf2_trigger |
| zombie3 | dknopa touch button |
| zombie4 | dknopb touch button |
| zombie5 | zombie5tr_tr |
| frogzom1, frogzom2 | frogzom12_tr |
| frogzom3 | frogzom34_tr |
| frogzom4 | easterknop1_tr button |
| ghost1 | zombie5's AfterDestroyCommand |

The grave actions hide their cover ModelController and destroy their
`grafdum.act` actor before calling the zombie's `.enable`. That actor's original
debris settings supply `brok1.act`, `brok2.act` and `brok3.act` fragments. Its
explosion size is zero, so the effect uses fragments and sound without a fire
sprite. The
user also verified the destruction-then-appearance sequence in the original
game. These scripts and existing destruction effects are retained.

Read-only native inspection used `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`:

- `0x428ecb–0x428ef6` constructs `CRcZombie` for Type 4 through `0x418d50`,
  without a subtype branch. Both zombie subtypes use the same actor class.
- `0x427c18–0x427c3f` copies MovingEnemy's `IsInitiallyEnabled` to both its
  controller and its spawned actor using `0x502350`.
- That setter writes object offset `+0x7c`; `0x502453–0x50245e` updates world
  registry membership through `0x4f62e0`. Disabling is not limited to AI thinking.

This investigation did not establish the native timing of the zombie's
`start` motion. The fix does not add an unverified emergence-animation delay.

## Fix and saves

The shared `actorVisible` predicate now excludes disabled living zombies.
It is used by rendering and actor collision records. The enabled flag already
gates AI, projectile eligibility and target selection. Explicit Hide remains
effective after Enable. The predicate preserves ordinary death animations and
visible inactive enemies such as gargoyles and Brutus.

No save migration is needed: old saves already retain the correct enabled
state, even when their separate visible field is true. Triggered and defeated
zombies retain their progress.

The physical activation check also found that the first zombie's portable
square collision hull overlapped its grave's end wall and sloped floor by a
few units at the authored origin `[3876, -117, 995]`. It appeared but could not
walk. A zombie-only spawn correction now uses the BSP's shortest outward
penetrations to find a clear position. It is restricted to the original spawn
area before the first patrol segment is complete, allows at most 16 units
(the existing step height) from both the current position and authored origin,
and applies no displacement unless the final hull is clear. Its original
westward waypoint route remains unchanged. This is a
portable collision adaptation, not a claim about native AI instructions, and
also repairs older saves with that zombie still stuck at its spawn.

## Focused verification

```sh
node --test tests/zombie-activation.test.mjs
node tests/zombie-activation-scenes.mjs
```

Five cases passed: the twelve original actors' starting visibility, original
grave/button callbacks and destruction order, save restoration/death cleanup,
preservation of other inactive enemy visuals, and the first zombie leaving its
grave through actual BSP collision. The spawn case was run separately when the
movement issue was found; the four earlier successful cases were not repeated.
No unrelated suites or builds were run.

The browser check passed four physical encounters: walking into `dknopa` and
`dknopb` without E, and crossing `graf1_trigger` and `graf2_trigger`. Each
destroyed its original cover, rendered 14–15 stone fragments, revealed its
zombie and played `walkfw` while the zombie moved more than 100 units over
three seconds. The first zombie cleared its grave, and all four final hulls
were outside solid geometry. All ten inactive zombies were hidden and
untargetable; the two initially active zombies were visible and targetable.
There were no browser, HTTP or script errors. Results and before/after images
are in `artifacts/zombie-activation-scenes.json` and
`artifacts/zombie-*-before.png` / `zombie-*-after.png`.
