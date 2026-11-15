# RcHcGame.dat — start-up, launch parameters and main loop

Implementation reference for the WebAssembly recompile of `RcHcGame.dat`
(x86, MSVC 6, image base `0x400000`, entry `0x0060DB85`).

Evidence: Ghidra export under `RC_ORIGINAL_DECOMPILED/decompiled/` (`assembly.tsv`,
`functions/*.c`, `calls.tsv`), raw bytes of `originals/*`, the shipped INI files and the
`AdamDebug*.log` files written by the original game on this machine. No original binary
was run. Function names are taken from the game's own trace/assert strings where one
exists; otherwise they are descriptive labels.

Labels used below:

- **CONFIRMED** — read directly from instructions, data or logs at the cited address.
- **INFERRED** — follows from confirmed facts but the path was not read end to end.

Conventions: `this` is in `ECX` (MSVC thiscall, callee pops stack arguments).
`std::string` is the MSVC 6 16-byte layout `{+0 allocator byte, +4 ptr, +8 len, +0xC cap}`
with a 1-byte reference count at `ptr[-1]`; an empty string has `ptr == NULL`.

---

## 0. Corrections to the task premises

1. **The menu does not start the game.** CONFIRMED. `RcHcMenu.dat` has exactly one
   `ShellExecuteA` call site (`0x0056C354`, in `0x0056C2E0`, trace name
   `ExecuteDaviService`). It runs `ShellExecuteA(hwnd, "open", "SERVICE.EXE", "-r<name>", "", SW_SHOW)`
   — the Davi-Service support tool. The game is started by **`RedCat.exe`** with
   `CreateProcessA` (section 2.1).
2. **The game module does not read `QuickPlayLevel` or `QuickPlayDifficultyLevel`.**
   CONFIRMED: neither string occurs anywhere in `RcHcGame.dat`. `ControlType` and
   `Replay` are also absent. Those keys belong to the menu.
3. **There is no `Sleep` and no `ShowCursor` import** in `RcHcGame.dat` (CONFIRMED,
   `imports.tsv`). Every wait in the game is a busy loop that renders frames and/or pumps
   messages. `GetPrivateProfileString*` is not imported either: INI files are read with the
   game's own parser (`CDaviIniFileSystem` / `CDaviIniFile`) and written with
   `WritePrivateProfileStringA` (`0x005AD1A0`, the only caller).

---

## 1. Process start

### 1.1 Call chain (CONFIRMED unless marked)

| # | Address | What | Log line it produces (`AdamDebug*.log`) |
|---|---|---|---|
| 1 | `0x0060DB85` | CRT `entry`: `GetVersion`, heap init, `GetCommandLineA` (`0x0060DBF9`), `GetStartupInfoA`, `GetModuleHandleA(NULL)`, calls WinMain, then `exit(ret)` via `0x0060F1BF` | — |
| 2 | `0x00592260` | **`WinMain(hInstance, hPrev, lpCmdLine, nShow)`**, `RET 0x10`, always returns 0 (`XOR EAX,EAX` at `0x005926F9`) | — |
| 3 | `0x005A1FE0` / `0x005A2010` | reads `[Debug] DebugFileNumber`, adds 1, wraps to 1..5, stores it → selects `AdamDebugNN.log` / `AdamErrorNN.log` | — |
| 4 | `0x005AFDA0` ×3, `0x005AC2E0(".\ADAMWIN.INI")`, `0x005A0700` | install trace sinks, set the default INI file (global string `0x006CAD80`), install the assert handler | — |
| 5 | `0x00592710` → `0x00592820` | start banner | `Start run …`, `This version compiled on Nov 21 2000, 16:19:17 with:` and the 15 flag lines |
| 6 | `0x00592250` | pre-checks: `0x00591FD0` (asserts `[Display] Quality` and `Effects` are 0..3), `0x00564980` → `0x00564A90` ×4 (`CAdamEngine::CheckDriverSafety`, section 2.5). Returns true in every path read | — |
| 7 | `0x004BC480` | `CAdamApplication` singleton accessor/creator. Global instance pointer **`0x006B915C`**, "created" flag `0x006B9160` | — |
| 7a | `0x00491FB0` → `0x00491F50` → `0x004BB0E0` | `new CRCApplication("RedCat")` (0x6A4 bytes); base ctor `CAdamApplication` creates the main-window object (`0x005A78B0`), console (`0x00592A50`), engine singleton (`0x0055B280`, global `0x006C8DE0`) | `<*REDCAT*>Creating CRCApplication`, `*-JS No Active Joystick found` |
| 7b | `0x004BC790` | `CAdamApplication` init: `vtbl[1]` = `0x004920C0` creates the game → `app+0x3A4`; clock speed (`0x00565AE0`); `vtbl[2]` = `0x00492130` creates the input → `app+0x3A8`; `0x0053D320` (mouse/keyboard settings) | `<*REDCAT*>Creating CRCGame`, the seven `…Folder = …` lines (game ctor `0x00521DE0`), `<*REDCAT*>Creating CRCInput` |
| 8 | `0x004C2A00`, `0x004C2B40` | store `lpCmdLine` in `app+0x14` (std::string) and `hInstance` in `app+0x5C` | — |
| 9 | `0x004C2E00` | **`CAdamApplication::ProcessCommandLine()`** (section 2.2) | `CAdamApplication::ProcessCommandLine(): '-game'` |
| 10 | `0x0059240E`–`0x00592434` | if `app+0x34 != 0` and no file name (`app+0x2C == 0`): `0x004C2B50` shows `GetOpenFileNameA` ("Select a .BSP file to view", dir `.\Levels`); cancel → trace `No .BSP file selected: quitting`, skip step 11 | — |
| 11 | `0x004BE330` | **`CAdamApplication::Start()`** (called at `0x0059243C`; thiscall + 1 stack arg, `RET 4`). Contains everything up to and including the main loop (1.2) | see 1.2 |
| 12 | `0x005AF940`, `0x004BC650` | `CAdamApplication::FreeInstance(app)` (deletes the app through `vtbl[0](1)`, clears `0x006B915C`) | `WinMain() after CAdamApplication::FreeInstance()` (trace) |
| 13 | `0x0059B0D0`, `0x005A4480` | waypoint-core statics; `CDaviIniFileSystem::DeleteInstance()` | `WinMain() after CDaviIniFileSystem::DeleteInstance()`, `** WinMain() cleanup finished **` |
| 14 | `0x005925F1` | WinMain epilogue: if an exception text was captured, `MessageBoxA(NULL, "Er is een onverwachte fout opgetreden in Redcat Spookkasteel…", "", MB_ICONHAND)`; then `0x00592990` logs `End run %s`; returns 0 | — |

WinMain wraps steps 3–13 in `try`; catch blocks at `0x00592511` (`CDaviException`),
`0x0059255C` (`std::exception`), `0x005925B4` (`...`) store a text for step 14.

Observation: none of the five `AdamDebug*.log` files on this machine contains the step
12–14 lines. Whether they are filtered by a trace setting or the runs under Wine did not
end through this path was not determined.

### 1.2 `CAdamApplication::Start()` — `0x004BE330` (CONFIRMED)

```
assert(!app->m_FlagStarted /*+0x44*/); app->+0x44 = 1
0x004C0D20(app)            register the debug key commands (list at app+0x4C..+0x50, 0x40 bytes each)
0x004BE1E0(app)            create the main window (section 3)
                           log: "OnActivateApplication() : active 1" (WM_ACTIVATEAPP during ShowWindow)
if (!0x004BE990()) return  CheckCD (section 5, item N1)
if (GetAsyncKeyState(VK_SHIFT) & 0x8000)   // 0x004BE3FB
    byte 0x006A2400 = 0    "SHIFT pressed, disable AutoSelectDriver"
try {
  0x004BDE80(app,&failed)  engine init: CAdamEngine::Init 0x0055B7D0 → SelectDevice 0x0055DCC0
                           (may show the driver dialog, item N2); if failed → skip to cleanup
  0x00527C20(game)         game init; creates the 8 game states
                           log: 8 × "CAdamGame::DoCreateGameState() creates type class …"
  0x005AAB50(window, input->+0x3C)
  0x00592E70(console,"Loading...")
  0x004BCB70(app)          InitializeLevelStructure (section 2.4): builds the level tree,
                           log: N × "CAdamGame::CreateSubLevelSettings() …";
                           then SetCurrentState(GS_LOADING) (0x004BDC5D), HandleCurrentState
                           (0x004BDC68) and the sublevel load 0x004F6000
                           log: "CAdamSubLevel::CreateWorldFromFile('.\.\Levels\lvl00a.bsp')" …
                           The loading screen is rendered from inside this call (item N4).
  0x004C3640(app)          InitializeMultimediaFiles (sounds; also refreshes the loading screen)
  0x0052E870(game)         RunIntro: SetCurrentState(GS_INTRO) + wait loop (item N6)
  0x0052AB20(game, 3)      SetCurrentState(GS_GAME); this already runs the first game frame
  0x005AA690(window)       SetCursorPos(window centre), clear accumulated mouse delta
  0x004BFD60(app)          *** MAIN LOOP *** (section 4), call site 0x004BE66C
}
catch (CAdamQuitException)  0x004BE676: "Caught CAdamQuitException"; normalEnd = false
catch (CDaviException)      0x004BE68D: error = true
catch (std::exception)      0x004BE6DA: error = true
catch (...)                 0x004BE734: error = true
// 0x004BE7BA, common tail
if (engine->+0x100) 0x005BB9E0(engine->+0x100)       Genesis: release the driver (FreeLibrary)
if (!error && normalEnd) 0x004BC090(app)             orderly shutdown (section 4.5)
else { app->+0x45 = 1; if (error) MessageBoxA(hwnd,
        "Er is een onverwachte fout opgetreden in %s. …", "", MB_ICONHAND); }   // 0x004BE8F4
```

