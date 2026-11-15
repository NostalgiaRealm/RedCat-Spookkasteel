# Genesis3D render driver interface as used by RedCat Spookkasteel

Implementation reference for a JavaScript render driver that replaces `D3DDrv.dll` under a WebAssembly recompile of `RcHcGame.dat`.

## 0. Sources, method, labels

| Item | Detail |
|---|---|
| Engine binary | `RcHcGame.dat`, image base 0x400000. Addresses `0x4xxxxx`-`0x6xxxxx` below are in this file. |
| Driver binary | `D3DDrv.dll`, image base 0x10000000. Addresses `0x1000xxxx` below are in this file unless another DLL is named. |
| Cross-check | `SoftDrv.dll`, `GlideDrv.dll`, `D3DDrvRGB.dll` (static driver tables dumped from their data sections). |
| Reference only | Genesis3D 1.1 open source (public GitHub mirror `paradoxnj/Genesis3D`: `Dcommon.h`, `System.cpp`, `engine.cpp`, `bitmap.cpp`, `D3DDrv/*`). Used to name things; every statement below was checked against the binaries unless marked otherwise. |
| Method | Static only. Ghidra per-function decompilation + `assembly.tsv`, raw PE data read with Python. No original binary was executed. |

Labels: **[C]** confirmed in the binary at the cited address. **[I]** inferred (from reference source, from a decompilation that lost arguments, or from partial evidence). Open points are in section 12.

Many driver entry points are not "functions" in the Ghidra export (they are only reached through the table); they are present in `assembly.tsv` as unowned instructions and were read there.

---

## 1. Calling conventions (read this first)

| What | Convention | Evidence |
|---|---|---|
| `DriverHook(DRV_Driver **out)` | `__cdecl`, 1 stack arg, returns BOOL in EAX | [C] driver `10005300` (plain `RET`, reads `[ESP+4]`); engine `005c9ba3`-`005c9baa`, `005bc5b8`-`005bc5bb` (`PUSH`, `CALL`, `ADD ESP,4`) |
| Every function slot of the table | `__fastcall` (`DRIVERCC`): 1st and 2nd **integer/pointer** args in ECX, EDX; remaining args pushed right-to-left; **callee** pops the stack args (`RET n`) | [C] every slot, see section 2 |
| `float` arguments | Never in ECX/EDX; they go on the stack. (MSVC gives ECX/EDX to the first two integer-class args in order. In this interface no integer arg follows a float, so `SetFogEnable` uses ECX only and `SetGamma` uses no register.) | [C] `SetGamma` `100052e0` (`RET 4`), `SetFogEnable` `100036d0` (`ECX`=Enable, 5 floats at `[ESP+4..+0x14]`, `RET 0x14`), engine `005bb660`, `005bb6dc` |
| Engine callbacks passed to `EnumSubDrivers`, `EnumModes`, `EnumPixelFormats` | `__cdecl`, caller (driver) cleans | [C] engine `005c9ce0`, `005c9dc0`, `005c1930` (plain `RET`); driver `10004340`-`10004344`, `100044bb`-`100044c2`, `100052bf`-`100052c1` |
| `SetupLightmap` callback (engine function stored in the table) | `__cdecl`, 2 stack args, caller (driver) cleans | [C] engine `005d2020`; driver `10006409`-`10006422`, `10006634`-`1000664b` |
| Return values | BOOL in EAX, non-zero = success. `THandle_Create` returns a pointer, NULL = failure. | [C] engine call sites test `EAX` (exceptions: the empty `BeginModels`/`EndModels` pair at `005b8879`/`005b8881`, the `Render*` and `SetPalette`-type calls whose result is dropped or passed up) |

Consequences for the WASM host:

- The table lives in guest linear memory. The engine reads `[RDriver+off]` directly and does an indirect call, so each slot must be a guest-callable function value using the recompiler's representation of `__fastcall` with the exact argument list below.
- Because the callee pops, a wrong argument count corrupts the guest stack pointer if the recompiler models ESP.
- EDX is garbage on entry to `SetGamma`, `SetFogEnable`, and all 0/1-arg slots (e.g. at `005bb697` EDX holds the table pointer).

---

## 2. The driver table (`DRV_Driver`)

Static instance in `D3DDrv.dll` at `0x10015398` (.data). `DriverHook` (`10005300`) stores its address in `*out`, sets `EngineSettings` and `LastErrorStr`, calls `SetLastDrvError(0, "D3DDrv:  No error.")`, returns 1. [C]

Size in this build: **0xB8 bytes**. It is the Genesis 1.1 layout (0xB4 bytes) plus one extra pointer at +0xB4 added in this engine fork. [C]: all three v100.3 drivers have a pointer or NULL at +0xB4 and the name string starting at +0xB8 (`D3DDrv` `10007040`, `GlideDrv` `10002090`, `SoftDrv` NULL).

### 2.1 Slot table

"Engine use" lists the `RcHcGame.dat` code that reads/calls the slot. "none found" means no reference was found by scanning every access to `Engine+0x33678` (`RDriver`), to its two cached globals (`0x6cc410`, `0x70f8c4`), to `geBitmap.Driver` (`+0xA8`) and every indirect call with a displacement in 0x14..0xB4 in the engine code range.

| Off | Name | D3DDrv value | Prototype (fastcall register / stack) | Callee pops | Engine use |
|---|---|---|---|---|---|
| 0x00 | `Name` (char*) | `10015450` "D3D driver. v100.3. Copyright 1999, WildTangent Inc.; All Rights Reserved." | data | - | none found |
| 0x04 | `VersionMajor` | 100 | data | - | [C] compared with 100 at `005c9be9`, `005bc5d6` |
| 0x08 | `VersionMinor` | 3 | data | - | [C] compared with 3 at `005c9bef`, `005bc5e0` |
| 0x0C | `LastError` | 0, written by driver `10005350` | data | - | none found |
| 0x10 | `LastErrorStr` | `10038ea8` (set in `DriverHook`) | data | - | none found (error strings are compiled out of the engine) |
| 0x14 | `EnumSubDrivers` | `100042b0` | ECX=`Cb`, EDX=`Context` | 0 (`RET`) | [C] `005c9c04` |
| 0x18 | `EnumModes` | `100043f0` | ECX=`Driver` (int id), EDX=`DriverName` (char*); stack: `Cb`, `Context` | 8 | [C] `005c9d96` |
| 0x1C | `EnumPixelFormats` | `100051f0` | ECX=`Cb`, EDX=`Context` | 0 | [C] `005bd028`, `005c1732` |
| 0x20 | `Init` | `10005120` | ECX=`DRV_DriverHook*` | 0 | [C] `005bc6c5` |
| 0x24 | `Shutdown` | `100051d0` | none | 0 | [C] `005bba25` |
| 0x28 | `Reset` | `100051e0` (jmp `100020c0`) | none | 0 | [C] `005bc1db` |
| 0x2C | `UpdateWindow` | `10003630` | none | 0 | none found |
| 0x30 | `SetActive` | `10003650` | ECX=`active` (BOOL) | 0 | [C] `005bb9c8`-`005bb9d3` (NULL-checked, tail jump) |
| 0x34 | `THandle_Create` | `10007560` | ECX=`Width`, EDX=`Height`; stack: `NumMipLevels`, `const geRDriver_PixelFormat*` | 8 | [C] `005bd2f9`, `005bd32b`, `005c18d5` |
| 0x38 | `THandle_Destroy` | `10007670` | ECX=`THandle` | 0 | [C] `005bd33a`, `005bd384`, `005bbf9f`, `005c1b3c`, `005c1ca8`, `005c4d57` |
| 0x3C | `THandle_Lock` | `10007700` | ECX=`THandle`, EDX=`MipLevel`; stack: `void **Bits` | 4 | [C] `005c0e03`, `005c20c8`, `005c4e12` |
| 0x40 | `THandle_UnLock` | `10007780` | ECX=`THandle`, EDX=`MipLevel` | 0 | [C] `005c0cc5`, `005c2128`, `005c4efb` |
| 0x44 | `THandle_SetPalette` | NULL | ECX=`THandle`, EDX=`PalHandle` | 0 | [C] `005bd34e`, `005c04dd` (only for palettised formats, see 6.4) |
| 0x48 | `THandle_GetPalette` | NULL | ECX=`THandle` | 0 | none found |
| 0x4C | `THandle_SetAlpha` | NULL | ECX=`THandle`, EDX=`AlphaHandle` | 0 | [C] `005bd398`, `005c2283` (only if a format has `RDRIVER_PF_HAS_ALPHA`) |
| 0x50 | `THandle_GetAlpha` | NULL | ECX=`THandle` | 0 | [C] `005c222c`, `005c22d2` (same condition) |
| 0x54 | `THandle_GetInfo` | `100077d0` | ECX=`THandle`, EDX=`MipLevel`; stack: `geRDriver_THandleInfo*` | 4 | [C] `005c33ca`, `005c4c72`, `005c4de9` |
| 0x58 | `BeginScene` | `10006d50` | ECX=`Clear`, EDX=`ClearZ`; stack: `RECT *WorldRect` | 4 | [C] `005bc91c` |
| 0x5C | `EndScene` | `10006ef0` | none | 0 | [C] `005bcaa1` |
| 0x60 | `BeginWorld` | `10006f50` | none | 0 | [C] `005b8b5e` |
| 0x64 | `EndWorld` | `10006f60` | none | 0 | [C] `005b8c7d` |
| 0x68 | `BeginMeshes` | `10006fb0` | none | 0 | [C] `005b89b3` |
| 0x6C | `EndMeshes` | `10006fd0` | none | 0 | [C] `005b8ac5` |
| 0x70 | `BeginModels` | `10007030` | none | 0 | [C] `005b8879`, `005b90db` |
| 0x74 | `EndModels` | `10006f60` (same code as `EndWorld`) | none | 0 | [C] `005b8881`, `005b92d8` |
| 0x78 | `RenderGouraudPoly` | `10006970` | ECX=`DRV_TLVertex *Pnts`, EDX=`NumPoints`; stack: `Flags` | 4 | [C] `005bbaa1`, `005b6d46`, `005e06a0`, `005e0a6f` |
| 0x7C | `RenderWorldPoly` | `10006b20` | ECX=`Pnts`, EDX=`NumPoints`; stack: `THandle`, `DRV_TexInfo*`, `DRV_LInfo*` (may be NULL), `Flags` | 0x10 | [C] `005b9530`, `005babc0`, `005bb324` |
| 0x80 | `RenderMiscTexturePoly` | `10006ba0` | ECX=`Pnts`, EDX=`NumPoints`; stack: `THandle`, `Flags` | 8 | [C] `005bba85`, `005bb4ed`, `005b69c6`, `005b6b9c`, `005e0686`, `005e0a55` |
| 0x84 | `DrawDecal` | `10006bf0` | ECX=`THandle`, EDX=`RECT *SrcRect` (may be NULL); stack: `x`, `y` | 8 | [C] `005bbb0a` |
| 0x88 | `NumWorldPixels` | 0 | data | - | none found |
| 0x8C | `NumWorldSpans` | 0 | data | - | none found |
| 0x90 | `NumRenderedPolys` | written by driver (`10006de2` =0, `10006b4c` ++) | data | - | [C] read at `005bcb72` (only when the FPS/debug overlay is on) |
| 0x94 | `CacheInfo` (DRV_CacheInfo*) | `10116d88` | data | - | [C] read at `005bcbf5`, NULL-checked at `005bcc20` (debug overlay only) |
| 0x98 | `ScreenShot` | `100053b0` (returns 0) | ECX=`const char *Name` | 0 | [C] `005b7cce` (tail jump) |
| 0x9C | `SetGamma` | `100052e0` (returns 1, does nothing) | stack: `float Gamma` | 4 | [C] `005bb6dd`, only if `EngineSettings->CanSupportFlags & 4` |
| 0xA0 | `GetGamma` | `100052f0` (writes 1.0f) | ECX=`float*` | 0 | none found |
| 0xA4 | `SetFogEnable` | `100036d0` | ECX=`Enable`; stack: `float r, g, b, Start, End` | 0x14 | [C] `005bb697` |
| 0xA8 | `EngineSettings` (DRV_EngineSettings*) | `10039000`, written by `DriverHook` (`10005318`) | data | - | [C] `005bb6cb` (`CanSupportFlags`), `005b87c4` (`PreferenceFlags`) |
| 0xAC | `SetupLightmap` | NULL; **written by the engine** | cdecl `void (DRV_LInfo*, BOOL *Dynamic)` | caller | [C] engine writes `0x5d2020` at `005bc5f6`; driver calls it at `1000640b`, `10006636` |
| 0xB0 | `GlobalInfo` (GInfo*) | NULL; **written by the engine** | data | - | [C] engine writes `0x722860` at `005bc600`. D3DDrv never reads it. |
| 0xB4 | extra slot (name unknown; "texture cache used") | `10007040` | no args, returns int | 0 | [C] `005bca2c`, `005bcbfb`; NULL-checked both times |

