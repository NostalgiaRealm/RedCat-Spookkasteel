# RcHcMenu.dat — menu audio: music, voice clips and the two volume sliders

Reference for the browser reconstruction of the original menu (`RcHcMenu.dat`, Delphi,
image base `0x400000`, SHA-256 `c859320e…485698f`). Question: how loud are the menu music
and the menu voice clips, and how do the two sliders on the options form work.

Evidence: Ghidra export under `RC_ORIGINAL_DECOMPILED/decompiled/RcHcMenu.dat/`
(`assembly.tsv`, `calls.tsv`, `functions/*.c`), raw bytes of `originals/RcHcMenu.dat`
(string literals, jump table, published field tables, one except-handler the export left
undecoded), the Delphi VMT inventory (`inventory/delphi-vmts.json`), the recovered forms
(`recovered-resources/forms/`), the shipped `originals/Settings/*.ini`. No original binary
was run; nothing below is a runtime measurement.

Sections: **1 Confirmed** (read from instructions or data at the cited address),
**2 Inferred** (follows from confirmed facts, a name or standard API behaviour; path not
read end to end), **3 Unresolved**. Class and method names are the binary's own (RTTI class
names, published method names, log strings) unless marked otherwise. Field names of
`TSettings` (FX volume, music volume, voices volume) are labels taken from the
`[DEFAULTSETTINGS]` key each field is loaded from. Calling convention: Delphi `register`
(EAX, EDX, ECX, then stack).

---

## 0. Short answers

1. **Music volume p** is always the integer `TSettings.MusicVolume` (0..100) of a player
   object, never an INI key. `StartMusic` gets it from the current player object at start-up
   (cold start: a fresh object, **80**; return from a game: the value stored in
   `SaveGame<n>.RCR`). It is re-applied whenever the main screen is activated, whenever a
   save file is loaded, and **live on every Muziek slider change**. Shipped default 80 →
   DirectSound −209 → amplitude 0.786.
2. **Every menu sound** (voice clips, help texts, button voices — 66 call sites, one path)
   is played with p = `TSettings.FXVolume` of the current player, i.e. the Geluidseffecten
   slider, stored for the game as `[Sound] SoundVolume`. There is **one class only**:
   `VOICESVOLUME`, `MUSICON`, `FXON`, `VOICESON` are loaded and stored but never read for
   playback. No per-clip gain. Shipped default 80 → −209 → 0.786.
3. **Sliders**: integer 0..100, stored value = slider position, no scaling. Drag gives any
   integer; click on the track ±10 (no auto-repeat); arrow keys ±1, PgUp/PgDn ±10,
   Home/End = 0/100. New player: both 80 (from `Settings\static.ini [DEFAULTSETTINGS]`;
   `PlayerDef.ini` is never read for volumes, it is only copied). Values live in memory and
   are written to `SaveGame<n>.RCR` when the menu shuts down (quit or game launch) and to
   `Settings\Player<n+1>.ini [Sound] MusicVolume / SoundVolume` only on a game launch.
4. **Music timeline**: loaded once (`MenuMuz.WAV`), started looping *after* the leader and
   intro videos (cold start) or after the outro (return from a finished adventure); it is
   not playing under any video. It is never stopped or paused inside the menu; it ends when
   the menu process shuts down to launch the game. On return the menu is a new process and
   the music starts again from the beginning.
5. **Nothing else changes loudness**: one `SetVolume` per buffer, no pan, no frequency
   change, no fade, no ducking under voice clips, no primary-buffer or mixer volume. Slider
   at 0 is not silence: −4000 (−40 dB, amplitude 0.01). Slider at 100 is −100 (−1 dB), not 0.

Slider value → DirectSound value → amplitude (`FUN_004B01EC`, section 1.2):

| slider p | DirectSound volume (1/100 dB) | amplitude `10^(v/2000)` |
|---:|---:|---:|
| 0 | −4000 | 0.0100 |
| 20 | −1913 | 0.1105 |
| 40 | −915 | 0.3487 |
| 60 | −437 | 0.6046 |
| 80 | −209 | 0.7861 |
| 100 | −100 | 0.8913 |