Game-state numbers (CONFIRMED, creation calls in `0x00527C20` and the
`SetCurrentState( GS_… )` trace strings):

| Id | Name | Class | vtable | `DoHandle` (slot 1) |
|---|---|---|---|---|
| 0 | GS_NONE | `CAdamGameState_GS_NONE` | `0x64F58C` | `0x00581170` |
| 1 | GS_LOADING | `CRcGStateLOADING` | `0x64E448` | `0x0051C160` → `0x0051BC20` |
| 2 | GS_INTRO | `CRcGStateINTRO` | `0x64E404` | `0x004850C0` |
| 3 | GS_GAME | `CRcGStateGAME` | `0x64E3DC` | `0x00484030` |
| 4 | GS_RESULTS | `CRcGStateRESULTS` | `0x64E520` | `0x004915D0` |
| 5 | GS_MENU | `CRcGStateMENU` | `0x64E484` | `0x00488270` → `0x0051C510` |
| 6 | GS_PAUSE | `CAdamGameState_GS_PAUSE` | `0x64F630` | `0x0051C8A0` |
| 7 | GS_RESTART | `CRcGStateRESTART` | `0x64E4C4` | `0x0051D680` |

The order of the `DoCreateGameState` log lines (NONE, GAME, LOADING, INTRO, RESULTS, PAUSE,
RESTART, MENU) is creation order, not the numbering.

Game-state vtable (CONFIRMED from the callers):
slot 0 dtor · 1 `DoHandle(bool first)` · 2 `OnEnter` · 3 `OnLeave` · 4 `DoFade`
(`0x0051A440`) · 5 `CanFade` (true for GAME, LOADING, RESULTS; false otherwise) ·
6 `IsFinished` · 7 render · 8 pre-render update.

### 1.3 Object pointers

| Object | Where | Notes |
|---|---|---|
| application (`CRCApplication`) | global `0x006B915C`; or call `0x004BC480` (cdecl, returns it) | vtable `0x64E574` |
| game (`CRCGame`) | `*(app + 0x3A4)` | vtable `0x64E594` |
| input (`CRcInput`) | `*(app + 0x3A8)` | vtable `0x64E388` |
| engine (`CAdamEngine`) | `*(app + 0x3A0)`, global `0x006C8DE0`, accessor `0x0055B280` | Genesis `geEngine*` at `engine+0x100` |
| main window (`CDaviMainWindow`) | `*(app + 0x58)`; wndproc uses global `0x006CAD58` | `HWND` at `window+0x54` |
| game clock (`CAdamClock`) | static object at `0x006B9950` | section 4.3 |

Application fields used below (CONFIRMED, ctor `0x004BB0E0`): `+0x14` command line
(string) · `+0x24` level file name (string, length at `+0x2C`) · `+0x34` "ad-hoc" flag
(init 1) · `+0x38` gamma (float) · `+0x3C` update-enabled flag (init 1) · `+0x3E`
**quit flag** · `+0x44` started · `+0x45` shut down · `+0x60` name string ("RedCat") ·
`+0x80/+0x84` window width/height · `+0x88` console object · `+0x39C` console allowed.

Game fields: `+0x68` pending command (string, length at `+0x70`) · `+0x8C` state object
array · `+0x98` current state · `+0x9C` next state · `+0xA0` previous state · `+0xA4`
restart-requested flag.

---

## 2. Launch parameters

### 2.1 `RedCat.exe` — the launcher (CONFIRMED)

`WinMain` = `0x00401250`.

```
if (hPrevInstance != 0) return 0
RegisterClassExA(class "MOTOR"); CreateWindowExA(WS_EX_APPWINDOW, "MOTOR", "", WS_POPUP,
                                                0, 0, SM_CXSCREEN, SM_CYSCREEN)   // black backdrop
arg = "/FirstTime"
loop:
    pump all messages (PeekMessageA, PM_REMOVE); WM_QUIT → return wParam
    code = Run("rchcmenu.dat", arg)                 // 0x00401130
    if (code == 40) { Run("rchcgame.dat", "-game"); arg = "/Default"; continue }
    if (code == 42) { Run("rchcmenu.dat", ""); continue }
    SendMessageA(hwnd, WM_CLOSE, 0, 0); keep pumping until WM_QUIT
```

`Run(file, arg)` (`0x00401130`) is `_spawnv(P_WAIT, file, {file, arg, NULL})`
(`0x00405171` → `0x00405439`): `CreateProcessA(lpApplicationName = file, lpCommandLine =
"file arg", NULL, NULL, TRUE, 0, env, lpCurrentDirectory = NULL, …)` at `0x00405596`, then
`WaitForSingleObject(INFINITE)` and `GetExitCodeProcess`. **The process exit code is
discarded.** The value `Run` returns is `0x004010C0()` =
`GetPrivateProfileIntA("General", "ExitCode", 0, "<cwd>\.\Settings\Menu.ini")`; 0 shows the
message box "No value specified for menu exit!".

So:

- game command line: **`rchcgame.dat -game`** (the game sees `lpCmdLine = "-game"`);
- working directory: inherited from `RedCat.exe` (the install folder); all game paths are
  relative (`.\Settings\…`, `.\ADAMWIN.INI`, `.\Levels`);
- the menu tells the launcher what to do through `Settings\Menu.ini [GENERAL] EXITCODE`
  (40 = start the game, 42 = restart the menu, anything else = quit);
- the game tells the menu what happened only through the INI files (section 6); after the
  game the menu is started again with `/Default`.

### 2.2 What the menu writes before it exits with code 40 (CONFIRMED)

`RcHcMenu.dat` `0x00567344` calls:

- `0x005665B4` → `Settings\Player%d.ini [General]`: `PlayerName`, `DifficultyLevel`,
  `ControlType`, `GameType`, `QuickPlayLevel`, `QuickPlayDifficultyLevel`.
- `0x00566FE8` → `Settings\game.ini [Run]`:

| Key | Value written |
|---|---|
| `PlayerNumber` | player index + 1 |
| `StartLevelNumber` | 1 |
| `StartSubLevelNumber` | world index + 1. Quick play (menu global `+0x100 == 1`): from the quick-play selection; otherwise from the player's adventure progress |
| `StartSubSubLevelNumber` | 1 |
| `Replay` | 0 |
| `IsLowEndPC` | (value not traced) |

`0x005517F4` writes `Menu.ini [GENERAL] CURRENTPLAYER`, `PREVSTATE`, `HAUNTED`, `EXITCODE`.
`0x0056DEC4` parses the menu's own `/FIRSTTIME` and `/DEFAULT` switches.

### 2.3 `CAdamApplication::ProcessCommandLine()` — `0x004C2E00` (CONFIRMED)

Tokens come from `app+0x14` (tokeniser `0x005B09F0`). A switch starts with `-` or `/`;
names are compared case-insensitively (`_strcmpi`).

| Switch | Effect | Address |
|---|---|---|
| `-game` | `app+0x34 = 0`: normal game mode, no BSP file dialog | `0x004C3321` |
| `-map <name>` | `app+0x24 = "Levels\" + name + ".bsp"` (ad-hoc level) | `0x004C3109`–`0x004C3213` |
| `-file <path>` | `app+0x24 = path` exactly as given (ad-hoc level) | `0x004C3244`–`0x004C32F8` |
| `-gamma <number>` | `sscanf("%f")` → `app+0x38`; error text if not a number | `0x004C334C`–`0x004C33BE` |
| `-?`, `-h` | print the usage text to the trace | `0x004C3447`–`0x004C3489` |
| other `-x` / `/x` | ignored silently | `0x004C3481` |
| token without `-` or `/` | error "Unknown argument '%s'." + usage; start-up continues | `0x004C2FAF` |

There is no switch for player, level or difficulty. Those come from INI files only.

With an empty command line (`AdamDebug03.log`: `ProcessCommandLine(): ''`) `app+0x34`
stays 1 and WinMain opens the `GetOpenFileNameA` dialog (step 10).

### 2.4 INI files and keys read at start

