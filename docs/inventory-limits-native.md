# Effective original potion limit

Read-only inspection of the installed `RcHcGame.dat` on 2026-09-21,
SHA-256 `e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
Addresses below apply to this executable. Original files were not changed.

The effective pickup limit is **100 potions**, despite the original
`Settings/Game.ini` `[Player] LimitMaxPotions=20` setting.

The INI loader at `0x4384e0` reads `LimitMaxPotions` (string `0x6906bc`)
and stores its integer in global `0x6b5890` at `0x43858d`. The player
constructor copies that value into its field at `this+0x5c` (`0x43907b`).
The setter `0x439e30` also clamps that separate field against the INI value.

The actual potion pickup takes a different path. `CRcItemPotion`'s pickup
routine pushes an increment of 1 at `0x441ee1`, then calls `0x439e60` at
`0x441ee5`. That function reads the potion count at `this+0x58`, adds the
increment, and compares the result with literal `0x64` (100) at `0x439e72`.
If it exceeds 100, `0x439e77` writes 100 to the count. Negative adjustments
are clamped to zero by `0x439e83`–`0x439e8a`. The count getter at `0x439e20`
returns the same `this+0x58` field. The pickup routine does not consult the
separate `this+0x5c` limit field.

This distinction matters because the original super-shot and super-jump
thresholds are 30 potions. Applying the INI's 20 as a new hard cap would
prevent those skills. A full-inventory cheat should grant the effective
native capacity of 100; ordinary pickup increments should also stop at 100.
Collecting an item must still run its authored pickup command.
