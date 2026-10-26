# RedCat Spookkasteel — recovered original code

This is a separate, read-only-derived reconstruction of the **original installed Windows game's code and resources**. It is not the modern JavaScript/Electron port, and it does not modify or replace that port.

The native executables were compiled without their original source tree. Their original C/C++/Delphi files, comments, most variable names, and build system cannot be recovered exactly. The `.c` files here are **Ghidra-generated, address-linked pseudocode**, not directly compilable source. The original Davi-Script header really is shipped source; the five compiled level scripts have complete typed intermediate representations and instruction listings. Original menu forms, configuration files and help projects are also recovered.

Read [VERIFICATION.md](VERIFICATION.md) for exact coverage and limitations, including indirect dispatch and code outside recovered function boundaries. A successful C export does not prove that every original source function has been discovered or that the port is behaviorally identical.

## Start here

- [Original class names and methods](CLASS_INDEX.md) with links to their recovered functions.
- [Original gameplay executable](decompiled/RcHcGame.dat/full_decompilation.c), [function index](decompiled/RcHcGame.dat/functions.tsv), and [instruction listing](decompiled/RcHcGame.dat/assembly.tsv).
- [Original menu executable](decompiled/RcHcMenu.dat/full_decompilation.c) and [function index](decompiled/RcHcMenu.dat/functions.tsv).
- [Level scripts](recovered-scripts/listings/) and their [complete typed IR](recovered-scripts/ir/).
- [Shipped script API source](recovered-text/Script/ScriptGameObject.ds).
- [Original menu forms](recovered-resources/forms/) with exact event-handler names and property values.
- [Original settings](recovered-text/Settings/), [BSP entity definitions](recovered-levels/), [menu artwork](recovered-resources/menu/), and [Windows help source projects](recovered-resources/help/).
- [Input inventory](inventory/files.json), [native binary identities](inventory/manifest.json), and [PE resources](inventory/resources.json).

`originals/` contains byte-for-byte input copies, including gameplay assets needed to interpret the code. Local `.log` files and saved games are inventoried but not copied. Configuration such as `AdamWin.Ini` reflects the installed copy and may contain user settings; it is not asserted to be a pristine factory default. The original installation remains unchanged.

## Native code layout

Every one of the 11 discovered PE executable/DLL images has a directory under `decompiled/`:

| File | Role |
|---|---|
| `RcHcGame.dat` | Gameplay, engine integration and Davi-Script runtime |
| `RcHcMenu.dat` | Delphi game menu, players, settings and launch flow |
| `RedCat.exe` | Launcher |
| `D3DDrv.dll` | Direct3D rendering driver |
| `D3DDrvRGB.dll` | RGB/software Direct3D driver |
| `GlideDrv.dll` | 3dfx Glide rendering driver |
| `SoftDrv.dll` | Software rendering driver |
| `GBSPLib.dll` | BSP library |
| `Rsc.dll` | Resource helper library |
| `CTL3D32.DLL` | Legacy Windows 3D controls library |
| `UNINST32.EXE` | Uninstaller; included for complete installed executable coverage |

Each directory contains individual `functions/<address>_<name>.c` files, combined `full_decompilation.c`, `functions.tsv`, address-linked machine instructions, imports, exports, strings, symbols and memory maps. `linear-disassembly.asm` additionally retains the executable-section byte stream interpreted by GNU objdump; its data-as-instruction passages must not be treated as discovered code. `executable_without_instructions.tsv` and `instructions_outside_functions.tsv` make remaining discovery limits explicit. Debug trailers and raw resource payloads remain in the input copies.

Saved Ghidra projects are under `analysis-projects/<binary>/analysis.gpr`. They include verified analysis repairs and virtual-function seeds. Generic `FUN_...` names and inferred types should not be mistaken for original developer naming.

## Reproduce

Requires Python 3 with `pefile` and Pillow, Java supported by Ghidra 12.1.4, Ghidra's `analyzeHeadless`, GNU `objdump`, and `helpdeco` for WinHelp. Tools are external dependencies, not part of the recovered game. Set the original installation and tool paths for your system. All generated analysis is stored inside this folder.

```bash
python3 scripts/prepare_originals.py --source '/path/to/original/RedCat Spookkasteel'
python3 scripts/import_scripts.py --source originals --output recovered-scripts/ir
python3 scripts/recover_scripts.py
python3 scripts/recover_forms.py
python3 scripts/recover_level_entities.py --source '/path/to/original/RedCat Spookkasteel'
python3 scripts/extract_menu.py --installation originals --output recovered-resources --skip-media
python3 scripts/recover_help.py --helpdeco /path/to/helpdeco
python3 scripts/decompile_all.py --ghidra /path/to/ghidra/support/analyzeHeadless --workers 2
python3 scripts/repair_exports.py --ghidra /path/to/ghidra/support/analyzeHeadless
python3 scripts/inventory_vtables.py
python3 scripts/inventory_delphi.py
python3 scripts/recover_vtables.py --ghidra /path/to/ghidra/support/analyzeHeadless
python3 scripts/inventory_callback_candidates.py
python3 scripts/recover_callbacks.py --ghidra /path/to/ghidra/support/analyzeHeadless
python3 scripts/export_linear_disassembly.py
python3 scripts/classify_code_gaps.py
python3 scripts/verify_delivery.py
```

The first native pass intentionally preserves original input bytes and imports ordinary PE images without unpacking. No standard packing indicators were found in the installed images; normal sections, imports and executable code were recovered. This does not assert absence of every possible custom encoding in asset data. No target executable is run by these analysis scripts.

The initial batch and repair logs are retained under `logs/decompile/`; they include failed attempts and their subsequent resolution. Final `VERIFICATION.json` describes the current deliverable. The exported scripts copied from the port are format readers, not claimed original engine source.

## Further analysis and honest boundaries

`inventory/vtables.json` records MSVC RTTI-backed virtual entries; `inventory/delphi-vmts.json` records Delphi self-pointer/class/method-table validation and original published method names. Both are stronger evidence than simply finding a word that looks like an address. `inventory/callback-candidates.json` separately identifies stored code pointers with canonical prologue bytes; those entries retain an inference label rather than claiming an original function name.

`inventory/code-gap-classification.json` and each binary's `unowned-instructions-classified.tsv` / `undecoded-ranges-classified.tsv` distinguish byte-pattern padding from remaining code-or-data uncertainty. The whole original byte stream is retained, including undecoded regions; no unverified bytes were discarded or invented as source code.