Notes:

- `VersionMajor/Minor` are checked with `==` (100 and 3) in both the enumeration pass and the init pass. [C]
- `D3DDrvRGB.dll` has `VersionMinor == 2` (table at `0x10018848` in that DLL, name "D3D driver. v100.2. Copyright 1999, Eclipse Entertainment") and the older, shorter table layout (no `SetFogEnable`, `EngineSettings` at +0xA4). This engine build rejects it at `005c9bef` (-> `005c9c5c`, `FreeLibrary`). [C]
- A JS driver may leave these slots NULL without the engine noticing: 0x2C, 0x44, 0x48, 0x4C, 0x50, 0xA0, 0xB4, and (if `CanSupportFlags` has no bit 2) 0x9C. Slot 0x30 is NULL-checked. Provide `ScreenShot` (0x98) returning 0; it is called without a NULL check.
- Slot 0xB4 in D3DDrv returns twice the per-frame sum of `width*height` (plus mips) of cache slots touched this frame (`10004fd0`, `10004b00`); the engine scales it by 50/2^20 for a debug line "Texture cache used: %4i" (`005bcc0f`, `005bcd1d`). Return 0 or leave NULL. [C] for the code, [I] for the meaning.

### 2.2 Who writes what

| Field | Writer |
|---|---|
| +0x00, +0x04, +0x08, all function slots, +0x94 | static data in the driver |
| +0x0C, +0x10 | driver (`SetLastDrvError` `10005350`) |
| +0x90 | driver |
| +0xA8 | driver, in `DriverHook` |
| +0xAC, +0xB0 | **engine**, immediately after a successful `DriverHook` + version check in `Engine_InitDriver` (`005bc5f6`, `005bc600`). Not written in the enumeration pass. |

### 2.3 Small structs reachable from the table

`DRV_EngineSettings` (16 bytes) [C]:

| Off | Field | D3DDrv value | Engine reads |
|---|---|---|---|
| 0 | `CanSupportFlags` | 3 = `DRV_SUPPORT_ALPHA`(1) \| `DRV_SUPPORT_COLORKEY`(2) (`10005304`) | bit 2 (`DRV_SUPPORT_GAMMA`=4) tested at `005bb6d1`. No other bit is read. |
| 4 | `PreferenceFlags` | 0 (`1000530e`) | bit 0 (`DRV_PREFERENCE_NO_MIRRORS`) at `005b87ca`: mirrors are rendered only if the bit is clear. No other bit is read. |
| 8, 12 | reserved | not written | - |

For comparison `SoftDrv.dll` reports `{3, 9}`.

`DRV_CacheInfo` (20 bytes, 5 x int32): `CacheFull, CacheRemoved, CacheFlushes, TexMisses, LMapMisses`. Zeroed by the driver each `BeginScene` (`10006d82`). Only printed by the debug overlay. [C]

---

## 3. Driver discovery and selection

### 3.1 Engine: enumerating driver DLLs

`geEngine_Create` wrapper `005b7c90` -> `Sys_EngineCreate` `005c96d0` -> `EnumSubDrivers` **`005c9a70`** [C].

File name table at `0x6aa004`, 200 bytes per entry, tried in this order:

| Index | File | Note |
|---|---|---|
| 0 | `GlideDrv.dll` | |
| 1 | `SoftDrv.dll` | |
| 2 | `D3DDrv.dll` | skipped if index 0 enumerated successfully (`005c9aac`-`005c9abb`) |
| 3 | `D3DDrvRGB.dll` | same skip rule; always rejected by the version check |

Per entry (`005c9a9b`-`005c9ca2`):

