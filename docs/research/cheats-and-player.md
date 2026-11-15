# RcHcGame.dat — player object, cheats and debug facilities

Implementation reference for the WebAssembly recompile of `RcHcGame.dat`
(x86, MSVC 6, image base `0x400000`). Purpose: implement the optional cheats
"supplies" and "free flight" on the original code.

Evidence: Ghidra export under `RC_ORIGINAL_DECOMPILED/decompiled/RcHcGame.dat/`
(`assembly.tsv`, `functions/*.c`, `calls.tsv`), raw bytes of `originals/RcHcGame.dat`
(short strings and constants), the shipped INI files, the recovered level scripts.
No original binary was run. Start-up, main loop and the application/game/engine pointers
are taken from [startup-and-loop.md](startup-and-loop.md).

Labels:

- **C** / CONFIRMED — read directly from the instructions or data at the cited address.
- **I** / INFERRED — follows from confirmed facts, a string or a name, but the path was not
  read end to end.

Everything in this file is CONFIRMED unless it is marked INFERRED or `I`.

Conventions: thiscall = `this` in `ECX`, callee pops the stack arguments. `vec3` = three
`float`s (x, y, z), y is up. Vector helpers used below (register arguments, all C):
`0x005B2FA0` scale(`ECX` src, `EDX` dst, stack float) · `0x005B3000` add(`ECX` a, `EDX` b,
stack dst) · `0x005B2FE0` sub · `0x005B3050` copy(`ECX` src, `EDX` dst) · `0x005B3070`
clear(`ECX`) · `0x005B2F20` normalise(`ECX`), returns the length.

---

## 0. Short answers

1. **Player**: `app = *(u32*)0x006B915C` → `game = *(app+0x3A4)` → `sub = *(game+0x60)` →
   `player = *(sub+0x360)` → `props = *(player+0x1F0)`.
2. **Supplies**: three leaf functions on `props`: `0x00439E60` (potions, clamp 100),
   `0x00439EA0` (mirror parts, clamp `props+0x64`), `0x00439D20` (score, clamp
   `LimitMaxScore`). No other side effects; the HUD polls the fields every frame.
3. **Free flight exists in the original.** Debug key F6 "REDCAT: Toggle player collision
   on/off" and the hidden cheat-menu entry "vlieg door muren" both clear the byte
   `engine+0x48`. While it is 0 the player's move function runs in move state 4
   ("player is in DEBUG mode"): `position += desiredVelocity * dt`, no gravity, no
   collision; `MoveUp` / `MoveDown` (Home / End) give vertical motion.
4. **Debug facilities**: 44 debug key commands (only with `[Debug] DebugSecretCommands=1`
   at start), a console (`settings`, `restart`, `quit`, `map`, `cheats`, `help`,
   `<setting> = <value>`), and a hidden cheat page in the in-game menu (next level, level
   select, no-clip, god mode, two "give all" entries that do nothing in this game).

---

## 1. The player object (A)

### 1.1 Pointer chain

| Step | Expression | Evidence | Ev. |
|---|---|---|---|
| application | `*(u32*)0x006B915C` (0 before creation) | used by every handler below, e.g. `0x0056B1A9` | C |
| game (`CRCGame`) | `*(app + 0x3A4)` | `0x0056B1C3`, assert text `m_Game` | C |
| current sublevel (`CAdamSubLevel`) | `*(game + 0x60)`; getter `0x00453D20` (thiscall, 1 arg = out smart pointer, increments the reference count at `sub+0x14`) | `0x00453D21` | C |
| player (`CAdamPlayer*`, dynamic type `CRCPlayer`, vtable `0x0064C430`) | `*(sub + 0x360)`; setter `0x004F41B0` | `0x00441DD1` (potion pickup), `0x004C6960` (F9: "No player found" when 0) | C |
| properties (`CRcPlayerProperties`, vtable `0x0064C5FC`) | `*(player + 0x1F0)`; getter `0x00436DB0` (asserts `m_GameProperties != 0`) | `0x00436DD2` | C |
| HUD (`CRcHUD`, vtable `0x0064D330`) | `*(player + 0x1F4)`; `hud+0x14` = the same properties pointer | `0x0045300D`, `0x00453282` | C |
| player input (`CRcPlayerInput`, vtable `0x0064C5B0`, 0x34 bytes) | `*(player + 0xF8)` | `0x004DAB5A` | C |
| engine (`CAdamEngine`) | `*(u32*)0x006C8DE0` or `*(app + 0x3A0)` | `0x004354E8`, `0x004C6811` | C |

Reading memory directly does not touch the sublevel reference count; do not call
`0x00453D20` from the host unless the count is released again (`--*(sub+0x14)`).

### 1.2 "Is a world running?"

Check every link on every use; none of the pointers is cached by the original code either.

```
app    = u32(0x006B915C);         if (!app) return null;
game   = u32(app + 0x3A4);        if (!game) return null;
state  = i32(game + 0x98);        // 3 = GS_GAME; 5 menu, 6 pause, 7 restart overlay a loaded world
sub    = u32(game + 0x60);        if (!sub) return null;          // no sublevel
player = u32(sub + 0x360);        if (!player) return null;       // "No player found"
props  = u32(player + 0x1F0);     if (!props) return null;
// optional sanity: u32(player) == 0x0064C430 && u32(props) == 0x0064C5FC
```

Apply cheats only when `state == 3` (INFERRED as the safe condition: during GS_LOADING the
sublevel pointer changes; when `game+0x60` is cleared between sublevels was not traced).

### 1.3 `CRcPlayerProperties` layout

Constructor `0x00439010` (base `CAdamPlayerGameProperties` `0x004DDE50`); created by
`0x00436470` (`operator new(0x3EC)`). "Init" is the value the constructor stores; the
`0x006B58xx` globals are loaded from `[Player]` keys by the loaders listed in 2.2.

| Offset | Type | Field | Init | Ev. |
|---|---|---|---|---|
| `+0x00` | ptr | vtable `0x0064C5FC` | | C |
| `+0x14` | u8 | **god mode** (set `0x004DDEB0`, toggle `0x004DDEC0`, get `0x00402D10`) | 0 | C |
| `+0x15` | u8 | timed no-damage flag (get `0x00594890`; cleared by `0x004DE2D0` when the timer runs out) | 0 | C |
| `+0x18` | i32 | timer for `+0x15`, ms | −1 | C |
| `+0x38` | u32 | constructor argument (owner; INFERRED the player) | | I |
| `+0x3C` | f32 | **health** | `MaxHealth` | C |
| `+0x40` | f32 | **maximum health** | `MaxHealth` | C |
| `+0x44` | i32 | **lives** (−1 after losing the last one, `0x00439D0D`) | `InitialLifes` | C |
| `+0x48` | i32 | **score of the current sublevel** | `StartScore` | C |
| `+0x4C` | i32 | not traced | 0 | C |
| `+0x54` | i32 | **total score** (carried over; increased by the results screen `0x004900D0` through `0x00439D70`) | `StartScore` | C |
| `+0x58` | i32 | **magic potions** | `InitialPotions` | C |
| `+0x5C` | i32 | potion-limit field: written by the ctor and `0x00439E30`; **no reader found** in the player/properties code (`0x430000`–`0x43B200`) | `LimitMaxPotions` | C |
| `+0x60` | i32 | **mirror parts** | `InitialParts` | C |
| `+0x64` | i32 | **maximum mirror parts** | `LimitMaxParts` | C |
| `+0x68` | u32 | **skill mask**: 1 shot, 2 power shot, 4 super shot, 8 super jump, 0x10 power move | 0 | C |
| `+0x6C` | i32 | counter increased by `0x00439E00` from `CRcEnemy` slot 24 (`0x00424070`); meaning not traced | 0 | C |
| `+0x74` | i32 | coin counter (`0x00439DB0`, clamp `LimitMoneyBags`) | 0 | C |

