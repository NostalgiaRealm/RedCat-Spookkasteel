# Davi-Script investigation

Historical research note, written before the interpreter was implemented. The
statements below about missing parsing/execution describe that earlier state.
For current implementation coverage and remaining work, see
[gameplay status](gameplay-reconstruction.md) and the
[native parity audit](native-parity-audit.md).

Executable address references are version-specific; see [reference build notes](native-reference-builds.md) before relying on native addresses.

This bounded, read-only investigation examines the supplied `Levels/*.dso`, `Script/ScriptGameObject.ds` and `RcHcGame.dat`. **The original campaign code is present in serialized form with useful names and signatures. No DSO interpreter, complete parser or decompiler has been implemented.** The existing portable gameplay module still skips unsupported script behavior.

## Concrete identification

The game uses Davilex's own **Davi-Script**, separate from the Genesis3D asset/runtime formats. The executable contains these identifying strings:

- `Davi-Script parser beta version, build 0.5 May 18 2000 12:35:45` at file offset `0x2b16f4`.
- `./Libs/daviscript\Include\Davi-Script.h` at `0x2922e4`.
- `D:\Work\RCHorror\AdamSource\AdamScript.cpp` and `DaviSillyParser.cpp` source paths.
- `CAdamScriptGameObject`, `CDSRuntimeError`, linker diagnostics and compiler/runtime version diagnostics.

`RcHcGame.dat` is an x86 PE32 executable with image base `0x00400000`, linker version 6.0 and an October 2, 2000 PE timestamp. Its normal imports are `KERNEL32.dll`, `USER32.dll`, `GDI32.dll`, `comdlg32.dll`, `WINMM.dll` and `DINPUT.dll`. There is no separately imported Davi-Script DLL. Together with parser and instruction-dump code inside the executable, this strongly suggests the scripting library was linked into the game. This does not rule out all dynamic loading elsewhere.

The installed/CD tree provides the script API header and five compiled objects; no level-specific `.ds` source files or script compiler source were found there. A brief public search did not identify a matching primary implementation. Current websites using a similar “Davi Script” name were unrelated and were not used as evidence.

## Object headers

Each file begins with three little-endian 32-bit values:

| Byte offset | Observation | Confidence |
| --- | --- | --- |
| `0x00` | `27` / `0x1b`: compiler/object format version | Confirmed by native loader comparison |
| `0x04` | Unix timestamp corresponding to October 1, 2000 | High; native loader prints it as compilation time |
| `0x08` | `1`, followed by class record tag `0x42` | Observed; likely first collection count, not fully traced |

Targeted disassembly confirms the version: the loader candidate starts at virtual address `0x005eb970`; at `0x005eb9f3` it executes `cmp eax,0x1b`. Its mismatch path references `runtimelib version (%d) differs from objectfile version(%d)` at file offset `0x2b1210`. This is stronger evidence than guessing from a shared numeric header.

| Object | Bytes | Compilation time UTC | Script functions identified |
| --- | ---: | --- | ---: |
| lvl00a.dso | 23,962 | 2000-10-01 16:05:45 | 18 |
| lvl01a.dso | 25,067 | 2000-10-01 19:01:21 | 11 |
| lvl02a.dso | 35,871 | 2000-10-01 19:33:12 | 17 |
| lvl03a.dso | 51,879 | 2000-10-01 18:50:05 | 16 |
| lvl04a.dso | 23,608 | 2000-10-01 18:39:06 | 14 |

These are neither Windows PE executables nor text sources. Names, declarations, object bindings, constants and serialized executable structures are interleaved. It is not yet established whether the executable representation should best be described as linear bytecode or serialized instruction/expression objects. Do not apply a Torque/Tribes `.dso` decoder merely because the extension matches.

## Recoverable names and types

Named records use a one-byte tag, uint16 little-endian name length and that many name bytes. The length excludes any terminator: names are **not NUL-terminated**. For example, the zero after `AddCode` is its void return-type code. `GetOne` is followed immediately by an object return-type descriptor instead.

The following tag meanings are inferred from comparisons with the shipped API header and repeated records across all five levels:

| Tag | Interpretation | Observed validation |
| --- | --- | --- |
| `0x42` | Class declaration | `CAdamScriptGameObject`, once per file |
| `0x3c` | Object method declaration | All 53 header methods, same order in every file |
| `0x3d` | Event declaration | All 26 header events |
| `0x3e` | Event implementation candidate | Repeated named event bodies such as `CommandOnEnter` |
| `0x41` | Native external function/procedure | All 32 `Extern` declarations in the header |
| `0x3f` | Runtime built-in function | 12 names including `rand`, `clock`, `StrLeft`, `StrFind` |
| `0x3b` | Script-defined function/procedure | Campaign callback names, `@init`, `BypassEnumWarnings` |
| `0x35` | Formal variable | Arguments plus implicit `@self` and signed stack offsets |
| `0x36` | Named object binding | Original `DaviName` values, including doors and scene objects |
| `0x37` | Local variable candidate | For example `enough` in the potion-check script |
| `0x03` | String-literal candidate in executable structures | Sound/dialogue/event labels; less certain than named declarations |

Method/function records immediately following the name expose a return-type descriptor, uint32 argument count, then formal-variable records. Primitive descriptors are `(type, 0xff)`: void `0`, double `1`, int `2`, string `3`. Observed object descriptors are `04 01 42 <uint16 class index>`. Formal-variable records append a signed int32 stack offset. `@self` is an implicit object parameter at offset `-4`; explicit string/int parameters occupy four-byte slots and doubles occupy eight-byte slots in the observed signatures.