(10 → −2766, 30 → −1323, 50 → −632, 70 → −302, 90 → −145.)

---

## 1. Confirmed

### 1.1 Objects

| Object | Where | Fields used here |
|---|---|---|
| `TData` (data module, VMT `0x567C30`) | global `0x5748E0`, reached through `[0x572108]` | `+0x100` byte launch state (0 quit, 1 quick play, 2 adventure, 3 highscores), `+0x108` `TSoundManager`, `+0x110` application directory, `+0x118` current player (`TSaveGame`), `+0x11C` `TMenuIni`, `+0x120` defaults holder (`+8` = a `TSettings`), `+0x124` byte "Exit called" |
| `TSoundManager` (VMT `0x54F0C4`) | `TData+0x108`, created `0x56849F` | `+0x04` current clip, `+0x0C` clip directory, `+0x10` music wave (`TDaviWave`), `+0x14` resource file, `+0x18` music `IDirectSoundBuffer`, `+0x1C` list of playing clips, `+0x20` byte music loaded, `+0x24` music directory |
| `TSaveGame` (VMT `0x56591C`) | `TData+0x118` | `+0x10` `TSettings`, `+0x1C` player index |
| `TSettings` (VMT `0x56AA80`) | `TSaveGame+0x10` | `+0x10` FX volume, `+0x14` voices volume, `+0x18` music volume, `+0x1C` FXOn, `+0x1D` MusicOn, `+0x1E` VoicesOn |

Setters: `0x56B268` writes `+0x10` (FX), `0x56BB4C` writes `+0x18` (music).
`TSettings.Create` (`0x56AB14`) sets FX 80 (`0x56ABAE`–`0x56ABB6`) and music 80
(`0x56ABBB`–`0x56ABC3`); the voices volume is not initialised there.

### 1.2 DirectSound layer and the volume curve

- Imports with audio relevance: `DSOUND.DLL::DirectSoundCreate`, `WINMM.DLL::mciSendCommandA`,
  `mciGetErrorStringA`. Nothing else (no `PlaySound`, `waveOut*`, `mixer*`, `aux*`).
- Init `0x4A83E4` (called from `TSoundManager.Create`, `0x54F2D5`): `DirectSoundCreate`
  (`0x4A8420`), a primary buffer with `DSBUFFERDESC{dwSize 0x14, dwFlags 1}` (`0x4A843E`–`0x4A8452`),
  `SetCooperativeLevel(hwnd, 1)` (`0x4A8464`–`0x4A8477`), then the "sound available" byte
  `0x571974` := 1 (`0x4A8484`). No call on the primary buffer afterwards (all references to
  `0x574268`: `0x4A845A`, `0x4A851B`, `0x4A8719`, store and release only).
- Secondary buffers `0x4A8534`: `DSBUFFERDESC{dwSize 0x14, dwFlags 0x80E0, dwBufferBytes =
  wave+0x34, lpwfxFormat = wave+0x30}` (`0x4A8569`–`0x4A8586`). Filled by `0x4A85C4`
  (Lock `0x4A8625`, copy, Unlock `0x4A868C`). Only callers: `StartMusic` (`0x54F6D4`,
  `0x54F701`) and `PlayWave` (`0x54F83A`, `0x54F84F`).
- Buffer methods called anywhere in the sound manager (`0x54F000`–`0x550140`) and the
  DirectSound unit (`0x4A8200`–`0x4A8700`): `+0x24` GetStatus (`0x54FDFE`, `0x5500E5`),
  `+0x2C` Lock, `+0x30` Play (`0x54F715`, `0x54F8C1`), `+0x3C` SetVolume (`0x54F863`,
  `0x54FF68`), `+0x48` Stop (`0x54F217`, `0x54F574`, `0x54FBC1`, `0x54FE7E`), `+0x4C`
  Unlock. **No `+0x40` (SetPan), no `+0x44` (SetFrequency).**