Setting objects are `CDaviSetting` (ctors `0x005AC8B0` float, `0x005AC9D0` int,
`0x005ACAF0` / `0x005ACBC0` string; `CDaviFloatSetting` `0x005A3D10`), arguments
`(key, section, default, iniFile, …)`. An empty `iniFile` means the default file
`.\ADAMWIN.INI`. File-name helpers: `0x0043B0A0` → `sprintf(".\Settings\Player%d.ini",
PlayerNumber)` (`0x0043B0D0`), `0x00436F90` → `.\Settings\GAME.INI`, `0x005596B0` →
`.\Settings\Startup.INI`. `0x004337E0` = get integer value.

**Which player / which world** (all CONFIRMED):

| File | Section / key | Default | Read at | Effect |
|---|---|---|---|---|
| `Settings\GAME.INI` | `[Run] PlayerNumber` | 1 | `0x005356A0` (cached in `0x0069F650`; must be 1..10) | selects `Settings\Player<N>.ini` for every per-player setting |
| `Settings\GAME.INI` | `[General] NrLevels` | n/t | `0x004BCB70` | level count |
| `Settings\GAME.INI` | `[Level<L>] NrSubLevels` | n/t | `0x004BCB70` | sublevels of level L |
| `Settings\GAME.INI` | `[SubLevel<L>_<S>] NrSubSubLevels`, `LevelFileName` | n/t | `0x004BCB70` | BSP file of each sublevel (shipped: `lvl00a.bsp` … `lvl04a.bsp` for `SubLevel1_1` … `1_5`) |
| `Settings\GAME.INI` | `[Run] StartLevelNumber`, `StartSubLevelNumber`, `StartSubSubLevelNumber` | n/t | `0x004BCB70` (`0x004BCE98`–`0x004BD03C`) | **the sublevel whose three indices match becomes the start sublevel** |
| `Settings\GAME.INI` | `[<sublevel>] ClockSpeed` | n/t | `0x004BCB70` (`0x004BDA58`) | game clock speed for that sublevel |
| `Settings\GAME.INI` | `[Run] IsLowEndPC` | n/t | `0x004BB0E0` | low-end switches |
| `Settings\Player<N>.ini` | `[General] GameType` | n/t | `0x004BCB70` (`0x004BD65A`–`0x004BD786`) | `== 1` sets `level+0x1DC`: **quit after the results screen of the first finished sublevel** (quick play). Any other value: continue with the next sublevel (adventure) |
| `Settings\Player<N>.ini` | `[General] DifficultyLevel` | 1 | game ctor `0x00521DE0` (`0x00523335`) | difficulty; selects the `*Easy/*Normal/*Hard.ini` data files (0/1/2 — INFERRED from the shipped file names and the "unknown difficulty level" asserts at `0x00425570`, `0x0044B5D0`) |
| `Settings\Player<N>.ini` | `[General] Console` | n/t | `0x004BC790` | console allowed (`app+0x39C`) unless `[Debug] DebugSecretCommands` is set |

n/t = default value not traced.

`[Level<L>] CurrentSubLevel` in the player file is **not** used to choose the start
sublevel; the game only writes it (section 6). CONFIRMED: the start sublevel is chosen by
the three `[Run]` indices at `0x004BD519`–`0x004BD650`.

With `-map` / `-file` (file name present in `app+0x24`) `0x0052B6F0` creates an "ad-hoc
level / ad-hoc sublevel" for that BSP instead (INFERRED from the call at `0x004BD873` and
the section names `[ad-hoc level]`, `[ad-hoc sublevel]`).

**Display / driver** (CONFIRMED):

| File | Section / key | Default | Accessor | Effect |
|---|---|---|---|---|
| `Player<N>.ini` | `[Display] SoftwareOnly` | 0 | `0x00556E90` | "Disable all hardware" drivers in `CAdamEngine::Init` |
| `Player<N>.ini` | `[Display] Quality` | 3 | `0x00557760` | 0..3 (asserted); driver preference in auto-selection (D3D-RGB vs D3D-LM) |
| `Player<N>.ini` | `[Display] Effects` | 3 | `0x00557970` | 0..3 (asserted); e.g. mirrors ("RenderMirrors set to %d (Effects setting …)") |
| `Player<N>.ini` | `[Display] Mode` | 2 | `0x00557DC0` | 0..2 (asserted at `0x0055E456`–`0x0055E486`); display-mode class for auto-selection |
| `Player<N>.ini` | `[Display] Gamma` | — | `0x004BB0E0` (`0x004BBB03`) | `app+0x38`, unless `-gamma` is given |
| `Computer.ini` | `[Display] AutoSelectDriver` | 1 | `0x00557B80` | 0 → manual driver dialog (item N2) |
| `Computer.ini` | `[Display] ForceSelectWindowedMode` | 0 | `0x00558270` | pick a windowed driver |
| `Computer.ini` | `[Display] FogAllowed` | 1 | `0x00557FD0` | fog |
| `Computer.ini` | `[Display] Message` | "" | `0x005570A0` | text shown after a driver was disabled |
| `AdamWin.Ini` | `[Engine] Driver`, `Mode` | "" | `0x0055DCC0` | last driver / mode name (strings such as `(D3D)DirectDraw HAL`, `640x480`) |
| `AdamWin.Ini` | `[Windowed Mode] Width`, `Height` | n/t | `0x004BB0E0` | window size passed to `CreateWindowExA` (shipped 400×300) |
| `AdamWin.Ini` | `[Engine] ClipMouseCursorNonWindowedMode` (0), `ClipMouseCursorWindowedMode` (1) | | `0x0055B7D0` | `ClipCursor` on activation |
| `AdamWin.Ini` (section INFERRED) | `[Engine] UseDirectInput`, `UseBackGroundBitmap`, `Gamma`, `MusicVolume`, `EffectsVolume` | n/t | `0x00559E10` | DirectInput on/off (`window+0x89`, INFERRED), misc. |
| `AdamWin.Ini` | `[GS_GAME]`, `[GS_LOADING]`, `[GS_INTRO]`, `[GS_RESULTS]` `FadeInTime`, `FadeOutTime` | n/t | `0x00483BF0`, `0x004851A0`, `0x0048AE00`, `0x0051AFC0` | state fade durations (shipped: all 0) |
| `AdamWin.Ini` | `[Application] ClockSpeed` (1), `GeneralWorldScale`, `Console`, `RenderAIInfo`, `RenderBoundingBoxes`, `LastFileNameUsed` | | `0x004BB0E0` | |
| `AdamWin.Ini` | `[Debug] Debug…` (all 0 except `DebugDriver` 1) | | `0x00515930` … `0x00519CB0` | trace switches; `DebugUseConsole`, `DebugSecretCommands` change behaviour |

Mode names known to the engine (`0x006A2608`…): 1280x1024, 1152x864, 1024x768, 800x600,
720x576, 720x480, 640x480, 640x400, 512x384, 400x300, 320x240, 320x200. Which names the
values 0/1/2 of `[Display] Mode` map to was not traced; the real `D3DDrv.Log` shows
640×480×16 full screen with `Mode=2`.

**Sound and input** (CONFIRMED):

| File | Section / key | Default | Read at |
|---|---|---|---|
| `Player<N>.ini` | `[Sound] MusicVolume`, `SoundVolume` (0..100) | 80 | `0x00527C20` |
| `Player<N>.ini` | `[Mouse] Sensitivity` (0..100) | 50 | `0x0053D320` |
| `Player<N>.ini` (INFERRED file: same function, file name built once) | `[Mouse] Inverse` (0), `Look` (1), `Allowed` (1); `[Keyboard] AlwaysRun` (1), `XLookSensitivity`, `YLookSensitivity` (12.5) | | `0x0053D320` |
| `Player<N>.ini` | `[KeyBinds] <Action>=<Key>[+<Key>][,…]` | — | input class (not traced); action and key names come from `GAME.INI [InputActions]`, `[InputKeys]` |
| `Computer.ini` | `[Sound] Allowed` (1), `UseLowQuality` (0), `AutoSelectLowQualityMemoryTresholdMB` (40), `Message` | | `0x005572E0`, `0x005586F0`, `0x00558930`, `0x00557520` |
| `Computer.ini` | `[3DSound] Allowed` (1), `MinDistanceMeters` (5), `MaxDistanceFactor` | | `0x0054C500` |
| `AdamWin.Ini` | `[Engine] MasterVolume`, `SoundVolume`, `MusicVolume` (0..1) | 1.0 | `0x0054C500` |
| `GAME.INI` | `[General] Language` | n/t | `0x00527C20` (NL/EN/DE/FR/ES/IT) |
| `Computer.ini` | `[Install] Minimal` (0), `CDROM` , `TestFileName` (`?:\data\redcat.exe`) | | `0x00559230`, `0x00558FF0`, `0x00559470` — CD check, item N1 |

### 2.5 `Settings\Startup.INI` — crash guard (CONFIRMED functions, INFERRED semantics)