Score shown by the HUD (`0x00453060`, `0x00453273`): `props+0x48` alone when
`Player<N>.ini [General] GameType == 1`, otherwise `props+0x54 + props+0x48`.

The object also embeds eight `CDaviSetting` members bound to `Player<N>.ini [Player]`
(constructor `0x00439010`): `+0x8C` `MaxHealth`, `+0xF8` `Health`, `+0x164` `Life`,
`+0x1D0` `MagicPotion`, `+0x23C` `MirrorPart`, `+0x2A8` `Skill`, `+0x314` `Score`,
`+0x380` `TotalScore` (keys of `+0x314` and `+0x380` read at `0x004396F6`, `0x00439824`;
the other six INFERRED from the construction order).

`CRcPlayerProperties::Load` (`0x00439F40`, vtable slot 4; called from `CAdamPlayer` slot 13
`0x004D8EA0` at `0x004D905C` — INFERRED: when the player is added to a sublevel) reads
`Player<N>.ini [Player]` `MaxHealth`, `Health`, `Life`, `Score`, `MagicPotion`,
`MirrorPart`, `MaxMirrorPart` (→ `+0x64`), `Skill`, `TotalScore`, then **sets `+0x58`
(potions) and `+0x48` (sublevel score) to 0** (`0x0043AA67`, `0x0043AA6E`) and, when
`[General] GameType != 0`, replaces the skill mask by the sublevel's `StandardSkill`
(`0x0043AB49`–`0x0043ABCB`). Potions are therefore a per-sublevel count.

`Save` (`0x0043AC20`, slot 3; callers not traced) stores `+0x40`, `+0x3C`, `+0x44`,
`+0x58`, `+0x60`, `+0x68`, `+0x48`, `+0x54` into those eight setting members
(`0x0043AD25`–`0x0043AECC`), i.e. into `Player<N>.ini [Player]`. Cheated mirror parts,
score and skills therefore end up in the player file at the next save.

### 1.4 `CRCPlayer` / `CAdamPlayer` fields used by movement

| Offset | Type | Field | Evidence | Ev. |
|---|---|---|---|---|
| `+0xA8` | u8 | visible flag (toggled by debug key K) | `0x004C9C96` | C |
| `+0xF8` | ptr | `CRcPlayerInput` | `0x004DAB5A` | C |
| `+0x100` | i32 | **move state**: 0 walking, 1 stepping up, 2 jumping/falling (3 handled like 2), 4 debug = no collision. Trace strings `player is WALKING / STEPPING UP / JUMPING / in DEBUG mode` | switch `0x0043564F`, tables `0x0043635C`, `0x00436370` | C |
| `+0x104` | u8 | active flag; 0 → the move function returns the input position unchanged. Set by ctor and `0x00436A10`, cleared by `0x00436A20`, `0x00436F7E` | `0x004354AF` | C |
| `+0x108` | u32 | brush contents at the position `& 0x30000` (ooze / death zones) | `0x004DAED3` ff. | C |
| `+0x10C` | ptr | object that receives the position in `SetPosition` (INFERRED: the actor) | `0x004DBE20` | I |
| `+0x15C` | vec3 | (0, StepHeight·scale, 0) | `0x004D5DCF` | C |
| `+0x168` | vec3 | second step vector, y = `+0x160`·const − 1 (INFERRED: downward probe) | `0x004D5DED` | I |
| `+0x174` | vec3 | **velocity** used in state 2 (`+0x178` = vertical) | `0x00435B14`, `0x004360F7` | C |
| `+0x180` | vec3 | desired velocity of the last frame (trace name `currentSpeed (texels/sec)`) | `0x004DAE6C` | C |
| `+0x18C` | f32 | forward speed for this frame | `0x004DAD46` ff. | C |
| `+0x190` | f32 | speed for all other directions for this frame | same | C |
| `+0x194` | f32 | jump launch speed = sqrt(2 · JumpHeight·scale · Gravitation·scale) | `0x004D5DF3` | C |
| `+0x198` | vec3 | **position** | `0x004DAE57`, `0x004DBDF0` | C |
| `+0x1A4` | vec3 | position stored at the end of the last move (`0x0046D2B0`) | `0x0043631E` | C |
| `+0x1B0` | ptr | list of models the player is inside (rebuilt by `0x004D6E80`) | | C |
| `+0x1B4` | vec3 | external impulse; `+0x1B8 > 0` forces state 2 and copies it (scaled) into the velocity | `0x00435507` | C |
| `+0x1F0` | ptr | `CRcPlayerProperties` | | C |
| `+0x1F4` | ptr | `CRcHUD` | | C |
| `+0x250` | ptr | action-state object; `0x00459330` returns the state id | `0x00435443` | C |
| `+0x370` | u8 | super-jump-used flag | `0x00435B14` | C |
| `+0x371` | u8 | movement lock, **recomputed every frame** by `0x00435440`: 1 when the action state is 7, 8, 10 or 11 | `0x00435440`, table `0x0043547C` | C |

Which point of the body `+0x198` is (feet, centre, eye) was not established.

Position accessors: `GetPosition` = vtable slot 18 `0x004DBDF0` (thiscall, `vec3* out`);
`SetPosition` = slot 19 `0x004DBE20` (thiscall, `const vec3*`; writes `+0x198`, forwards
to `+0x10C`); `Teleport` = `0x004D60F0` (thiscall, `const vec3* pos, float angle`, `RET 8`):
writes `+0x198` and `+0x1A4`, resets the input object (`input->vtbl[2]`, `0x00437580`) and
sets the yaw to `angle · (−1/12) · 2π` (`input->vtbl[5]`, `0x00437630`). `Teleport` is what
`RcShowAtSpawnPoint` (`0x0056A720`, call at `0x0056AA2E`), `CAdamPlayer` slot 28 `0x004DD650`
(INFERRED: respawn) and debug key F3 use.

### 1.5 `CRcPlayerInput` (`player+0xF8`)

