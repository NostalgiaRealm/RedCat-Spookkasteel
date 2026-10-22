# Explosion frame ordering — 15 October 2026

Original: `RcHcGame.dat`, SHA-256 `e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
Static Hopper evidence, not an original-runtime observation.

- `0x58d8da..0x58d8e2` supplies zero interval and 400 ms lifetime. Fresh `0x4ad9a0` assembly confirms the setter stores arguments at +48/+4c; `0x4ad2e0` registers the cell. Fresh records: `rea-activation.json`, evidence `ev_9b3b96be36dd3c7618aa41e0d3ca26905d838dc304ce64429ff8166ae065cb49` and `ev_77975695753af37661d0029af3ed401c35e2d81be6cbf627fc3c0de33f02db1a`.
- Retained `../explosion-damage-2026-10-14/hurt_clock_asm.json`, evidence `ev_4cb57b7cb596edada07e6292ae185994b35e2b4cff2626506015072ff3574363`: `0x4adb04` anchors deadline at first eligible current time; `0x4adb14 jle` includes endpoint. `0x4ada26 jl` does not activate before its start.
- Retained `../explosion-damage-2026-10-14/hurt_fullasm.json`, evidence `ev_4d19588c9e29c9d10ca91a8a266ea872118703d1ad6a0ee1654eeeb7055103c6`: full integer frame delta multiplied at `0x4af524` and `0x4afd9d`; there is no remaining-lifetime clipping in the receiver.
- Implementation uses first-activation clock and whole gameplay dt on eligible frames; an expired frame gets no fractional remainder. Saves preserve activation; legacy saves retain birth-based remaining life. Chain wave iteration remains bounded to the cells existing before that frame's receiver scan. Early-return gameplay branches advance clocks without receiver damage.
- Native x87/global RNG/order across all engine controllers is not claimed exact. Port gameplay dt remains seconds, with its existing 100 ms cap and a 1 ns endpoint tolerance to neutralize representation drift only.

## Validation

`node --test tests/explosion-damage.test.mjs` passed 15 focused tests; output `focused-tests.log`. No builds or full historical suite. New checks cover inclusive equality, missed-end frame no partial damage, delayed activation, old/new save restoration and malformed clocks; existing relevant tests cover recipients, chain reactions, cutscene protection and synchronous respawn.

## Save review follow-up

Removed the two `Gameplay.snapshot`/`restore` filters that tied visual explosion records to the shorter hurt-cell lifetime. Records still pass the bounded `restoreNativeExplosions` validation and retire after six seconds. This preserves smoke after damage has ended without reconstructing any hurt cell or replaying commands/audio.

Prop fragments in those restored records are advanced to their saved age before mesh creation, at most six seconds in 50 ms steps, and expired fragments are skipped. The first draw does not advance that reconstructed clock twice. This retains the existing legacy collision replay approximation, unlike direct saved knight-fragment physics. Fresh launches are unchanged.

`node --test --test-name-pattern='saving mid-blast|saving after damage|restored prop' tests/explosion-damage.test.mjs tests/explosion-tail-save.test.mjs` passed three affected tests; `visual-tail-tests.log` contains the output. No broad rerun or build.