Sections `GlideDriver`, `SoftwareDriver`, `D3DDriver`, `D3DRGBDriver`, `Sound`, each with
`Allowed` and `ResultLastRun`; plus `[Status] LastSectionEntered` and `[Legend]`
(`SR_CRASH=0`, `SR_FAILURE=1`, `SR_SUCCESS=2`, `SR_UNKNOWN=3`).
`CDaviCriticalSection` enter `0x005A0D70` ("Entering critical section '%s'") and leave
`0x005A10D0` ("Leaving critical section '%s', result '%s'") bracket driver initialisation
(`0x00564FD0`) and sound initialisation (`0x0054D230`).
`CAdamEngine::CheckDriverSafety` (`0x00564A90`, called for 4 drivers at start) calls
`SetAllowed(section, 0)` (`0x005A0FC0`) when the previous run did not leave the section
cleanly. Consequence for the port: if a run is aborted between enter and leave, the next
start disables that driver or the sound. Write `Allowed=1`, `ResultLastRun=2` for the
sections the port uses before each boot.

### 2.6 Recipe: boot straight into world W (1..5) for player P (1..10)

Command line: `-game`. Working directory: the folder that contains `Settings\`,
`Levels\`, `ADAMWIN.INI`.

```
Settings\Game.ini      [Run]      PlayerNumber=P
                                  StartLevelNumber=1
                                  StartSubLevelNumber=W
                                  StartSubSubLevelNumber=1
Settings\PlayerP.ini   [General]  GameType=1          ; 1 = quit after this world, 0 = adventure (continue)
                                  DifficultyLevel=D   ; 0, 1 or 2
                       [Display]  SoftwareOnly, Quality (0..3), Effects (0..3), Mode (0..2), Gamma
                       [Sound]    MusicVolume, SoundVolume (0..100)
                       [KeyBinds] …
Settings\Computer.ini  [Display]  AutoSelectDriver=1  ; avoids the driver dialog
                                  ForceSelectWindowedMode=0
                       [Install]  Minimal=0           ; skips the CD check
                       [Sound]    Allowed=1
Settings\Startup.INI   each driver/sound section: Allowed=1, ResultLastRun=2
ADAMWIN.INI            [GS_*] FadeInTime/FadeOutTime, [Windowed Mode] Width/Height, [Debug] … = 0
```

`PlayerP.ini` must exist with the per-level and per-sublevel sections the menu creates
from `PlayerDef.ini`; how much player state (health, score, skills) the game restores from
`[Player]` / `[SubLevel…]` at start was not traced (see "Not established").

---

## 3. Window and message handling

### 3.1 Creation (CONFIRMED)

`CAdamApplication` window creation = `0x004BE1E0` (called from `Start`):

```
window->+0x58 = 1
window->SetActivateCallback(0x004BE130)                    // 0x005A80C0, stored at window+0x60
window->Create(hInstance, &app->+0x60 /*"RedCat"*/, app->+0x80, app->+0x84, 0)   // 0x005A7D30
```

`CDaviMainWindow::Create` = `0x005A7D30` (`DaviMainWindow.cpp`):

| Call | Site | Arguments |
|---|---|---|
| `RegisterClassA` | `0x005A7DDC` | `WNDCLASSA` at `window+0x2C`: `style = 3` (CS_HREDRAW\|CS_VREDRAW), `lpfnWndProc = 0x005A8180`, `cbClsExtra = cbWndExtra = 0`, `hInstance`, `hIcon = LoadIconA(NULL, IDI_APPLICATION)`, `hCursor = LoadCursorA(hInstance, 0x7F00)`, `hbrBackground = GetStockObject(BLACK_BRUSH)`, `lpszMenuName = NULL`, `lpszClassName = "RedCat"` |
| `CreateWindowExA` | `0x005A7F4E` | `(0, "RedCat", "RedCat", dwStyle = 0, x = 0, y = 0, width, height, NULL, NULL, hInstance, NULL)`; `HWND` → `window+0x54` |
| `0x005A7B30(width, height, windowed = 0)` | `0x005A808F` | style/size fix-up, then `ShowWindow(SW_SHOWNORMAL)`, `UpdateWindow`, `SetFocus` (`0x005A7CC5`–`0x005A7CD9`) |

`0x005A7B30` (`windowed == 0`): `GWL_STYLE |= WS_POPUP`, then `&= ~0x80CB0000`;
`GWL_EXSTYLE |= WS_EX_APPWINDOW`; `SetWindowPos(hwnd, 0, 0, 0, SM_CXSCREEN, SM_CYSCREEN, 0x104)`.
(`windowed != 0`): `GWL_STYLE |= WS_CAPTION`, `&= ~0x800B0000`; `GWL_EXSTYLE |= 0x300`;
`AdjustWindowRect`, centred on the desktop. `0x005A7D00` switches to the windowed layout
later if the engine selects a windowed driver.

The requested size is `[Windowed Mode] Width × Height` (shipped 400×300); in full-screen
layout the window is immediately resized to the screen.

### 3.2 Window procedure — `0x005A8180` (CONFIRMED)

Not inside a Ghidra function (see `instructions_outside_functions.tsv`); `0x005A8180`–`0x005A8A8F`,
`RET 0x10`. Jump tables at `0x005A8A94` / `0x005A8AB4` (messages 2..0x20) and `0x005A8AD4`
(0x201..0x208). The window object is taken from global `0x006CAD58`.

| Message | Handler | Action | Result |
|---|---|---|---|
| `WM_DESTROY` (0x02) | `0x005A87E4` | trace only. No `PostQuitMessage` (not imported) | returns 0 |
| `WM_ACTIVATE` (0x06) | `0x005A8284` | `byte 0x006CAD54 = (LOWORD(wParam) != 0)`. Only if DirectInput is enabled (`window+0x89`): first activation → `InitInputDevices` `0x005A7310(hInstance, hwnd, 0x006CAC38, 0x006CAC20, 0)` (result in `window+0x5B`); later activations → reacquire `0x005A7040`; deactivation → unacquire `0x005A7080` | `DefWindowProcA` |
| `WM_PAINT` (0x0F) | `0x005A821B` | `if (GetUpdateRect(hwnd,&rc,FALSE)) { BeginPaint; EndPaint; }` | returns 0 |
| `WM_CLOSE` (0x10) | `0x005A86DE` | `app->SetQuit(true)` (`0x004C4440`, call at `0x005A87C8`). The window is not destroyed here | returns 0 |
| `WM_QUIT` (0x12) | `0x005A8626` | trace only (a real `WM_QUIT` is handled in `ProcessMessages`) | `DefWindowProcA` |
| `WM_ACTIVATEAPP` (0x1C) | `0x005A8558` | `active = (wParam != 0)`; `0x005A80E0(active)`: `window+0x59 = active` and, when it changed, the callback `0x004BE130` (logs `OnActivateApplication() : active %d`, calls Genesis `0x005BB9B0(geEngine, active)` if the engine exists); `window+0x74 = active`; `0x005AA450(active)` cursor clip | `DefWindowProcA` |
| `WM_SETCURSOR` (0x20) | `0x005A8602` | `if (window+0x5C) SetCursor(NULL)` | `DefWindowProcA` |
| `WM_MOUSEMOVE` (0x200) | `0x005A8956` | if `window+0x59` and `window+0x58`: `0x005A9FA0` (`GetCursorPos`, accumulate the delta from the window centre into `window+0x6C/+0x70`, `SetCursorPos` back to the centre `window+0x64/+0x68`) | `DefWindowProcA` |
| `WM_LBUTTONDOWN` / `UP` (0x201/0x202) | `0x005A89B9` / `0x005A89EA` | `window+0x14 = 1 / 0` | `DefWindowProcA` |
| `WM_RBUTTONDOWN` / `UP` (0x204/0x205) | `0x005A8A35` / `0x005A8A44` | `window+0x16 = 1 / 0` | `DefWindowProcA` |
| `WM_MBUTTONDOWN` / `UP` (0x207/0x208) | `0x005A8A17` / `0x005A8A26` | `window+0x15 = 1 / 0` | `DefWindowProcA` |
| everything else (incl. `WM_KEYDOWN`, `WM_CHAR`, `WM_SYSCOMMAND`, `WM_SIZE`) | `0x005A8A51` | none | `DefWindowProcA` |

Keyboard state is not taken from window messages. `0x005A9BB0` (key-down test used by the
input class) calls `GetAsyncKeyState(vk)` (`0x005A9C18`) when DirectInput is off
(`window+0x5B == 0`), otherwise the DirectInput buffer. `WM_KEYDOWN` / `WM_CHAR` are only
looked at in `ProcessMessages` (4.2) for the console and the debug key commands.

**`window+0x59` (application active) gates the whole game.** It is set only by
`WM_ACTIVATEAPP`. A host that never delivers `WM_ACTIVATEAPP(wParam = 1)` to `0x005A8180`
gets a main loop that pumps messages and never renders.

### 3.3 Cursor (CONFIRMED)

- `ClipCursor`: only in `0x005AA450` (sites `0x005AA5C2` clip, `0x005AA676` release),
  called on `WM_ACTIVATEAPP` and from `0x005A8100`. Clipping is enabled per driver type by
  `[Engine] ClipMouseCursorNonWindowedMode` / `ClipMouseCursorWindowedMode`.
- `SetCursorPos`: `0x005A9FA0` (re-centre on every `WM_MOUSEMOVE`), `0x005AA270`,
  `0x005AA690` (clear mouse movement; called just before the main loop).
- `SetCursor(NULL)` on `WM_SETCURSOR`. `ShowCursor` is not imported.

---

## 4. Main loop

### 4.1 The loop function — `0x004BFD60` (CONFIRMED, `AdamApplication.cpp` line 0x326)

thiscall on the application, no arguments; called once from `Start` (`0x004BE66C`).

```
void CAdamApplication::MainLoop()                               // 0x004BFD60
{
    std::string text;                                          // stack local [ESP+0x24]; ctor 0x004040A0(0)
    if ([Debug] DebugUseConsole) …toggle console to match [Application] Console…   // 0x004BFDBA–0x004BFE1F

    while (!this->m_Quit /* +0x3E */) {                         // 0x004BFE24 / 0x004C008F
        this->ProcessMessages(true, &text);                     // 0x004BEF70, call 0x004BFE38
        if (this->m_Quit) break;                                // 0x004BFE3D
        this->HandleKeyCommands(NULL, &text);                   // 0x004C0170, call 0x004BFE51
        if (m_MainWindow->m_Active /* window+0x59 */) {         // 0x004BFE56
            CAdamGame* g = m_Game;                              // app+0x3A4
            int s = g->m_CurrentState;                          // g+0x98, asserted 0..7
            text = g->m_States[s]->m_Name;                      // state+0x2C; 0x004BFFAF
            g->HandleCurrentState();                            // 0x0052AF50, call 0x004BFFBA  <-- the frame
            if (g->m_Command.length() /* g+0x70 */ != 0) {      // 0x004BFFC5
                g->vtbl[7](&g->m_Command);                      // CRCGame::ChangeToSubLevel 0x00496D60
                g->m_Command = "";                              // g+0x68; 0x004C0051
            }
        }
        // application inactive: nothing else. No Sleep, no WaitMessage: the loop spins.
    }
    sprintf(buf, "%d", console.IsActive());                     // 0x004C009A
    m_SettingConsole /* app+0x5C8 */ .SetValue(buf);            // 0x005ACDB0
}                                                               // text destroyed
```

There is no frame limiter and no `Sleep` anywhere in the module. One iteration is one
message-pump pass plus (when active) one `HandleCurrentState`.

### 4.2 `ProcessMessages(bool a_HandleInput, std::string* a_Text)` — `0x004BEF70` (CONFIRMED)

thiscall, `RET 8`. `a_HandleInput` is true only for the call in the main loop; every nested
caller passes false.

```
do {
    m_MainWindow->PollInputDevices();                           // 0x005AACA0 (DirectInput only)
    keyPending = mousePending = false;
    if (m_Input->vtbl[17]()) {            // 0x00483640, action "Quit"
        SetQuit(true); *a_Text = "Quitting..."; break;          // 0x004BF7B0
    }
    if (a_HandleInput) {
        if      (m_Input->vtbl[15](-1)) { flushKeys(); m_Game->vtbl[8]();  }   // action "Menu"  → CAdamGame::DisplayMenu 0x0052EC30
        else if (m_Input->vtbl[16](-1)) { flushKeys(); m_Game->vtbl[9]();  }   // action "Pause" → CAdamGame::Pause       0x00534D00
        else if (m_Game->+0xA4)         { flushKeys(); m_Game->vtbl[10](); }   // restart request → CAdamGame::Restart    0x005351E0 (via thunk 0x00496D50)
        else if (app->+0x39C && m_Input->vtbl[14]()) { flushKeys(); ToggleConsole(a_Text); }   // "ToggleConsole", 0x004C97E0
        else if (m_Input->vtbl[11]()) …render-rect + 1, max 100…     // "SizeUp",   0x004BF2AF
        else if (m_Input->vtbl[12]()) …render-rect − 1…              // "SizeDown", 0x004BF452
    }
    if (!m_MainWindow->PumpOne(&msg)) break;                    // 0x005A9C30, call 0x004BF5B8
    if (msg.message == WM_QUIT) SetQuit(true);                  // 0x004BF62B
    else if ((msg.message == WM_KEYDOWN || msg.message == WM_CHAR) && a_HandleInput) {
        if (console.IsActive()) console.OnKey(&msg);            // 0x00594470
        else HandleKeyCommands(&msg, a_Text);                   // 0x004C0170
    }
    if (!window->+0x89 /* no DirectInput */) {
        keyPending   = PeekMessageA(&msg, hwnd, 0x100, 0x108, PM_NOREMOVE);   // 0x004BF6AB
        mousePending = PeekMessageA(&msg, hwnd, 0x200, 0x209, PM_NOREMOVE);   // 0x004BF6CE
    }
    if (m_Quit) goto quit;
} while (keyPending || mousePending);
if (m_Quit) {
quit:
    if (!a_HandleInput) throw CAdamQuitException("CAdamQuitException");   // 0x004BF83D–0x004BF8B5, _CxxThrowException 0x0060B40F
}
```

- `flushKeys()` = `0x004C4380`: one `PeekMessageA(&msg, hwnd, WM_KEYDOWN, 0x108, PM_REMOVE)`.
- `PumpOne` = `0x005A9C30`: `PeekMessageA(msg, hwnd, 0, 0, PM_REMOVE)`; if a message was
  taken: `if (!TranslateMessage(msg)) DispatchMessageA(msg)`; returns 1. Otherwise zeroes
  the `MSG` and returns 0. Note the filter is the game window handle: thread messages
  (`hwnd == NULL`) are never retrieved.
- At most one message is removed per pass; the loop repeats only while key or mouse
  messages are still queued.
- `HandleKeyCommands` = `0x004C0170`: walks the debug key table (`app+0x4C`); with a
  `WM_CHAR` it matches `wParam`, with `NULL` it polls held keys through `0x005A9BB0` with a
  100 ms repeat (`timeGetTime`, `0x004C0767`, `0x004C0932`). Not a loop over time.
- `SetQuit` = `0x004C4440(bool)`: stores `app+0x3E`.

**`CAdamQuitException` is the normal way out of every nested loop** when the window is
closed or "Quit" is pressed. It is caught in `Start` at `0x004BE676`. The recompiled module
therefore needs working MSVC C++ exception unwinding.

### 4.3 The frame

```
CAdamGame::HandleCurrentState()                                 // 0x0052AF50
    if (m_NextState /*+0x9C*/ != m_CurrentState /*+0x98*/) {    // normally already done inside SetCurrentState
        FadeOutCurrentState();                                  // 0x0052C270  (wait loop, item N7)
        m_States[cur]->Leave();                                 // 0x0051ADC0 → vtbl[3]
        m_PrevState = cur; m_CurrentState = m_NextState;        // 0x0052B271
        m_States[new]->Enter();                                 // 0x0051ADA0 → vtbl[2]; first = entered = true
        FadeInCurrentState();                                   // 0x0052C5F0  (wait loop, item N7)
    }
    GetState(m_CurrentState)->Handle();                         // 0x0051C250, 0x0051ABB0
    engine->m_SoundSystem->Update();                            // 0x00550260