- Curve `FUN_004B01EC(p)` (`0x4B01EC`–`0x4B02BD`): `e = (100 − p)/100 · (log10(4000) −
  log10(100)) + log10(100)`, `v = −Round(10^e)`, then `v > −100 → −100` (`0x4B0294`),
  `v < −4000 → −4000` (`0x4B02A1`). Extended constants pushed at `0x4B01F5` (4000.0),
  `0x4B020A` (100.0), `0x4B0255` (10.0); float 100.0 at `0x4B02C0`. p is not clamped
  before the curve; the result clamp covers p outside 0..100. Only two callers:
  `0x54F857` (clips) and `0x54FF59` (music).
- The wave file loader (`TDaviWave`, `0x497CC0`–`0x49811C`, entry `0x49804C`) parses the
  RIFF file and copies the data; the unit contains no `IMUL`/`MUL`/`FMUL`/`FDIV`/`SHL`/`SHR`/
  `SAR` instruction, so it does not scale samples.

### 1.3 Music

- `LoadMusic` `0x54FBC8` (called once, `TData.DataCreate` `0x568633`): file
  `<music dir>\MenuMuz.WAV`, or `<clip dir>\MenuMuz.WAV` when the music directory is empty
  (`0x54FC40`–`0x54FC86`); sets `+0x20` := 1 when the file exists (`0x54FCA8`). Music
  directory = `menu.ini [GENERAL] MUSICDIR` (`0x56860A`–`0x568625`, read at `0x550F98`).
- `StartMusic(self, p)` `0x54F644`: only when music is loaded and sound is available
  (`0x54FD74`); creates the buffer, `SetMusicVolume(p)` (`0x54F6F0`), fills it, then
  `Play(0, 0, 1)` = looping (`0x54F706`–`0x54F715`). Called only from `TfrmMain` "StartUp"
  (`0x565214`), once per process.
- `SetMusicVolume(self, p)` `0x54FEB0`: `SetVolume(FUN_004B01EC(p))` on the music buffer
  when sound is available and the buffer exists (`0x54FF32`–`0x54FF68`). One call, no ramp.
- The music buffer is stopped at exactly one place: `0x54FBA8` (`0x54FBC1`), called only
  from `TSoundManager.Destroy` (`0x54F420`).

All `SetMusicVolume` call sites and their p:

| Call site | In | p |
|---|---|---|
| `0x54F6F0` | `StartMusic` | its argument, see next three rows |
| `0x5652C5` | StartUp, previous state 0 (cold start), after `ShowLeader` `0x565298` and `ShowIntro` `0x5652A0` | `current player → settings → +0x18` (`0x5652A5`–`0x5652B5`). At this point the current player is the fresh `TSaveGame` created at `0x5684D6`–`0x5684DE` (after, and replacing, any player loaded earlier at `0x568365`; the only other writers of `TData+0x118` are `LoadPlayer` `0x56925A` and `CreateNewPlayer` `0x56966D`, neither reachable before this point), so p = **80** |
| `0x565330` | StartUp, previous state 2 (back from adventure), after `LoadPlayer(CURRENTPLAYER)` `0x565303` and `ShowOutro` `0x56530B` | stored music volume of that player |
| `0x565393` | StartUp, previous state 1 (back from quick play), after `LoadPlayer` `0x56536E` | stored music volume of that player |
| `0x5608F5` | main-screen activation handler `0x56084C` (assigned in `TfrmMainScreen.FormCreate` `0x56055D`, fired by `0x5531C0`, vtable `+0xF0`; call sites `0x55343F`, `0x5534BE`, `0x5652E1`, `0x56534C`, `0x5653AF`) | current player's music volume, on every activation of the main screen. On the first activation the handler first loads `CURRENTPLAYER` (`0x5608C2`) or asks for a new player (`0x5608A4`) |
| `0x56609A` | `TSaveGame.LoadFromFile` `0x565FEC` | music volume of **the object just loaded** (`[self+0x10]+0x18`, `0x566084`–`0x56608A`). This includes the temporary objects created by `GetPlayerName` (`0x568F37`–`0x568F53`) for each slot shown in the player list (`0x555512`) |
| `0x55BBAE` | `TfrmOptions.OnChangeVolumeMusic` `0x55BAA0` | Muziek slider position (stored at `0x55BB89`) — **live** |
| `0x55BFF3` | `TfrmOptions.btnReqOkClick` `0x55BE60` | Muziek slider position (stored at `0x55BFCE`) |
| `0x55C0F7` | `TfrmOptions.btnReqCancelClick` `0x55C03C` | the value saved when the form was created (`form+0x334`) |