| Offset | Type | Field | Evidence | Ev. |
|---|---|---|---|---|
| `+0x14` | f32 | rotation, first component (INFERRED pitch) | `0x004376E0` | I |
| `+0x18` | f32 | **yaw in radians**; the move vector is rotated by it | `0x004DADFC`, `0x004DA920` | C |
| `+0x1C` | f32 | rotation, third component | `0x00437660` | C |
| `+0x20` | u8 | "walk" flag = `CRcInput` vtable slot 5 = `0x0053DC80` = always 0 → run speeds are always used on the ground | `0x004375B0`, `0x004DAD62` | C |
| `+0x21` | u8 | jump (`CRcInput` slot 4 `0x00482A40`) | `0x004375B0` | C |
| `+0x22` | u8 | 1 when the move vector is non-zero | `0x00482874`–`0x00482883` | C |
| `+0x28` | vec3 | **move vector** of this frame | `0x004376C0` | C |

The move vector is produced by `CRcInput` slot 1 `0x00482110` (called from
`CRcPlayerInput::Poll` `0x004375B0`), from the input actions (`IsActionActive` =
`0x00544CE0`):

| Component | −1 | +1 |
|---|---|---|
| x | `MoveLeft` or `TurnLeft` (`0x0048250F`–`0x0048266E`) | `MoveRight` or `TurnRight` |
| y | `MoveDown` (`0x00482391`) | `MoveUp` (`0x00482455`) |
| z | `MoveForward` (`0x00482207`) | `MoveBack` (`0x004822D2`) |

A pressed key overrides the component. Before the keys are read, when `CRcInput+0x46` is
set and `+0x45` is clear, the mouse deltas (× 0.125 × `CRcInput+0x40`) are stored in x and
z (`0x00482147`–`0x004821EC`; INFERRED: mouse-move mode without mouse look). The vector
is normalised when its length exceeds 1 (`0x0048288D`). Default bindings
(`Player<N>.ini [KeyBinds]`): `MoveUp=Home`, `MoveDown=End`, `MoveForward=Up`,
`MoveBack=Down`, `TurnLeft=Left`, `TurnRight=Right`, `MoveLeft=Alt+Left`,
`MoveRight=Alt+Right`.

The rotation in `+0x14..+0x1C` is rewritten every frame by `CRCPlayer` slot 24
`0x00434430` (called from `Update` at `0x004DAB70`) through `0x00437750`: it derives a
heading from the move vector and the camera transform (`0x00434F20`), turns towards it
with a limited rate and stores `heading − π/2` in `+0x18` (`0x00434800` ff.). INFERRED
summary: camera-relative third-person control; the function was only skimmed.

How `Update` uses the yaw (matrix `0x005B3130`, applied by `0x005B35B0`, both read): a
move vector `(mx, my, mz)` becomes the world direction
`(mx·cos(yaw) + mz·sin(yaw), my, −mx·sin(yaw) + mz·cos(yaw))`; pure forward `(0,0,−1)` →
`(−sin(yaw), 0, −cos(yaw))`. Whether the actor model looks exactly along that vector was
not verified.

---

## 2. The game's own functions for changing values (B)

### 2.1 Prototypes

All thiscall on the properties object. None of them calls anything outside this table:
**no sound, no HUD call, no script event**.

| Address | Prototype | Behaviour | Ev. |
|---|---|---|---|
| `0x00439E60` | `bool AddMagicPotion(int n)` `RET 4` | `+0x58 += n`; `n >= 0`: clamp to the **literal 100** (`0x00439E72`); `n < 0`: clamp to 0. Returns 1 | C |
| `0x00439E20` | `int GetMagicPotion()` | returns `+0x58` | C |
| `0x00439E30` | `void SetPotionLimit(int n)` `RET 4` | `+0x5C = clamp(n, 0, LimitMaxPotions)`; only caller `CRCPlayer` slot 13 with n = 100 (`0x0043216E`); no reader of the field found | C |
| `0x00439EA0` | `bool AddMirrorPart(int n)` `RET 4` | `+0x60 += n`; `n >= 0`: clamp to `+0x64`; `n < 0`: clamp to 0. Returns 1 | C |
| `0x00439D20` | `bool AddScore(int n)` `RET 4` | `+0x48 += n`; `n >= 1`: clamp to `LimitMaxScore` (`0x006B58A0`); `n < 1`: clamp to 0 | C |
| `0x00439D70` | `bool AddTotalScore(int n)` `RET 4` | same on `+0x54`; only caller: results screen `0x0049139E` | C |
| `0x00439CE0` | `bool AddLives(int n)` `RET 4` | `+0x44 += n`; `n >= 1`: clamp to `LimitMaxLifes` (`0x006B58A8`), returns 1; `n < 1`: if the result is negative, store −1 and return 0 | C |
| `0x00439CD0` | `int GetLives()` | returns `+0x44` | C |
| `0x00439BF0` | `bool ChangeHealth(float d, int unused, bool force)` `RET 0xC`, vtable slot 8 | `d >= 0`: `+0x3C = min(+0x3C + d, +0x40)`, returns 1. `d < 0`: if (`+0x15` or `+0x14`) and `!force` → returns 0, nothing changes; else `+0x3C = max(+0x3C + d, 0)`, returns 1 | C |
| `0x00439BD0` | `void SetHealth(float v)` `RET 4` | `+0x3C = v`, then `ChangeHealth(0,0,0)` (clamps to the maximum) | C |
| `0x00439BB0` | `void RestoreHealth()` vtable slot 11 | `SetHealth(+0x40)` | C |
| `0x00587190` | `float GetHealth()` slot 10 | `+0x3C` | C |
| `0x00439BC0` | `float GetMaxHealth()` | `+0x40` | C |
| `0x00439CB0` | `bool IsDead()` slot 9 | `+0x3C <= 0` (run: after `Kill()` the health is 0 for 121 passes, then back with a life less or, with none left, the retry screen: `startup-and-loop.md` 8) | C |
| `0x00439C70` | `bool AddMaxHealth(float d)` `RET 4` | `d >= 0`: `+0x40 = min(+0x40 + d, LimitMaxHealth)`; `d < 0`: no change. Caller: `CRcItemHart` `0x0043D475` | C |
| `0x00439EE0` / `0x00439EF0` / `0x00439F10` / `0x00439F30` | `SetSkill(mask)` / `ClearSkill(mask)` / `bool HasSkill(mask)` / `GetSkills()` | on `+0x68` | C |
| `0x0043AF60` | `bool HasPotionsFor(int skillMask)` `RET 4` | `+0x58 >=` `ReqPotionShot` (1) / `ReqPotionPowerShot` (2) / `ReqPotionSuperShot` (4) / `ReqPotionSuperJump` (8) / `ReqPotionPowerMove` (16); any other mask: `>= 999` | C |
| `0x004DDEB0` | `bool SetGodMode(bool on)` `RET 4` | `+0x14 = on` | C |

