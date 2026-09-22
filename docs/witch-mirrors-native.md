# Tower mirror presentation and introductory Witch visibility

This source repair preserves the original tower scripts, trigger locations,
motion timing and saved progression. No release packages were generated.

## Mirrors

All five tower placements use a pair of attached actors: `standaard.act` on
`sokkel01`–`sokkel05`, and `mirror_stndrd.act` on `sokkel1a`–`sokkel5a`.
The owned installation has no INI for either actor. Their vertices are Z-up,
but the previously imported metadata still had an identity initial rotation.
Consequently the stands and inserted mirrors lay horizontally instead of
standing upright at their authored positions.

The native `ActorInitialRotationX` configuration read supplies **−90 degrees**
at `RcHcGame.dat:0x4a3faf`, then calls the getter at `0x4a3fc6`. Y and Z
default to zero (`0x4a40b0`, `0x4a41ae`). Executable SHA-256:
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
The importer already implements these defaults following the portrait repair;
this change refreshes only the two mirror actor metadata files and their
manifest settings. Meshes, textures, entity origins and world rotations remain
the original data. Existing saves acquire the correction on asset load.

Original `MirrorTrigger1`–`MirrorTrigger5` Davi functions enable both controllers
for their stand, trigger `witch_enable`, play their authored sound/flash,
increment `MirrorsPlaced`, and disable that stand's trigger. The fifth placement
requires the last local mirror pickup (`HasLastMirror`). The existing portable
VM executes these actions correctly.

The preserved `lvl04a` motion chunk was decoded again for confirmation. Each
empty stand moves **−112 Y** and its mirror moves **+112 Y**, from actor origin
Y2304 to Y2416. All ten paths have keys at **0 and 0.01 seconds**. This is an
authored rapid exchange with a flash, rather than a long animated rise; no
invented easing or longer duration was added. The motion chunk SHA-256 is
`f74fe8daa6246b0b008824d42abb7adb31c134e996dec0a0bd85a100c8b14817`.
Original tower BSP SHA-256:
`a32a32bbda68c28c9e0d2257be0cd6a2d3461161bb06c82cbb8b7c9b599207e3`.

## Introductory Witch

The combat actor `The_Witch` is a `MovingEnemy` with
`IsInitiallyEnabled=0`. The introduction uses a separate `witch_model` actor
attached to `move_witchmodel`. Its original `start_enemey` event at **36.5 s**
calls `The_Witch.Enable`; before that event the combat actor must be hidden.
Native MovingEnemy initialization reads the authored enable field and applies
it both to its owner and contained actor at `0x427c18`–`0x427c3f`.

The portable visibility predicate previously hid disabled zombies, but retained
the disabled Witch's body in the cauldron. It now also hides a living disabled
Witch. This automatically repairs old saves without changing enemy enable
state or replaying the scene. Inactive Brutus and gargoyles retain their visible
poses. The Witch's existing immediate retirement on defeat remains intact.

## Focused checks

```sh
node --test tests/witch-mirrors.test.mjs
node tests/witch-mirrors-scenes.mjs
```

Both unit cases passed: original introduction activation timing and old/new
save visibility; all five upright mirror attachments, original exchange timing,
last-piece gating and saved raised positions. The browser fixture walks RedCat
into all five actual stand triggers with original BSP collision and no E press;
each raises its mirror to Y2416 and lowers its empty stand to Y2304. It checks
the hidden combat actor through the first 36.4 seconds and its visibility after
the native handoff. There are no browser, HTTP or Davi VM errors.

`artifacts/witch-mirrors-scenes.json` records the checks. The inspected images
`artifacts/tower-raised-mirror.png` and
`artifacts/tower-window-witch-single.png` show the upright raised mirror and
the first window-flight pose with an empty cauldron. The inspection camera is
chosen by the fixture; the actor and model poses come from the original data.
These checks cover the requested presentation and handoff, not a new claim of
full native Witch AI parity.
