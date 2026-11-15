# The recompiler

`tools/recomp/` turns the original x86 game module `RcHcGame.dat` into WebAssembly. Run it with:

```bash
npm run recompile
```

It needs Python 3 with `capstone`; this machine's reverse-engineering environment has it at `~/.local/share/reverse-engineering/python-analysis/bin/python`.

| | |
|---|---|
| Inputs | `../RCSPOOK_NEW/RC_ORIGINAL_DECOMPILED/originals/RcHcGame.dat` and, from the same package, Ghidra's `decompiled/RcHcGame.dat/functions.tsv` and `instructions_outside_functions.tsv`. Set `RC_ORIGINAL_DECOMPILED` to use another copy. Nothing there is written. |
| Outputs | `public/game/spook.wasm` (about 13 MB), `spook.meta.json` (with `wasmSha256` and `wasmSize` of the module: part of a save state's build identity), `spook.codemap.bin`. Generated, not in git. |
| Report | `tools/recomp/out/report.json` and `tools/recomp/build.log` |
| Time | about 20 seconds |

The recompiler core is the one from the Maisy's Playhouse project, which took it from A2 Racer 4. Read `docs/recompiler.md` in those projects for the model (memory layout, registers, flags, x87, control flow, calls, C++ exceptions). This page lists only what differs here.

## What differs from the Maisy version

1. **One module.** Only `RcHcGame.dat` is recompiled. The Genesis3D render driver `D3DDrv.dll` is not: the host implements the driver table (`source/host/gdriver.js`).
2. **Function lists** are read from the decompilation package's `functions.tsv`.
3. **Code pointers in data.** `RcHcGame.dat` has no relocation table, so pointers cannot be found from relocations as in Maisy. The data sections are scanned word by word instead, as A2 Racer 4 does for `spel.dat` (`recompile.py`, `scan_entries`).
4. **Code outside Ghidra's function list.** Every range in `instructions_outside_functions.tsv` becomes an entry point (`build.py`, `load_unowned_starts`): 4,929 of them. These are callbacks that are only reached through a stored pointer. Two examples that stopped the game before this was added: the window procedure at 0x5A8180, stored into the `WNDCLASS` with a `mov`, and the callback at 0x600F3C, loaded with `mov edx, offset`. The second one sits on a 4-byte boundary, so the ranges are not filtered by alignment. A `mov` with a code address outside Ghidra's functions is also taken as an entry (`recompile.py`, `scan_entries`).
5. **Three more C-runtime math entry points** (`replacements.py`, `find_ci_direct`). This build of the MSVC 6 runtime has `_CIasin` (0x60B110), `_CIacos` (0x60DCD0) and `_CIpow` (0x60B760) in a form that does not go through `__cintrindisp`. They are matched by signature and mapped to the host's `Math`, like the other transcendental helpers.
6. **Two game functions are handed to the host** (`build.py`, `GAME_HOOKS`). `CAdamApplication::MainLoop` at 0x4BFD60: `source/host/mainloop.js` runs the loop with the same calls, so the game can be saved between two passes. `CRcDop::Update` at 0x4594A0, the camera controller's frame: `source/host/walllift.js` runs the original body and then acts on its result (the camera lift at walls). That function is only called through its vtable, so its hook is `guarded`: the hook also sits behind the function's address, and the body is listed in `meta.eh.guardBodies` for the host to call, the mechanism the C++ exception guards use. The original bodies stay in the module. Two more since 2026-11-14, for fixes of `source/host/fixes.js` (flag off: the host calls the body and nothing else): `CAdamDoorModel`'s sound choice 0x4CC140 and the sound system's 3D helper 0x54E750. And two for a stick's gradual movement and walking slowly (`source/host/move.js`): the steering, `CRCPlayer` slot 24 at 0x434430, and `CRCPlayer::Move` at 0x435490. And one for the readable subtitle box (`source/host/subtitles.js`): `CRcCutScene`'s draw at 0x481670 (`cutdraw`; `thiscall` with one argument, `ret 4`: Ghidra lists it as `__fastcall` without arguments, the `RET 0x4` at 0x481973 says otherwise). All five are `late`: their thunks are numbered from the top of the thunk table downwards, so `firstFreeThunk` and with it the numbers of the host's own thunks, whose addresses the game keeps in its memory, do not change when such a hook is added. A function that has a `try` block already runs behind a host thunk (`eh_<address>` in `meta.hooks`); the host can put its own function in front of that without changing the module (`fixes.js` does so for the damage dispatch 0x503FC0).

## Result of the current build

| | |
|---|---|
| Functions reached | 24,183 |
| Instructions | 808,748 |
| Lifted | 24,152 |
| Not lifted | 31 |

The 31 that are not lifted:

- 27 are not real functions. They are data words that look like code addresses, found by the data scan (they decode as `salc`, `in`, `out`, `sti` and the like), or fragments inside the C runtime's math code. Nothing calls them.
- 4 are C-runtime internals at 0x616571, 0x616586, 0x61678C and 0x618E4E. They belong to the Pentium FDIV-bug workaround, which is only used when the runtime's `_adjust_fdiv` flag is set. It is not set here.

A function that is not lifted traps if it is ever called, and the trap names it.

## C++ exceptions

The game throws its own classes by value and catches them by reference (for example `CDaviException` at 0x4BE68D). `source/host/eh.js` therefore builds the catch object the way the MSVC frame handler does: by reference, by value with or without a copy constructor, and by pointer. The Maisy version only needed pointers.

## x87 precision (open)

The build uses 53-bit precision (`--fpu-pc 53`, the default). The original ran with Direct3D, which lowers the x87 precision to single unless told otherwise, so the original may have run at 24 bits. This has not been checked. `--fpu-pc 24` builds the other variant.