On the player (`CRCPlayer`, thiscall):

| Address | Prototype | Behaviour | Ev. |
|---|---|---|---|
| `0x00436EA0` | `bool EnableSkill(int index)` `RET 4` | index 0..4 → `SetSkill(1, 2, 4, 8, 0x10)`; the script wrapper `RcEnableSkill` (`0x0056B190`) additionally passes `harp1.wav` to `0x00491C50` (INFERRED: plays it) | C |
| `0x00436D00` | `int HasAllPotions(int index)` `RET 4` | index 0..4 → `HasPotionsFor(1, 2, 4, 8, 0x10)`; script wrapper `RcHasAllPotions` = `0x0056AF10` | C |
| `0x004DD1A0` | `Kill()` vtable slot 8 | `props->ChangeHealth(-1e8, 0, force = 1)`: kills in god mode too | C |

### 2.2 Limits and where they come from

Loaded by one small function each into a global (key string confirmed in each loader;
file INFERRED `Settings\Game.ini [Player]`, where the shipped file has these keys).

| Global | Key | Loader | Shipped value | Used by |
|---|---|---|---|---|
| `0x006B58B4` | `MaxHealth` | `0x00437980` | 10.0 | ctor, Load default |
| `0x006B58B0` | `LimitMaxHealth` | `0x00437AD0` | 20.0 | `AddMaxHealth` |
| `0x006B58AC` | `InitialLifes` | `0x00437C20` | 3 | ctor |
| `0x006B58A8` | `LimitMaxLifes` | `0x00437D60` | 999 | `AddLives` |
| `0x006B58A4` | `StartScore` | `0x00437EA0` | 0 | ctor |
| `0x006B58A0` | `LimitMaxScore` | `0x00437FE0` | 999999 | `AddScore`, `AddTotalScore` |
| `0x006B5894` | `InitialPotions` | `0x004383A0` | 0 | ctor |
| `0x006B5890` | `LimitMaxPotions` | `0x004384E0` | 20 | ctor (`+0x5C`), `SetPotionLimit`, default of `MaxMagicPotion` |
| `0x006B588C` | `InitialParts` | `0x00438620` | 0 | ctor |
| `0x006B5888` | `LimitMaxParts` | `0x00438760` | 5 | ctor (`+0x64`), default of `MaxMirrorPart` |
| `0x006B5884` | `LimitMoneyBags` | `0x004388A0` | 999999 | coin counter |
| `0x006B5880` … `0x006B5870` | `ReqPotionShot`, `…PowerShot`, `…SuperShot`, `…SuperJump`, `…PowerMove` | `0x004389E0` … `0x00438EE0` | 10, 20, 30, 30, 0 | `HasPotionsFor` |

- **Effective potion maximum: 100**, hard-coded in `AddMagicPotion`. `LimitMaxPotions`
  (20) and the per-player key `MaxMagicPotion` do not limit the count: `MaxMagicPotion` is
  referenced only by the `CRcSubLevelSettings` constructor `0x0049A100` (creates the
  setting with default `LimitMaxPotions`) and is not loaded into the properties object.
  The shipped `Player1.ini` / `PlayerDef.ini` carry `[Player] MaxMagicPotion=100` and
  `[SubLevel…] MaxMagicPotion=20`; neither is read back into the count limit.
- **Mirror-part maximum: `props+0x64`**, loaded from `Player<N>.ini [Player] MaxMirrorPart`
  (default `LimitMaxParts` = 5) by `Load` (`0x0043A64E`).
- **Score cap: `LimitMaxScore`**, applied separately to `+0x48` and `+0x54`.
- The potion counter next to the HUD icon is `props+0x58`; the number shown as the total
  is the sublevel's `NrPotions` (`0x0049B020`, `Game.ini`), not a limit.

### 2.3 What a real pickup does

Item base handler `0x004E1EE0`: if the item state is 1 or 3 and `item->vtbl[34]()` allows
it, call `item->vtbl[31](…)`; when that returns true, fire the script event
**`PickupCommand`** (`0x00505400` with the static string `0x006B9650`) and set the item
state to 0.

| Item | `vtbl[31]` | What it does | Ev. |
|---|---|---|---|
| `CRcItemPotion` | `0x00441CF0` | `AddScore(*0x006B5B58)` (items.ini `[Potion] Score` = 25), `AddMagicPotion(1)`, score sprite `0x004699F0` | C |
| `CRcItemMirror` | `0x00440E60` | `AddScore(*0x006B5AF8)` (`[Mirror] Score` = 75), `AddMirrorPart(1)`, score sprite | C |
| `CRcItemLife` | `0x0043FF60` | `AddScore`, `AddLives` | C |
| `CRcItemCoin` | `0x0043C5C0` | `AddScore` (3 sizes), coin counter | C |
| `CRcItemHealth` | `0x0043EE90` | `AddScore` (3 call sites); health change not read | I |
| `CRcItemHart` | `0x0043D290` | `AddMaxHealth` | C |

Consequences for the cheat (differences from collecting the real items):

1. **No `PickupCommand` runs.** In every level the mirror's `PickupCommand` handler drives
   the level end: `lvl00a` `mirror` → `endleveltrigger.Trigger()`; `lvl01a`
   `MirrorEndBossLvl01` → `endlevel_mc.Enable()`; `lvl02a` `mirror` → `csmc08.Enable()`;
   `lvl03a` `mirror_lv4` → `cutscene07.Enable()`; `lvl04a` `laatste` → `HasLastMirror := 1`
   (recovered listings). Setting the mirror-part count does not finish or advance a
   level. C.
2. The items stay in the level and can still be collected; counts stay clamped.
3. **Fairy gates open.** The level scripts ask `RcHasAllPotions(n)` when the player enters
   the fairy trigger and call `RcEnableSkill(n)` on success (`lvl00a.davi` handler of
   `csmc06_tr`). With 100 potions every requirement (max 30) is met. C.
4. Potions are reset to 0 by `Load` when the next sublevel starts; mirror parts, score and
   skills are written to `Player<N>.ini [Player]` by `Save` and carried. The results
   screen adds to the total score through `AddTotalScore`. C (`0x0043AA67`, `0x0043AC20`,
   `0x0049139E`); what exactly the results screen adds was not read.
5. No reader of the mirror-part count was found in the game module apart from `Save`
   (`0x0043ADE3`); `RcHcMenu.dat` reads `MirrorPart` from the player file
   (startup-and-loop.md, 6.3). Raising it changes what the menu sees after the run. I.
6. No score sprite, no sound, no statistics change (`SecretsFound`, `EnemiesKilled`, …).

### 2.4 Recommended implementation: "supplies"

Call between two frames, only when the chain of 1.2 is valid and `state == 3`.

1. Resolve `props` (1.2).
2. `thiscall 0x00439E60(props, 100)` → potions = 100.
3. `thiscall 0x00439EA0(props, i32(props + 0x64))` → mirror parts = maximum. Pass the
   maximum itself, not a huge number (the function adds before it clamps).