CAdamGameState::Handle()                                        // 0x0051ABB0
    if (!app->m_MainWindow->m_Active) {
        if (m_State /*+0x24*/ != GS_GAME) app->ProcessMessages(false, &tmp);   // 0x0051AD3B
    } else {
        this->vtbl[1](m_First /*+0x28*/);                       // DoHandle
        m_First = false;
    }

CRcGStateGAME::DoHandle(bool first)                             // 0x00484030
    if (first) { (re)create the frame-info block (0x5C bytes, this+0x5C); cache the current sublevel in this+0x60 }
    else info->t0 = timeGetTime();                              // 0x004841DD
    if (app->+0x3C && sublevel) sublevel->Update();             // 0x004F5170   game logic
    this->vtbl[8]();                                            // 0x004848C0 → 0x004F57D0   pre-render
    if (!first) info->t1 = timeGetTime();                       // 0x004842C3
    engine->BeginFrame();                                       // 0x005630F0 → Genesis 0x005BC850
    this->vtbl[7]();                                            // 0x004848E0   world, HUD (player+0x1F4), communicator, 0x00529A80
    console or "FPS: …" debug text ([Debug] DebugPrintInfo)
    this->vtbl[4]();                                            // DoFade 0x0051A440
    engine->EndFrame();                                         // 0x005637B0 → Genesis 0x005BCA50   (flip)
    if (!first) 0x004847B0();                                   // frame statistics
