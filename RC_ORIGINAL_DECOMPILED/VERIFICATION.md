# Decompiled original: verification and coverage

Verified 2026-10-26T13:21:21Z. Status: **PASS**.

Inventoried 1471 original-installation files and retained 1453 non-log/non-save inputs. All 11 native binaries match their source hashes. Exported **30,648 discovered functions**, with **0 C-decompilation failures** after repairs.

Recovered all 5 Davi-Script objects (4,587 records; 5,134 instructions), 29 menu forms, 258 PE resource payloads, all three WinHelp projects, and 6,523 BSP entity records.

| Binary | Functions / C | Instructions | Decoded bytes outside functions | Executable bytes without instructions | Unresolved switch warnings |
|---|---:|---:|---:|---:|---:|
| `CTL3D32.DLL` | 61 / 61 | 4,855 | 518 | 1,222 | 1 |
| `D3DDrv.dll` | 318 / 318 | 19,176 | 5,176 | 10,769 | 5 |
| `D3DDrvRGB.dll` | 372 / 372 | 20,307 | 5,102 | 16,228 | 9 |
| `GBSPLib.dll` | 865 / 865 | 67,306 | 9,247 | 12,967 | 9 |
| `GlideDrv.dll` | 294 / 294 | 14,405 | 2,880 | 4,679 | 46 |
| `RcHcGame.dat` | 19,780 / 19,780 | 705,844 | 122,164 | 99,771 | 55 |
| `RcHcMenu.dat` | 8,125 / 8,125 | 342,522 | 95,158 | 461,207 | 558 |
| `RedCat.exe` | 101 / 101 | 6,324 | 551 | 2,565 | 3 |
| `Rsc.dll` | 320 / 320 | 25,256 | 224 | 97,276 | 1 |
| `SoftDrv.dll` | 252 / 252 | 15,162 | 5,003 | 84,037 | 4 |
| `UNINST32.EXE` | 160 / 160 | 18,305 | 228 | 936 | 13 |

## Meaning and limits

- Counts cover every function Ghidra discovered; unknown function boundaries and indirect destinations remain.
- Decoded instructions outside functions and executable bytes without decoded instructions are reported separately for each image.
- All original bytes and linear executable-section disassembly are retained; undecoded ranges may include padding or data, not necessarily missing functions.
- C is inferred pseudocode, not the original source, buildable source or proof of gameplay equivalence.

An unresolved-switch warning is a decompiler analysis limitation; its original jump/table bytes remain available. It does not establish an original-game defect or justify replacing port behavior without tracing the affected branch. In particular, function counts are not a claim that all original source functions were identified.

## Analysis repairs

- `D3DDrv.dll:10007f72` and `D3DDrvRGB.dll:10008989`: removed the locked status of an automatically inferred function signature to resolve overlapping x87 input varnodes. Machine code is unchanged; recovered types remain inferred.
- Validated MSVC RTTI and Delphi VMT metadata recovered virtual procedures missed by the default analyzer. Delphi methods with instructions decoded across their real entry points were repaired at those validated entry addresses. Exact seeds and retained logs record the evidence.
- Stored executable pointers plus canonical prologues identify additional candidate runtime procedures; they are labeled as inferred routine boundaries.
- `RcHcGame.dat:005fc480`: restored all 26 UNOP dispatch destinations from the exact pointer table at `005fcb90`, including shared case blocks. The saved project and C listing retain this evidence-based override.

The initial job logs retain their original two failures for provenance. `VERIFICATION.json` and current per-image `summary.json` describe the final corrected exports. Earlier `failed-assembly` files are retained evidence, not current unresolved failures.

No original game executables were launched by this export pipeline. Verification checked files, hashes, recoverability and coverage, not campaign completion or native gameplay equivalence.

## Remaining code discovery by byte pattern

| Binary | Non-padding decoded bytes outside functions | Undecoded bytes not entirely fill |
|---|---:|---:|
| `CTL3D32.DLL` | 518 | 790 |
| `D3DDrv.dll` | 5,176 | 7,105 |
| `D3DDrvRGB.dll` | 5,102 | 12,886 |
| `GBSPLib.dll` | 9,247 | 5,082 |
| `GlideDrv.dll` | 2,880 | 1,289 |
| `RcHcGame.dat` | 122,127 | 16,664 |
| `RcHcMenu.dat` | 95,136 | 459,294 |
| `RedCat.exe` | 551 | 626 |
| `Rsc.dll` | 223 | 94,588 |
| `SoftDrv.dll` | 5,003 | 81,168 |
| `UNINST32.EXE` | 228 | 646 |

These are outstanding static-analysis boundaries, not a count of unported features. Exact ranges and original bytes are retained for future review. In Delphi, executable CODE sections also contain strings, RTTI and form-class metadata; executable-section membership alone does not establish code.
