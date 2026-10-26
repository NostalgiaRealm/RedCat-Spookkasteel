# Independent review of the recovered original deliverable

26 October 2026. This review reads the deliverable, source identities and
selected native instructions. It does not rerun game tests, builds or the
decompilation pipeline. The original installation is unchanged.

## Inventory and identities

The 11 native binaries are represented by individual C exports, combined C,
function indexes, native instruction listings and saved Ghidra projects. The
indexes at the first review contained **30,616 functions**: 19,763 gameplay, 8,110 menu, and
2,743 across the other nine images. Every indexed C file exists; individual C
file counts equal their indexes and each current summary. All 11 original
binary hashes independently match both their preserved copies and the inventory.
Every non-runtime-data input in the 1,471-file installation inventory has its
expected preserved copy. Logs and `.rcr` save files are intentionally excluded.

Structured recovery covers five level modules, their 5,134 instruction records,
the shipped `ScriptGameObject.ds`, original settings, forms, entity records and
help resources. The README correctly separates shipped source from generated
pseudocode, and recovered installed configuration from factory defaults.

The review data is retained in
[`decompilation-quality-review-data.json`](decompilation-quality-review-data.json).
The preservation existence check covers all non-runtime inputs; independent
hash recomputation here covers the 11 PE files, not every artwork/audio file.

## Pseudocode samples

The previously missing `RcHcGame.dat:0047dd60` virtual particle update now has
an indexed C function with its true `0047dd60–0047df66` range. Its lazy lifetime
arming, strict expiration, separate delay/fade branches and movement dispatch
agree with the native instructions used in the presentation correction. The
decompiler hides x87 alpha/duration expressions behind `__ftol()`, so the native
instruction listing remains necessary for those calculations.

Three additional samples were selected deterministically with seed 20261026
from 30–100-line gameplay/menu functions:

| Binary / address | Review result |
| --- | --- |
| Game `004363a0` | Global initialization, two calls, positive-value check, delta comparison against 80 and state update match the instruction listing. Inferred `ushort` return includes x87 flag artifacts; the assembly explicitly writes the low result byte. This is a useful illustration of why inferred types are not original source declarations. |
| Menu `00454d98` | State gates, virtual call, synchronous/asynchronous `0x30f` message branches, flag clearing and return follow the instructions. Register-call arguments/types remain inferred. |
| Menu `0053341c` | Repeated control lookup, property writes, virtual call at `+0xe0` and callback address `00532f80` match the instructions. Its recovery annotation incorrectly called this Delphi VMT an MSVC RTTI table; reported to the exporter for correction. |

The random sample is a quality spot-check, not proof that all 30,616 bodies
are semantically complete. Unresolved indirect calls, switch warnings, inferred
register arguments, x87 expression loss and unknown function boundaries remain
real limitations. Disassembly preserves bytes outside recognized functions;
it must not be treated as proof that all such bytes are executable code.

## Issues reported directly to the exporter

1. The first export omitted particle Tick despite retaining its instructions.
   Recovering validated virtual-table destinations resolved it and added 600
   gameplay functions; the corresponding Delphi pass added 2,000 menu functions.
2. The README reproduction sequence omitted `inventory_delphi.py` before
   `recover_vtables.py`, although the latter needs its menu seed file.
3. `verify_delivery.py` silently skipped missing preserved inputs instead of
   failing for missing non-runtime inventory entries. All expected files exist
   in the reviewed delivery, but the validator needed to catch future loss.
4. Delphi VMT recovery comments incorrectly said MSVC RTTI; the provenance
   should distinguish these or use neutral native class-metadata terminology.
5. `VERIFICATION.md`/`.json` still had the earlier 28,016-function totals when
   initially reviewed; the exporter must refresh them after the final recovery.

The exporter was notified of all five items. Final resolution is recorded in
the follow-up below once its corrected documentation and verification exist.

## Final delivery review

Read the refreshed `VERIFICATION.md` and `VERIFICATION.json`, timestamped
**2026-10-26 13:21:21 UTC**. They report PASS, zero errors and **30,648**
successfully decompiled discovered functions: **19,780 gameplay**, **8,125 menu**
and 2,743 in the other nine binaries. Independent read-only recounting confirms
that all 30,648 indexed C files exist and that individual-file counts, indexes,
per-image summaries and the final report agree. This does not rerun the export
or its tests.

All review defects are resolved:

- Particle Tick remains present and evidence-linked.
- The reproduction commands now include `inventory_delphi.py`, followed by
  virtual-method recovery and the later coverage classification steps.
- Missing non-runtime preserved inputs now fail verification; resource payloads
  also receive explicit existence/hash checks.
- The sampled `0053341c` header correctly states **Delphi VMT**. The additional
  `0041e9f4` method is present with validated native virtual-table provenance.
- Final totals include the additional recovered virtual/runtime functions;
  the coverage report continues to expose unrecognized bytes and indirect
  dispatch limitations instead of implying all original source was recovered.

**Accepted for static delivery within the documented boundaries.** This is a
complete export of the currently discovered functions across all 11 installed
PE images plus preserved bytes/resources and scripts, not directly compilable
original developer source, proof of all function discovery or proof of campaign
equivalence. No additional game tests or builds were run during review.

## Independent review of the landing-sound correction

The port's new dry/liquid sound choice matches the recovered native slots:

- Dry landing at `0x4dc750` selects `0x6b5708`. Its constructor at
  `0x42ec60–0x42ed1a` reads string `0x690214`, **`rcland1.wav`**.
- Content bit `0x20000` uses `0x6b5618`, and `0x10000` uses `0x6b5520`.
  Their constructors at `0x42f2c0–0x42f37a` and `0x42f920–0x42f9da`
  both read string `0x690220`, **`Rcwalk1.wav`**.
- The shared impact gain and threshold calculation in `0x4dc0e0` precedes
  this selection. The dry branch was missing from the port's previous
  liquid-only helper; it is not an unused recording inferred from a filename.

`src/locomotion-audio.js` now uses these branches through `landingSound()`.
This review introduces no audio scheduling change and runs no additional tests.