```

`engine->EndFrame()` (`0x005637B0`) is the only place a frame is presented. Its callers are
exactly: `0x00484030` (GAME), `0x004915D0` (RESULTS), `0x0051AB60` (base state),
`0x0051BC20` (LOADING), `0x0051C510` (MENU), `0x0051C8A0` (PAUSE), `0x0051D680` (RESTART),
`0x00592E70` (console text). CONFIRMED from `calls.tsv`.

**Timing** (CONFIRMED):

- Clock source for game logic: `timeGetTime()` through the static `CAdamClock` at
  `0x006B9950`. `GetTime()` = `0x00565870`:
  `raw = m_Fixed(+0) ? m_FixedTime(+4) : timeGetTime() - m_Base(+8);`
  `if (m_Origin(+0xC) == -1) m_Origin = m_Last(+0x10) = raw;`
  `return (int)((raw - m_Last) * m_Speed(+0x14) + m_Origin);`
  `SetSpeed` = `0x00565AE0` (re-bases origin/last, then stores the speed). Initial values
  (`0x00565840`): fixed = 0, base = 0, origin = last = −1, speed = 1.0. No code that sets
  the "fixed" flag was found; the clock is never paused.
- `QueryPerformanceCounter` is used only inside Genesis `geEngine_BeginFrame/EndFrame`
  (`0x005BC8AD`, `0x005BCAD4`; frequency at `0x005C9A28`) for its FPS statistics.
- Delta time, `CAdamSubLevel::Update()` = `0x004F5170`:

```
now = clock.GetTime();                         // 0x004F527C; static "previous now" at 0x0069C5C0
if (m_LastTime /*+0x3E8*/ == -1) m_LastTime = now;
if (now - m_LastTime > 500) m_LastTime = now - 500;        // at most 500 ms is simulated per frame
t = m_LastTime; m_Steps /*+0x3EC*/ = 0;
do {
    step = min(now - t, 125);                              // sub-steps of at most 125 ms (0x7D)
    t += step;
    for each game object GO in the update list:
        if (GO.+0xC4 == -1 || GO.+0xCC == -1 || t - GO.+0xC8 > GO.+0xCC) {
            GO.Update(t, step);                            // 0x00502E40
            GO.+0xC8 = t;
        }
    m_Steps++;
} while (t < now);
m_LastTime = now;
```

  Integer milliseconds, no smoothing, no averaging. Because the clock is not paused, the
  first game frame after a pause, menu or level load is clamped to 500 ms.
- Fades (`0x0051A440`), the loading progress (`0x0051B2F0`), the results-screen phases
  (`0x004900D0`) and key repeat use raw `timeGetTime()`.

### 4.4 What the host has to call

The pre-loop work, the loop and the shutdown are all inside `Start` (`0x004BE330`), inside
one `try` block. `Start` cannot be called and made to return before the loop, and letting it
return runs the shutdown tail. The loop function `0x004BFD60` keeps one local across
iterations: the `std::string text` at `[ESP+0x24]`. It carries nothing between iterations
that matters (it is overwritten with the state name each frame and only read by the console
and debug text paths). All timing and game state live in objects and globals.

So both `Start` and the loop function must be re-implemented in the shim (or split by the
recompiler). Both are short.

**(i) Initialise once** — replicate WinMain steps 3–10 (or call them), then `Start` up to
the loop:

```
app = ((void*(*)())0x004BC480)();                       // cdecl
thiscall 0x004C2A00(app, &cmdLineString)                // "-game"
thiscall 0x004C2B40(app, hInstance)
thiscall 0x004C2E00(app)                                // ProcessCommandLine
*(u8*)(app+0x44) = 1
thiscall 0x004C0D20(app)
thiscall 0x004BE1E0(app)                                // window; host must deliver WM_ACTIVATEAPP(1)
if (!((char(*)())0x004BE990)()) fail                    // CheckCD
thiscall 0x004BDE80(app, &failed)   → fail if failed
thiscall 0x00527C20(game)
thiscall 0x005AAB50(window, *(u32*)(input+0x3C))
thiscall 0x00592E70(app+0x88, "Loading...")
thiscall 0x004BCB70(app)                                // level structure + load (nested frames, N4)
thiscall 0x004C3640(app)
thiscall 0x0052E870(game)                               // intro (N6)
thiscall 0x0052AB20(game, 3)                            // GS_GAME; renders the first frame
thiscall 0x005AA690(window)
construct an empty std::string `text` that lives until shutdown
```

`game = *(app+0x3A4)`, `input = *(app+0x3A8)`, `window = *(app+0x58)`. The original runs
everything from `0x004BDE80` on inside the `try` of `Start`; the shim must catch
`CAdamQuitException` and the other three exception types the same way.

**(ii) One iteration per host call** — the body of 4.1:

```
if (*(u8*)(app+0x3E)) return QUIT;
thiscall 0x004BEF70(app, 1, &text);
if (*(u8*)(app+0x3E)) return QUIT;
thiscall 0x004C0170(app, 0, &text);
if (*(u8*)(window+0x59)) {
    thiscall 0x0052AF50(game);
    if (*(u32*)(game+0x70)) { (game->vtbl[7])(game, game+0x68); assign(game+0x68, ""); }   // vtbl[7] = 0x00496D60
}
```

One call is one frame only while the state stays GS_GAME and no command is pending. The
exceptions are listed in section 5.

**(iii) Shut down** — tail of `Start`, then WinMain steps 12–13:

```
if (*(u32*)(engine+0x100)) cdecl 0x005BB9E0(*(u32*)(engine+0x100));
thiscall 0x004BC090(app);        // if app+0x45 == 0: RemoveAllSubLevels 0x0055D670, delete game (vtbl[0](1)),
                                 // engine shutdown 0x0055B480, SetWindowPos(320×200, centred), flush key messages
