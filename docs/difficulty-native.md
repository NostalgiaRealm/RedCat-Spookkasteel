# Original difficulty settings

The settings menu offers **Makkelijk**, **Normaal** and **Moeilijk**, matching `Settings/menu.ini` entries 49, 50 and 51 in the original installation. `PlayerDef.ini` sets `General/DifficultyLevel=1`; the portable default is therefore Normaal.

The original `RcHcGame.dat` difficulty dispatch at `0x4256b4` selects ID **0 → Easy**, **1 → Normal**, **2 → Hard**. Its branches return the section strings at `0x42582a`, `0x4257ef` and `0x4257b0`. The projectile configuration path at `0x44b675` uses the same mapping. The player profile reads `DifficultyLevel` at `0x5232cd`. This is a choice of authored INI sections and projectile files, rather than a universal damage or speed multiplier.

`src/difficulty.js` exposes the native IDs, canonical values, Dutch labels and validated normalization. `Gameplay` selects the original imported tables when constructing a level. Existing AI and boss phases consume those tables, including health, melee damage, movement and spider descent speeds, perception/memory, shot spread, salvo sizes, attack waits and boss timing. Projectile damage, speed, gravity and lifetime come from the matching `ProjectileEasy.ini`, `ProjectileNormal.ini` or `ProjectileHard.ini`.

Examples from the original files:

| Parameter | Makkelijk | Normaal | Moeilijk |
| --- | ---: | ---: | ---: |
| Knight health | 4 | 5 | 6 |
| Knight melee damage | 2 | 3 | 3 |
| Knight remembered sight, seconds | 2 | 3 | 4 |
| Zombie melee damage | 1 | 2 | 3 |
| Green bat speed | 120 | 140 | 150 |
| Red spider descent speed | 150 | 160 | 170 |
| Generic enemy shot damage | 1 | 2 | 3 |
| Generic enemy shot initial speed | 350 | 400 | 400 |
| Skeleton bone damage | 1 | 2 | 3 |
| Dungeon Max health | 10 | 11 | 12 |
| Dungeon Max shots per salvo | 1 | 3 | 4 |
| Dungeon Max rise time, seconds | 1 | 2 | 1 |

Some original values do not increase monotonically. They are used as authored. RedCat's ordinary projectile remains damage 1, initial speed 300 and recharge time 1 on all three difficulties, as defined by the original projectile INIs. Player inventory and movement settings are not given invented difficulty multipliers.

The selected preference applies when starting or restarting a level, or proceeding to the next level. It does not replace an active enemy's health, reset an ongoing boss phase, or alter ammunition already in flight. This matches the original menu's selection before launching gameplay, while placing the control in the requested settings menu.

Each save records the encounter's difficulty. Loading restores that difficulty before restoring enemy health, boss state and projectile hazards, independently of the preference for the next new level. The rendering layer attaches afterward so animation rates also use the saved native section. Older remake saves omit this field and retain **Normal**, the only previously exposed runtime choice. An invalid value also falls back to Normal; a save for another level is rejected before changing the current encounter.

Focused verification: `node --test tests/difficulty.test.mjs` checks labels/IDs, invalid preferences, actual knight melee and projectile collision damage, original movement/boss parameters, table selection for enemies across the five imported levels, saved health limits and partially progressed bosses, projectile/hazard restoration, and legacy-save behavior. These tests are confined to difficulty integration; no packages are generated.

The focused browser check in `tests/campaign-settings-scenes.mjs` also verifies
the Dutch selector, persisted preference, Hard autosaves, preservation of Hard
on Continue after selecting Easy, and Easy on Restart. A legacy caves save
loads as Normal.
