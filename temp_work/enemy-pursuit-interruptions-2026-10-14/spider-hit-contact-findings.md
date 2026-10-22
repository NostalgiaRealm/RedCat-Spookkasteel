# Spider hit recovery and independent contact damage

14 October 2026. Static REA/Hopper inspection of original `RcHcGame.dat`,
SHA-256 `e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
No runtime playthrough. Complete supplemental records are in
`spider-hit-contact-evidence-bundle.json`: 21 records, 65,429 bytes, zero unknowns.
The original 248-record and later 47-record skeleton bundles remain separate.
The native session was closed after export.

## Fresh spider alert after hit

The shared moving hit path destroys its old nested child. Root `0x4030b0`
enters virtual alert factory `+14` after the hit child completes. Shoot spider
factory `0x408ad0` and touching spider factory `0x408b90` create new alert
wrappers. Their initializers `0x408d80` and `0x408f90` compare the actor's
current Y with its lower and upper anchors:

```
abs(upperY - currentY) < abs(lowerY - currentY)
  ? new MoveToStart(descend = true)
  : new active shoot/touch child
```

Equality takes the active branch. This applies regardless of whether the old
wrapper was hanging, descending, ascending or returning. The old vertical
child is not resumed. Sound-only hit rolls leave the old child running.

Touch getters `0x4183f0` and `0x418400` return lower `+1d8` and upper `+1d4`.
Initialization obtains the upper point from ceiling probe `0x429600` and the
lower point from floor helper `0x4298c0`. Touch descent constructor `0x409220`
and shoot descent constructor `0x4091a0` set child `+3c = 1`.

MoveToStart initializer `0x4098f0` checks whether the separate navigation
cursor has reached the authored StartPoint. If not, it installs the ordinary
explicit-destination move `0x5968d0(StartPoint)` and waits in state zero.
If already there, it stops navigation and enters vertical state one.
Update `0x409a60` performs the same transition after graph return finishes.
In state one, flag one subtracts FallSpeed times elapsed seconds from current
Y, clamping to the lower anchor and completing there. Flag zero ascends.

The preliminary graph return does not explicitly preserve current Y. It uses
the ordinary independent cursor. Earlier complete evidence retained in
`../enemy-movement-native-2026-10-05/native-touch-waypoint-findings.md`
establishes that cursor `0x59be70` moves in XYZ and callback `0x596be9` invokes
`0x595f60` to copy cursor XYZ to the actor. Thus a return from an unusually
elevated displaced body can restore the cursor's graph height. It is not a
native fixed-height horizontal flight. The port's collision-constrained
return and floor settling remain physical adaptations; avoid teleporting the
body solely to reproduce the separate cursor. Ordinary interrupted vertical
travel usually already has its cursor at StartPoint and goes directly to
fresh descent from its current height.

The evidence proves suppression of the old scripted FallSpeed movement during
hit. It does not independently prove that all engine physics is suspended.

## Contact is independent of the hit child

Touch callback `0x42ddd0` calls base `0x427d30`, then checks dead state,
contact validity, a valid target reference and matching player/target body.
If its actor timestamp `+1a8` is unset or at least 1000ms old, it calls player
damage `0x503fc0` and stores the new timestamp. There is no root-state,
animation, hurt, start or attack-child gate. The base callback likewise has
no hit-state check. Selected hit destruction does not reset this timestamp.

Consequently, a living touching enemy can hurt RedCat during its hit motion.
Its contact cooldown must survive selected hits and be separate from attack
windup/salvo timers. Save and freeze behavior should preserve that cooldown.

## Evidence keys

| Finding | Evidence ID |
| --- | --- |
| Shared root hit completion (original bundle) | `ev_c557b4fb2386a9435ebd9ad37356fe42cfecc2c0bea6d6ab770d8c281296cb6a` |
| Fresh shooting spider alert | `ev_ba11888b916b904d9a6fa2149a8eb72b08b85d6a359fcdf522cf700ee82da071` |
| Fresh touching spider alert | `ev_ac611a54c2a2237725358278334328312b689b35ca83497631fa49d28e538c31` |
| Shooting spider height choice | `ev_386d2b7a1ed4ae80e1c7cc7cc392af9feb5c5ce95e322013e91e29050d8c2676` |
| Touching spider height choice | `ev_bf54c8d60aedbd292ab8147bf6d231971c2276a55ee1aa9a5a6a021a3ecfbb05` |
| Shoot descent flag | `ev_ace7e17a68be1e8127136fb547b5ce9922195889af39e0b18689383a9221934f` |
| Touch descent flag | `ev_c8961abb1c43a358de42afa1c1c033836501d4c61c68388abf25304e4dd942f5` |
| Return-before-descent initializer | `ev_790658fe394046885daede1cd19ebe38e882661519bb123feae8bf6c5a8fc83f` |
| Vertical child update | `ev_633a1abea07520e06bc4361cde8a85204ded4a984b92d9bf456dea0e2bc8ac26` |
| Independent contact callback | `ev_60364f022d94747ac9c8f25c1c3f187cb481b501b61a6c0943dd1368059441ef` |
| Base contact callback | `ev_aee6dcbb2f32377edc290d629d6826ef9293c1e09b190374333201fa67a12e15` |