1. `005c9560(i)`: skip if `disabled[i] != 0` (int array at `0x6cc4a4`, set by `005c9530(i, enable)` which stores `enable == 0`).
2. If a query callback is installed (`0x6cc4a0`, set by `005c9520`): `cb(1, i, 99)` (cdecl) before loading.
3. `geEngine_LoadLibrary(FileName, DriverDirectory)` `005bc3e0`: builds `DriverDirectory + "\\" + FileName` (separator added unless the directory ends in `\`, `/` or `:`) and calls `LoadLibraryA`. The game passes `DriverDirectory = "."` (`0x69fafc`, pushed at `0055be45`), so the host sees **`.\D3DDrv.dll`**.
4. `GetProcAddress(h, "DriverHook")`; `DriverHook(&RDriver)` (cdecl).
5. Version check `[+4]==100 && [+8]==3`.
6. `DriverInfo->RDriver = RDriver` (`Engine+0x33678`), then `RDriver->EnumSubDrivers(ECX=0x5c9ce0, EDX=DriverInfo)`. `DriverInfo` is the engine object itself (offset 0).
7. On success `cb(0, i, 1)`; on any failure `cb(0, i, 0)`. `FreeLibrary` in every case. After the loop `RDriver = NULL`.

So `DriverHook` is called twice per run for the chosen driver (enumeration, then init after a second `LoadLibraryA`). It must be idempotent.

### 3.2 Enumeration callbacks (engine side, cdecl)

`EnumSubDriversCB` **`005c9ce0`**: `BOOL cb(int32 DriverId, char *Name, void *Context)` [C]

- `strlen(Name) >= 512` -> return 1 (entry ignored).
- `NumSubDrivers + 1 >= 12` -> return 0 (stop).
- Fills `geDriver` slot (see 3.6): `Id`, `Name`, `FileName` (copy of the current DLL file name).
- Calls `RDriver->EnumModes(ECX=DriverId, EDX=driver->Name, stack: 0x5c9dc0, Context)` (`005c9d96`). If it returns 0 the sub-driver is dropped and the callback returns 0.
- Otherwise `NumSubDrivers++`, return 1.

`EnumModesCB` **`005c9dc0`**: `BOOL cb(int32 ModeId, char *Name, int32 Width, int32 Height, void *Context)` [C]

- `strlen(Name) >= 512` -> return 1 (ignored). `NumModes + 1 >= 32` -> return 0.
- Stores `Id`, `Name`, `Width`, `Height`; `NumModes++`; return 1.

`Hack_EnumCallBack`/`EnumPFCB` **`005c1930`** (one function used for both engine call sites): `BOOL cb(geRDriver_PixelFormat *Format, void *Context)`; `Context` is a `geRDriver_PixelFormat**` cursor; copies 8 bytes, advances the cursor, returns 1. The receiving arrays hold 100 entries (`005bd000` frame 0x324, `005c1710`). [C]

A callback return of 0 means "stop enumerating". D3DDrv then still returns TRUE from the enumerator (`100043d7`-`100043da`, `100044fb`-`10004503`, `100052d3`-`100052d5`). [C]

### 3.3 What D3DDrv enumerates

- `EnumSubDrivers` `100042b0`: `DirectDrawEnumerate`; for each DirectDraw device that passes the 3D capability test (`10003130`): `Cb(index, "(D3D)" + description, Context)` (format string `"(D3D)%s"` at `10014fcc`). [C]
- `EnumModes` `100043f0`: locates the device by `DriverName` (ECX is ignored), enumerates display modes, reports only modes with **16 bits per pixel** (`1000448f`): `Cb(index, "%ix%i", Width, Height, Context)`. If the device can render in a window (`10038e60`): one extra `Cb(index, "WindowMode", -1, -1, Context)`. [C]
- `Init` `10005120` uses `Hook->DriverName + 5` (skips "(D3D)"), `Hook->Width/Height/hWnd`. If `Width == -1 && Height == -1` it replaces them with the client rect size of `hWnd` (writes back into the hook struct). [C]

### 3.4 `DRV_DriverHook` (argument of `Init`), 0x614 bytes

Built on the stack in `Engine_InitDriver` **`005bc4b0`** [C]:

| Off | Field | Source |
|---|---|---|
| 0x000 | `char AppName[512]` | `Engine+0x34ed0` ("Redcat Spookkasteel") |
| 0x200 | `int32 Driver` | `geDriver.Id` |
| 0x204 | `char DriverName[512]` | `geDriver.Name` |
| 0x404 | `int32 Mode` | `geDriver_Mode.Id` |
| 0x408 | `char ModeName[512]` | `geDriver_Mode.Name` |
| 0x608 | `int32 Width` | `geDriver_Mode.Width` |
| 0x60C | `int32 Height` | `geDriver_Mode.Height` |
| 0x610 | `HWND hWnd` | `Engine+0x34ecc` |

`Engine_InitDriver` sequence [C]: `geEngine_ShutdownDriver` (`005bb9e0`) -> error if already active -> `LoadLibraryA` -> `DriverHook(&Engine->RDriver)` -> version check -> write +0xAC/+0xB0 -> `Init(ECX=&hook)` -> `Active = 1` (`Engine+0x33668`) -> `Engine_SetupPixelFormats` (`005bd000`) -> `Engine->Changed = 1` (`Engine+0x3904c`). Its caller `geEngine_SetDriverAndMode` `005bb950` then calls `geEngine_UpdateGamma` (`005bb6b0`) and `geEngine_UpdateFogEnable` (`005bb660`).

### 3.5 Game-side selection (`CAdamEngine`, `AdamEngine.cpp`)

`CAdamEngine::Init` **`0055b7d0`** [C unless noted]:

1. If `[Display] AutoSelectDriver` (Computer.ini, accessor `00557b80`) is true and the byte at `0x6a2400` is non-zero (cleared at `004be423`; by the log string "SHIFT pressed, disable AutoSelectDriver" this is the SHIFT-at-start override [I]):
   - if `[Display] SoftwareOnly` (accessor `00556e90`): disable driver indices 0, 2, 3 (`0055bb63`-`0055bb79`);
   - if indices 2 and 3 are both still enabled: read `[Display] Quality` (accessor `00557760`, asserted 0..3). `Quality < 1` -> log "prefer D3D-RGB over D3D-LM" and **disable index 2 (`D3DDrv.dll`)**; otherwise log "prefer D3D-LM over D3D-RGB" and disable index 3 (`0055bc93`-`0055bd87`).
2. Logs the enabled/disabled state of the 4 indices, installs the query callback `0x565360` (`005c9520`), calls `geEngine_Create(hWnd, "Redcat Spookkasteel", ".", 0x10003)`.
3. `CAdamEngine::SelectDevice` **`0055dcc0`**, then `geEngine_SetDriverAndMode`.

Pitfall: with `Quality = 0` the game disables `D3DDrv.dll` in favour of `D3DDrvRGB.dll`, which this engine can never load. Keep `Quality >= 1`, or have the host answer for whichever index is enabled.

`CAdamEngine::QueryDrivers` **`0055ebc0`** copies the engine's list into a module table (entry size 0xB7C, count at `0x6c8d98`) and classifies each sub-driver [I, from the assembly at `0055ee94`-`0055f2e2`]:

| Flag | Rule |
|---|---|
| isSoftware | upper-cased sub-driver **name** contains "SOFTWARE" |
| isWindowed | isSoftware and name contains "WINDOW" |
| isPrimary | name contains "PRIMA" |
| isRGB / isGlide / isD3D | upper-cased **file name** contains "RGB" / "GLIDE" / "D3D" |
| driverNr | index of the file name in the engine table (`005c9640`), asserted 0..3 |

`AutoSelectBestDriver` **`0055fc90`** [I, from the decompilation]: skips windowed drivers; **rejects any driver with fewer than 2 modes** ("reject driver ... with only %d modes"); first survivor is the candidate; a later one replaces it if the candidate is software and the new one is not, or if both are D3D of the same RGB kind and the candidate is "primary" while the new one is not.

`AutoSelectBestMode` **`0055f630`** [C]: called from `0055e626` with `("320x200", "640x480")`; wanted name = "320x200" for a software driver, **"640x480"** otherwise. `FindMode` **`0055f990`** matches with `strstr(driverModeName, wanted)` (`0055fb1e`). If not found it walks a 12-entry table (`0x6a25d8`: 320x200, 320x240, 400x300, 512x384, 640x400, 640x480, 720x480, 720x576, 800x600, 1024x768, 1152x864, 1280x1024) outward from the wanted entry ("try nearest mode").

`[Display] Mode` (accessor `00557dc0`, asserted 0..2) is stored at `this+0x198` in the automatic path; it does not change the mode name requested from a hardware driver. [C] for the code path at `0055e51e`-`0055e63a`.

Query callback `0x565360` -> `00564fd0(before, driverIdx, result, "geEngine_Create()")`: crash-guard bookkeeping in `.\Settings\Startup.INI` (sections `D3DDriver`, `D3DRGBDriver`, `GlideDriver`, `SoftwareDriver`), and toggling of `SoftwareOnly` around the D3D probes (indices 2, 3). Not needed by the driver; details not traced.

**What the JS host must present** so the automatic path picks it:

- Answer `LoadLibraryA(".\\D3DDrv.dll")` (index 2) and `GetProcAddress("DriverHook")`. Fail `GlideDrv.dll` (otherwise index 2 is skipped) and preferably `SoftDrv.dll`.
- One sub-driver whose name does not contain "SOFTWARE"; e.g. `"(D3D)WebGL"`.
- **At least two modes**, one of them named exactly `"640x480"` with Width 640, Height 480 (e.g. add `"800x600"`). Do not report a mode with Width -1 unless you want the "windowed" assertions (`m_DriverIsWindowed == (w==-1)`).

### 3.6 Engine structs used during enumeration [C]

`geDriver_Mode` (0x20C): `Id` +0, `Name[512]` +4, `Width` +0x204, `Height` +0x208.
`geDriver` (0x4488): `Id` +0, `Name[512]` +4, `FileName[256]` +0x204, `Modes[32]` +0x304, `NumModes` +0x4484.
`Sys_DriverInfo` at `Engine+0`: `SubDrivers[12]` +0, `NumSubDrivers` +0x33660, `CurFileName` +0x33664, `Active` +0x33668, `DriverHandle` +0x3366C, `CurDriver` +0x33670, `CurMode` +0x33674, `RDriver` +0x33678.

---

## 4. Data structures crossing the interface

### 4.1 `DRV_TLVertex` (0x24 bytes) [C]

Stride 0x24 at `10006ab3`, `10005590`; field use at `10006a06`-`10006a49`.

| Off | Field | Type | Meaning / range |
|---|---|---|---|
| 0x00 | x | float | screen X in pixels (viewport coordinates, already clamped to the clip rect by the engine: `005c9330`) |
| 0x04 | y | float | screen Y in pixels, Y down |
| 0x08 | z | float | **camera-space depth times the camera ZScale**, not 0..1 and not 1/z. Engine: `z = max(-Zcam, 0.01) * Camera->ZScale` (`005c9290`, `005c9330`; ZScale at camera+0x11C, default 0.5 at `005c8f5f`, settable via `005c8fa0`). |
| 0x0C | u | float | world polys: texture-space coordinate in texels before `DRV_TexInfo` scale/shift. Misc polys: normalised 0..1 across the bitmap. |
| 0x10 | v | float | as u |
| 0x14 | r | float | 0..255 |
| 0x18 | g | float | 0..255 |
| 0x1C | b | float | 0..255 |
| 0x20 | a | float | 0..255. **Only the first vertex's `a` is used** for the whole polygon. |

Driver conversion to D3D (identical in all three render paths, `10006a06`-`10006a57`, `10005590`, `10005da0`): `sx = x`, `sy = y`, `rhw = 1/z`, `sz = 1 - 1/z`, `color = (int(a0)<<24) | (int(r)<<16) | (int(g)<<8) | int(b)` (float->int by `_ftol`, truncation). No clamping of `sz`.

Colour defaults seen in the engine are 255.0 (`0x437f0000`, e.g. `005bb4b2`).

WebGL equivalent: `clip = (xndc*w, yndc*w, (2*(1-1/z)-1)*w, w)` with `w = z`. Depth test `LEQUAL`, depth cleared to 1.

### 4.2 `DRV_TexInfo` (16 bytes) [C]

Read at `10005590` (`param_4[0..3]`); built by the engine at `005b9414`-`005b942e`.

| Off | Field | Engine source |
|---|---|---|
| 0 | `float ShiftU` | surface info +0x70 |
| 4 | `float ShiftV` | surface info +0x74 |
| 8 | `float DrawScaleU` | BSP texinfo +0x20 |
| 12 | `float DrawScaleV` | BSP texinfo +0x24 |

### 4.3 `DRV_LInfo` (0x1C bytes) [C]

Offsets from driver `10005980`, `10005f80`, `10005880` and engine `005bbe40`, `005d2020`. It is the first member of the engine's per-surface record (0x88 bytes each).

| Off | Field | Type | Meaning |
|---|---|---|---|
| 0x00 | `Width` | int16 | lightmap width in lightmap texels |
| 0x02 | `Height` | int16 | lightmap height |
| 0x04 | `MinU` | int32 | minimum U of the face in texture space (texels) |
| 0x08 | `MinV` | int32 | minimum V |
| 0x0C | `RGBLight[0]` | uint8* | light data, written by `SetupLightmap` |
| 0x10 | `RGBLight[1]` | uint8* | fog-light data or NULL, written by `SetupLightmap` |
| 0x14 | `Face` | int32 | face index (the callback uses it to find the surface) |
| 0x18 | `THandle` | geRDriver_THandle* | lightmap handle created by the engine with `THandle_Create(Width, Height, 1, &LightmapFormat)` (`005bbeb4`) |

### 4.4 `SetupLightmap` callback = engine `Light_SetupLightmap` `005d2020` [C]

`void __cdecl SetupLightmap(DRV_LInfo *LInfo, BOOL *Dynamic)`

- Fills `LInfo->RGBLight[0]`: a pointer straight into the level's static light data (`005d2165`), or a static default buffer `0x6cebf8` when the face has no light data (`005d2171`), or the address of **one static engine buffer `0x6ce82c`** after recomputing styled/dynamic light (`005d230b`).
- Sets `LInfo->RGBLight[1]` to NULL (`005d2314`) or to another static buffer `0x6ce460` when fog lights touch the face (`005d2405`).
- Writes `*Dynamic` (`005d241e`; skipped if the pointer is NULL): non-zero when the data can change next frame (style/dynamic/fog).
- Data layout: `Width * Height` texels, row-major, **3 bytes per texel in R, G, B order**, no row padding, values 0..255 (clamped at `005d22a5`-`005d2305`). The three static buffers are 0x3CC bytes apart, i.e. room for 18 x 18 x 3 each.
- The driver must convert/upload the data **before the next `SetupLightmap` call**: all dynamic faces share the same buffer.
- The driver calls it once per visible lightmapped polygon per flush (`1000640b`, `10006636`), i.e. lazily at draw time, never at `RenderWorldPoly` time.
- The engine also calls it itself when creating lightmap handles (`005bbe9d`) and from one more internal site (`005ce2ad`, not analysed).

D3DDrv upload rule (`SetupLMap` `10005880`): upload when the handle was never uploaded, lost its cache slot, or `Dynamic` was set this time or the previous time. Source texels go through a 256-entry LUT per channel into RGB565/555 (`10005980`); the LUT is built with gamma 1.0 (`1000310d`, `10003230`), so no gamma is applied to lightmaps by the driver. Lightmap surface size is the power of two >= max(Width, Height), at most 32 (`10007840` creates 6 staging surfaces 1..32).

### 4.5 `geRDriver_PixelFormat` (8 bytes) and flags [C]

`{ int32 PixelFormat; uint32 Flags; }`

`gePixelFormat` values ([C] for 3, 5, 7, 8, 9, 13, 17, which the driver emits at `1000520d`-`100052a8`; the rest [I] from the reference enum, consistent with the engine's 21 format description strings at `0x6a990c`-`0x6a99e8`, stored in reverse enum order):

| Val | Name | Val | Name |
|---|---|---|---|
| 0 | NO_DATA | 11 | 24BIT_YUV |
| 1 | 8BIT (palettised) | 12 | 32BIT_RGBX |
| 2 | 8BIT_GRAY | 13 | 32BIT_XRGB |
| 3 | 16BIT_555_RGB | 14 | 32BIT_BGRX |
| 4 | 16BIT_555_BGR | 15 | 32BIT_XBGR |
| 5 | 16BIT_565_RGB | 16 | 32BIT_RGBA |
| 6 | 16BIT_565_BGR | 17 | 32BIT_ARGB |
| 7 | 16BIT_4444_ARGB | 18 | 32BIT_BGRA |
| 8 | 16BIT_1555_ARGB | 19 | 32BIT_ABGR |
| 9 | 24BIT_RGB | 20 | WAVELET |
| 10 | 24BIT_BGR | | |

Format names give the order from most significant to least significant bits of the pixel value (e.g. 32BIT_ARGB = `0xAARRGGBB`, little-endian bytes B,G,R,A). [I] from the reference source; consistent with D3DDrv mapping a DirectDraw surface with `dwRGBAlphaBitMask == 0xff000000` to 17 and `dwBBitMask == 0xff` to 13 (`10005201`-`10005220`).

Flag bits:

| Bit | Name | Meaning |
|---|---|---|
| 0x00001 | `RDRIVER_PF_2D` | usable with `DrawDecal` |
| 0x00002 | `RDRIVER_PF_3D` | usable with `RenderWorldPoly` / `RenderMiscTexturePoly` |
| 0x00004 | `RDRIVER_PF_LIGHTMAP` | lightmap handle |
| 0x00008 | `RDRIVER_PF_PALETTE` | palette handle |
| 0x00010 | `RDRIVER_PF_ALPHA` | separate alpha-map handle |
| 0x10000 | `RDRIVER_PF_HAS_ALPHA` | surface takes a separate alpha map (triggers `SetAlpha/GetAlpha`) |
| 0x20000 | `RDRIVER_PF_CAN_DO_COLORKEY` | colour key supported |
| 0x40000 | `RDRIVER_PF_COMBINE_LIGHTMAP` | may be rendered with a lightmap |

Bits 0..15 are the "major" flags (`& 0xffff` at `005c1350`).

### 4.6 `geRDriver_THandleInfo` (0x1C bytes) [C]

Written by `THandle_GetInfo` `100077d0`; consumed at `005c33f8`-`005c341f`.

| Off | Field | D3DDrv value |
|---|---|---|
| 0x00 | `int32 Width` | `THandle.Width >> MipLevel` |
| 0x04 | `int32 Height` | `THandle.Height >> MipLevel` |
| 0x08 | `int32 Stride` | **in pixels**: `THandle.Stride >> MipLevel` |
| 0x0C | `uint32 ColorKey` | 1 if the format has `CAN_DO_COLORKEY`, else 0 |
| 0x10 | `uint32 Flags` | 1 (`RDRIVER_THANDLE_HAS_COLORKEY`) under the same condition, else 0 |
| 0x14 | `PixelFormat.PixelFormat` | as passed to `THandle_Create` |
| 0x18 | `PixelFormat.Flags` | as passed to `THandle_Create` |

### 4.7 `GInfo` (`GlobalInfo`, engine global `0x722860`, 0xB0 bytes)

The engine fills it before world-poly calls (`005b9435`-`005b94c1`, `005bab81`-`005bab9c`, `005bb2d2`-`005bb2f1`). **D3DDrv never reads it** (no access to table+0xB0 anywhere in the DLL) [C]. A hardware-style driver can ignore it. Offsets confirmed by the engine's writes: `VecU` +0x00, `VecV` +0x0C, `TexMinsX` +0x18 (= `LInfo.MinU`), `TexMinsY` +0x1C, `TexWidth` +0x20 (= `LInfo.Width << 4`), `TexHeight` +0x24, `TexShiftX` +0x28, `TexShiftY` +0x2C, `PlaneNormal` +0x88, `PlaneDist` +0x94, `RPlaneNormal` +0x98. The fields between (+0x30..+0x87: camera transform, centre, scales) follow the reference layout [I].

### 4.8 `RECT`

Win32 `{left, top, right, bottom}`, int32 each. The engine converts its own `{Left, Right, Top, Bottom}` rect before calling (`005bc8e4`-`005bc904`, `005bbac7`-`005bbae4`). [C]

---

## 5. Engine-side call sequences

### 5.1 Frame

`geEngine_BeginFrame` `005bc850` (cdecl: Engine, Camera, ClearScreen) [C]:

1. `geEngine_Prep` `005bc960`: if `Engine->Changed` or any world's changed flag is set: `geEngine_ResetDriver` (`005bc1a0`: detach all bitmaps and world lightmap handles -> `Reset()` -> `SetFogEnable`), then `geEngine_AttachAll` (`005bc090`: re-create and re-upload every attached bitmap and all world data), clear the flags.
2. `BeginScene(ECX=ClearScreen, EDX=1, stack=&RECT or NULL)`; the RECT is the camera clip rect when a camera is given.

`geEngine_EndFrame` `005bca50`: draws the engine's font buffer (through `DrawDecal`), `EndScene()`, then optional debug text.

`Engine->Changed` is set by `Engine_InitDriver` and by every `geEngine_AddBitmap` / `geEngine_RemoveBitmap` (`005bb8c9`, `005bb90c`). So adding one bitmap causes a full `Reset()` plus re-creation of all texture handles at the next `BeginFrame`.

### 5.2 World rendering (`005b8730` and callees) [C]

`BeginWorld` ... `RenderWorldPoly` ... `EndWorld` (`005b8b40`), `BeginMeshes`/`EndMeshes` (`005b88d0`), `BeginModels`/`EndModels` (`005b90d0`, and an empty pair at `005b8879`/`005b8881`). The return value of each Begin/End is tested; 0 aborts the frame with an error (except the empty pair).

### 5.3 Polygon submitters [C]

| Engine function | Slot | Arguments |
|---|---|---|
| world faces `005ba750`, `005babd0` | 0x7C | `LInfo` = surface record or NULL; `Flags` computed per face |
| translucent world faces `005b93b0` | 0x7C | `Flags = 3` (ALPHA \| FLUSH); `Pnts[0].a` = texinfo alpha; `LInfo = NULL` when texinfo flag 0x8000 is set |
| `005bb340` (sky/background faces; role [I]) | 0x80 | vertex colours 255 |
| `geEngine_RenderPoly` `005bba60` | 0x80 if a bitmap is given, else 0x78 | flags passed through |
| user polys (`User.c`) `005b63b0`, `005b69e0`, `005b6bb0` | 0x80 / 0x78 | flag mapping below |
| actor triangles `005e06b0` (+ `005e0670`, `005e0690`) | 0x80 / 0x78 | `NumPoints = 3`, `Flags = 0` |
| `geEngine_DrawBitmap` `005bbab0` | 0x84 | `SrcRect` is a **stack copy** or NULL |

User-poly flag mapping (`005b6979`-`005b69ab`): poly render-flag bit 0 -> `NO_ZWRITE` (8), bit 1 -> `NO_ZMASK` (4), bit 3 -> `FLUSH` (2), bit 4 -> `CLAMP_UV` (0x10), and `a != 255.0` -> `ALPHA` (1). So the engine uses all five driver flag bits.

---

## 6. Texture handles

### 6.1 D3DDrv behaviour [C]

`geRDriver_THandle` is opaque to the engine (it only stores and passes the pointer). D3DDrv's own record is 0x20 bytes in a static array of 20000 at `0x10127268` (`100070f0`).

`THandle_Create` `10007560`: copies `*PixelFormat` into the handle, then by `Flags`:

| Test order | Path | Storage | `Stride` |
|---|---|---|---|
| `Flags & 2` (3D) | `Create3DTHandle` `10007290` | `NumMipLevels` system-memory surfaces, each **square, size `S >> level`**, `S` = power of two >= max(Width, Height) | `S` |
| else `Flags & 4` (LIGHTMAP) | `CreateLightmapTHandle` `10007380` | no pixel storage of its own (staging surfaces are shared); `NumMipLevels` must be 1 | `S` |
| else `Flags & 1` (2D) | `Create2DTHandle` `10007430` | one `Width x Height` surface with source colour key = pixel value 1; `NumMipLevels` must be 1 | `Width` |

- `S` is limited to 256: the size snap `10005060` returns -1 above 256. Pixel formats accepted for 3D/lightmap: 3, 5, 7, 8 only (`100074d0`), anything else fails with "SetupCurrent3dDesc: Invalid pixel format".
- Returns the handle pointer, or NULL with `LastError = 7`.

`THandle_Lock(THandle, MipLevel, void **Bits)` `10007700`: locks the surface of that mip level and stores **only the surface pointer** in `*Bits`. No pitch is returned. The engine addresses pixels as `Bits + (y * Info.Stride + x) * bytesPerPixel` using `THandle_GetInfo` (`005c33f8`: Width, Height, Stride, Format, ColorKey go into the lock's bitmap info). Returns 0 on failure.

`THandle_UnLock(THandle, MipLevel)` `10007780`: unlocks and marks that mip level dirty (bit 1 of the mip flags); the upload to the video-memory cache happens lazily at draw time (`SetupTexture` `10005a80`).

`THandle_GetInfo`: see 4.6. `MipLevel` simply shifts Width/Height/Stride.

`THandle_Destroy(THandle)` `10007670`: releases everything, zeroes the record, returns 1.

`SetPalette/GetPalette/SetAlpha/GetAlpha`: NULL in D3DDrv.

Mip levels: the engine creates and fills every level itself (lock/unlock per level, loop in `005c1f40`). D3DDrv picks one level per polygon (`GetMipLevel` `10006880`: minimum over edges of `(du^2+dv^2)/(dx^2+dy^2)` in texels per pixel squared; `<= 4` -> 0, `<= 15` -> 1, `<= 40` -> 2, else 3, clamped to the last level) and binds that level as a plain texture. A JS driver may keep only level 0 and let WebGL build mips, but must accept Lock/UnLock/GetInfo for all levels it agreed to create.

### 6.2 Pixel formats D3DDrv offers (`EnumPixelFormats` `100051f0`) [C]

Always exactly five entries, in this order:

| # | PixelFormat | Flags | Purpose |
|---|---|---|---|
| 0 | `Format3d`: 3 (555) if the texture format's green mask is 0x3E0, else 5 (565) | 0x40002 | opaque 3D |
| 1 | 7 (4444 ARGB) | 0x40002 | 3D with alpha |
| 2 | `Format2d` (see below) | 0x20001 | 2D decal with colour key |
| 3 | `Format3d` | 0x00004 | lightmap |
| 4 | 8 (1555 ARGB) | 0x40002 | 3D with colour key |

`Format2d` follows the primary surface: 32 bpp with alpha mask 0xff000000 -> 17 (ARGB); 32 bpp with blue mask 0xff -> 13 (XRGB); 24 bpp with blue mask 0xff -> 9 (RGB); otherwise 3 (555) if green mask 0x3E0 else 5 (565). Fullscreen modes are 16-bit only (3.3), so 13/17/9 occur only in "WindowMode" on a true-colour desktop.

### 6.3 Where the engine chooses among offered formats

**(a) `Engine_SetupPixelFormats` `005bd000` + `Hack_FindPixelFormat` `005bd1f0`** [C]. Runs once after `Init`. For each engine texture type it searches the enumerated list in four passes: (1) `Flags == wanted` and alpha constraint met, (2) `Flags & wanted` and alpha constraint met, (3) `Flags == wanted`, (4) `Flags & wanted`; first hit wins.

| Type | Wanted flags | Needs alpha | Stored at | "Has" flag |
|---|---|---|---|---|
| 0 WORLD | 0x40000 | no | Engine+0x39078 | +0x3905C |
| 1 LIGHTMAP | 0x4 | no | +0x39080 | +0x39060 |
| 2 USER | 0x2 | no | +0x39088 | +0x39064 |
| 3 USER_ALPHA | 0x2 | yes | +0x39090 | +0x39068 |
| 4 DECAL | 0x1 | no | +0x39098 | +0x3906C |
| 5 PALETTE | 0x8 | no | +0x390A0 | +0x39070 |
| 6 ALPHA_CHANNEL | 0x10 | no | +0x390A8 | +0x39074 |

`Engine_CreateTHandle` `005bd2c0` is the only consumer, and its only external caller is the lightmap-handle creation at `005bbeb4` (type 1). So of this table **only the LIGHTMAP entry matters** in this game. If no format has flag 0x4, `Engine_CreateTHandle` returns NULL and attaching a world fails.

**(b) `geBitmap_ChooseDriverFormat` `005c1350`**, called per bitmap from `geBitmap_CreateTHandle` `005c1710` (which re-enumerates the formats each time, `005c1732`, and then calls `THandle_Create` at `005c18d5`). Inputs: the bitmap's preferred format and system format, `SeekCK` (bitmap has a colour key), `SeekAlpha` (bitmap has alpha), `SeekSeparates` (bitmap has a separate alpha bitmap), and the bitmap's driver flags:

| Bitmap origin | Driver flags | Evidence |
|---|---|---|
| `geEngine_AddBitmap` (2D decals, HUD, fonts) | 0x1 | [C] `005bb8a8` |
| world textures | 0x2 or 0x40002 | [C] `005d431a` region |
| `005ba560` (world-side bitmap add; role [I]) | 0x40002 | [C] `005ba59f` |

Rating per offered format [C for constants and structure; the pixel-format predicate calls lost their arguments in the decompilation and are named from the reference source]:

```
if SeekAlpha: SeekCK = 0
if SeekFlags & 0x10: SeekFlags = 0x10  else if SeekFlags & 8: SeekFlags = 8
major = SeekFlags & 0xffff
if (pf.Flags & 0xffff) == major:            rating = 0x800000
elif (pf.Flags & major) == major:           rating = (32 - popcount((pf.Flags ^ SeekFlags) & 0xffff)) * 64
else:                                       rating = 0; skip
if pf.PixelFormat == SeekFormat1:           rating += 0x10000
elif pf.PixelFormat == SeekFormat2:         rating += 0x8000
elif either is not a raw format:            rating += 0x10
else:                                       rating += similarity of R,G,B mask widths (0..24) + 4*similarity of A mask width (0..32)
FoundAlpha = (alpha mask of pf has > 2 bits) or (pf is palettised and the palette format has alpha)
if !SeekAlpha:  if !FoundAlpha:             rating += 0x400
elif FoundAlpha:                            rating += 0x1000000
elif pf has any alpha bit or CAN_DO_COLORKEY: rating += 0x80000
if (pf.Flags & 0x10000) and SeekSeparates:  rating += 0x2000000
if SeekCK:  if pf.PixelFormat == 8 (1555):  rating += 0x800000
            elif FoundAlpha:                rating += 0x40000
if bool(pf.Flags & 0x20000) == bool(SeekCK): rating += 0x20000
```

Highest rating wins, first entry wins ties. All ratings 0 -> error (bitmap.c line 0x516) and the attach fails.

The engine is format-agnostic here: any `gePixelFormat` can be offered; the engine converts when it uploads.

### 6.4 When the palette/alpha slots get called [C]

- `THandle_SetPalette` (+0x44): only when the chosen driver format is palettised (`gePixelFormat` 1) (`005bd307`-`005bd34e`, `geBitmap_AllocPalette` `005c0410`).
- `THandle_GetAlpha` / `THandle_SetAlpha` (+0x50/+0x4C): only if the bitmap has a separate alpha bitmap **and** the driver format lacks real alpha **and** the handle's format flags contain `RDRIVER_PF_HAS_ALPHA` (`005c21f4`-`005c221a`); also `005bd351`-`005bd398` under the same flag.

A driver that offers no palettised format and never sets 0x8, 0x10 or 0x10000 gets none of these calls.

### 6.5 Recommended format set for the JS driver

| # | PixelFormat | Flags | Used for |
|---|---|---|---|
| 0 | 13 (32BIT_XRGB) | 0x40002 | opaque 3D textures |
| 1 | 17 (32BIT_ARGB) | 0x40002 | 3D textures with alpha, and colour-keyed 3D textures |
| 2 | 13 (32BIT_XRGB) | 0x20001 | 2D decals; report `ColorKey = 1`, `Flags = 1` from `GetInfo`; skip source pixels whose RGB equals 0x000001 |
| 3 | 9 (24BIT_RGB) | 0x00004 | lightmaps (the engine never locks these; the format value is only a tag) |

How the engine resolves it (from 6.3): opaque bitmap -> #0 (+0x400 over #1); bitmap with alpha -> #1 (+0x1000000); colour-keyed 3D bitmap -> #1 (+0x40000, "alpha is better than nothing"); 2D -> #2 (only entry with major flag 1); lightmap -> #3.

Why this shape:

- #2 is the path the original exercised: D3DDrv always offers its 2D format with 0x20001 and `ColorKey = 1`, and on a true-colour desktop that format is 13 or 17. [C]
- For colour-keyed **3D** bitmaps the original always got 1555 (entry 4 wins with +0x800000). With the set above they get 32BIT_ARGB instead, which relies on the engine's blitter turning key pixels into alpha 0 for an arbitrary alpha format. That is the designed behaviour [I] but was not traced in the binary. If keyed textures show an opaque key colour, add a fifth entry `{8, 0x40002}` (1555) exactly like D3DDrv and decode 1555 in JS.
- Do not set `RDRIVER_PF_HAS_ALPHA`, `RDRIVER_PF_PALETTE`, `RDRIVER_PF_ALPHA`, and do not offer format 1.
- Lock must return a pointer inside guest memory with `Stride * Height * bytesPerPixel` bytes for that level.

---

## 7. Rendering calls: exact D3DDrv semantics

Render-flag bits (all `Render*` slots) [C]:

| Bit | Name | Gouraud `10006970` | World `10006b20` | Misc `10006ba0` |
|---|---|---|---|---|
| 0x01 | `DRV_RENDER_ALPHA` | ignored (alpha of vertex 0 is always used) | vertex 0 alpha used only if set; otherwise alpha = 255 (`10005590`) | ignored (alpha of vertex 0 always used) |
| 0x02 | `DRV_RENDER_FLUSH` | flush world + misc caches first, draw now, then flush the D3D batch | flush world cache before and after inserting | flush misc cache before and after inserting |
| 0x04 | `DRV_RENDER_NO_ZMASK` | ignored | ignored | Z test off for this polygon |
| 0x08 | `DRV_RENDER_NO_ZWRITE` | ignored | ignored | Z write off for this polygon |
| 0x10 | `DRV_RENDER_CLAMP_UV` | n/a | base texture clamp instead of wrap | clamp instead of wrap |

All slots return 1 immediately and do nothing when the driver is "not active" (`RenderingIsOK` = `10038e64`, toggled by `SetActive`).

### 7.1 Scene functions [C]

`BeginScene(Clear, ClearZ, WorldRect)` `10006d50`:

- frame counter++ (cache LRU); fails (returns 0) if there is no device.
- zero `CacheInfo`; rebuild the texture cache if handles were created/destroyed since last time (`THandle_CheckCache` `10007a50`).
- Clear (`10002e60`): the **whole** back buffer rectangle `(0,0,Width,Height)`; colour target if `Clear != 0`, Z buffer if `ClearZ != 0`. **`WorldRect` is never read.** The clear goes through the viewport, whose background is the material that `SetFogEnable` rewrites (7.7): **clear colour = fog colour while fog is enabled, black otherwise**. Z is cleared to the far value (1.0).
- `NumRenderedPolys = 0`; device `BeginScene`.
- State: bilinear min/mag filter on both stages (`100018a0`), fill solid, Z write on, Z test on, Z func LESSEQUAL, blend SRCALPHA / INVSRCALPHA, **alpha blending enabled**.
- Fog: if enabled, `FOGENABLE = 1` and `FOGCOLOR = (int(r)<<16)|(int(g)<<8)|int(b)`; else `FOGENABLE = 0`.

`EndScene()` `10006ef0`: flush world cache, flush misc cache, device `EndScene`, present (`10002d40`: flip in fullscreen, blit to the window otherwise). Returns 0 only on a device error.

`BeginWorld` sets mode 1; `BeginMeshes` mode 2 (+ a flag); `BeginModels` mode 3. They do nothing else. `EndWorld` / `EndModels` (same function `10006f60`): flush world then misc cache, flush the D3D batch. `EndMeshes` `10006fd0`: flush misc then world cache. The mode value is not used to change rendering.

Init-time states set once in `D3DMain_InitD3D` `10001bf0` (`10001e46`-`10001ecf`): fog off, ZFUNC LESSEQUAL, perspective-correct texturing on, specular off, dither on, Gouraud shading, **cull none**, colour-key enable on, TEXTUREMIN = LINEARMIPNEAREST, TEXTUREMAG = LINEAR. **No alpha test is ever enabled.**

Draw call: `DrawPrimitive(TRIANGLEFAN, ...)` with flags `DONOTCLIP | DONOTUPDATEEXTENTS | DONOTLIGHT` (`10001900`, `10001920`). Polygons are convex fans, already clipped by the engine.

### 7.2 Batching (matters for draw order)

World polygons and misc polygons are not drawn when submitted. They go into two caches (each max 256 polygons / 1024 vertices; `10005590`, `10005da0`) and are drawn at flush time:

- world cache flush `100057b0`: when full, on `FLUSH`, at `EndWorld/EndMeshes/EndModels/EndScene`, and before a flushed Gouraud poly.
- misc cache flush `10005b40`: when full, on `FLUSH`, at `EndWorld/EndMeshes/EndModels/EndScene`, and before a flushed Gouraud poly.
- Inside a flush, polygons are **sorted** (`qsort` of polygon pointers, `10005d30` -> `10007d59` for misc, `100067c0` for world; the key stored at insert time is `(handleIndex << 4) + mip`, `10005590`/`10005da0`), not drawn in submission order. In the two-pass path the lightmap pass iterates in submission order. In the single-pass path, polygons without a lightmap are drawn after all lightmapped ones.
- `RenderGouraudPoly` draws **immediately**. `DrawDecal` blits **immediately**.

So a decal or Gouraud poly submitted after cached polygons can end up underneath them (they are drawn later, at the next flush). To reproduce the original layering keep the same two queues and the same flush points.

### 7.3 `RenderGouraudPoly(Pnts, NumPoints, Flags)` `10006970` [C]

- At most 30 vertices fit the local buffer (frame 0x3CC).
- Blend SRCALPHA / INVSRCALPHA, **no texture** (stage 0 texture NULL), vertex conversion as in 4.1 with alpha of vertex 0, fog per 7.7.
- Z test/write state is whatever is current (normally on).

### 7.4 `RenderWorldPoly(Pnts, NumPoints, THandle, TexInfo, LInfo, Flags)` [C]

Insert (`10005590`): `NumRenderedPolys++`; stores `THandle`, `LInfo`, `Flags`, `ShiftU/V`, `ScaleU = 1/DrawScaleU`, `ScaleV = 1/DrawScaleV`, mip level, raw `u, v`, and colour `ARGB` with alpha rule from the flag table.

At flush (`RenderWorldPolys` `10006230`, vertex prep `10005f80`), with `S` = base texture surface size (`1 << Log`, the power of two >= max(Width, Height) of level 0) and `L` = lightmap surface size (power of two >= max(LInfo.Width, LInfo.Height)):

```
base texture:  tu = (u * (1/DrawScaleU) + ShiftU) / S        tv = (v * (1/DrawScaleV) + ShiftV) / S
lightmap:      lu = (u - LInfo.MinU + 8) / (16 * L)          lv = (v - LInfo.MinV + 8) / (16 * L)
```

Both U and V of the base texture are divided by the same `S` (square surface). The lightmap data occupies the top-left `Width x Height` texels of the `L x L` surface. If the JS driver stores a lightmap as exactly `Width x Height`, use `lu = (u - MinU + 8) / (16 * Width)`, `lv = (v - MinV + 8) / (16 * Height)`.

Combination and state:

| Path | When | What is drawn |
|---|---|---|
| single pass (mode 3) | device has 2 texture stages | stage 0: texture x vertex colour, alpha = texture alpha x vertex alpha (MODULATE / MODULATE). Stage 1: **current x lightmap, MODULATE (1x, not 2x)**, alpha = diffuse x current (MODULATE). Blend SRCALPHA / INVSRCALPHA. Stage 0 wrap (or clamp with `CLAMP_UV`), stage 1 clamp. |
| two pass (modes 1 + 2) | otherwise | pass 1: texture x vertex colour with SRCALPHA / INVSRCALPHA, sorted. Pass 2: lightmap only, vertex colour forced to 0xffffffff, blend **DESTCOLOR / ZERO** (framebuffer x lightmap), clamp. |
| no `LInfo` | either path | texture x vertex colour only. |

Both paths give `out = texture.rgb * vertex.rgb * lightmap.rgb`, alpha-blended with `texture.a * vertex.a` (lightmap alpha is 1).

Fog lightmap: if `LInfo->RGBLight[1] != NULL` after `SetupLightmap`, the polygon is drawn once more with that RGB data as the texture, blend **ONE / ONE** (additive), driver fog disabled for that pass in the two-pass path (`1000668f`), then states are restored. In the single-pass path stage 0 colour op becomes SELECTARG2 (diffuse) with alpha op disabled, and stage 1 colour op becomes SELECTARG1 (the fog texture) (`10006477`, `1000648a`, `1000649e`; restored to MODULATE at `100064f1`-`10006518`), so the added colour is `fogmap.rgb` alone.

World polygons always use Z test LESSEQUAL and Z write on, whatever the flags say.

### 7.5 `RenderMiscTexturePoly(Pnts, NumPoints, THandle, Flags)` [C]

Insert (`10005da0`): `tu = u * Width / S`, `tv = v * Height / S` (`u, v` are 0..1 across the bitmap, `Width/Height` of mip 0, `S` as above). Colour = vertex rgb with alpha of vertex 0. Fog per 7.7.

Flush (`10005b40`): stage 1 disabled; stage 0 colour = texture x diffuse, alpha = texture x diffuse (MODULATE); blend SRCALPHA / INVSRCALPHA, blending on; per polygon: Z test = `!(Flags & 4)`, Z write = `!(Flags & 8)`, wrap = `!(Flags & 0x10)`. After the loop Z test and Z write are switched back on.

### 7.6 `DrawDecal(THandle, SrcRect, x, y)` `10006bf0` [C]

- `SrcRect == NULL`: source = whole handle, `w = THandle.Width`, `h = THandle.Height`.
- Otherwise for the visibility tests `w = right - left + 1`, `h = bottom - top + 1`.
- Returns 1 without drawing if `x + w <= 0`, `y + h <= 0`, `x >= screenW`, or `y >= screenH`.
- Clipping, done **in place on the caller's RECT**: if `x + w >= screenW - 1`: `right -= (x + w) - (screenW - 1)`; same for bottom; if `x < 0`: `left += -x; x = 0`; same for y.
- Blit size is then `right - left` by `bottom - top` (exclusive), destination `(x, y)`, 1:1, with **source colour key** (pixel value 1) and wait; no blending, no Z, no fog, no filtering.
- The only engine caller passes a stack copy of the rect (`005bbac7`), so the in-place edit is harmless here.

### 7.7 Fog [C]

`SetFogEnable(Enable, r, g, b, Start, End)` `100036d0` stores all six values (r, g, b are 0..255 floats; `Start`/`End` are in the same unit as `DRV_TLVertex.z`) and rewrites the viewport **background material** (`0x100274d0`, created in `10002720`) to `r,g,b / 255` when enabled or to black when disabled (`10003725`-`100037a2`). That material is the clear colour ([C] for the write; [I] from the reference source that it is the viewport background). Engine source values: `Engine+0x390B8` (Enable), `+0x390BC/C0/C4` (r, g, b), `+0x390C8` (Start), `+0x390CC` (End); called from `005bb660` after driver init and after every `Reset`.

Per vertex, in all three paths (`10006a59`-`10006aa3`, `10005590`, `10005da0`):

```
zc  = min(z, End)
f   = (End - zc) / (End - Start) * 255        // truncated to integer, values above 255 -> 255
specular.alpha = f                             // D3D vertex fog factor: 255 = no fog, 0 = full fog
```

Result: `colour = lerp(FogColor, colour, f / 255)`, linear between `Start` and `End`, interpolated per vertex. Fog colour set at `BeginScene` (7.1). When fog is disabled the factor is not applied. `z < Start` gives no fog.

### 7.8 Gamma [C]

D3DDrv: `SetGamma` returns 1 and does nothing, `GetGamma` returns 1.0, `CanSupportFlags` has no gamma bit. Engine `geEngine_UpdateGamma` `005bb6b0`: if the driver has the gamma bit and `SetGamma(CurrentGamma)` succeeds, the bitmap gamma becomes 1.0; otherwise the engine sets its own bitmap gamma to `CurrentGamma` and, when it changed by more than 0.1, re-applies it to all attached bitmaps in software (`005d6c60` on the engine list and each world list). With `CanSupportFlags = 3` the driver sees gamma only as already-corrected texel data. Lightmaps are not gamma-corrected by D3DDrv (4.4).

### 7.9 Remaining slots [C]

| Slot | D3DDrv behaviour |
|---|---|
| `ScreenShot(Name)` | returns 0 (not implemented) |
| `UpdateWindow()` | calls `100037b0(hWnd)` (window position refresh [I]), returns 1 |
| `SetActive(active)` | stores `active` as `RenderingIsOK` (only if the primary surface exists); when active: restores lost surfaces, shows the window; returns 1 (0 if restore failed) |
| `Reset()` `100020c0` | destroys **all** texture handles still alive, frees the texture caches, empties both polygon caches, re-creates the caches, frame counter = 0; returns 1 |
| `Shutdown()` | full teardown (`10001f70`), returns 1; the engine then calls `FreeLibrary` |
| `Init(Hook)` | 3.3; returns 0 on failure |

Debug key toggles exist in the driver and have no interface: F8+Ctrl toggles wireframe, F8+Shift toggles lightmaps (`100054f0`, `10005540`, polled with `GetAsyncKeyState` in `BeginScene`).

---

## 8. WebGL state summary

| Draw | Texture | Colour | Blend | Depth | Address | Filter |
|---|---|---|---|---|---|---|
| Gouraud | none | vertex rgb, alpha = a0 | SRC_ALPHA, ONE_MINUS_SRC_ALPHA | test LEQUAL, write on | - | - |
| World, no lightmap | base | tex x vertex; alpha = tex.a x (ALPHA flag ? a0 : 255) | SRC_ALPHA, ONE_MINUS_SRC_ALPHA | test LEQUAL, write on | wrap, or clamp with 0x10 | bilinear |
| World + lightmap | base, lightmap | tex x vertex x lightmap; alpha as above | SRC_ALPHA, ONE_MINUS_SRC_ALPHA | test LEQUAL, write on | base as above; lightmap clamp | bilinear both |
| World fog map (extra pass) | fog RGB | fogmap.rgb | ONE, ONE | test LEQUAL, write on | clamp | bilinear |
| Misc | base | tex x vertex; alpha = tex.a x a0 | SRC_ALPHA, ONE_MINUS_SRC_ALPHA | test off with 0x04; write off with 0x08 | wrap, or clamp with 0x10 | bilinear |
| Decal | 2D handle | copy, skip key pixels | none | none | - | nearest, 1:1 |

No back-face culling, no alpha test (fully transparent texels still write depth), depth = `1 - 1/z`, fog per 7.7 on all 3D draws when enabled.

---

## 9. Pitfalls

1. **`__fastcall` with callee stack cleanup on every slot**, floats always on the stack (section 1). `SetFogEnable` takes ECX + 5 stack floats; `SetGamma` one stack float; the enumeration callbacks and `SetupLightmap` are `__cdecl`.
2. **`z` is depth x ZScale**, colours are 0..255 floats, and only vertex 0's alpha counts (4.1).
3. **`SetupLightmap` returns pointers into shared static buffers** (4.4): convert before the next callback. It is called at flush time, not at submit time.
4. **Draw order is not submit order**: two caches, sorted by texture at flush, while Gouraud polys and decals are immediate (7.2).
5. **The table is 0xB8 bytes**; the engine reads +0xB4 and calls it if non-NULL. Zero it.
6. The engine **writes** +0xAC and +0xB0 into the driver's table, in guest memory, after the second `DriverHook`.
7. `DriverHook`, `EnumSubDrivers`, `EnumModes` run in a first load; then the DLL is "freed" and loaded again for `Init`.
8. Automatic selection needs **>= 2 modes** and a mode name containing `"640x480"`; `Quality = 0` disables `D3DDrv.dll`; a working `GlideDrv.dll` hides `D3DDrv.dll` (3.1, 3.5).
9. `THandle_Lock` returns no pitch; row stride is `GetInfo.Stride` **pixels**. For 3D handles D3DDrv's stride is the power-of-two surface size, not the bitmap width, and UVs are divided by that size (6.1, 7.4, 7.5).
10. `BeginScene` ignores `WorldRect` and clears the whole target; the clear colour is the fog colour while fog is enabled (7.1, 7.7).
11. Any added/removed bitmap makes the next `BeginFrame` call `Reset()` and re-create and re-upload **every** texture and lightmap handle (5.1). Keep create/lock/unlock/destroy cheap.
12. `DrawDecal` edits the caller's RECT and uses inclusive sizes for culling but exclusive sizes for the blit (7.6).
13. `D3DDrvRGB.dll` is a v100.2 driver with a shorter table; do not use it as a layout reference (2.1).

---

## 10. Minimal JS driver checklist

- Table: `Name`, 100, 3, 0, `LastErrorStr` (valid C string), slots per 2.1, `CacheInfo` -> 20 zero bytes (or NULL), `EngineSettings` -> `{3, 0, 0, 0}` (set bit 0 of the second word to turn mirrors off), +0xAC/+0xB0/+0xB4 = 0.
- `EnumSubDrivers`: `Cb(0, "(D3D)WebGL", Context)`.
- `EnumModes`: `Cb(0, "640x480", 640, 480, Context)`, `Cb(1, "800x600", 800, 600, Context)`.
- `EnumPixelFormats`: the four entries of 6.5 (stop if the callback returns 0).
- `THandle_Create`: allocate per-level guest buffers; return a non-NULL guest-visible value.
- `Reset`: drop all handles and queued polygons, return 1.
- All Begin/End functions and Render functions return 1.

---

## 11. Address index

| Engine (`RcHcGame.dat`) | Role |
|---|---|
| `005c9a70` | enumerate driver DLLs |
| `005c9ce0`, `005c9dc0` | sub-driver / mode callbacks |
| `005c9520`, `005c9530`, `005c9560` | query callback setter, driver enable setter, enable test |
| `005bc3e0` | `geEngine_LoadLibrary` |
| `005bc4b0`, `005bb950` | `Engine_InitDriver`, `geEngine_SetDriverAndMode` |
| `005bb9e0`, `005bc1a0`, `005bc960` | shutdown driver, reset driver, per-frame prep |
| `005bc850`, `005bca50` | `geEngine_BeginFrame`, `geEngine_EndFrame` |
| `005bb660`, `005bb6b0`, `005bb9b0` | fog update, gamma update, activate |
| `005bba60`, `005bbab0`, `005b7cc0` | `geEngine_RenderPoly`, `geEngine_DrawBitmap`, screenshot |
| `005bd000`, `005bd1f0`, `005bd2c0`, `005c1930` | pixel-format setup, finder, `Engine_CreateTHandle`, format callback |
| `005bbe40`, `005bbf30` | create / destroy world lightmap handles |
| `005c1350`, `005c1710`, `005c19b0`, `005c1c20`, `005c1f40`, `005c3390` | bitmap: choose format, create handle, attach, detach, upload, lock info |
| `005d2020` | `Light_SetupLightmap` (the `SetupLightmap` callback) |
| `005b8730`, `005b88d0`, `005b8b40`, `005b90d0`, `005b93b0`, `005ba750`, `005babd0`, `005bb340` | world render and face submitters |
| `005c9290`, `005c9330`, `005c8fa0` | camera project, project + clamp, set ZScale |
| `0055b7d0`, `0055dcc0`, `0055ebc0`, `0055fc90`, `0055f630`, `0055f990`, `00564fd0` | `CAdamEngine` Init, SelectDevice, QueryDrivers, AutoSelectBestDriver, AutoSelectBestMode, FindMode, query callback body |

| Driver (`D3DDrv.dll`) | Role |
|---|---|
| `10005300`, `10005350` | `DriverHook`, `SetLastDrvError` |
| `100042b0`, `100043f0`, `100051f0` | the three enumerators |
| `10005120`, `10001bf0` | `Init`, D3D bring-up (default states) |
| `10007560`, `10007670`, `10007700`, `10007780`, `100077d0` | THandle create, destroy, lock, unlock, get info |
| `10007290`, `10007380`, `10007430`, `100074d0` | 3D / lightmap / 2D handle setup, format check |
| `10006d50`, `10006ef0`, `10006f50`, `10006f60`, `10006fb0`, `10006fd0`, `10007030` | scene functions |
| `10006970`, `10006b20`, `10006ba0`, `10006bf0` | the four draw slots |
| `10005590`, `100057b0`, `10006230`, `10005f80` | world cache insert, flush, render, vertex prep |
| `10005da0`, `10005b40` | misc cache insert, flush |
| `10005880`, `10005980`, `10005a80`, `10006880` | lightmap setup, lightmap RGB conversion, texture setup, mip choice |
| `100036d0`, `10003650`, `10003630`, `100020c0`, `10007040` | fog, set active, update window, reset, extra slot |

---

## 11a. The sky box of a scene (added 2026-11-15)

Read for the port's sky backdrop (`gdriver.js`, flag `skyBackdrop`); evidence and run-time values in `effects-low-end.md` 7.

| What | Where |
|---|---|
| `RenderScene` | `005b88d0`; a mirror's scene calls it again from `005bb0eb` with the depth counter `00722f24` over 0 |
| `SetupSkyForScene`: the six faces of the box clipped to the camera's view | `005ba160` (per face `005ba250`), into `RenderScene`'s local SkyInfo |
| SkyInfo [C] | `+0x10C` polygons; `+0x110 + k*0x78` camera-space vertices (12 bytes); `+0x3E0 + k*0xF0` u, v (0x18 per vertex); `+0x980 + k*4` vertex count; `+0x998 + k*4` face |
| World pass, calls `BeginWorld` first | `005b8b40(camera, frustum, SkyInfo)`, call at `005b8b5e`; at the driver `[esp+0x6AC]` camera, `[esp+0x6B4]` SkyInfo, `[esp+0x6A8]` `005b8964` |
| `RenderSkyThroughFrustum`: per visible sky face, the box clipped to it, slot +0x80 | `005bb340`; flags 2, or 0x12 when the sky's scale is at most 1; colours 255 |
| A face's texture | index `*(*0x6CC41C + 0x18) + 0xF4 + face*4` (-1: none), bitmap `005d40f0`, handle `bitmap + 0xAC` (`00453600`) |
| Camera projection | `005c9330` (clamped to the camera's rectangle `+0x0C..+0x18`), `005c92e0`; chosen in `005d16c0` by `*0x6CC414 & 0x80` |

## 11b. The game's 2D bitmaps on a screen that is not 4:3 (added 2026-11-15)

For the port's flag `hudShape` (`gdriver.js`, `RenderMiscTexturePoly` / `reshape`). Research runs and pictures: `tools/out/halohud/research-hud/`; the check is `tools/hud-check.mjs`.

**Confirmed (code and runs at 640 and 854)**

- `CAdamEngine::DrawBitmap` `005614e0` takes a rectangle as fractions of the screen: size `ftol((right-left) * width)` and `ftol((bottom-top) * height)` at `00561947..00561974`, place `left * width` at `00561cc4`. It sets z = 1 on four vertices and flags 0x1E (flush, no depth test, no depth write, clamp), plus 1 when alpha is not 255 (`00562248`), and calls `geEngine_RenderPoly` `005bba60`, which calls slot +0x80.
- The HUD's icon draw `00454090` multiplies the positions of `Settings/HUDIcon.ini` (x 5..65 and 510..596) by 1/640 (`0064d398`) and 1/480 (`0064d394`). So in a mode of 854 the life icon is at x 12 and 56 wide instead of 9 and 41; y is the same.
- At the driver's thunk: `[esp]` = `005bba8b`, `[esp+20]` = `00562267` (inside `DrawBitmap`), `[esp+316]` = the return address in `DrawBitmap`'s caller. The words are there because the recompiled module stores return addresses (`tools/recomp/build.py`, `debug_ret`); a build made with `--no-ret-store` would not have them, and the driver then warns once and changes nothing.
- In every run (menu, its pages, pause, retry, results, loading, a lesson, both widths; `tools/hud-check.mjs` at four shapes) every quad with flags 0x1E / 0x1F came through `DrawBitmap`: the driver's counter `strangers` stayed 0.
- Text of the menu, loading, results and retry screens is `DrawDecal` (1:1 glyphs) at positions the game computes from the real width; a scene's line of text is `DrawBitmap` from `004ef942`, one quad per letter with a fixed advance of 8, so it does not get wider.
- `GetCursorPos` / `SetCursorPos` are only called from the window code (`005a9fa0`, `005aa270`, `005aa690`).

| Caller (return address) | What | In a mode of width W (s = W / 640) | The port, fixed point P |
|---|---|---|---|
| `00454151` | HUD icons, hearts, numbers, enemy portrait and hearts | s times wider, places times s | 0 when its left edge is under 500, else 640 |
| `00487fe4`, `0048e4db`, `0048ab73` | logo: loading, results, retry | s times wider | 0 |
| `00488037`, `004880ba` | loading: picture, progress bar from x = 170 | s times wider | 320 |
| `0048f94b`, `0048ac21`, `0048acce` | results' row icons; Ja 360..500; Nee 500..640 | s times wider | its own middle |
| `005392ed`, `005393cc` | menu slider's bar 340..467 and knob | s times wider | the bar's middle, for both |
| `0053ada8`, `0053ae03`, `0053ae5e`, `0053aeda`, `0053af35`, `0053af90` | Esc menu's header and footer, three tiles each | span the width; width cut to whole pixels and place not (281 wide, the next at 281.73, at W = 854): an open column | right edge + 1 |
| `0048173e`, `00481778` | a scene's two bars | full width | unchanged |
| `00487f3d`, `0048aacc`, `0048e435` | backgrounds: loading, retry, results | full screen | unchanged |
| `0051a8a1`, `0051cdc4`, `0053ad2e` | fade, the pause's dim, the menu's dim | full screen | unchanged |
| `004ef942` | a scene's line of text | not wider | unchanged |

The port's rule, on the driver's copy of the four corners only: x' = round(P s) + (x / s - P) u, with u the smaller of s and k = height / 480 (1 in this port's modes). Nothing is done when width * 480 = height * 640.

**A mode higher than 4:3** (2026-11-15: 640 wide, 480 to 1706 high, a phone held upright; runs at 640 x 1422 and 640 x 640, `tools/hud-check.mjs` shapes `portrait` and `square`). `DrawBitmap` multiplies y by height / 480 as it does x by width / 640, so there every bitmap was k times higher and no wider. The same rule the other way, y' = round(Q k) + (y / k - Q) u, with the fixed line Q in 480 units; x is not touched there (s = u), as y is not in a wide mode:

| Caller | Q |
|---|---|
| `00454151` HUD | 0 when its upper edge is above 400, else 480 (the enemy's portrait and hearts, y 435), and then lifted by `drv.hudLift` lines: the page's touch controls lie there (the JavaScript port's `hud.js`: y >= 400 at the bottom, `bottomInset`) |
| the three logos | 0 (they are in the top corner) |
| loading picture and bar | 240 |
| results' row icons, Ja, Nee | its own middle |
| menu slider's bar and knob | the middle line of the letters drawn just before the bar (the driver's last `DrawDecal`): the game puts the entry's letters and the bar at different heights there (letters from 111 down and the bar's middle at 121.5 at 480 lines; 252 and 223.7 at 1422) |
| Esc menu's header and footer tiles | 0 for the header, 480 for the footer: they keep their height; their x is the game's own (640 wide) |
| `004ef942` a scene's line of text | its own middle: a letter was k times higher |
| bars, backgrounds, fades, dims | unchanged: they fill the screen (a scene's bars are fractions of the height, so k times as thick) |

**Text in such a mode** (confirmed by runs of `CreateFontA`): the game sizes its own fonts, all Comic Sans MS, by the mode's height, each screen when it is made (`CAdamFont` `004b09f0` called with `ftol(height * factor)`, the height from `CAdamEngine + 0x44`: `00486872` loading, `00489442` retry, `0048c6aa` results, `00527c20` four at the game's start; `004b80dc`, `004efcb0`, `00510c04`, `0051b4d1` also call it and were not read): -12, -24, -49, -23, -30 at 480 lines, -35, -71, -148, -68, -88 at 1422. On a screen 640 wide such letters do not fit ("Opnieuw proberen?" was cut off at both sides). `gdi32.js` `CreateFontA` gives a Comic Sans MS font the size it has at 480 lines when the screen is higher than 4:3. The engine's Verdana (-17 at every size) and its Arial (-13 at a width of 640, -18 at 854: by the width) are not changed. Where the game then puts its text is its own arithmetic with the real height: titles under the top band, the menu's entries from 0.18 of the height down, the results' rows spread over the height (pictures in `tools/out/hud/portrait-*.png`).

**Inferred**

- The game does no hit test with an absolute pointer position on its own screens (the only cursor reads are the window code's relative mouse), so nothing a pointer aims at moved. The page's own buttons are DOM.
- Player's and enemy's heart rows are the same class (`Type=5`); the container's limit of 20 health (`004515c0`) keeps a row's left edges under 465, so no heart is taken for the right group.
- Left for the logos and the old port's threshold of 500 for the HUD are layout choices (`../RCSPOOK_NEW/source/hud.js`), not original behaviour: the original has no such mode.

**Unresolved**

- Callers of `DrawBitmap` no run reached, drawn as the game gives them: `0045391e` (CRcHUD's own overlay bitmap, switched by `+0x69` / `+0x6A`), `0050e428`, `0051bc0b`, others in `0051c8a0`, `0051d580`, `00563506` (function `005630f0`, eight callers). Also not seen: the second bitmap routine `005622c0`, the engine's own `RenderPoly` callers `005cd9f0` / `005ce620`.
- The enemy portrait and hearts (y = 435) and the lock-on mark were not put on screen in a run.
- The mip level is still chosen from the game's wider corners.
- Only world 1's screens were looked at; other worlds' loading pictures and the end of the game were not.

## 11c. Another size of the screen in a running game (added 2026-11-15)

For `source/host/shape.js` (a phone that is turned, a window that is reshaped, a save state continued in another shape). The original never changes its mode while a game runs: its menu is another program.

**Confirmed (runs in the Node runner)**

- Where the mode's size is kept in everything a save state holds: found by running world 1 at 1046 x 1754 and looking for those numbers (as integers, floats, minus one, halves) 40 seconds in. `CAdamEngine` (global `006c8de0`) `+0x40`, `+0x44` (written at `0055b5f0` from the mode, `005c96a0`); its mode record at `+0x118`, `+0x204` / `+0x208`; its cameras at `+0xDC`, `+0xE0`, `+0xE4` (two `CAdamCamera` objects, vtable `0064f828`, made once at `0055b7d0` through `00563e50` and `CAdamCamera::Init` `00555a20`): `+0xAC`, `+0xB0` width and height, `+0x18C` the rectangle (made by `00556150` from width, height and the percentage at `+0x114`), `+0x19C` / `+0x1AC` the rectangle put aside and the flag of a half-screen mode (`00556400`; never seen on), `+0x30` the geCamera, all of whose numbers `geCamera_SetAttributes` `005c9070` writes; the window object (`app + 0x58`) `+0x64`, `+0x68` (the middle the mouse is put back to, `005aa270`) and `+0x78`, `+0x80` (the rectangle the mouse is kept in, `005aa450`). The other places with those numbers (`GInfo` `00722860`, the frustum at `0070f8b0`, `00722f4c`…) are made anew from the camera every frame.
- `geCamera_SetAttributes` keeps the larger of width / Fov and height / Fov as the camera's Scale (`+0x24`; the compare at `005c9139`). Read back: 470.59 at 640 x 480 and at 854 x 480 (Fov 1.36 and 1.8147), 1394.12 at 640 x 1422 with Fov 1.02. So in a mode higher than it is wide Fov = 2 x tan(half the vertical angle) whatever the height.
- `CAdamCamera::Init` puts the camera's own copy of the field of view (`+0xA0`) back to 1.36 after it made the geCamera with the INI's value (the "FieldOfView is ignored" line): the geCamera keeps the INI's value until something calls the camera's setters with another one (`00555f60` from the script interface `004c5ab8`, `004c5d78`; `00556220`, `00556400`), which would then give it the camera's 1.36. No run reached that.
- After `host.shape.request(w, h)` (the numbers above written, each camera's rectangle made by `00556150` and its projection by `005c9070` with the new shape's field of view): engine, mode record, window and both cameras hold exactly what a game started at that size holds, and the old numbers are nowhere in the state's memory (1046 x 1754 to 700 x 1100).
- What the driver hands the renderer afterwards is what a game started at that size hands it: from 640 x 480 to 854 x 480 fifteen seconds of world 1 (893 frames) are the same calls byte for byte; to and from 640 x 1422, and after four changes in a row, the same vertices and decals frame by frame in another order within the misc queue (a game started at 640 x 1422 has made another number of texture handles by then, and that queue is sorted by handle slot).

**Not established**

- The game's memory is not the memory of a game that never changed: a second in another mode leaves other bytes (what was in view differs), as two games at different widths differ anyway.
- A change while the half-screen flag `+0x1AC` is set, and a camera whose field of view a script changed, are written for but were never run.
- The engine's Arial font is sized by the width when it is made and keeps that size after a change.
- Fonts a screen made in one mode keep their size in another; they are the original's size in every mode (11b), so nothing shows.

## 12. Not established

- The exact `Flags` values the two opaque world-face submitters pass (`005ba750`, `005babd0`; the value is in EBX and was not traced). Only the translucent path (`Flags = 3`) is confirmed.
- That the engine's bitmap blitter converts colour-key pixels to alpha 0 when the driver format is 32BIT_ARGB rather than 1555 (basis of recommendation 6.5 entry #1). Inferred from the rating code and the reference source; the blit routines were not traced.
- Whether the X byte written by the engine into 32BIT_XRGB pixels is 0 or 0xFF; compare the colour key on the low 24 bits.
- The argument values of the pixel-format predicate calls inside `005c1350` (decompiler dropped them); their roles are taken from the reference source.
- Fog as used by this game: whether and with which values the game enables engine fog (`FogAllowed`, `CDistanceFogSettings`), and the `ZScale` values it sets (`00555a20`, `00556050`).
- `AutoSelectBestDriver` and `QueryDrivers` were read from decompilation and partial assembly; the manual-selection branch of `SelectDevice` (INI `Driver` / `Mode` names) and `CheckDriverSafety` were not traced.
- Which INI file backs `[Display] SoftwareOnly`, `Quality`, `Mode` (the accessors reference only section and key; `Player1.ini` and `PlayerDef.ini` contain them). `AutoSelectDriver`, `FogAllowed`, `ForceSelectWindowedMode` are in `.\Settings\Computer.ini` (confirmed).
- The official name and intent of slot +0xB4.
- The contents of `GInfo` between +0x30 and +0x87 as written by this engine build (irrelevant to a D3D-style driver).
- The second engine-internal caller of `Light_SetupLightmap` (`005ce2ad` in `005ce190`).
- The comparator and exact ordering of the two flush-time sorts (`10005d30`, `100067c0`) were taken from the reference source; only their call sites were confirmed.
- Runtime behaviour: nothing here was validated by running the game or a driver; all of it is static analysis.
- `SoftDrv.dll` and `GlideDrv.dll` behaviour beyond their table layout and version fields.