cdecl 0x004BC650(app);           // FreeInstance: deletes the application
0x0059B0D0(); 0x005A4480();      // statics; CDaviIniFileSystem::DeleteInstance
```

`CDaviSetting` objects write themselves back on destruction when flagged
(`0x005ACCA0` → `0x005AD3D0` → `0x005AD1A0`), so shutdown produces
`WritePrivateProfileStringA` calls.

---

## 5. Nested and modal loops

Everything below runs inside a single call from the main loop (or inside `Start`). There
is no `Sleep`; each loop spins on rendering and/or `PeekMessageA`.

Search coverage (CONFIRMED from `calls.tsv` and the import table): all callers of
`PeekMessageA` (`0x004BEF70` ×2, `0x004C4380`, `0x005A9C30`), of the pump `0x005A9C30`
(`0x004BEF70`, `0x0048ACE0`, `0x0051C510`, `0x0051C8A0`, `0x0051D610`), of
`ProcessMessages` (`0x004BFD60`, `0x004850C0`, `0x0051ABB0`, `0x0051BC20`, `0x0052C270`,
`0x0052C5F0`), of `GetAsyncKeyState` (`0x004BE330`, `0x005A9BB0`), of
`QueryPerformanceCounter` (Genesis only), of `MessageBoxA`, `DialogBoxParamA`,
`GetOpenFileNameA`, and the 46 `timeGetTime` call sites (29 functions) listed in `calls.tsv`.

### 5.1 Loops that render and wait

| # | Loop | Address | Reached from | Waits for | Renders inside |
|---|---|---|---|---|---|
| N3 | **In-game menu** ("Hoofdmenu": Verder spelen / Level opnieuw opstarten / Spel verlaten / key overview) | `CAdamGame::DisplayMenu` `0x0052EC30`; loop `0x00532EAE`–`0x00532EC4` | `ProcessMessages(true)` on action "Menu" (default Escape) while in GS_GAME | menu state `IsFinished` (`0x0051C7E0` → `0x0053B5F0`) | yes: `0x0051C510` per iteration (drains messages, game scene, menu, `EndFrame`) |
| N5 | **Pause** | `CAdamGame::Pause` `0x00534D00`; loop `0x005351AB`–`0x005351BB` | `ProcessMessages(true)` on action "Pause" (default P) | pause state `IsFinished` (`0x0051D700`, flag `state+0x78`, set when "Pause" is pressed again) | yes: `0x0051C8A0` |
| N8 | **Retry screen** (`Retry.ini`) | `CAdamGame::Restart` `0x005351E0`; loop `0x0053557A`–`0x0053558A` | `ProcessMessages(true)` when `game+0xA4` is set | restart state `IsFinished` (`0x0051D700`); result `state+0x7C` | yes: `0x0051D680` (input via `0x0048ACE0`) |
| N6 | **Intro** | `CAdamGame` run-intro `0x0052E870`; loop `0x0052E918`–`0x0052EA97` | `Start` (`0x004BE5ED`), `ChangeToSubLevel` (`0x00498687`) | `m_States[GS_INTRO]->IsFinished()`; for `CRcGStateINTRO` this is `0x005AD370` = always true | `0x004850C0` only calls `ProcessMessages(false)`. In this game the loop body never runs after the first handle: effectively a no-op |
| N9 | **Results / debriefing** (`Debriefing.ini`) | `CAdamGame` run-results `0x0052E620`; loop `0x0052E6C8`–`0x0052E847`, then `FadeOutCurrentState` (`0x0052E84E`) | `ChangeToSubLevel` (`0x00497EB4`) | `CRcGStateRESULTS::IsFinished` `0x004916D0`: phase `state+0xAC >= 4` and fade idle (`0x0051A420`); phases advance on timers and input in `0x004900D0` | yes: `0x004915D0` |
| N7 | **Fade out / fade in** of a state | `FadeOutCurrentState` `0x0052C270` (loop `0x0052C55E`–`0x0052C594`), `FadeInCurrentState` `0x0052C5F0` (loop `0x0052C8DE`–`0x0052C914`) | every state change (`HandleCurrentState`), `ChangeToSubLevel` (`0x004976EC`), `DisplayMenu` quit (`0x00533128`, `0x0052ECFE`), `Restart` quit (`0x00535653`), run-results | fade state `state+0x3C` reaching 4 (out) or 2 (in); timer in `DoFade` `0x0051A440` on raw `timeGetTime()`; duration from `[GS_*] FadeOutTime/FadeInTime`. Skipped (state set directly) when `CanFade()` is false | yes: `state->Handle()` then `ProcessMessages(false)` per iteration |
| N4 | **Loading screen refresh** | `0x0051C180` → `CAdamGameState::Handle` → `0x0051C160` → `0x0051BC20` | called from the loaders while GS_LOADING is current: `0x004BCB70`, `0x004C3640` (×6), `0x0049F690`, `0x0049FA20`, `0x004F7790` (×4), `0x004F80F0`, `0x004F9030` (×2), `0x004F95B0`, `0x004F9D60` (×2), `0x0050CB60`, `0x0050CE80`, `0x00550BF0`, `0x00550F30` | not a wait: loading itself is one long synchronous call (`0x004F6000` etc.) | yes: `ProcessMessages(false)` then one frame per progress step (`BeginFrame` … `EndFrame`, loop `0x0051BC20` body) |

Modal pattern used by N3, N5, N8 (CONFIRMED, identical instructions):

```
modal->SetUnderlying(currentStateObject);     // 0x0051D670 (state+0x74)
modal->Enter();                               // 0x0051ADA0
do { modal->Handle(); } while (!modal->vtbl[6]());     // 0x0051ABB0
modal->Leave();                               // 0x0051ADC0
modal->SetUnderlying(NULL);
```

The modal `DoHandle` drains the message queue itself with `0x005A9C30` (a
`while (PumpOne())` that ends when the queue is empty), renders the underlying game scene
through the underlying state's `vtbl[8]` / `vtbl[7]`, draws its overlay and calls
`EndFrame`. Game logic (`CAdamSubLevel::Update`) is not run.

Two properties that matter for a port:

- **Zero-length fades still need the clock to advance.** `DoFade` arms the timer on the
  first call (`end = now + duration`) and finishes only when `end < now` (strict). With a
  host clock that is frozen during one host call, N7 never terminates.
- **While the application is inactive** `CAdamGameState::Handle` does not call `DoHandle`
  (it calls `ProcessMessages(false)` for every state except GS_GAME), so N3, N5, N8, N9
  spin without rendering until `WM_ACTIVATEAPP(1)` arrives.

### 5.2 The level transition — one call, several loops

`CRCGame::ChangeToSubLevel(std::string& cmd)` = `0x00496D60` (vtable slot 7 of `CRCGame`),
called from the main loop when `game+0x68` is non-empty. Commands: `next`, `nextsave`,
`restart`, anything else = BSP name. Re-entrancy guard byte `0x006B8EF9` ("Already changing
to a new sublevel... Please wait."). CONFIRMED call order for `next` / `nextsave`:

```
FindNextSubLevel 0x0052BB40                    // → new level, new sublevel, "no more sublevels" flag
[nextsave] sublevel settings: Completed (0x004FED00)
FadeOutCurrentState 0x0052C270                 // N7                                  0x004976EC
level settings → CurrentSubLevel (0x004F3220), Completed (0x004F31C0)                 0x004977B3, 0x00497CA0
run-results 0x0052E620                         // N9 (+ N7)                           0x00497EB4
level settings → CurrentSubLevel = next sublevel (0x004F3220)                         0x00497F85
if (noMoreSublevels /*[ESP+0x13]*/ || level->+0x1DC /*GameType == 1*/) {
    app->SetQuit(true); return;                // 0x0049803C–0x00498042, 0x00498863
}
clock speed for the new sublevel ([…] ClockSpeed, 0x00498407)
SetCurrentState(GS_LOADING) 0x004984F6; HandleCurrentState 0x004984FD
sublevel load 0x004F6000 (0x0049858E)          // N4 refreshes inside
HandleCurrentState 0x004985AA
run-intro 0x0052E870                           // N6                                  0x00498687
SetCurrentState(GS_GAME) 0x004986FA            // first frame of the new sublevel
```

`SetCurrentState` (`0x0052AB20`) is synchronous: it stores `m_NextState` and calls
`HandleCurrentState` itself. `restart` reloads the same sublevel through the same tail
(`AdamDebug01.log` shows `CreateWorldFromFile('…lvl00a.bsp')` four times in one run).

To get one frame per host call, the cut points are: the three modal loops (N3, N5, N8),
the two fade loops (N7), run-results (N9) and — only if the progress screen must animate —
the loading refresh (N4). N6 needs nothing. All loop conditions and counters live in the
state objects; the obstacle is the C++ stack above each loop (`ChangeToSubLevel`,
`DisplayMenu`, `Restart`, `ProcessMessages`, with their locals and exception frames), not
loop-local state.

### 5.3 Modal system dialogs (block inside the Win32 call)

| # | What | Address | When |
|---|---|---|---|
| N1 | CD check: `MessageBoxA(NULL, "Plaats de cd-rom '%s' in de cd-romspeler.", appName, MB_OKCANCEL\|MB_ICONEXCLAMATION)` in a retry loop around `_access(TestFileName)` | `CheckCD` `0x004BE990`, box at `0x004BEC52` | only if `Computer.ini [Install] Minimal != 0`; Cancel aborts `Start` |
| N2 | Driver/mode dialog: `DialogBoxParamA(engine+0x1B0, MAKEINTRESOURCE(0x65), engine+0x1AC, dlgproc 0x0055D730, 0)` | `CAdamEngine::SelectDevice` `0x0055DCC0`, call `0x0055E837` (the only `DialogBoxParamA` site) | `[Display] AutoSelectDriver == 0`, or SHIFT held at start (`byte 0x006A2400 == 0`), and `ForceSelectWindowedMode == 0` |
| — | BSP file picker `GetOpenFileNameA` | `0x004C2B50` (`0x004C2C7C`) | no `-game` and no `-map` / `-file` |
| — | Error boxes `MessageBoxA(…, MB_ICONHAND)` | `0x004BE8F4` (Start, after an exception), `0x00592672` (WinMain), `0x005AF855` (assert handler `0x005AF3C0`) | failures only |

### 5.4 `timeGetTime` call sites that are not waits

`0x004847B0`, `0x00484030` (frame statistics); `0x004BCB70`, `0x004C3640`, `0x0049F690`,
`0x0049FA20`, `0x004F70E0`–`0x004F9D60`, `0x0050CB60`, `0x0050CE80`, `0x00550BF0`,
`0x00550F30` (load timing "…took %f seconds" and loading progress); `0x0051A440` (fade
timer); `0x0051B2F0`, `0x0051C180` (loading progress / refresh interval); `0x004900D0`
(results phases); `0x00529A80`, `0x00529C90`, `0x00544F90`, `0x00592F50`, `0x005A0030`
(2-second throttle), `0x004C0170` (key repeat); `0x0051BC20` (loading start time);
`0x00565870`, `0x00565AE0` (the game clock itself). CONFIRMED by reading for the ones named in
this document; INFERRED (same timestamp pattern, no enclosing wait loop seen) for
`0x004F70E0`–`0x004F9D60`, `0x00529A80`, `0x00544F90`, `0x00592F50`.

---

## 6. End of a world, quitting, return to the menu

### 6.1 How the process ends (CONFIRMED)

Every exit goes through `SetQuit(true)` (`0x004C4440`):

| Trigger | Site | Before it |
|---|---|---|
| Sublevel finished and `[General] GameType == 1` (`level+0x1DC`) | `ChangeToSubLevel`, `0x00498863` | fade out, INI writes, results screen (5.2) |
| Sublevel finished and there is no next sublevel | same site, flag from `FindNextSubLevel` (`0x0049803C`) | same |
| In-game menu "Spel verlaten" | `DisplayMenu`, `0x00533128` (fade out), `0x0053312F`, `0x00533136` | — |
| Retry screen answered with code 0 | `Restart`, `0x00535653` (fade out), `0x0053566A`; code 1 instead sets the command `restart` (`0x00535609`) | — |
| Input action "Quit" (unbound by default: `Quit=`) | `ProcessMessages`, `0x004BF7CF` | — |
| `WM_CLOSE` | wndproc, `0x005A87C8` | — |
| `WM_QUIT` retrieved | `ProcessMessages`, `0x004BF667` | — |
| Menu cannot be shown ("CAdamGame::DisplayMenu(): no fonts; can't display menu"; condition INFERRED from the adjacent error string) | `DisplayMenu`, `0x0052ECFE`–`0x0052ED15` | fade out |

After `SetQuit` the main loop ends at its next test, `Start` runs its tail (4.4 iii) and
WinMain returns 0. If the flag is seen inside a nested loop, `ProcessMessages(false)` throws
`CAdamQuitException`; `Start` then skips `0x004BC090` (no orderly game/engine teardown,
only `app+0x45 = 1`).

**Exit code: always 0** via `exit()`; other `ExitProcess` sites are the CRT (`0x0060DCBD`,
`0x0060F272`). `RedCat.exe` ignores the game's exit code (2.1). Completion, quit and game
over are not distinguished by exit code.

### 6.2 What is written to `Player<N>.ini` (CONFIRMED functions; key list partly INFERRED)

All writes are immediate `WritePrivateProfileStringA` calls from `0x005AD1A0`.

- `CAdamLevelSettings` (ctor `0x004F2810`, section `[Level<L>]`): `Completed` (`+0x24`),
  `CurrentSubLevel` (`+0x90`), `LastPlayedDateTime` (`+0xFC`), `HasKeyItem%d`.
  Setters: `0x004F3220` (`CurrentSubLevel`), `0x004F31C0` (integer value; `Completed` —
  INFERRED from the object layout).
- `CAdamSubLevelSettings` (ctor `0x004FE870`, section `[SubLevel<L>_<S>]`): `Completed`,
  `SecretsFound`, `EnemiesKilled`, `TimePlayedSeconds`, `ShotsTotal`, `ShotsHit`, `Health`, …
  Setter `0x004FED00` (`Completed`).
- Player properties (`0x00439010`, `0x00439F40`): `Score`, `Skill`, `Health`, `TotalScore`, …
  (section `[Player]` — INFERRED from the shipped `Player1.ini`).

Order at the end of a sublevel: see 5.2 — `CurrentSubLevel` and `Completed` are written
before the results screen, and `CurrentSubLevel` is advanced to the next sublevel after it.

### 6.3 How the menu knows what to show (CONFIRMED)

`RedCat.exe` restarts `rchcmenu.dat /Default`. The menu re-reads the player file
(`RcHcMenu.dat` `0x00567694`): `[General] GameType`, `[PLAYER] MaxHealth`, lives, `Skill`,
`MirrorPart`, `MagicPotion`, `TotalScore`, `[SubLevel1_5] Completed`,
`[Level1] CurrentSubLevel`; and its own `Menu.ini [GENERAL] PREVSTATE`, `CURRENTPLAYER`.
Nothing else is passed back.

---

## 7. Not established

1. **Value of `GameType` written by the menu** for adventure vs quick play (the argument
   was not recovered at `RcHcMenu.dat` `0x005665B4`). The game side is confirmed:
   `GameType == 1` quits after one sublevel.
2. **Quick-play difficulty**: the game reads only `[General] DifficultyLevel`. Whether the
   menu copies `QuickPlayDifficultyLevel` into `DifficultyLevel` before a quick-play start
   was not traced. The 0/1/2 → Easy/Normal/Hard mapping is inferred.
3. **Player state restored at start** (health, lives, score, skills, potions, mirror
   parts) and its dependence on `GameType` (`0x00439F40`, `0x00453060`, `0x0049A8D0`,
   `0x0056B7F0` reference `GameType`; `StandardSkill` in `Game.ini`). Needed for a correct
   "boot into world W" in adventure mode.
4. **Defaults** of `[Run] Start*Number`, `NrLevels`, `NrSubLevels`, `NrSubSubLevels`,
   `GameType`, `[Windowed Mode] Width/Height` and the `[Engine]` keys read in `0x00559E10`
   (section names there are inferred from the string references).
5. **`[Display] Mode` 0/1/2 → resolution** and the exact auto-selection rules
   (`AutoSelectBestDriver` `0x0055FC90`, `AutoSelectBestMode` `0x0055F630`).
6. **Who sets the command string** `game+0x68` to `next` / `nextsave` (level scripts or
   triggers) and who sets the restart request `game+0xA4`; whether zero lives takes a path
   different from the retry screen.
7. **End of the last sublevel in adventure mode**: confirmed that `FindNextSubLevel`
   reports "no more sublevels" and `ChangeToSubLevel` quits after the results screen; not
   checked whether the tower level ends through that command or through another one, and
   what marks the adventure as completed for the menu besides `[SubLevel1_5] Completed`.
8. **Results-screen input**: which key/button advances the phases in `0x004900D0`.
9. **Menu codes** of `DisplayMenu` (jump table `0x005333D4`, 7 entries) apart from quit and
   restart; what `0x00534820` (called just before `SetQuit` on "Spel verlaten") saves.
10. **Missing `End run` / cleanup lines** in the real logs (1.1).
11. **Driver dialog template 0x65 and dialog procedure `0x0055D730`** were located, not
    analysed. Genesis driver loading (`LoadLibraryA` of `D3DDrv.dll` etc.) is outside this
    document.
12. **Section-name formats**: `Level%d` (`0x006A0240`) and `SubLevel%d_%d` (`0x006A0320`)
    are confirmed strings; the form used when `NrSubSubLevels > 1` (`0x0052A7A0`) was not
    read.
13. The six (with `-game`) or seven (ad-hoc) `CreateSubLevelSettings` log lines versus the
    five sublevels in `Game.ini` were not reconciled.

---

## 8. Death, the retry screen, the change of world and the player file: run on 2026-11-14

Run in the Node runner (`tools/run-headless.mjs`, world 1, 60 passes per virtual second) with
the game's own functions called between two passes: `CRCPlayer::Kill` (`0x004DD1A0`, vtable slot
8) and the command string (`game+0x68`, set with `basic_string::assign(const char*, n)`
`0x004040F0`). `tools/savestate-plugin.mjs --ss-mode guard` repeats all of it, and
`node tools/savestate-check.mjs` checks the outcomes. The plug-ins of the first runs are in
`tools/out/carry/saving/` (`death-plugin.mjs`, `next-plugin.mjs`, `close-plugin.mjs`).

### CONFIRMED (seen in a run; where an address is given, also read in the code)

| What | Seen |
|---|---|
| Writing 0 into the health (`props+0x3C`) by hand | Nothing follows: no death, no lost life, for 64 virtual seconds. Death comes through the damage path, not through a test of the value each frame |
| `Kill()` with lives left | Health 0 at once; 121 passes later health is the maximum again and the lives are one less (3 to 2); no command, no restart request in between |
| `Kill()` with 0 lives | Health 0; 121 passes later lives is -1 and the restart request `game+0xA4` is 1, health still 0. The next pass does not return until the retry screen is answered |
| Retry screen input | Left selects Ja, right Nee, the fire key (Control) confirms (as read from `0x0048ACE0` in the JavaScript port's `retry-screen.js`); Ja is selected to begin with. One try with a click at the place of the buttons did not answer it (not looked into further) |
| Retry screen, **Nee** | The game ends from inside that pass (exit code 0; the pass does not complete, so the host's `onPass` is not reached) |
| Retry screen, **Ja** | The same pass loads the world again: at its end health 10, lives 3, and the command had gone through `ChangeToSubLevel` (`restart`) |
| The player file at a game over | `Settings\Player1.ini [Player]` is written in the retry pass with `Life=3`, `Health=10`, `Score=0`: the state at the door of the world, not the lost lives. The same with Ja and with Nee |
| The player file when the game is closed in the middle of a world | After a lost life (2 left), 1234 points and 7 potions added with the game's own functions, then `WM_CLOSE`: `[Player]` still has `Life=3`, `Score=0`, `MagicPotion=0`. The file holds what the player had when he entered the world; what happens inside a world is not in it |
| The command `nextsave` in an adventure (world 1) | One pass (3.6 virtual seconds with the fire key pressed for the results screen). Afterwards: `[Level1] CurrentSubLevel=SubLevel1_2`, **`[Level1] Completed=1`**, `[SubLevel1_1] Completed=1` with `TimePlayedSeconds`, the quit flag 0, game state 3, the world loaded is the second |
| `[Level1] Completed` | Set to 1 at every change of world, not at the end of the adventure: `0x00497C97 PUSH 1`, `0x00497C99 CALL 0x004F2570` (the level's settings object, `level+0x48`), `0x00497CA0 CALL 0x004F31C0` (writes the value under the key at `0x00690818`). So this key cannot tell a menu that the adventure is finished; `[SubLevel1_5] Completed` can (6.3) |
| The command `nextsave` in a Snelspel (`GameType 1`) | The same pass sets the quit flag (`app+0x3E`) and returns; the game ends at the top of the next pass. The file then has `CurrentSubLevel=SubLevel1_2`, `[Level1] Completed=1`, and `[SubLevel1_1] Completed` still 0 |
| A save state taken after the pass that changed the world | 68.3 MB (world 2); restored into a game booted in world 1 and into one booted in world 2, the memory 300 passes later is the same as in the run that saved (`192190a0` three times under the hash of that day, image and heap; `3676de45` since 2026-11-14, when the hash began to cover the pages with the game's own heap) |

### INFERRED

- That the real end of a world uses `nextsave` (and so sets `[SubLevel1_N] Completed`): the
  command was given by the host here; which script or trigger gives it in play is still open (section 7, item 6).
- That the 121 passes between death and the new start are the death animation: its length was
  not looked up, only counted.

### Still open

- Section 7, items 6 (who sets the command and the restart request) and 7 (the end of the last world).
- What the results screen wants: the fire key every second got through it; which keys and how
  many phases was not looked at (section 7, item 8).
- Whether a death zone (`0x00503FC0`) behaves like `Kill()` here.