4. `thiscall 0x00439D20(props, 9000)` → sublevel score + 9000, capped at `LimitMaxScore`.
5. Nothing else. The HUD is refreshed by polling: `CRcHUD` slot 6 `0x004536A0` is called
   from the game-state render function every frame (`0x00484A93`–`0x00484A9C`, object
   `player+0x1F4`) and reads lives (`0x00452FA0`), health (`0x00453000`), score
   (`0x00453060`) and potions (`0x004532E0`) from `hud+0x14`. Which of them are
   updated depends on a HUD display mode (switch at `0x004536D4`, table `0x00453934`).

Equivalent direct writes (same result, because the three functions are leaf functions):
`i32(props+0x58) = 100`, `i32(props+0x60) = i32(props+0x64)`,
`i32(props+0x48) = min(i32(props+0x48) + 9000, i32(0x006B58A0))`.

To mirror the earlier JavaScript port exactly (`source/cheats.js`): it sets potions to 100,
mirror parts to `LimitMaxParts` and adds 9000 to the score with the `LimitMaxScore` cap —
the same three values.

---

## 3. Debug and cheat facilities in the original (C)

### 3.1 Switches

| Setting | Read by | Effect | Ev. |
|---|---|---|---|
| `[Debug] DebugSecretCommands` (accessor `0x00515B70`; no file name in the accessor → default INI `.\ADAMWIN.INI`, file I) | `0x004C0D57` | **registers the whole debug key table** at start (`CAdamApplication::Start` → `0x004C0D20`); 0 → the table stays empty | C |
| | `0x004BC9C5` | console allowed: `app+0x39C = 1` | C |
| | `0x005233FC` (game ctor) | cheat menu enabled: `game+0xAC = 1` | C |
| | `0x00532698` (`DisplayMenu`) | adds a "graphics detail" item to the cheat menu | C |
| `Player<N>.ini [General] Console` | `0x004BCA56`–`0x004BCAD9` | when `DebugSecretCommands == 0`: `app+0x39C = (Console != 0)` | C |
| `[Debug] DebugUseConsole` (`0x00519CB0`) + `[Application] Console` (`app+0x5C8`) | `0x004BFDBA` (main loop start), also `Start`, `ChangeToSubLevel` | when set, the console is opened/closed to match `[Application] Console` | C |
| `[Debug] DebugKeys` (`0x00518AB0`) | `0x004C0978` only | traces `unknown keypress '%c' %d (%X)`; **does not enable anything** | C |
| `[Debug] DebugFakeAssertion` (`0x00558DB0`, `.\ADAMWIN.INI`) | `0x004C0D6B` | adds the `M` key entry | C |

All of these are 0 in the shipped files.

The key table is built once, in `Start`. Changing the INI value or the setting object later
does not add the keys. The host can call the handlers directly instead (3.2).

### 3.2 Debug key commands

Registration `0x004C0D20`; entry constructor `0x004C50D0` (thiscall, 6 args: key,
modifier, `std::string* text`, handler, repeat, type); list at `app+0x4C..+0x50`, 0x40
bytes per entry:

| Offset | Field |
|---|---|
| `+0x00` | virtual-key code |
| `+0x04` | u8 "released since last trigger" |
| `+0x08` | modifier: 0 any · 1 neither SHIFT nor CTRL · 2 SHIFT held · 3 CTRL held |
| `+0x0C` | `std::string` help text |
| `+0x1C` | time of the last trigger (`timeGetTime`) |
| `+0x20` | u8 repeat while held (every 100 ms) |
| `+0x24` | handler: `bool __cdecl h(std::string* text)` (`0x004C0859`: push, call, `ADD ESP,4`) |
| `+0x28..+0x34` | member-function handler (only F1) |
| `+0x38` | type; 1 = polled with `0x005A9BB0` (`GetAsyncKeyState`). All entries use 1 |

`HandleKeyCommands` (`0x004C0170`) walks the list once per main-loop iteration and runs
the first entry whose key and modifier match. The handler receives the main loop's `text`
string and stores a message in it.

Effects marked I are taken from the registered help text and the message strings of the
handler; the handlers marked C were read.