### 1.4 Voice clips and all other menu sounds

- One path: `TData` wrapper `0x569C6C(self, name)` → `PlayWaveFromFile(soundmgr, name, p, 1)`
  `0x54F958` → `PlayWave` `0x54F778`. `0x54F958` has no other caller, `0x54F778` has no
  other caller, and the buffer-creating functions have no other callers (1.2). The wrapper
  has 66 call sites with 37 literal names (`Mn_In01`…`Mn_In09`, `Mn_Red02`…`Mn_red28`,
  `RCMn1`…`RCMn43`) plus three computed names; list in the scratch file
  `playwave-callsites.tsv`.
- **p** = `FUN_00569C28(TData)` (`0x569C93`): the current player's `settings+0x10`
  (FX volume) (`0x569C51`–`0x569C5D`); only if `TData+0x118` is nil, the defaults object's
  FX volume (`0x569C3D`–`0x569C49`). No per-clip or per-class value exists on this path.
- File lookup `0x54F958`: `<clip dir> + name + ".WAV"`; if that file does not exist, the
  resource file (`0x54FA3D`–`0x54FA97`). Clip directory = `menu.ini [GENERAL] SOUNDDIR`
  + `\`, else `<app dir>Sound\` (`0x5683E3`–`0x56841E`).
- `PlayWave` `0x54F778`: releases finished clips (`0x54F821`), creates and fills a buffer,
  `SetVolume(FUN_004B01EC(p))` (`0x54F854`–`0x54F863`), `Play(0, 0, 0)` = once
  (`0x54F8B5`–`0x54F8C1`), and (flag is always 1, `0x569C8E`) records it as the current clip.
- Handlers normally stop the previous clip first (`.StopCurrentSound` `0x54FFDC`, 53 call
  sites against 66 of the wrapper). Several handlers then block in a busy loop until the clip has
  finished (`0x56A9E4`, 38 call sites → `0x5500FC`, loop while GetStatus == 1); nothing touches
  the music buffer meanwhile.
- The voices volume (`settings+0x14`) and the three on/off bytes are touched only by
  `Assign` `0x56AD2C`, `LoadFromStream` `0x56AEEC`, `SaveToStream` `0x56B0A4` and the
  defaults loader `0x56B850`. Across `0x54E000`–`0x56D000` the pointer chain current player
  → settings is followed by an access to `+0x0C`, `+0x10`, `+0x18`, `+0x2C`, `+0x30`/`+0x34`
  or `+0x44` only. Independently of that, `SetVolume` has two call sites and the p of both
  is traced above, so no other field can reach a buffer.

### 1.5 The two sliders

- `TfrmOptions.Create` `0x55B124` builds `TCompEffects` in `Panel3` (`form+0x320`,
  `0x55B1D6`–`0x55B1EE`) and `TCompMusic` in `Panel4` (`form+0x324`, `0x55B1F4`–`0x55B20C`);
  the form resource has no slider objects, only `Panel1`–`Panel4` as hosts. Both derive from `TCompOptionB`, whose constructor
  `0x55902C` creates a `TGDISlider` at `comp+0x1FC` (`0x5590A6`–`0x5590B8`).
- Slider fields (`TCustomGDISlider`, defaults in its constructor `0x557D24`): `+0x170` small
  step = 1 (`0x557E87`), `+0x174` large step = 5 (`0x557E7A`), `+0x178` Min = 0, `+0x17C`
  Max = 100, `+0x180` Position, `+0x18C` repeat delay 250, `+0x190` repeat interval 50,
  width 200 (`0x557E60`). `TCompOptionB` then sets: repeat delay 0 (`0x559217`), repeat
  interval 0 (`0x559228`), **large step 10** (`0x55922E`–`0x55923E`), Position 0, **Min 0**
  (`0x559257`–`0x559264`), **Max 100** (`0x55926A`–`0x55927A`).
- `SetPosition` `0x558674`: clamp to Min..Max, and only when the value changes: store,
  move the needle (`0x558438`), fire OnChange (`0x557F98`, method pointer at `+0x1A0`).
- Input:
  - drag (needle mouse-move `0x558D94`): the needle is kept inside the slider and
    `Position = (needle.Left − slider.Left) · (Max − Min) div (slider.Width − needle.Width)
    + Min` (`0x55850C`, called at `0x558E7C`), then OnChange (`0x558E8D`) on every mouse
    move with the left button down and a non-zero x delta (`0x558DB5`–`0x558DD9`), whether
    or not the integer changed;
  - click on the track (`0x5580E4`, left button): Position −10 when the click is left of
    the needle centre, +10 otherwise. The repeat timer is armed with interval 0, and the
    timer class does not register a timer whose interval is 0 (`TDaviTimer` `0x49CAE9`–
    `0x49CAF0`), so one click is one step;
  - keys (`0x557FC4`, jump table `0x557FFA`): Left/Up −1, Right/Down +1, PgUp −10,
    PgDn +10, Home → Min, End → Max.
- Initial positions = the current player's FX volume and music volume (`0x55B261`–
  `0x55B2D3`); the same two values are kept in `form+0x330` / `form+0x334` for Cancel.
- OnChange handlers are attached in `GDIFormShow` (`0x55BD71`–`0x55BDAB`):
  - `OnChangeVolumeEffect` `0x55B98C`: position > previous → clip `RcMn16`, position <
    previous → clip `RcMn15`; **then** FX volume := position (`0x55BA75`). The clip is
    started before the store, so it plays at the previous FX value.
  - `OnChangeVolumeMusic` `0x55BAA0`: same two clips (at the FX volume), music volume :=
    position (`0x55BB89`), `SetMusicVolume` (`0x55BBAE`).
- OK `0x55BE60`: FX := slider (`0x55BFA4`), music := slider (`0x55BFCE`), `SetMusicVolume`,
  clip `RCMn1`, wait for it. Cancel `0x55C03C`: clip `RcMn2` and wait for it (still at the
  slider values), then FX := `form+0x330` (`0x55C0B4`), music := `form+0x334` (`0x55C0D2`),
  `SetMusicVolume` (`0x55C0F7`). The form is created, shown modally and freed by
  `btnOptionsClick` `0x560C94`; nothing is written to disk there.

### 1.6 Where the values are stored

- The menu's own player file is the binary stream `<app dir>SaveGame<n>.RCR`
  (`0x4B0344`, literals `SaveGame`, `.`, `RCR`). `TSettings.SaveToStream` `0x56B0A4` writes,
  as 32-bit integers after two leading values, FX (`+0x10`), music (`+0x18`), voices
  (`+0x14`); `LoadFromStream` `0x56AEEC` reads them back unclamped.
- `SaveToFile` `0x566158` is called from: `SavePlayer` `0x5693E8` ← `TData.DataDestroy`
  (`0x568AC5`, always when a player exists); `CreateNewPlayer` (`0x56968D`); `LoadPlayer`
  when the launch state is 2 (`0x5692E5`); `ShowOutro` (`0x565045`). Not after the options
  form, and not before another player is loaded over the current object (`0x55660D`).
- INI export "WriteToInis" `0x567344`: copies `Settings\PlayerDef.ini` to
  `Settings\Player<index+1>.ini` with `CopyFileA(…, bFailIfExists = TRUE)`, then writes keys.
  The sound part `0x566768` writes `[Sound] Allowed = 1` (`0x566808`), `MusicVolume =
  settings+0x18` (`0x56681C`–`0x56683F`), `SoundVolume = settings+0x10` (`0x566842`–
  `0x566865`), both as integers, taken from the current player. Called from
  `DataDestroy` only when Exit was called and the launch state is not 0 (`0x568A84`–
  `0x568AB1`), and from `ShowOutro` (`0x565057`).
- The strings `MusicVolume` / `SoundVolume` are referenced only by that writer. The menu
  never reads a volume from `Player<n>.ini` or `PlayerDef.ini`; "LoadFromInis"
  (`0x567690`–`0x567B90`) reads `GameType`, `[PLAYER]` values, `Completed`,
  `CurrentSubLevel` and `SoftwareOnly` only. `EffectsVolume` does not occur in the binary.
- New player: `CreateNewPlayer` `0x56643C` runs the normal constructor (80 / 80) and then
  `settings.Assign(defaults)` (`0x56651B`–`0x566533`). The defaults come from
  `Settings\static.ini [DEFAULTSETTINGS]` (`0x5682CB`–`0x5682DF` → `0x551ED4` → `0x56B850`):
  `MUSICVOLUME`, `FXVOLUME`, `VOICESVOLUME`, fallback 100 each when the key is missing
  (`0x56B897`, `0x56B8B1`, `0x56B8CB`). Shipped file: `MusicVolume=80`, `FXVolume=80`,
  `VoicesVolume=80`, `MusicOn=1`, `FXOn=1`, `VoicesOn=1`. A missing section is not
  tolerated: `TSafeIniFile` raises (`0x4A4EBB`–`0x4A4F55`), the handler logs "problem
  reading static.ini" and re-raises (raw bytes `0x551FA1`–`0x551FB9`).

### 1.7 Start, stop, videos

- `TMenuIni` load `0x550F98`: `PREVSTATE` → `+9`; a command-line parameter `/FIRSTTIME`
  (or `SIMFIRSTTIME ≠ 0`) forces first-time := 1 and previous state := 0 (`0x5511D2`–`0x551226`).
- StartUp `0x565214` (from `TfrmMain.FormActivate` `0x564974`), by previous state:
  0 → `ShowLeader`, `ShowIntro`, `StartMusic`, main screen; 1 → `LoadPlayer`, `StartMusic`,
  main screen; 2 → `LoadPlayer`, `ShowOutro`, `StartMusic`, main screen.
- Each video is `ShowIntroMovie` `0x56405C`: a `TfrmIntro` with a `TMediaPlayer`, shown with
  `ShowModal` (`0x56410C`, vtable `+0xD8` = `0x44DD18`). `StartMusic` is reached only after
  it returns. `ShowOutro` `0x564EEC` plays the outro only when `[player+0x0C]+0x2C` is set
  (`0x564F87`–`0x564F9B`); that byte is `[SubLevel1_5] Completed` from `Player<n>.ini`
  (`0x567781`–`0x56779B`).
- Leaving: `TData` "Exit" `0x5699F0` sets `+0x124` and calls the application's terminate
  (`0x451440` → `PostQuitMessage`). Callers: Start button `TfrmStartGame.BtnNextClick`
  `0x55CCD8` (after the clip `RCMn32` or `RCMn43` has finished, `0x55CD2E`–`0x55CD6B`),
  the two quit handlers (`0x553355`, `0x560C89`). `DataDestroy` `0x568A0C` then exports the
  INI (launch only), saves the player, writes `menu.ini` (`PREVSTATE` = launch state,
  `EXITCODE` = 40 for a launch, 255 for quit; `0x551880`–`0x5518F5`) and frees the sound
  manager (`0x568B16`–`0x568B1E`), whose destructor stops the music.
- The menu contains no process launch for the game (`ShellExecuteA` is called only from
  the exception dialog, `0x56C354`).

### 1.8 Absent

No second volume stage, no pan, no frequency change, no fade or timer-driven volume change
(`SetVolume` has exactly the two call sites of 1.2), no ducking, no mute path (`MUSICON`
etc. unused), no MCI audio command for the videos (the media-player unit `0x561B00`–
`0x563E00` uses the message immediates `0x803`, `0x804`, `0x806`, `0x807`, `0x808`, `0x80B`,
`0x80D`, `0x814`, `0x841`–`0x843`; `0x873` does not occur).

---

## 2. Inferred

- Interface slot meanings (`+0x30` Play, `+0x3C` SetVolume, `+0x40` SetPan, `+0x44`
  SetFrequency, `+0x48` Stop, `+0x24` GetStatus) and flag meanings (`0x80E0` = global focus
  + volume + pan + frequency control; cooperative level 1 = normal; Play flag 1 = looping)
  are the standard DirectSound definitions, not something the binary states.
- With global focus the music keeps playing when the menu window loses focus.
- `0x403848` / `0x40389C` in the static.ini handler are the RTL's re-raise and done-except
  helpers (they follow `0x40382C`, the raise helper with 183 call sites, in the RTL's usual
  order).
- INI key lookup is case-insensitive (Windows profile API through `TIniFile`), so the code's
  `MUSICVOLUME` finds the file's `MusicVolume`.
- The shut-down order (terminate → data module destroyed → `DataDestroy`) is standard VCL
  behaviour; the destroy handler itself is confirmed.
- The launcher (`RedCat.exe`, not examined) starts the game on `EXITCODE=40` and starts the
  menu again afterwards without `/FIRSTTIME`.
- Slider geometry: the slider takes the size of its background bitmap when that is not
  empty (`0x558948`); the bitmap is the resource named `0x120000` (`0x5686FC`–`0x568713`,
  `TData+0x140` → `0x559159`–`0x559177`), recovered as 206×60 px. The needle takes the size
  of its button definition `gdfSliderBackgnd` (`TData+0x94`; forced in `0x4AE9B0`), which
  the form resource gives as 37×29. Travel = 169 px, so a drag yields `dx·100 div 169` and
  every integer 0..100 is reachable.
- Labels: `TCompEffects` uses string-table entry `[0x572404]+0x11C` and `TCompMusic`
  `+0x120` (`0x5596BC`, `0x559898`); with 4-byte entries these are `[MENUSTRINGS]` 72
  "Geluidseffecten" and 73 "Muziek".
- Cold start: the music runs at p = 80 only for the moment between `StartMusic` and the
  first main-screen activation in the same call chain (or while the new-player name dialog
  is open); after that it is the player's stored value.
- Opening the player list sets the music to the stored volume of each listed player in
  turn (1.3, row `0x56609A`); it stays at the last one until the next `SetMusicVolume`.
  Audible only when players have different music volumes.
- Shipped media, for orientation (header data of the original files): `Sounds\menumuz.wav`
  22050 Hz 16-bit stereo, 34.37 s; `VoiceNL\RCMN15.wav` 0.83 s and `RCMN16.wav` 0.94 s,
  22050 Hz 8-bit mono; `RCMN1.wav` / `RCMN2.wav` 1.09 s. The shipped `menu.ini` points
  `SOUNDDIR` at `VoiceNL` and `MUSICDIR` at `Sounds`.

---

## 3. Unresolved

- What `RcMn15` / `RcMn16` say (the clips started by slider movement); only names, format
  and length are known.
- Whether the slider can receive keyboard focus in the options form. The key handler
  exists (1.5); focus and tab order were not traced.
- The exact mouse sequence that yields a given drag value depends on the needle start
  offset (`needle+0x19C`, set on mouse-down `0x558D33`); only the mapping formula is
  established. The 206 px / 37 px sizes rest on the recovered image and form resource.
- Loudness and audio routing of the three videos (MCI device, outside the menu's control).
- The mixing format of the original output: the menu never sets the primary buffer format
  and uses the normal cooperative level, so quantisation and resampling of the mix depend
  on the DirectSound version and driver. This affects quality, not the gains above.
- The resource-file fallback for clips (`0x4A6A10` / `0x4A6574`, used only when
  `<clip dir>\<name>.WAV` is missing) was not read; whether it delivers the same samples as
  the loose files is not established.
- Whether a stale "current clip" pointer after `StopSoundBuffer` (`0x54F4B4` frees the
  object without clearing `soundmgr+0x04`) ever matters; not followed.
- Nothing was verified at runtime.

---

## 4. Scratch files

`tools/out/menu-audio-research/`: `peutil.py` (read bytes of the original by address),
`strrefs.py` (string literals referenced in an address range), `fieldtable.py` (published
field table of a class), `playwave_sites.py` → `playwave-callsites.tsv` (66 call sites of
`0x569C6C` with clip names), `voltable.py` (the table in section 0).