The API header identifies 111 callable/event declarations in total, matching **53 methods + 26 events + 32 externs** in every DSO. Examples of native methods not yet fully represented in portable gameplay include `MoveTo`, `SetTo`, `SetMotionSpeed`, `SetFollowDaviName`, `Fire`, and music-state controls. Native externs include `RcShowAtSpawnPoint`, `RcSetSavePoint`, `CutSceneSay`, `RcHasAllPotions`, `RcEnableSkill`, `FreezeEnemies`, `KillPlayer`, `RespawnPlayer` and `PlayerHasKeyItem`.

## Campaign functions preserved in the objects

- Forest: `CSL000_MotionCommand` through `CSL012_MotionCommand`, `DeurReset1`, `DeurReset2`, `CheckGameState`.
- Castle: `CSL100_MotionCommand` through `CSL106_MotionCommand`, `Deur`, `EndLevel`.
- Graveyard: `Mausocommand`, `CSL200_MotionCommand` through `CSL207_MotionCommand`, `MazeTrigger`, `End_Fall`, `Fall_MotionCommand`, `Puzzel`, `CheckGameState`, `Teleport_MotionCommand`.
- Caves: `cam01_MotionCommand` through `cam04_MotionCommand`, `waterrising_MotionCommand`, `waterrising2_MotionCommand`, `CheckGameState`, `CSL300_MotionCommand` through `CSL306_MotionCommand`.
- Tower: `CheckGameState`, `CSL400_MotionCommand`, `CSL401_MotionCommand`, `CSL402_MotionCommand`, `CSL405_MotionCommand`, `Teleport_MotionCommand`, `beams01_MotionCommand`, `MirrorTrigger1` through `MirrorTrigger5`.

Every file also contains `BypassEnumWarnings` and `@init`. Thus 76 script-function records include 66 campaign-specific functions. Repeated event implementations contain additional gameplay code; counting only these global functions does not measure all script behavior.

String literals preserve scene-event labels and dialogue/audio identifiers, for example `startcutscene`, `stopcutscene`, `startcamera`, `startfairy`, `startbrutus`, `rcgen44`, `flgen28`, `Brlvl1`, `stone1` and `savepoint`. Recovering these identifiers is useful, but it does not recover branch conditions, timing or call order on its own.

## Inspection tool and generated evidence

```bash
python3 tools/inspect_scripts.py --source "/path/to/RedCat Spookkasteel" --output data/scripts
python3 -m unittest discover -s tests -p 'test_inspect_scripts.py' -v
```

`tools/inspect_scripts.py` reads originals without executing them and exports:

- `data/scripts/lvl00a.json` through `lvl04a.json`: hashes, headers, 5,519 total symbol candidates, offsets, function names and parsed type signatures.
- `data/scripts/native-api.json`: the 111 declarations from `ScriptGameObject.ds`.
- `data/scripts/native-runtime.json`: executable identity, section layout, imported DLLs, relevant diagnostic strings and candidate address references.
- `data/scripts/index.json`: inventory summary.

The tool bounds-checks candidate lengths and validates declaration type/parameter structure. It scans possible record starts rather than consuming the entire file through a proven grammar. It therefore labels its result an **inventory**, not a full parse. Raw immediate-address matches in the executable are also candidates; the version comparison was separately verified with disassembly.

## Concrete next steps toward original behavior

1. Map the native loader's five collection reads at `0x005ebb40`, `0x005ebb4f`, `0x005ebb5e`, `0x005ebb70` and `0x005ebb7f`; they call `0x005ed1f0`. Identify the tagged-record factory and record readers. Implement a complete parser that consumes every object exactly and rejects unresolved references.
2. Use the shipped 53 methods, 26 events and 32 externs as known fixtures. Verify the full type system, constant tables, object IDs and per-instance event-handler linkage before evaluating any instructions.
3. Follow the native disassembler strings to instruction implementations: `CALL %s%s` has a candidate text reference at `0x005f5f34`, `JP %d` at `0x005f6b0c`, conditional jump references at `0x005f7948`/`0x005f7c8d`, and return-format references at `0x005f78c8`/`0x005f7bfb`. These are practical entry points for identifying opcode operands and execution semantics.
4. Start with minimal functions already understood from source: `BypassEnumWarnings`, empty `@init`, a one-action event and the simple `DeurReset1`/`DeurReset2` routines. Compare decoded call traces against source event strings embedded in the BSP. Then tackle `CheckGameState` conditions and the potion gate.
5. Build a small bounded interpreter with explicit native-function dispatch, typed values and stack/step limits. Do not execute unknown opcodes, infer calls from raw string proximity, or silently treat missing branches as success. A readable intermediate representation may be more useful than attempting to reproduce original source formatting.
6. Decode preserved Genesis3D brush `motions.bin` alongside the script VM. Campaign scripts act on motion-event labels; a VM alone will not restore moving platforms, teleports, camera choreography or boss interactions without the corresponding game-object behavior.
7. Validate each level with deterministic recorded playthroughs: puzzle state, potion/skill gate, checkpoints, boss death, mirror pickup and exit. Until these succeed, retain the current explicit campaign-parity limitation.

No native game code was executed, no original file was changed, and no recovered source or VM emulation is claimed by this investigation.