| Key (VK) | Mod | Rep | Help text | Handler | Effect | Ev. |
|---|---|---|---|---|---|---|
| M (0x4D) | 1 | 0 | `M      : Test Assertion Fails` | `0x004C2890` | forces an assert; only with `DebugFakeAssertion` | I |
| Z (0x5A) | 1 / 2 | 1 | `Z      : Increase ZScale for camera (SHIFT+Z to descrease)` | `0x004C6530` / `0x004C6270` | camera ZScale up / down | I |
| G (0x47) | 1 / 2 | 1 | `G      : Increase Gamma (SHIFT+G to decrease) (NB: Slow!)` | `0x004C60A0` / `0x004C5ED0` | gamma | I |
| F (0x46) | 1 / 2 | 1 | `F      : Increase FOV (SHIFT+F to decrease)` | `0x004C5C10` / `0x004C5950` | field of view | I |
| R (0x52) | 1 / 2 | 1 | `R      : Increase Render rect (SHIFT+R to decrease)` | `0x004C5680` / `0x004C53B0` | render rectangle % | I |
| V (0x56) | 1 / 2 | 1 | `V      : Increase Volume (SHIFT+V to decrease)` | `0x004CA260` / `0x004CA4E0` | master volume | I |
| E (0x45) | 0 | 0 | `E      : Display test explosion animation` | `0x0058EBA0` | spawns an explosion at the camera | I |
| P (0x50) | 0 | 0 | `P      : Toggle path rendering on/off` | `0x004C7E00` | waypoint path rendering | I |
| K (0x4B) | 0 | 0 | `K      : Toggle Player Visibility` | `0x004C9B20` | toggles `player+0xA8` | C |
| H (0x48) | 0 | 0 | `H      : Toggle the HUD` | `0x004C8110` | HUD on/off | I |
| X (0x58) | 1 / 2 | 1 | `X      : Increase radius of crosshair (SHIFT+X to descrease)` | `0x004C83B0` / `0x004C8680` | crosshair radius | I |
| L (0x4C) | 1 | 1 | `L      : Toggle Low End PC Settings` | `0x004CA740` | `LowEndPC` setting | I |
| T (0x54) | 2 | 0 | `SHIFT+T: Toggle any (!) text printing on/off` | `0x004C80E0` | text output on/off | I |
| F1 (0x70) | 1 | 0 | `F1      : List commands` | member `0x004C0A50` | lists the help texts | I |
| F1 | 2 | 0 | `SHIFT+F1 : Statistics` | `0x004CA060` | sublevel statistics (`0x004FC4A0`) | I |
| F2 (0x71) | 1 | 0 | `F2      : Toggle frame-calling on/off to see 'true' framerate` | `0x004C73B0` | | I |
| F2 | 2 | 0 | `SHIFT+F2: Toggle AddPoly calls on/off to see 'true' framerate` | `0x004C7240` | | I |
| F2 | 3 | 0 | `CONTROL+F2: start framealling performance test` | `0x005AD370` | stub (`return true`) | C |
| F3 (0x72) | 0 | 0 | `F3      : Jump to 'next' Deathmatch start position` | `0x004C7860` | player present: `Teleport` (`0x004D60F0`, call `0x004C7AAC`) to the next start entity (C); otherwise moves the camera (I) | C |
| F4 (0x73) | 0 | 0 | `F4      : ScreenShot (NB : Glide only)` | `0x004C7560` | writes `ScreenDump%d.bmp` | I |
| F5 (0x74) | 0 | 0 | `F5      : Toggle Genesis Framerate info` | `0x004C7520` | | I |
| **F6 (0x75)** | 0 | 0 | `F6      : REDCAT: Toggle player collision on/off` | **`0x004C6800`** | `engine+0x48 ^= 1` through `0x00560620`; text `Collision is ON` / `Collision is OFF`. **No-clip flight**, section 4 | C |
| F8 (0x77) | 3 | 0 | `CTRL+F8 : Toggle wireframe mode on/off (Glide only)` | `0x005AD370` | stub | C |
| **F9 (0x78)** | 0 | 0 | `F9      : Toggle God mode on/off` | **`0x004C6960`** | `props+0x14 ^= 1` (`0x004DDEC0`); text `God mode switched on!` / `off!` | C |
| **F10 (0x79)** | 0 | 0 | `F10     : REDCAT: Toggle Skills.` | **`0x004C6C40`** | cycles the skill mask 0 → 1 → 3 → 0xB → 0xF → 0 (adds shot, power shot, super jump, super shot; then clears all five bits) | C |
| F11 (0x7A) | 0 | 0 | `F11     : Fast keys on/off.` | `0x004C7040` | calls `CRcInput` slot 18 = `0x0053DC80` (returns 0): no effect found | I |
| , < (0xBC) | 2 | 0 | `< >     : Move 3D camera to left/right` | `0x004C8950` | camera offset | I |
| . > (0xBE) | 2 | 0 | (same) | `0x004C8C30` | | I |
| C (0x43) | 1 / 2 | 0 | `C       : Drop Camera (SHIFT+C : pick it up)` | `0x004C8F20` / `0x004C90E0` | camera fixed at its current position / follows the player again. Not a free-fly camera | I |
| A (0x41) | 0 | 0 | `A       : Toggle rendering AI info` | `0x004C9270` | `RenderAIInfo` | I |
| B (0x42) | 1 / 2 | 0 | `B       : Toggle Bounding Box rendering On/Off (SHIFT+B: cycle render mode)` | `0x004C9460` / `0x004C9640` | | I |
| I (0x49) | 0 | 0 | `I       : Toggle interlacing On/Off` | `0x004C9940` | | I |
| 9 (0x39) | 0 | 0 | `9       : Toggle gouraud On/Off` | `0x005AD370` | stub | C |
| 0 (0x30) | 0 | 0 | `O       : Toggle additive lighting On/Off` | `0x005AD370` | stub (registered on the digit zero) | C |
| S (0x53) | 1 / 2 | 1 | `S       : faster game objects (SHIFT+S to slow down)` | `0x004CA040` / `0x004C9DA0` | game clock speed (`ClockSpeed %f => %f`) | I |

"1 / 2" = two entries, the plain key with modifier 1 and the SHIFT variant with modifier 2
(the SHIFT entry has an empty help text).

### 3.3 Console

Object at `app+0x88`. Opened and closed by `ToggleConsole` (`0x004C97E0`, cdecl, one
`std::string*` argument) on the input action `ToggleConsole` (default key `` ` ``), **only
when `app+0x39C != 0`** (`ProcessMessages`, startup-and-loop.md 4.2), i.e. with
`Player<N>.ini [General] Console=1` or `[Debug] DebugSecretCommands=1`. While it is open,
`WM_KEYDOWN` / `WM_CHAR` go to `0x00594470`, which calls the dispatcher at `0x00594640`
(INFERRED: on Enter).

Dispatcher `0x005935A0` (thiscall on the console; command line = `std::string` at
`console+0x2F8`; tokeniser `0x00593450`; comparisons with `_strcmpi` `0x006195F0`):

| Command | Site | Effect | Ev. |
|---|---|---|---|
| `settings [prefix]` | `0x0059378D` | prints `name = value` for every registered `CDaviSetting` whose name starts with the prefix (list head `0x005AC520`, next `0x005AC530`) | C |
| `restart` | `0x00593865` | `game->vtbl[7]("restart")` = `CRCGame::ChangeToSubLevel`; without a sublevel: `ERROR: no current sublevel to restart.` | C |
| `quit` | `0x00593967` | `app->SetQuit(true)` (`0x004C4440`) | C |
| `map "<file>"` | `0x005939C0` | `game->vtbl[7](<file>)` → load that sublevel; errors `command '%s' requires a 'filename'`, `'filename' expected (use quotes!)` | C |
| `cheats [arg]` | `0x00593AF7` | `arg` equal to `0`, `false` or `off` → `game+0xAC = 0`, `OK, Cheats are turned OFF`; anything else, also no argument → `game+0xAC = 1`, `OK, Cheats are turned ON` (setter `0x00529A40`). **Only enables the cheat menu of 3.4** | C |
| `help` | `0x00593C4D` | prints `Supported commands are:`, `  QUIT`, `  RESTART`, `  SETTINGS [partial name]`, `  EXEC DaviName.Command`, `  <setting> = <new value>` | C |
| `<setting>` | `0x00593F5D` (`0x00594370`) | `Current value of %s = %s` | C |
| `<setting> = <value>` | `0x00594124` | `CDaviSetting::SetValue` (`0x005ACDB0`), `OK, %s = %s` | C |
| anything else | `0x0059421F` | `ERROR: Unknown command '%s'; type HELP` | C |

`EXEC DaviName.Command` is printed by `help` but has no branch in the dispatcher. `map`
and `cheats` are not listed by `help`. There is no console command for god mode, items or
no-clip.

### 3.4 Hidden cheat page of the in-game menu

`CAdamGame::DisplayMenu` (`0x0052EC30`, input action `Menu`, default Escape) adds a
sub-menu with the help line `Toont Het menu van de cheats.` when **`game+0xAC != 0`**
(`0x00531CCC`). `game+0xAC` is set by the game constructor when `DebugSecretCommands != 0`
and by the console command `cheats`. Labels come from the text resource (ids 0x67–0x74);
the help lines are in the binary.

| Help line | Kind | Action after the menu closes | Ev. |
|---|---|---|---|
| `[Enter] = het volgende level inladen.` | menu code 3 | `ChangeToSubLevel("next")` (`0x0053318D`) | C |
| `Level om naar toe te gaan. [Enter] = level inladen.` | selector (index in `0x006BA668`), menu code 4 | `ChangeToSubLevel(<file of the chosen sublevel>)` (`0x005331D6`–`0x00533308`) | C |
| `[Enter] = vlieg door muren, etc.` | toggle bound to `0x006BA670`, changed flag `0x006BA675` | `engine->SetPlayerCollision(*0x006BA670 == 0)` (`0x0053303D`); message id 0x29 (off) / 0x2A (on) | C |
| `[Enter] = wordt onsterfelijk.` | toggle bound to `0x006BA66C`, changed flag `0x006BA674` | `props->SetGodMode(*0x006BA66C != 0)` (`0x00532F1A`); message id 0x2B / 0x2C | C |
| `[Enter] = krijg alle wapens, munitie, etc.` | menu code 6 | `props->vtbl[2]()` = `0x005630E0` = empty function: **nothing happens** | C |
| `[Enter] = krijg alle wapens, munitie, sleutels, etc.` | menu code 5 | `props->vtbl[1]()` = `0x005630E0`: **nothing happens** | C |
| `Bepaalt de hoeveelheid grafische details.` | only with `DebugSecretCommands` | graphics detail | I |

Menu codes (jump table `0x005333D4`): 0 resume · 1 quit · 2 `restart` · 3 next level ·
4 chosen level · 5 / 6 the two "give all" calls.

### 3.5 Summary by cheat type

| Wanted | In the original | Host shortcut |
|---|---|---|
| god mode | F9, cheat menu | `u8(props+0x14) = 1 / 0`. `KillPlayer` and `Kill()` still kill (forced). Brush "death" zones go through `0x00503FC0`; whether that path forces was not traced |
| no-clip / fly | F6, cheat menu | `u8(engine+0x48) = 0 / 1` (section 4) |
| give potions / mirror parts / score | **none** (the two "give all" entries are empty) | section 2.4 |
| give skills | F10 (cycle); scripts `RcEnableSkill` | `thiscall 0x00439EE0(props, mask)` |
| level skip | cheat menu (next / select), console `map`, `restart` | game command string `game+0x68` = `next` / `nextsave` / `restart` (startup-and-loop.md 5.2) |
| teleport | F3 | `thiscall 0x004D60F0(player, &pos, angle)` |
| free camera | none; only "drop camera" (C) and a sideways camera offset (SHIFT+`<` `>`) | — |

---

## 4. Free flight (D)

### 4.1 The original no-clip mode

- Flag: **`u8 engine+0x48`** = "player collision on". Constructor value 1 (`0x00559E9E`).
  Setter `0x00560620` (thiscall, `bool`, `RET 4`; three instructions), getter
  `0x005333F0`. The setter has exactly two callers: the F6 handler (`0x004C6823`) and the
  cheat menu (`0x0053303D`). The only instructions that write the byte are the
  constructor and the setter, so it is not reset by level loading and stays until
  toggled. C.
- Reader: the player move function only — `CRCPlayer` vtable slot 21 `0x00435490`
  (`0x004354F6`, `0x004360EC`) and the base version `CAdamPlayer` slot 21 `0x004D7AB0`
  (`0x004D7ADC`, `0x004D8B3F`), which `CRCPlayer` overrides. C.

### 4.2 Per-frame movement (for reference)

`CRCPlayer::Update(int now, int dtMs)` = slot 2 `0x00432420`:
`0x00435440` (movement lock `+0x371`) → base `CAdamPlayer::Update` `0x004DA970`:

```
input = player->+0xF8;  input->vtbl[3]()                 // Poll: move vector, flags (0x004375B0)
dt = dtMs * 0.001
// speeds for this frame (0x004DAD37–0x004DAD94); globals = settings * world scale (0x004D57B0)
if (player->+0x100 == 2)      (+0x18C, +0x190) = (AirForwardSpeed  0x006B92D0, AirOtherSpeed  0x006B92D4)
else if (input->+0x20)        (+0x18C, +0x190) = (WalkForwardSpeed 0x006B92C0, WalkOtherSpeed 0x006B92C4)
else                          (+0x18C, +0x190) = (RunForwardSpeed  0x006B92C8, RunOtherSpeed  0x006B92CC)
v = input->move * player->+0x190                         // 0x004DADB2
if (v.z < 0) v.z = input->move.z * player->+0x18C        // forward uses the forward speed
v = rotateY(input->yaw, v)                               // 0x004DA920
v += player->+0x1B4 * scale                              // external impulse, 0x004DAE3D
newPos = this->vtbl[21](&tmp, &player->+0x198, &v, dt)   // Move, call at 0x004DAE67
player->+0x180 = v;  player->+0x198 = newPos             // 0x004DAE6C–0x004DAEC4
0x004DD490(&pos); 0x004D6720()                           // apply to the actor (I)
contents at the position → +0x108; death / ooze damage   // 0x004DAED3 ff.
```

World scale = `0x00431000()` = float setting at `app+0x42C` (INFERRED
`[Application] GeneralWorldScale`, shipped 32). Shipped `[Player]` values: run forward 4.9,
run other 4.5, walk forward 3.0, walk other 4.9, air 1.0 / 1.0, `Gravitation` 25
(`0x006B92B0` after scaling).

`CRCPlayer::Move(vec3* out, const vec3* pos, const vec3* v, float dt)` = `0x00435490`
(thiscall, `RET 0x10`):

```
if (!player->+0x104 || player->+0x371) { *out = *pos; return; }      // 0x004354AF
if (!engine->+0x48) player->+0x100 = 4;                               // 0x004354F6
if (player->+0x1B8 > 0) { player->+0x100 = 2; velocity(+0x174) = impulse * scale; }
delta = v * dt
switch (player->+0x100) {
  case 0: walking: slide move with step up/down through 0x004D7710 (max. 3 hit planes; single
          trace 0x004D7390 → 0x00554B20 → Genesis 0x005B7DC0); no floor → state 2; jump → state 2
  case 1: stepping up; back to state 0 at the target height (+0x1C0)
  case 2, 3: air: velocity.y -= Gravitation·dt (two half steps, 0x00435B31 ff.), slide move,
          landing → state 0; super jump when skill 8 is set (0x00435AE4)
  case 4: newPos = pos + delta                                        // 0x004360CC–0x004360D9
          if (engine->+0x48) { player->+0x100 = 2; velocity = 0; }    // 0x004360EC–0x00436107
}
0x004D69B0(&newPos)     // actors whose box contains the player get a touch call (0x00503180)
0x004D6E80(&newPos)     // list of models the player is inside (triggers)
player->+0x1A4 = newPos // 0x0046D2B0
*out = newPos
```

Gravity and collision exist only inside cases 0–2; there is no separate gravity function.

### 4.3 Behaviour of state 4 (no-clip)

- Position advances by the desired velocity `v` of 4.2. It is the same vector the walking
  states receive, so the horizontal controls behave as on the ground; in addition the y
  component (**`MoveUp` / `MoveDown`**) is applied unchanged, while the walking state
  discards the upward part (`0x00435656`). No gravity, no world or model collision. C.
- Speed: forward `RunForwardSpeed · scale`, every other direction including vertical
  `RunOtherSpeed · scale` (with the shipped values and scale 32: 156.8 and 144 units/s). C
  for the formula, I for the scale value.
- Still active in state 4: the touch pass over actors (`0x004D69B0`; pickups, enemy
  contact), the model list (`0x004D6E80`; triggers), the brush-contents damage in `Update`,
  projectiles and enemy attacks. I for the gameplay consequences, C for the calls.
- Not moving at all while `player+0x104 == 0` or the action state locks movement
  (`+0x371`), e.g. during scripted sequences. C.
- A frame with `player+0x1B8 > 0` (external impulse) is run as state 2 with collision even
  while the flag is off; the next frame returns to state 4. C.
- Switching the flag back on: the next `Move` sets state 2 and clears the velocity; the
  player falls from the current position with normal collision. **The original does not
  check whether that position is inside solid geometry.** C.

### 4.4 Recommended implementation: "free flight"

(Since 2026-11-15 the port flies the JavaScript port's way on top of this mode: `source/host/move.js`
replaces the velocity given to `Move` while the byte is 0; `docs/intentional-differences.md`. Point 5
below describes the original's own controls, which the port had until then.)

Use the game's own mode. No per-frame work, no patch.

1. `engine = u32(0x006C8DE0)`; if 0, do nothing.
2. **On**: `thiscall 0x00560620(engine, 0)` (or write `u8(engine+0x48) = 0`).
3. **Off**: `thiscall 0x00560620(engine, 1)` (or write 1). The game switches to state 2
   and zeroes the velocity itself in the next player update.
4. Keep the host's toggle state in sync by reading `u8(engine+0x48)` (the original F6 key
   or the cheat menu can change it too). The flag survives sublevel changes; write 1 when
   the cheat is switched off or a new game starts, if that is the wanted behaviour.
5. Controls need no host code: the bound actions `MoveForward`, `MoveBack`, `TurnLeft`,
   `TurnRight`, `MoveLeft`, `MoveRight`, **`MoveUp`**, **`MoveDown`** drive the flight. The
   host only has to make sure keys (or touch buttons) for `MoveUp` / `MoveDown` reach the
   game: with DirectInput off the game polls `GetAsyncKeyState` with the virtual-key code
   of the binding (`Home` = 36, `End` = 35 in `Game.ini [InputKeys]`).
6. Optional, to match the earlier port's "safe exit": before switching off, remember
   `player+0x198` at switch-on time (or any known good position) and, if the player ends
   up stuck, restore it with `thiscall 0x004DBE20(player, &pos)` (`SetPosition`, keeps the
   yaw) plus the same three floats to `player+0x1A4`. `Teleport` (`0x004D60F0`) also
   works but resets the input object and the yaw. A collision query the host could call to
   test a position was not prepared here (see "Not established").
7. Optional: combine with god mode (`u8(props+0x14) = 1`) while flying, because damage
   sources stay active.

Alternative with the original message text: `cdecl 0x004C6800(std::string* text)` (the F6
handler) toggles the flag and stores `Collision is ON` / `Collision is OFF` in `text`; it
needs a valid MSVC 6 `std::string` (the main-loop `text` object of startup-and-loop.md 4.4
qualifies).

If the host ever needs its own flight instead (not recommended): the only fields that
matter are `player+0x198` (position; also write `+0x1A4`), `player+0x174` (velocity) and
`player+0x100` (state); state 0–2 would fight a per-frame position write through gravity
and the slide move, which is exactly what state 4 avoids. Facing = `input+0x18` (1.5),
controls = `input+0x28`.

---

## 5. Checks against the notes of the JavaScript port

| Note (RCSPOOK_NEW/docs, source) | Result |
|---|---|
| potion cap 100 in `0x439E60`, `LimitMaxPotions` goes to a separate field `this+0x5C` (`inventory-limits-native.md`) | CONFIRMED; additionally no reader of `+0x5C` was found |
| `RcEnableSkill` wrapper `0x56B190` → `0x436EA0`, index 0..4 → masks 1, 2, 4, 8, 16; potion query `0x436D00` (`player-abilities-native.md`) | CONFIRMED |
| super jump checks mask 8 at `0x435AA9` ff. | CONFIRMED (`HasSkill(8)` at `0x00435AE4`) |
| cheat grants "do not collect level entities or dispatch their scripts" (`source/cheats.js`) | same on the original when 2.4 is used (no `PickupCommand`) |
| flight in the port is a port feature with its own collision-safe exit | the original has the mode (F6 / cheat menu) but no safe exit |

---

## 6. Not established

1. Which point of the player body `player+0x198` is, and the bounding box used by the
   collision helper (`BBXSize`, `BBYSize`, `BBZSize`, `EyeHeight` were not followed).
2. A host-callable "is this position free?" test. `0x00554B20` (wrapper around Genesis
   `0x005B7DC0`) and `0x004D7390` were located, their argument lists were not read. Needed
   only for a safe exit from flight.
3. The exact heading logic of the third-person control mode (`CRCPlayer` slot 24
   `0x00434430`, `0x00434F20`, `[Player] ControlMode=1`): how the camera transform, the
   move vector and the stored yaw `heading − π/2` combine, and therefore the exact travel
   direction per key during flight. Confirmed is only that flight uses the same desired
   velocity as walking.
4. Camera behaviour while the player is inside geometry in state 4.
5. Whether brush "death" damage (`0x00503FC0`, `DeathDamagePerSecond`) and falling damage
   respect god mode (`force` argument at those call sites not read).
6. Who calls `0x00436A10` / `0x00436A20` (player active flag `+0x104`) and which action
   states 7, 8, 10, 11 of `+0x250` are.
7. When `game+0x60` and `sub+0x360` are cleared during a sublevel change (only the setters
   `0x00523C6B`, `0x005299E9`, `0x004F41B0` were located).
8. Meaning of `props+0x4C`, `+0x50`, `+0x6C`, `+0x70`; where the mirror-part count is
   displayed or tested in the game module (no reader besides `Save` found).
9. The INI file of the `[Debug]` accessors that pass no file name (taken to be
   `.\ADAMWIN.INI`, the default INI of startup-and-loop.md 2.4).
10. The effects marked I in the debug key table (handlers were identified by their strings,
    not read), the F1 member handler `0x004C0A50`, and the text-resource labels (ids
    0x67–0x74) of the cheat menu.
11. The console key handler `0x00594470` (editing, history) beyond its call of the
    dispatcher; how the handler messages stored in `text` are shown on screen.
12. Nothing here was executed: all behaviour is from static reading. Runtime confirmation
    in the recompiled module is still to be done.
