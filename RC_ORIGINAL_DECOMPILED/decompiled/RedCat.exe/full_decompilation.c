/* Ghidra-generated C-like pseudocode for inspection. Not original source and not a buildable reconstruction. */
/*
 * FUN_00401000 at 00401000
 * undefined __cdecl FUN_00401000(LPCSTR param_1, LPCSTR param_2)
 * Address ranges: 00401000-00401017
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_00401000(LPCSTR param_1,LPCSTR param_2)

{
  GetPrivateProfileIntA(param_1,param_2,0,(LPCSTR)&DAT_00407e30);
  return;
}


/*
 * FUN_00401020 at 00401020
 * undefined __cdecl FUN_00401020(char * param_1)
 * Address ranges: 00401020-004010b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00401020(char *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  FUN_00405056(&DAT_00407e30,0x118);
  uVar2 = 0xffffffff;
  pcVar5 = (char *)&DAT_00407e30;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if ((&DAT_00407e2e)[~uVar2] != '\\') {
    uVar2 = 0xffffffff;
    pcVar5 = &DAT_00407030;
    do {
      pcVar7 = pcVar5;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar7 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar3 = -1;
    pcVar5 = (char *)&DAT_00407e30;
    do {
      pcVar6 = pcVar5;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    pcVar5 = pcVar7 + -uVar2;
    pcVar7 = pcVar6 + -1;
    for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  uVar2 = 0xffffffff;
  do {
    pcVar5 = param_1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar3 = -1;
  pcVar7 = (char *)&DAT_00407e30;
  do {
    pcVar6 = pcVar7;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar6 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar6;
  } while (cVar1 != '\0');
  pcVar5 = pcVar5 + -uVar2;
  pcVar7 = pcVar6 + -1;
  for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  _DAT_00407f5c = 1;
  return;
}


/*
 * FUN_004010c0 at 004010c0
 * int __stdcall FUN_004010c0(void)
 * Address ranges: 004010c0-00401126
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int FUN_004010c0(void)

{
  int iVar1;
  CHAR local_40 [64];
  
  FUN_00401020(s___Settings_Menu_ini_004070bc);
  iVar1 = FUN_00401000(s_General_004070a8,s_ExitCode_004070b0);
  if (iVar1 == 0) {
    FUN_00401500(local_40,(byte *)s__s___d__No_value_specified_for_m_0040703c);
    MessageBoxA((HWND)0x0,local_40,s_MOTOR_00407034,0);
  }
  return iVar1;
}


/*
 * FUN_00401130 at 00401130
 * undefined __cdecl FUN_00401130(uint * param_1, undefined4 param_2)
 * Address ranges: 00401130-0040121b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_00401130(uint *param_1,undefined4 param_2)

{
  uint **ppuVar1;
  int iVar2;
  uint *local_50 [20];
  
  ppuVar1 = local_50;
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppuVar1 = (uint *)0x0;
    ppuVar1 = ppuVar1 + 1;
  }
  local_50[0] = param_1;
  local_50[1] = (uint *)param_2;
  iVar2 = FUN_00405171(0,param_1,local_50);
  if (iVar2 == -1) {
    switch(DAT_00407f64) {
    case 2:
      MessageBoxA((HWND)0x0,s_File_or_path_is_not_found_00407150,s_MOTOR_00407034,0);
      FUN_004010c0();
      return;
    case 7:
      MessageBoxA((HWND)0x0,s_Argument_list_exceeds_1024_bytes_00407188,s_MOTOR_00407034,0);
      FUN_004010c0();
      return;
    case 8:
      MessageBoxA((HWND)0x0,s_Specified_file_is_not_executable_00407108,s_MOTOR_00407034,0);
      FUN_004010c0();
      return;
    case 0xc:
      MessageBoxA((HWND)0x0,s_Not_enough_memory_is_available_t_004070d0,s_MOTOR_00407034,0);
      break;
    case 0x16:
      MessageBoxA((HWND)0x0,s_mode_argument_is_invalid_0040716c,s_MOTOR_00407034,0);
      FUN_004010c0();
      return;
    }
  }
  FUN_004010c0();
  return;
}


/*
 * FUN_00401250 at 00401250
 * undefined4 __stdcall FUN_00401250(HINSTANCE param_1, int param_2, undefined4 param_3, int param_4)
 * Address ranges: 00401250-00401453
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00401250(HINSTANCE param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  ATOM AVar2;
  int iVar3;
  int nWidth;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  char *pcVar8;
  char *pcVar9;
  HWND hWndParent;
  HMENU hMenu;
  LPVOID lpParam;
  WNDCLASSEXA local_b0;
  tagMSG local_80;
  char local_64 [100];
  
  bVar7 = false;
  _DAT_00407ad4 = param_1;
  if (param_2 == 0) {
    local_b0.cbSize = 0x30;
    local_b0.lpszClassName = s_MOTOR_00407034;
    local_b0.hInstance = param_1;
    local_b0.lpfnWndProc = (WNDPROC)&LAB_00401460;
    local_b0.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    local_b0.hIcon = LoadIconA(param_1,(LPCSTR)0x7f00);
    local_b0.hIconSm = LoadIconA(param_1,(LPCSTR)0x7f00);
    local_b0.lpszMenuName = (LPCSTR)0x0;
    local_b0.hbrBackground = GetStockObject(4);
    local_b0.style = 0;
    local_b0.cbClsExtra = 0;
    local_b0.cbWndExtra = 0;
    AVar2 = RegisterClassExA(&local_b0);
    if (AVar2 == 0) {
      MessageBoxA((HWND)0x0,s_WinMain____RegisterClass___faile_004071ec,s_Err___7_CCWINMAP_00407210,
                  0x30);
    }
    else {
      lpParam = (LPVOID)0x0;
      hMenu = (HMENU)0x0;
      hWndParent = (HWND)0x0;
      iVar3 = GetSystemMetrics(1);
      nWidth = GetSystemMetrics(0);
      DAT_00407ad0 = CreateWindowExA(0x40000,s_MOTOR_00407034,&DAT_00407f60,0x80000000,0,0,nWidth,
                                     iVar3,hWndParent,hMenu,param_1,lpParam);
      if (DAT_00407ad0 != (HWND)0x0) {
        ShowWindow(DAT_00407ad0,param_4);
        _strncpy(local_64,s__FirstTime_004071e0,99);
        do {
          while( true ) {
            while( true ) {
              do {
                while( true ) {
                  BVar4 = PeekMessageA(&local_80,(HWND)0x0,0,0,1);
                  if (BVar4 == 0) break;
                  if (local_80.message == 0x12) {
                    return local_80.wParam;
                  }
                  TranslateMessage(&local_80);
                  DispatchMessageA(&local_80);
                }
              } while (bVar7);
              iVar3 = FUN_00401130((uint *)s_rchcmenu_dat_004071d0,local_64);
              if (iVar3 != 0x28) break;
              FUN_00401130((uint *)s_rchcgame_dat_004071b8,s__game_004071c8);
              _strncpy(local_64,s__Default_004071ac,99);
            }
            if (iVar3 != 0x2a) break;
            FUN_00401130((uint *)s_rchcmenu_dat_004071d0,&DAT_00407f60);
          }
          uVar5 = 0xffffffff;
          pcVar8 = &DAT_00407f60;
          do {
            pcVar9 = pcVar8;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar9 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar9;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          pcVar8 = pcVar9 + -uVar5;
          pcVar9 = local_64;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar9 = pcVar9 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar9 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar9 = pcVar9 + 1;
          }
          SendMessageA(DAT_00407ad0,0x10,0,0);
          bVar7 = true;
        } while( true );
      }
    }
  }
  return 0;
}


/*
 * FUN_00401500 at 00401500
 * int __cdecl FUN_00401500(undefined1 * param_1, byte * param_2)
 * Address ranges: 00401500-00401551
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_00401500(undefined1 *param_1,byte *param_2)

{
  int iVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_18 = 0x42;
  local_20 = 0x7fffffff;
  iVar1 = FUN_004019b2((int *)&local_24,param_2,(undefined4 *)&stack0x0000000c);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_0040189d(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar1;
}


/*
 * FUN_00401552 at 00401552
 * undefined __stdcall FUN_00401552(void)
 * Address ranges: 00401552-0040157e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_00401552(void)

{
  if (DAT_00409498 != (code *)0x0) {
    (*DAT_00409498)();
  }
  FUN_0040163a((undefined4 *)&DAT_00407008,(undefined4 *)&DAT_00407014);
  FUN_0040163a((undefined4 *)&DAT_00407000,(undefined4 *)&DAT_00407004);
  return;
}


/*
 * FUN_0040157f at 0040157f
 * undefined __cdecl FUN_0040157f(UINT param_1)
 * Address ranges: 0040157f-0040158f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_0040157f(UINT param_1)

{
  FUN_004015a1(param_1,0,0);
  return;
}


/*
 * __exit at 00401590
 * noreturn void __cdecl __exit(int _Code)
 * Address ranges: 00401590-004015a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __exit  Library: Visual Studio 2003 Release
 */


/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_004015a1(_Code,1,0);
  return;
}


/*
 * FUN_004015a1 at 004015a1
 * undefined __cdecl FUN_004015a1(UINT param_1, int param_2, int param_3)
 * Address ranges: 004015a1-00401639
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004015a1(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  if (DAT_00407fac == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_00407fa8 = 1;
  DAT_00407fa4 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_00409494 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_00409490 - 4), DAT_00409494 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_00409494 <= puVar1);
    }
    FUN_0040163a((undefined4 *)&DAT_00407018,(undefined4 *)&DAT_00407020);
  }
  FUN_0040163a((undefined4 *)&DAT_00407024,(undefined4 *)&DAT_00407028);
  if (param_3 != 0) {
    return;
  }
  DAT_00407fac = 1;
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}


/*
 * FUN_0040163a at 0040163a
 * undefined __cdecl FUN_0040163a(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 0040163a-00401653
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_0040163a(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}


/*
 * _strncpy at 00401660
 * char * __cdecl _strncpy(char * _Dest, char * _Source, size_t _Count)
 * Address ranges: 00401660-0040175d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _strncpy  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */


/* Library Function - Single Match
    _strncpy
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x0040169e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_004016db;
        goto LAB_00401749;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x00401745:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_00401749:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_004016db;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x00401745;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x00401745;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x00401745;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x0040169e:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_004016db:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}


/*
 * entry at 0040175e
 * undefined __stdcall entry(void)
 * Address ranges: 0040175e-00401848
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  DWORD DVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  HMODULE pHVar5;
  UINT UVar6;
  _STARTUPINFOA local_60;
  undefined1 *local_1c;
  _EXCEPTION_POINTERS *local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00406118;
  puStack_10 = &LAB_00402ab0;
  pvStack_14 = ExceptionList;
  local_1c = &stack0xffffff88;
  ExceptionList = &pvStack_14;
  DVar1 = GetVersion();
  _DAT_00407f7c = DVar1 >> 8 & 0xff;
  _DAT_00407f78 = DVar1 & 0xff;
  _DAT_00407f74 = _DAT_00407f78 * 0x100 + _DAT_00407f7c;
  _DAT_00407f70 = DVar1 >> 0x10;
  iVar2 = FUN_0040297b(0);
  if (iVar2 == 0) {
    FUN_00401879(0x1c);
  }
  local_8 = 0;
  FUN_004027d0();
  DAT_00409484 = GetCommandLineA();
  DAT_00407fb0 = FUN_0040269e();
  FUN_00402451();
  FUN_00402398();
  FUN_00401552();
  local_60.dwFlags = 0;
  GetStartupInfoA(&local_60);
  pbVar3 = FUN_00402340();
  if ((local_60.dwFlags & 1) == 0) {
    uVar4 = 10;
  }
  else {
    uVar4 = (uint)local_60.wShowWindow;
  }
  iVar2 = 0;
  pHVar5 = GetModuleHandleA((LPCSTR)0x0);
  UVar6 = FUN_00401250(pHVar5,iVar2,pbVar3,uVar4);
  FUN_0040157f(UVar6);
  FUN_004021bc(local_18->ExceptionRecord->ExceptionCode,local_18);
  return;
}


/*
 * __amsg_exit at 00401854
 * void __cdecl __amsg_exit(int param_1)
 * Address ranges: 00401854-00401875
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __amsg_exit  Library: Visual Studio 2003 Release
 */


/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if (DAT_00407fb8 == 1) {
    FUN_00402b88();
  }
  FUN_00402bc1(param_1);
  (*(code *)PTR___exit_00407230)(0xff);
  return;
}


/*
 * FUN_00401879 at 00401879
 * undefined __cdecl FUN_00401879(DWORD param_1)
 * Address ranges: 00401879-0040189b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_00401879(DWORD param_1)

{
  if (DAT_00407fb8 == 1) {
    FUN_00402b88();
  }
  FUN_00402bc1(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(0xff);
}


/*
 * FUN_0040189d at 0040189d
 * uint __cdecl FUN_0040189d(uint param_1, int * param_2)
 * Address ranges: 0040189d-004019b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __cdecl FUN_0040189d(uint param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  byte bVar5;
  undefined3 extraout_var;
  undefined *puVar6;
  int *piVar7;
  
  piVar4 = param_2;
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  if (((uVar1 & 0x82) == 0) || ((uVar1 & 0x40) != 0)) {
LAB_004019a6:
    param_2[3] = uVar1 | 0x20;
  }
  else {
    if ((uVar1 & 1) != 0) {
      param_2[1] = 0;
      if ((uVar1 & 0x10) == 0) goto LAB_004019a6;
      *param_2 = param_2[2];
      param_2[3] = uVar1 & 0xfffffffe;
    }
    uVar1 = param_2[3];
    param_2[1] = 0;
    param_2 = (int *)0x0;
    piVar4[3] = uVar1 & 0xffffffef | 2;
    if (((uVar1 & 0x10c) == 0) &&
       (((piVar4 != (int *)&DAT_00407398 && (piVar4 != (int *)&DAT_004073b8)) ||
        (bVar5 = FUN_00402f9f(uVar2), CONCAT31(extraout_var,bVar5) == 0)))) {
      FUN_00402f5b(piVar4);
    }
    if ((*(ushort *)(piVar4 + 3) & 0x108) == 0) {
      piVar7 = (int *)0x1;
      param_2 = (int *)FUN_00402dae(uVar2,(char *)&param_1,1);
    }
    else {
      pcVar3 = (char *)piVar4[2];
      piVar7 = (int *)(*piVar4 - (int)pcVar3);
      *piVar4 = (int)(pcVar3 + 1);
      piVar4[1] = piVar4[6] + -1;
      if ((int)piVar7 < 1) {
        if (uVar2 == 0xffffffff) {
          puVar6 = &DAT_004072c8;
        }
        else {
          puVar6 = (undefined *)((&DAT_00409380)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 8);
        }
        if ((puVar6[4] & 0x20) != 0) {
          FUN_00402d14(uVar2,0,2);
        }
      }
      else {
        param_2 = (int *)FUN_00402dae(uVar2,pcVar3,(uint)piVar7);
      }
      *(undefined1 *)piVar4[2] = (undefined1)param_1;
    }
    if (param_2 == piVar7) {
      return param_1 & 0xff;
    }
    piVar4[3] = piVar4[3] | 0x20;
  }
  return 0xffffffff;
}


/*
 * FUN_004019b2 at 004019b2
 * int __cdecl FUN_004019b2(int * param_1, byte * param_2, undefined4 * param_3)
 * Address ranges: 004019b2-004020d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_004019b2(int *param_1,byte *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  uint uVar2;
  WCHAR *pWVar3;
  WCHAR *pWVar4;
  undefined4 uVar5;
  short *psVar6;
  int *piVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined1 local_24c [511];
  undefined1 local_4d;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  uint local_40;
  CHAR local_3c [4];
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  char local_1a;
  char local_19;
  int local_18;
  int local_14;
  undefined1 *local_10;
  WCHAR *local_c;
  uint local_8;
  
  local_34 = 0;
  bVar9 = *param_2;
  local_10 = (undefined1 *)0x0;
  local_18 = 0;
  pbVar1 = param_2;
  do {
    if ((bVar9 == 0) || (param_2 = pbVar1 + 1, local_18 < 0)) {
      return local_18;
    }
    if (((char)bVar9 < ' ') || ('x' < (char)bVar9)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(byte *)((int)&CreateWindowExA_exref + (int)(char)bVar9) & 0xf;
    }
    local_34 = (int)(char)(&DAT_00406124)[uVar2 * 8 + local_34] >> 4;
    switch(local_34) {
    case 0:
switchD_00401a20_caseD_0:
      local_28 = 0;
      if ((PTR_DAT_00407618[(uint)bVar9 * 2 + 1] & 0x80) != 0) {
        FUN_004020f3((int)(char)bVar9,param_1,&local_18);
        bVar9 = *param_2;
        param_2 = pbVar1 + 2;
      }
      FUN_004020f3((int)(char)bVar9,param_1,&local_18);
      break;
    case 1:
      local_14 = -1;
      local_38 = 0;
      local_2c = 0;
      local_24 = 0;
      local_20 = 0;
      local_8 = 0;
      local_28 = 0;
      break;
    case 2:
      if (bVar9 == 0x20) {
        local_8 = local_8 | 2;
      }
      else if (bVar9 == 0x23) {
        local_8 = local_8 | 0x80;
      }
      else if (bVar9 == 0x2b) {
        local_8 = local_8 | 1;
      }
      else if (bVar9 == 0x2d) {
        local_8 = local_8 | 4;
      }
      else if (bVar9 == 0x30) {
        local_8 = local_8 | 8;
      }
      break;
    case 3:
      if (bVar9 == 0x2a) {
        local_24 = FUN_00402191((int *)&param_3);
        if (local_24 < 0) {
          local_8 = local_8 | 4;
          local_24 = -local_24;
        }
      }
      else {
        local_24 = (char)bVar9 + -0x30 + local_24 * 10;
      }
      break;
    case 4:
      local_14 = 0;
      break;
    case 5:
      if (bVar9 == 0x2a) {
        local_14 = FUN_00402191((int *)&param_3);
        if (local_14 < 0) {
          local_14 = -1;
        }
      }
      else {
        local_14 = (char)bVar9 + -0x30 + local_14 * 10;
      }
      break;
    case 6:
      if (bVar9 == 0x49) {
        if ((*param_2 != 0x36) || (pbVar1[2] != 0x34)) {
          local_34 = 0;
          goto switchD_00401a20_caseD_0;
        }
        param_2 = pbVar1 + 3;
        local_8 = local_8 | 0x8000;
      }
      else if (bVar9 == 0x68) {
        local_8 = local_8 | 0x20;
      }
      else if (bVar9 == 0x6c) {
        local_8 = local_8 | 0x10;
      }
      else if (bVar9 == 0x77) {
        local_8 = local_8 | 0x800;
      }
      break;
    case 7:
      pWVar4 = local_c;
      if ((char)bVar9 < 'h') {
        if ((char)bVar9 < 'e') {
          if ((char)bVar9 < 'Y') {
            if (bVar9 == 0x58) {
LAB_00401e31:
              local_30 = 7;
LAB_00401e38:
              local_10 = (undefined1 *)0x10;
              if ((local_8 & 0x80) != 0) {
                local_1a = '0';
                local_19 = (char)local_30 + 'Q';
                local_20 = 2;
              }
              goto LAB_00401ea2;
            }
            if (bVar9 != 0x43) {
              if ((bVar9 != 0x45) && (bVar9 != 0x47)) {
                if (bVar9 == 0x53) {
                  if ((local_8 & 0x830) == 0) {
                    local_8 = local_8 | 0x800;
                  }
                  goto LAB_00401bdf;
                }
                goto LAB_00401fbc;
              }
              local_38 = 1;
              bVar9 = bVar9 + 0x20;
              goto LAB_00401c40;
            }
            if ((local_8 & 0x830) == 0) {
              local_8 = local_8 | 0x800;
            }
LAB_00401c6d:
            if ((local_8 & 0x810) == 0) {
              uVar5 = FUN_00402191((int *)&param_3);
              local_24c[0] = (char)uVar5;
              local_10 = (undefined1 *)0x1;
            }
            else {
              uVar5 = FUN_004021ae((int *)&param_3);
              local_10 = (undefined1 *)FUN_004030fb(local_24c,(WCHAR)uVar5);
              if ((int)local_10 < 0) {
                local_2c = 1;
              }
            }
            pWVar4 = (WCHAR *)local_24c;
          }
          else if (bVar9 == 0x5a) {
            psVar6 = (short *)FUN_00402191((int *)&param_3);
            if ((psVar6 == (short *)0x0) ||
               (pWVar4 = *(WCHAR **)(psVar6 + 2), pWVar4 == (WCHAR *)0x0)) {
              local_c = (WCHAR *)PTR_DAT_00407238;
              pWVar4 = (WCHAR *)PTR_DAT_00407238;
              goto LAB_00401db2;
            }
            if ((local_8 & 0x800) == 0) {
              local_28 = 0;
              local_10 = (undefined1 *)(int)*psVar6;
            }
            else {
              local_28 = 1;
              local_10 = (undefined1 *)((uint)(int)*psVar6 >> 1);
            }
          }
          else {
            if (bVar9 == 99) goto LAB_00401c6d;
            if (bVar9 == 100) goto LAB_00401e97;
          }
        }
        else {
LAB_00401c40:
          local_8 = local_8 | 0x40;
          pWVar4 = (WCHAR *)local_24c;
          if (local_14 < 0) {
            local_14 = 6;
          }
          else if ((local_14 == 0) && (bVar9 == 0x67)) {
            local_14 = 1;
          }
          local_4c = *param_3;
          local_48 = param_3[1];
          param_3 = param_3 + 2;
          local_c = pWVar4;
          (*(code *)PTR_FUN_00407600)(&local_4c,local_24c,(int)(char)bVar9,local_14,local_38);
          uVar2 = local_8 & 0x80;
          if ((uVar2 != 0) && (local_14 == 0)) {
            (*(code *)PTR_FUN_0040760c)(local_24c);
          }
          if ((bVar9 == 0x67) && (uVar2 == 0)) {
            (*(code *)PTR_FUN_00407604)(local_24c);
          }
          if (local_24c[0] == '-') {
            local_8 = local_8 | 0x100;
            pWVar4 = (WCHAR *)(local_24c + 1);
            local_c = pWVar4;
          }
LAB_00401db2:
          local_10 = (undefined1 *)_strlen((char *)pWVar4);
          pWVar4 = local_c;
        }
      }
      else {
        if (bVar9 == 0x69) {
LAB_00401e97:
          local_8 = local_8 | 0x40;
        }
        else {
          if (bVar9 == 0x6e) {
            piVar7 = (int *)FUN_00402191((int *)&param_3);
            if ((local_8 & 0x20) == 0) {
              *piVar7 = local_18;
            }
            else {
              *(undefined2 *)piVar7 = (undefined2)local_18;
            }
            local_2c = 1;
            break;
          }
          if (bVar9 == 0x6f) {
            local_10 = (undefined1 *)0x8;
            if ((local_8 & 0x80) != 0) {
              local_8 = local_8 | 0x200;
            }
            goto LAB_00401ea2;
          }
          if (bVar9 == 0x70) {
            local_14 = 8;
            goto LAB_00401e31;
          }
          if (bVar9 == 0x73) {
LAB_00401bdf:
            iVar10 = local_14;
            if (local_14 == -1) {
              iVar10 = 0x7fffffff;
            }
            pWVar3 = (WCHAR *)FUN_00402191((int *)&param_3);
            if ((local_8 & 0x810) == 0) {
              pWVar4 = pWVar3;
              if (pWVar3 == (WCHAR *)0x0) {
                pWVar3 = (WCHAR *)PTR_DAT_00407238;
                pWVar4 = (WCHAR *)PTR_DAT_00407238;
              }
              for (; (iVar10 != 0 && ((char)*pWVar3 != '\0')); pWVar3 = (WCHAR *)((int)pWVar3 + 1))
              {
                iVar10 = iVar10 + -1;
              }
              local_10 = (undefined1 *)((int)pWVar3 - (int)pWVar4);
            }
            else {
              if (pWVar3 == (WCHAR *)0x0) {
                pWVar3 = (WCHAR *)PTR_DAT_0040723c;
              }
              local_28 = 1;
              for (pWVar4 = pWVar3; (iVar10 != 0 && (*pWVar4 != L'\0')); pWVar4 = pWVar4 + 1) {
                iVar10 = iVar10 + -1;
              }
              local_10 = (undefined1 *)((int)pWVar4 - (int)pWVar3 >> 1);
              pWVar4 = pWVar3;
            }
            goto LAB_00401fbc;
          }
          if (bVar9 != 0x75) {
            if (bVar9 != 0x78) goto LAB_00401fbc;
            local_30 = 0x27;
            goto LAB_00401e38;
          }
        }
        local_10 = (undefined1 *)0xa;
LAB_00401ea2:
        if ((local_8 & 0x8000) == 0) {
          if ((local_8 & 0x20) == 0) {
            if ((local_8 & 0x40) == 0) {
              uVar2 = FUN_00402191((int *)&param_3);
              uVar13 = (ulonglong)uVar2;
              goto LAB_00401ef5;
            }
            uVar2 = FUN_00402191((int *)&param_3);
          }
          else if ((local_8 & 0x40) == 0) {
            uVar2 = FUN_00402191((int *)&param_3);
            uVar2 = uVar2 & 0xffff;
          }
          else {
            uVar5 = FUN_00402191((int *)&param_3);
            uVar2 = (uint)(short)uVar5;
          }
          uVar13 = (ulonglong)(int)uVar2;
        }
        else {
          uVar13 = FUN_0040219e((int *)&param_3);
        }
LAB_00401ef5:
        iVar10 = (int)(uVar13 >> 0x20);
        if ((((local_8 & 0x40) != 0) && (iVar10 == 0 || (longlong)uVar13 < 0)) &&
           ((longlong)uVar13 < 0)) {
          local_8 = local_8 | 0x100;
          uVar13 = CONCAT44(-(iVar10 + (uint)((int)uVar13 != 0)),-(int)uVar13);
        }
        uVar2 = (uint)(uVar13 >> 0x20);
        uVar15 = uVar13 & 0xffffffff;
        if ((local_8 & 0x8000) == 0) {
          uVar2 = 0;
        }
        if (local_14 < 0) {
          local_14 = 1;
        }
        else {
          local_8 = local_8 & 0xfffffff7;
        }
        if ((int)uVar13 == 0 && uVar2 == 0) {
          local_20 = 0;
        }
        local_c = (WCHAR *)&local_4d;
        while( true ) {
          uVar11 = (uint)uVar15;
          iVar10 = local_14 + -1;
          if ((local_14 < 1) && (uVar11 == 0 && uVar2 == 0)) break;
          local_40 = (int)local_10 >> 0x1f;
          local_44 = (uint)local_10;
          local_14 = iVar10;
          uVar14 = __aullrem(uVar11,uVar2,(uint)local_10,local_40);
          iVar10 = (int)uVar14 + 0x30;
          uVar15 = __aulldiv(uVar11,uVar2,local_44,local_40);
          uVar2 = (uint)(uVar15 >> 0x20);
          if (0x39 < iVar10) {
            iVar10 = iVar10 + local_30;
          }
          pWVar4 = (WCHAR *)((int)local_c + -1);
          *(char *)local_c = (char)iVar10;
          local_c = pWVar4;
        }
        iVar8 = -(int)local_c;
        local_10 = &local_4d + iVar8;
        pWVar4 = (WCHAR *)((int)local_c + 1);
        local_14 = iVar10;
        if (((local_8 & 0x200) != 0) &&
           ((*(char *)pWVar4 != '0' || (local_10 == (undefined1 *)0x0)))) {
          *(char *)local_c = '0';
          local_10 = (undefined1 *)((int)&local_4c + iVar8);
          pWVar4 = local_c;
        }
      }
LAB_00401fbc:
      local_c = pWVar4;
      uVar2 = local_8;
      if (local_2c == 0) {
        if ((local_8 & 0x40) != 0) {
          if ((local_8 & 0x100) == 0) {
            if ((local_8 & 1) == 0) {
              if ((local_8 & 2) == 0) goto LAB_00401ff4;
              local_1a = ' ';
            }
            else {
              local_1a = '+';
            }
          }
          else {
            local_1a = '-';
          }
          local_20 = 1;
        }
LAB_00401ff4:
        iVar10 = (local_24 - local_20) - (int)local_10;
        if ((local_8 & 0xc) == 0) {
          FUN_00402128(0x20,iVar10,param_1,&local_18);
        }
        FUN_00402159(&local_1a,local_20,param_1,&local_18);
        if (((uVar2 & 8) != 0) && ((uVar2 & 4) == 0)) {
          FUN_00402128(0x30,iVar10,param_1,&local_18);
        }
        if ((local_28 == 0) || (puVar12 = local_10, pWVar4 = local_c, (int)local_10 < 1)) {
          FUN_00402159((char *)local_c,(int)local_10,param_1,&local_18);
        }
        else {
          do {
            puVar12 = puVar12 + -1;
            iVar8 = FUN_004030fb(local_3c,*pWVar4);
            if (iVar8 < 1) break;
            FUN_00402159(local_3c,iVar8,param_1,&local_18);
            pWVar4 = pWVar4 + 1;
          } while (puVar12 != (undefined1 *)0x0);
        }
        if ((local_8 & 4) != 0) {
          FUN_00402128(0x20,iVar10,param_1,&local_18);
        }
      }
    }
    bVar9 = *param_2;
    pbVar1 = param_2;
  } while( true );
}


/*
 * FUN_004020f3 at 004020f3
 * undefined __cdecl FUN_004020f3(uint param_1, int * param_2, int * param_3)
 * Address ranges: 004020f3-00402127
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_004020f3(uint param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = FUN_0040189d(param_1,param_2);
  }
  else {
    *(undefined1 *)*param_2 = (undefined1)param_1;
    *param_2 = *param_2 + 1;
    uVar2 = param_1 & 0xff;
  }
  if (uVar2 == 0xffffffff) {
    *param_3 = -1;
    return;
  }
  *param_3 = *param_3 + 1;
  return;
}


/*
 * FUN_00402128 at 00402128
 * undefined __cdecl FUN_00402128(uint param_1, int param_2, int * param_3, int * param_4)
 * Address ranges: 00402128-00402158
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_00402128(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_004020f3(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}


/*
 * FUN_00402159 at 00402159
 * undefined __cdecl FUN_00402159(char * param_1, int param_2, int * param_3, int * param_4)
 * Address ranges: 00402159-00402190
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_00402159(char *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_004020f3((int)cVar1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}


/*
 * FUN_00402191 at 00402191
 * undefined4 __cdecl FUN_00402191(int * param_1)
 * Address ranges: 00402191-0040219d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_00402191(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}


/*
 * FUN_0040219e at 0040219e
 * undefined8 __cdecl FUN_0040219e(int * param_1)
 * Address ranges: 0040219e-004021ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined8 __cdecl FUN_0040219e(int *param_1)

{
  *param_1 = *param_1 + 8;
  return *(undefined8 *)(*param_1 + -8);
}


/*
 * FUN_004021ae at 004021ae
 * undefined4 __cdecl FUN_004021ae(int * param_1)
 * Address ranges: 004021ae-004021bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_004021ae(int *param_1)

{
  *param_1 = *param_1 + 4;
  return CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + -4));
}


/*
 * FUN_004021bc at 004021bc
 * LONG __cdecl FUN_004021bc(int param_1, _EXCEPTION_POINTERS * param_2)
 * Address ranges: 004021bc-004022fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


LONG __cdecl FUN_004021bc(int param_1,_EXCEPTION_POINTERS *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  LONG LVar5;
  int iVar6;
  undefined4 *puVar7;
  
  piVar4 = FUN_004022fd(param_1);
  uVar3 = DAT_00407fbc;
  if ((piVar4 == (int *)0x0) || (pcVar1 = (code *)piVar4[2], pcVar1 == (code *)0x0)) {
    LVar5 = UnhandledExceptionFilter(param_2);
  }
  else if (pcVar1 == (code *)0x5) {
    piVar4[2] = 0;
    LVar5 = 1;
  }
  else {
    if (pcVar1 != (code *)0x1) {
      DAT_00407fbc = param_2;
      if (piVar4[1] == 8) {
        if (DAT_004072b8 < DAT_004072bc + DAT_004072b8) {
          iVar6 = (DAT_004072bc + DAT_004072b8) - DAT_004072b8;
          puVar7 = (undefined4 *)(DAT_004072b8 * 0xc + 0x407248);
          do {
            *puVar7 = 0;
            puVar7 = puVar7 + 3;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        uVar2 = DAT_004072c4;
        iVar6 = *piVar4;
        if (iVar6 == -0x3fffff72) {
          DAT_004072c4 = 0x83;
        }
        else if (iVar6 == -0x3fffff70) {
          DAT_004072c4 = 0x81;
        }
        else if (iVar6 == -0x3fffff6f) {
          DAT_004072c4 = 0x84;
        }
        else if (iVar6 == -0x3fffff6d) {
          DAT_004072c4 = 0x85;
        }
        else if (iVar6 == -0x3fffff73) {
          DAT_004072c4 = 0x82;
        }
        else if (iVar6 == -0x3fffff71) {
          DAT_004072c4 = 0x86;
        }
        else if (iVar6 == -0x3fffff6e) {
          DAT_004072c4 = 0x8a;
        }
        (*pcVar1)(8,DAT_004072c4);
        DAT_004072c4 = uVar2;
      }
      else {
        piVar4[2] = 0;
        (*pcVar1)(piVar4[1]);
      }
    }
    LVar5 = -1;
    DAT_00407fbc = (_EXCEPTION_POINTERS *)uVar3;
  }
  return LVar5;
}


/*
 * FUN_004022fd at 004022fd
 * int * __cdecl FUN_004022fd(int param_1)
 * Address ranges: 004022fd-0040233f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int * __cdecl FUN_004022fd(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_00407240;
  if (DAT_00407240 != param_1) {
    do {
      piVar1 = piVar1 + 3;
      if (&DAT_00407240 + DAT_004072c0 * 3 <= piVar1) break;
    } while (*piVar1 != param_1);
  }
  if ((&DAT_00407240 + DAT_004072c0 * 3 <= piVar1) || (*piVar1 != param_1)) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}


/*
 * FUN_00402340 at 00402340
 * byte * __stdcall FUN_00402340(void)
 * Address ranges: 00402340-00402397
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


byte * FUN_00402340(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (DAT_0040948c == 0) {
    FUN_0040365b();
  }
  bVar1 = *DAT_00409484;
  pbVar4 = DAT_00409484;
  if (bVar1 == 0x22) {
    while( true ) {
      pbVar3 = pbVar4;
      bVar1 = pbVar3[1];
      pbVar4 = pbVar3 + 1;
      if ((bVar1 == 0x22) || (bVar1 == 0)) break;
      iVar2 = FUN_00403255(bVar1);
      if (iVar2 != 0) {
        pbVar4 = pbVar3 + 2;
      }
    }
    if (*pbVar4 == 0x22) goto LAB_0040237d;
  }
  else {
    while (0x20 < bVar1) {
      bVar1 = pbVar4[1];
      pbVar4 = pbVar4 + 1;
    }
  }
  for (; (*pbVar4 != 0 && (*pbVar4 < 0x21)); pbVar4 = pbVar4 + 1) {
LAB_0040237d:
  }
  return pbVar4;
}


/*
 * FUN_00402398 at 00402398
 * undefined __stdcall FUN_00402398(void)
 * Address ranges: 00402398-00402450
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402398(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_0040948c == 0) {
    FUN_0040365b();
  }
  iVar5 = 0;
  for (puVar6 = DAT_00407fb0; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_00407f8c = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_00407fb0;
  puVar6 = DAT_00407fb0;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_004036b0((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_00403677(DAT_00407fb0);
  DAT_00407fb0 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_00409488 = 1;
  return;
}


/*
 * FUN_00402451 at 00402451
 * undefined __stdcall FUN_00402451(void)
 * Address ranges: 00402451-004024e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402451(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_0040948c == 0) {
    FUN_0040365b();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_00407fc0,0x104);
  _DAT_00407f9c = &DAT_00407fc0;
  pbVar2 = &DAT_00407fc0;
  if (*DAT_00409484 != 0) {
    pbVar2 = DAT_00409484;
  }
  FUN_004024ea(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_004024ea(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_00407f84 = puVar1;
  _DAT_00407f80 = local_8 + -1;
  return;
}


/*
 * FUN_004024ea at 004024ea
 * undefined __cdecl FUN_004024ea(byte * param_1, undefined4 * param_2, byte * param_3, int * param_4, int * param_5)
 * Address ranges: 004024ea-0040269d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_004024ea(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  if (*param_1 == 0x22) {
    while( true ) {
      bVar1 = param_1[1];
      pbVar4 = param_1 + 1;
      if ((bVar1 == 0x22) || (bVar1 == 0)) break;
      if (((*(byte *)((int)&DAT_00408240 + bVar1 + 1) & 4) != 0) &&
         (*param_5 = *param_5 + 1, param_3 != (byte *)0x0)) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
        pbVar4 = param_1 + 2;
      }
      *param_5 = *param_5 + 1;
      param_1 = pbVar4;
      if (param_3 != (byte *)0x0) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
      }
    }
    *param_5 = *param_5 + 1;
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    if (*pbVar4 == 0x22) {
      pbVar4 = param_1 + 2;
    }
  }
  else {
    do {
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      bVar1 = *param_1;
      pbVar4 = param_1 + 1;
      if ((*(byte *)((int)&DAT_00408240 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_00402595;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_00402595:
      pbVar4 = pbVar4 + -1;
    }
    else if (param_3 != (byte *)0x0) {
      param_3[-1] = 0;
    }
  }
  bVar2 = false;
  puVar7 = param_2;
  while (*pbVar4 != 0) {
    for (; (*pbVar4 == 0x20 || (*pbVar4 == 9)); pbVar4 = pbVar4 + 1) {
    }
    if (*pbVar4 == 0) break;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = param_3;
      puVar7 = puVar7 + 1;
      param_2 = puVar7;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar3 = true;
      uVar6 = 0;
      for (; *pbVar4 == 0x5c; pbVar4 = pbVar4 + 1) {
        uVar6 = uVar6 + 1;
      }
      if (*pbVar4 == 0x22) {
        pbVar5 = pbVar4;
        if ((uVar6 & 1) == 0) {
          if ((!bVar2) || (pbVar5 = pbVar4 + 1, pbVar4[1] != 0x22)) {
            bVar3 = false;
            pbVar5 = pbVar4;
          }
          bVar2 = !bVar2;
          puVar7 = param_2;
        }
        uVar6 = uVar6 >> 1;
        pbVar4 = pbVar5;
      }
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      bVar1 = *pbVar4;
      if ((bVar1 == 0) || ((!bVar2 && ((bVar1 == 0x20 || (bVar1 == 9)))))) break;
      if (bVar3) {
        if (param_3 == (byte *)0x0) {
          if ((*(byte *)((int)&DAT_00408240 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_00408240 + bVar1 + 1) & 4) != 0) {
            *param_3 = bVar1;
            param_3 = param_3 + 1;
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      pbVar4 = pbVar4 + 1;
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}


/*
 * FUN_0040269e at 0040269e
 * LPSTR __stdcall FUN_0040269e(void)
 * Address ranges: 0040269e-004027cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


LPSTR FUN_0040269e(void)

{
  char cVar1;
  WCHAR WVar2;
  WCHAR *pWVar3;
  WCHAR *pWVar4;
  int iVar5;
  size_t _Size;
  LPSTR pCVar6;
  char *pcVar7;
  LPWCH lpWideCharStr;
  LPCH pCVar9;
  LPSTR local_8;
  char *pcVar8;
  
  lpWideCharStr = (LPWCH)0x0;
  pCVar9 = (LPCH)0x0;
  if (DAT_004080c4 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_004080c4 = 1;
LAB_004026f5:
      if ((lpWideCharStr == (LPWCH)0x0) &&
         (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr == (LPWCH)0x0)) {
        return (LPSTR)0x0;
      }
      WVar2 = *lpWideCharStr;
      pWVar4 = lpWideCharStr;
      while (WVar2 != L'\0') {
        do {
          pWVar3 = pWVar4;
          pWVar4 = pWVar3 + 1;
        } while (*pWVar4 != L'\0');
        pWVar4 = pWVar3 + 2;
        WVar2 = *pWVar4;
      }
      iVar5 = ((int)pWVar4 - (int)lpWideCharStr >> 1) + 1;
      _Size = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      local_8 = (LPSTR)0x0;
      if (((_Size != 0) && (pCVar6 = _malloc(_Size), pCVar6 != (LPSTR)0x0)) &&
         (iVar5 = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,pCVar6,_Size,(LPCSTR)0x0,(LPBOOL)0x0),
         local_8 = pCVar6, iVar5 == 0)) {
        FUN_00403677(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_004080c4 = 2;
  }
  else {
    if (DAT_004080c4 == 1) goto LAB_004026f5;
    if (DAT_004080c4 != 2) {
      return (LPSTR)0x0;
    }
  }
  if ((pCVar9 == (LPCH)0x0) && (pCVar9 = GetEnvironmentStrings(), pCVar9 == (LPCH)0x0)) {
    return (LPSTR)0x0;
  }
  cVar1 = *pCVar9;
  pcVar7 = pCVar9;
  while (cVar1 != '\0') {
    do {
      pcVar8 = pcVar7;
      pcVar7 = pcVar8 + 1;
    } while (*pcVar7 != '\0');
    pcVar7 = pcVar8 + 2;
    cVar1 = *pcVar7;
  }
  pCVar6 = _malloc((size_t)(pcVar7 + (1 - (int)pCVar9)));
  if (pCVar6 == (LPSTR)0x0) {
    pCVar6 = (LPSTR)0x0;
  }
  else {
    FUN_00403820((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}


/*
 * FUN_004027d0 at 004027d0
 * undefined __stdcall FUN_004027d0(void)
 * Address ranges: 004027d0-0040297a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_004027d0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  HANDLE hFile;
  byte *pbVar5;
  int iVar6;
  UINT *pUVar7;
  UINT UVar8;
  UINT UVar9;
  uint uVar10;
  _STARTUPINFOA local_44;
  
  puVar2 = _malloc(0x100);
  if (puVar2 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_00409480 = 0x20;
  DAT_00409380 = puVar2;
  for (; puVar2 < DAT_00409380 + 0x40; puVar2 = puVar2 + 2) {
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = 0xffffffff;
    *(undefined1 *)((int)puVar2 + 5) = 10;
  }
  GetStartupInfoA(&local_44);
  if ((local_44.cbReserved2 != 0) && ((UINT *)local_44.lpReserved2 != (UINT *)0x0)) {
    UVar8 = *(UINT *)local_44.lpReserved2;
    pUVar7 = (UINT *)((int)local_44.lpReserved2 + 4);
    pbVar5 = (byte *)(UVar8 + (int)pUVar7);
    if (0x7ff < (int)UVar8) {
      UVar8 = 0x800;
    }
    UVar9 = UVar8;
    if ((int)DAT_00409480 < (int)UVar8) {
      puVar2 = &DAT_00409384;
      do {
        puVar3 = _malloc(0x100);
        UVar9 = DAT_00409480;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_00409480 = DAT_00409480 + 0x20;
        *puVar2 = puVar3;
        puVar1 = puVar3;
        for (; puVar3 < puVar1 + 0x40; puVar3 = puVar3 + 2) {
          *(undefined1 *)(puVar3 + 1) = 0;
          *puVar3 = 0xffffffff;
          *(undefined1 *)((int)puVar3 + 5) = 10;
          puVar1 = (undefined4 *)*puVar2;
        }
        puVar2 = puVar2 + 1;
        UVar9 = UVar8;
      } while ((int)DAT_00409480 < (int)UVar8);
    }
    uVar10 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)pbVar5 != (HANDLE)0xffffffff) && ((*pUVar7 & 1) != 0)) &&
           (((*pUVar7 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)pbVar5), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_00409380)[(int)uVar10 >> 5] + (uVar10 & 0x1f) * 8);
          *puVar2 = *(undefined4 *)pbVar5;
          *(byte *)(puVar2 + 1) = (byte)*pUVar7;
        }
        uVar10 = uVar10 + 1;
        pUVar7 = (UINT *)((int)pUVar7 + 1);
        pbVar5 = pbVar5 + 4;
      } while ((int)uVar10 < (int)UVar9);
    }
  }
  iVar6 = 0;
  do {
    puVar2 = DAT_00409380 + iVar6 * 2;
    if (DAT_00409380[iVar6 * 2] == -1) {
      *(undefined1 *)(puVar2 + 1) = 0x81;
      if (iVar6 == 0) {
        DVar4 = 0xfffffff6;
      }
      else {
        DVar4 = 0xfffffff5 - (iVar6 != 1);
      }
      hFile = GetStdHandle(DVar4);
      if ((hFile != (HANDLE)0xffffffff) && (DVar4 = GetFileType(hFile), DVar4 != 0)) {
        *puVar2 = hFile;
        if ((DVar4 & 0xff) != 2) {
          if ((DVar4 & 0xff) == 3) {
            *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 8;
          }
          goto LAB_00402961;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_00402961:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_00409480);
      return;
    }
  } while( true );
}


/*
 * FUN_0040297b at 0040297b
 * undefined4 __cdecl FUN_0040297b(int param_1)
 * Address ranges: 0040297b-004029b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_0040297b(int param_1)

{
  int iVar1;
  
  DAT_00409364 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_00409364 != (HANDLE)0x0) {
    iVar1 = FUN_00403b55();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_00409364);
  }
  return 0;
}


/*
 * __global_unwind2 at 004029b8
 * undefined __cdecl __global_unwind2(PVOID param_1)
 * Address ranges: 004029b8-004029d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __global_unwind2  Library: Visual Studio
 */


/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x4029d0,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}


/*
 * __local_unwind2 at 004029fa
 * undefined __cdecl __local_unwind2(int param_1, int param_2)
 * Address ranges: 004029fa-00402a61
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __local_unwind2  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual Studio 2003 Release
 */


/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __cdecl __local_unwind2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  int iStack_10;
  
  iStack_10 = param_1;
  puStack_18 = &LAB_004029d8;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_00402a8e();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}


/*
 * FUN_00402a8e at 00402a8e
 * undefined __stdcall FUN_00402a8e(void)
 * Address ranges: 00402a8e-00402aa5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_00402a8e(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_004072dc = *(undefined4 *)(unaff_EBP + 8);
  DAT_004072d8 = in_EAX;
  DAT_004072e0 = unaff_EBP;
  return;
}


/*
 * FUN_00402b6d at 00402b6d
 * undefined __stdcall FUN_00402b6d(int param_1)
 * Address ranges: 00402b6d-00402b87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_00402b6d(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}


/*
 * FUN_00402b88 at 00402b88
 * undefined __stdcall FUN_00402b88(void)
 * Address ranges: 00402b88-00402bc0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_00402b88(void)

{
  if ((DAT_00407fb8 == 1) || ((DAT_00407fb8 == 0 && (DAT_00407234 == 1)))) {
    FUN_00402bc1(0xfc);
    if (DAT_004080c8 != (code *)0x0) {
      (*DAT_004080c8)();
    }
    FUN_00402bc1(0xff);
  }
  return;
}


/*
 * FUN_00402bc1 at 00402bc1
 * undefined __cdecl FUN_00402bc1(DWORD param_1)
 * Address ranges: 00402bc1-00402d13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_00402bc1(DWORD param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  size_t sVar4;
  HANDLE hFile;
  int iVar5;
  uint *_Dest;
  undefined1 auStackY_1e3 [7];
  LPCVOID lpBuffer;
  LPOVERLAPPED lpOverlapped;
  uint local_1a8 [65];
  uint local_a4 [40];
  
  iVar5 = 0;
  pDVar2 = &DAT_004072e8;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x407378);
  if (param_1 == (&DAT_004072e8)[iVar5 * 2]) {
    if ((DAT_00407fb8 == 1) || ((DAT_00407fb8 == 0 && (DAT_00407234 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x4072ec);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_004036b0(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_004036b0(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_004036c0(local_a4,_Dest);
      FUN_004036c0(local_a4,(uint *)&DAT_0040644c);
      FUN_004036c0(local_a4,*(uint **)(iVar5 * 8 + 0x4072ec));
      auStackY_1e3._3_4_ = 0x402ce5;
      FUN_0040439e(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}


/*
 * FUN_00402d14 at 00402d14
 * DWORD __cdecl FUN_00402d14(uint param_1, LONG param_2, DWORD param_3)
 * Address ranges: 00402d14-00402dad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

DWORD __cdecl FUN_00402d14(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD DVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 < DAT_00409480) {
    iVar4 = (param_1 & 0x1f) * 8;
    if ((*(byte *)((&DAT_00409380)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
      hFile = (HANDLE)FUN_00404508(param_1);
      if (hFile == (HANDLE)0xffffffff) {
        DAT_00407f64 = 9;
        return 0xffffffff;
      }
      DVar2 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
      if (DVar2 == 0xffffffff) {
        uVar3 = GetLastError();
      }
      else {
        uVar3 = 0;
      }
      if (uVar3 != 0) {
        FUN_00404427(uVar3);
        return 0xffffffff;
      }
      pbVar1 = (byte *)((&DAT_00409380)[(int)param_1 >> 5] + 4 + iVar4);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar2;
    }
  }
  _DAT_00407f68 = 0;
  DAT_00407f64 = 9;
  return 0xffffffff;
}


/*
 * FUN_00402dae at 00402dae
 * int __cdecl FUN_00402dae(DWORD param_1, char * param_2, uint param_3)
 * Address ranges: 00402dae-00402f5a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_00402dae(DWORD param_1,char *param_2,uint param_3)

{
  int *piVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  char *pcVar5;
  BOOL BVar6;
  int iVar7;
  char local_418 [1028];
  int local_14;
  DWORD local_10;
  DWORD local_c;
  char *local_8;
  
  if (param_1 < DAT_00409480) {
    piVar1 = &DAT_00409380 + ((int)param_1 >> 5);
    iVar7 = (param_1 & 0x1f) * 8;
    bVar3 = *(byte *)(*piVar1 + 4 + iVar7);
    if ((bVar3 & 1) != 0) {
      local_c = 0;
      local_14 = 0;
      if (param_3 == 0) {
        return 0;
      }
      if ((bVar3 & 0x20) != 0) {
        FUN_00402d14(param_1,0,2);
      }
      if ((*(byte *)((undefined4 *)(*piVar1 + iVar7) + 1) & 0x80) == 0) {
        BVar6 = WriteFile(*(HANDLE *)(*piVar1 + iVar7),param_2,param_3,&local_10,(LPOVERLAPPED)0x0);
        if (BVar6 == 0) {
          param_1 = GetLastError();
        }
        else {
          local_c = local_10;
          param_1 = 0;
        }
LAB_00402ea7:
        if (local_c != 0) {
          return local_c - local_14;
        }
        if (param_1 != 0) {
          if (param_1 == 5) {
            DAT_00407f64 = 9;
            _DAT_00407f68 = 5;
            return -1;
          }
          FUN_00404427(param_1);
          return -1;
        }
      }
      else {
        local_8 = param_2;
        param_1 = 0;
        if (param_3 != 0) {
          do {
            pcVar5 = local_418;
            do {
              if (param_3 <= (uint)((int)local_8 - (int)param_2)) break;
              pcVar2 = local_8 + 1;
              cVar4 = *local_8;
              local_8 = pcVar2;
              if (cVar4 == '\n') {
                local_14 = local_14 + 1;
                *pcVar5 = '\r';
                pcVar5 = pcVar5 + 1;
              }
              *pcVar5 = cVar4;
              pcVar5 = pcVar5 + 1;
            } while ((int)pcVar5 - (int)local_418 < 0x400);
            BVar6 = WriteFile(*(HANDLE *)(*piVar1 + iVar7),local_418,(int)pcVar5 - (int)local_418,
                              &local_10,(LPOVERLAPPED)0x0);
            if (BVar6 == 0) {
              param_1 = GetLastError();
              goto LAB_00402ea7;
            }
            local_c = local_c + local_10;
            if (((int)local_10 < (int)pcVar5 - (int)local_418) ||
               (param_3 <= (uint)((int)local_8 - (int)param_2))) goto LAB_00402ea7;
          } while( true );
        }
      }
      if (((*(byte *)(*piVar1 + 4 + iVar7) & 0x40) != 0) && (*param_2 == '\x1a')) {
        return 0;
      }
      DAT_00407f64 = 0x1c;
      _DAT_00407f68 = 0;
      return -1;
    }
  }
  _DAT_00407f68 = 0;
  DAT_00407f64 = 9;
  return -1;
}


/*
 * FUN_00402f5b at 00402f5b
 * undefined __cdecl FUN_00402f5b(undefined4 * param_1)
 * Address ranges: 00402f5b-00402f9e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00402f5b(undefined4 *param_1)

{
  void *pvVar1;
  
  _DAT_004080cc = _DAT_004080cc + 1;
  pvVar1 = _malloc(0x1000);
  param_1[2] = pvVar1;
  if (pvVar1 == (void *)0x0) {
    param_1[3] = param_1[3] | 4;
    param_1[2] = param_1 + 5;
    param_1[6] = 2;
  }
  else {
    param_1[3] = param_1[3] | 8;
    param_1[6] = 0x1000;
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return;
}


/*
 * FUN_00402f9f at 00402f9f
 * byte __cdecl FUN_00402f9f(uint param_1)
 * Address ranges: 00402f9f-00402fc4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


byte __cdecl FUN_00402f9f(uint param_1)

{
  if (DAT_00409480 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_00409380)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 0x40;
}


/*
 * _strlen at 00403080
 * size_t __cdecl _strlen(char * _Str)
 * Address ranges: 00403080-004030fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _strlen  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */


/* Library Function - Single Match
    _strlen
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

size_t __cdecl _strlen(char *_Str)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)_Str;
  do {
    if (((uint)puVar2 & 3) == 0) goto LAB_004030a0;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_004030d3:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_004030a0:
  do {
    do {
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = *puVar3;
    if ((char)uVar1 == '\0') {
      return (int)puVar3 - (int)_Str;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)((int)puVar3 + (1 - (int)_Str));
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (size_t)((int)puVar3 + (2 - (int)_Str));
    }
  } while ((uVar1 & 0xff000000) != 0);
  goto LAB_004030d3;
}


/*
 * FUN_004030fb at 004030fb
 * int __cdecl FUN_004030fb(LPSTR param_1, WCHAR param_2)
 * Address ranges: 004030fb-00403162
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_004030fb(LPSTR param_1,WCHAR param_2)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  
  lpMultiByteStr = param_1;
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_004080e8 == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    iVar1 = WideCharToMultiByte(DAT_004080f8,0x220,&param_2,1,lpMultiByteStr,DAT_00407aa0,
                                (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((iVar1 != 0) && (param_1 == (LPSTR)0x0)) {
      return iVar1;
    }
  }
  DAT_00407f64 = 0x2a;
  return -1;
}


/*
 * __aulldiv at 00403170
 * undefined8 __stdcall __aulldiv(uint param_1, uint param_2, uint param_3, uint param_4)
 * Address ranges: 00403170-004031d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __aulldiv  Library: Visual Studio
 */


/* Library Function - Single Match
    __aulldiv
   
   Library: Visual Studio */

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar6;
  
  uVar9 = param_1;
  uVar6 = param_4;
  uVar7 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar6 >> 1;
      uVar3 = (uint)(CONCAT14((uVar6 & 1) != 0,uVar3) >> 1);
      uVar8 = uVar7 >> 1;
      uVar9 = (uint)(CONCAT14((uVar7 & 1) != 0,uVar9) >> 1);
      uVar6 = uVar5;
      uVar7 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar9) / (ulonglong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar9 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar9)) ||
       ((param_2 <= uVar9 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}


/*
 * __aullrem at 004031e0
 * undefined8 __stdcall __aullrem(uint param_1, uint param_2, uint param_3, uint param_4)
 * Address ranges: 004031e0-00403254
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __aullrem  Library: Visual Studio
 */


/* Library Function - Single Match
    __aullrem
   
   Library: Visual Studio */

undefined8 __aullrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar4 = param_1;
  uVar9 = param_4;
  uVar10 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar7 = 0;
  }
  else {
    do {
      uVar5 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT14((uVar9 & 1) != 0,uVar3) >> 1);
      uVar8 = uVar10 >> 1;
      uVar4 = (uint)(CONCAT14((uVar10 & 1) != 0,uVar4) >> 1);
      uVar9 = uVar5;
      uVar10 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar4) / (ulonglong)uVar3;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar10 = uVar9 + uVar3;
    if (((CARRY4(uVar9,uVar3)) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4))))
    {
      bVar11 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar10 = (uVar10 - param_4) - (uint)bVar11;
    }
    iVar6 = -(uVar4 - param_1);
    iVar7 = -(uint)(uVar4 - param_1 != 0) - ((uVar10 - param_2) - (uint)(uVar4 < param_1));
  }
  return CONCAT44(iVar7,iVar6);
}


/*
 * FUN_00403255 at 00403255
 * undefined __cdecl FUN_00403255(byte param_1)
 * Address ranges: 00403255-00403265
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_00403255(byte param_1)

{
  FUN_00403266(param_1,0,4);
  return;
}


/*
 * FUN_00403266 at 00403266
 * undefined4 __cdecl FUN_00403266(byte param_1, uint param_2, byte param_3)
 * Address ranges: 00403266-00403296
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_00403266(byte param_1,uint param_2,byte param_3)

{
  uint uVar1;
  
  if ((*(byte *)((int)&DAT_00408240 + param_1 + 1) & param_3) == 0) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(ushort *)(&DAT_00407622 + (uint)param_1 * 2) & param_2;
    }
    if (uVar1 == 0) {
      return 0;
    }
  }
  return 1;
}


/*
 * FUN_00403297 at 00403297
 * undefined4 __cdecl FUN_00403297(int param_1)
 * Address ranges: 00403297-0040342f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_00403297(int param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  BYTE *pBVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  _cpinfo local_1c;
  uint local_8;
  
  CodePage = FUN_00403430(param_1);
  if (CodePage == DAT_00408128) {
    return 0;
  }
  if (CodePage != 0) {
    iVar11 = 0;
    pUVar5 = &DAT_00407838;
    do {
      if (*pUVar5 == CodePage) {
        puVar13 = &DAT_00408240;
        for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
        local_8 = 0;
        iVar11 = iVar11 * 0x30;
        *(undefined1 *)puVar13 = 0;
        pbVar12 = (byte *)(iVar11 + 0x407848);
        do {
          bVar3 = *pbVar12;
          pbVar10 = pbVar12;
          while ((bVar3 != 0 && (bVar3 = pbVar10[1], bVar3 != 0))) {
            uVar7 = (uint)*pbVar10;
            if (uVar7 <= bVar3) {
              bVar4 = (&DAT_00407830)[local_8];
              do {
                pbVar2 = (byte *)((int)&DAT_00408240 + uVar7 + 1);
                *pbVar2 = *pbVar2 | bVar4;
                uVar7 = uVar7 + 1;
              } while (uVar7 <= bVar3);
            }
            pbVar10 = pbVar10 + 2;
            bVar3 = *pbVar10;
          }
          local_8 = local_8 + 1;
          pbVar12 = pbVar12 + 8;
        } while (local_8 < 4);
        DAT_0040813c = 1;
        DAT_00408128 = CodePage;
        DAT_00408344 = FUN_0040347a(CodePage);
        DAT_00408130 = *(undefined4 *)(iVar11 + 0x40783c);
        DAT_00408134 = *(undefined4 *)(iVar11 + 0x407840);
        DAT_00408138 = *(undefined4 *)(iVar11 + 0x407844);
        goto LAB_0040341f;
      }
      pUVar5 = pUVar5 + 0xc;
      iVar11 = iVar11 + 1;
    } while ((int)pUVar5 < 0x407928);
    BVar6 = GetCPInfo(CodePage,&local_1c);
    if (BVar6 == 1) {
      puVar13 = &DAT_00408240;
      DAT_00408128 = CodePage;
      for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
      }
      *(undefined1 *)puVar13 = 0;
      DAT_00408344 = 0;
      if (local_1c.MaxCharSize < 2) {
        DAT_0040813c = 0;
      }
      else {
        if (local_1c.LeadByte[0] != '\0') {
          pBVar8 = local_1c.LeadByte + 1;
          do {
            bVar3 = *pBVar8;
            if (bVar3 == 0) break;
            for (uVar7 = (uint)pBVar8[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
              pbVar12 = (byte *)((int)&DAT_00408240 + uVar7 + 1);
              *pbVar12 = *pbVar12 | 4;
            }
            pBVar1 = pBVar8 + 1;
            pBVar8 = pBVar8 + 2;
          } while (*pBVar1 != 0);
        }
        uVar7 = 1;
        do {
          pbVar12 = (byte *)((int)&DAT_00408240 + uVar7 + 1);
          *pbVar12 = *pbVar12 | 8;
          uVar7 = uVar7 + 1;
        } while (uVar7 < 0xff);
        DAT_00408344 = FUN_0040347a(CodePage);
        DAT_0040813c = 1;
      }
      DAT_00408130 = 0;
      DAT_00408134 = 0;
      DAT_00408138 = 0;
      goto LAB_0040341f;
    }
    if (DAT_004080d0 == 0) {
      return 0xffffffff;
    }
  }
  FUN_004034ad();
LAB_0040341f:
  FUN_004034d6();
  return 0;
}


/*
 * FUN_00403430 at 00403430
 * int __cdecl FUN_00403430(int param_1)
 * Address ranges: 00403430-00403479
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_00403430(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_004080d0 = 1;
                    /* WARNING: Could not recover jumptable at 0x0040344a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_004080d0 = 1;
                    /* WARNING: Could not recover jumptable at 0x0040345f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_004080f8;
  }
  DAT_004080d0 = (uint)bVar2;
  return param_1;
}


/*
 * FUN_0040347a at 0040347a
 * undefined4 __cdecl FUN_0040347a(int param_1)
 * Address ranges: 0040347a-004034ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_0040347a(int param_1)

{
  if (param_1 == 0x3a4) {
    return 0x411;
  }
  if (param_1 == 0x3a8) {
    return 0x804;
  }
  if (param_1 == 0x3b5) {
    return 0x412;
  }
  if (param_1 != 0x3b6) {
    return 0;
  }
  return 0x404;
}


/*
 * FUN_004034ad at 004034ad
 * undefined __stdcall FUN_004034ad(void)
 * Address ranges: 004034ad-004034d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_004034ad(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00408240;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_00408128 = 0;
  DAT_0040813c = 0;
  DAT_00408344 = 0;
  DAT_00408130 = 0;
  DAT_00408134 = 0;
  DAT_00408138 = 0;
  return;
}


/*
 * FUN_004034d6 at 004034d6
 * undefined __stdcall FUN_004034d6(void)
 * Address ranges: 004034d6-0040365a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_004034d6(void)

{
  byte *pbVar1;
  BOOL BVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  undefined1 uVar8;
  BYTE *pBVar9;
  CHAR *pCVar10;
  WORD local_518 [256];
  WCHAR local_318 [128];
  WCHAR local_218 [128];
  CHAR local_118 [256];
  _cpinfo local_18;
  
  BVar2 = GetCPInfo(DAT_00408128,&local_18);
  if (BVar2 == 1) {
    uVar3 = 0;
    do {
      local_118[uVar3] = (CHAR)uVar3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
    local_118[0] = ' ';
    if (local_18.LeadByte[0] != 0) {
      pBVar9 = local_18.LeadByte + 1;
      do {
        uVar3 = (uint)local_18.LeadByte[0];
        if (uVar3 <= *pBVar9) {
          uVar5 = (*pBVar9 - uVar3) + 1;
          uVar6 = uVar5 >> 2;
          pCVar10 = local_118 + uVar3;
          while (uVar6 != 0) {
            uVar6 = uVar6 - 1;
            builtin_memcpy(pCVar10,"    ",4);
            pCVar10 = pCVar10 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pCVar10 = ' ';
            pCVar10 = pCVar10 + 1;
          }
        }
        local_18.LeadByte[0] = pBVar9[1];
        pBVar9 = pBVar9 + 2;
      } while (local_18.LeadByte[0] != 0);
    }
    FUN_0040497f(1,local_118,0x100,local_518,DAT_00408128,DAT_00408344,0);
    FUN_00404730(DAT_00408344,0x100,local_118,0x100,local_218,0x100,DAT_00408128,0);
    FUN_00404730(DAT_00408344,0x200,local_118,0x100,local_318,0x100,DAT_00408128,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_00408240 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_004035e2;
        }
        (&DAT_00408140)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_00408240 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_004035e2:
        (&DAT_00408140)[uVar3] = uVar8;
      }
      uVar3 = uVar3 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar3 < 0x100);
  }
  else {
    uVar3 = 0;
    do {
      if ((uVar3 < 0x41) || (0x5a < uVar3)) {
        if ((0x60 < uVar3) && (uVar3 < 0x7b)) {
          pbVar1 = (byte *)((int)&DAT_00408240 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_0040362c;
        }
        (&DAT_00408140)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_00408240 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_0040362c:
        (&DAT_00408140)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}


/*
 * FUN_0040365b at 0040365b
 * undefined __stdcall FUN_0040365b(void)
 * Address ranges: 0040365b-00403676
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_0040365b(void)

{
  if (DAT_0040948c == 0) {
    FUN_00403297(-3);
    DAT_0040948c = 1;
  }
  return;
}


/*
 * FUN_00403677 at 00403677
 * undefined __cdecl FUN_00403677(LPVOID param_1)
 * Address ranges: 00403677-004036a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_00403677(LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    puVar1 = (uint *)FUN_00403b93((int)param_1);
    if (puVar1 != (uint *)0x0) {
      FUN_00403bbe(puVar1,(uint)param_1);
      return;
    }
    HeapFree(DAT_00409364,0,param_1);
  }
  return;
}


/*
 * FUN_004036b0 at 004036b0
 * uint * __cdecl FUN_004036b0(uint * param_1, uint * param_2)
 * Address ranges: 004036b0-004036b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint * __cdecl FUN_004036b0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = param_1;
  while (((uint)param_2 & 3) != 0) {
    bVar1 = (byte)*param_2;
    uVar3 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_00403798;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_00403798:
        *(byte *)puVar4 = (byte)uVar3;
        return param_1;
      }
      if ((char)(uVar3 >> 8) == '\0') {
        *(short *)puVar4 = (short)uVar3;
        return param_1;
      }
      if ((uVar3 & 0xff0000) == 0) {
        *(short *)puVar4 = (short)uVar3;
        *(byte *)((int)puVar4 + 2) = 0;
        return param_1;
      }
      if ((uVar3 & 0xff000000) == 0) {
        *puVar4 = uVar3;
        return param_1;
      }
    }
    *puVar4 = uVar3;
    puVar4 = puVar4 + 1;
  } while( true );
}


/*
 * FUN_004036c0 at 004036c0
 * uint * __cdecl FUN_004036c0(uint * param_1, uint * param_2)
 * Address ranges: 004036c0-0040379f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint * __cdecl FUN_004036c0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_004036dc;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_0040370f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x0040372b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_004036dc:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x0040372b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x0040372b;
    }
  }
LAB_0040370f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x0040372b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_00403798:
            *(byte *)puVar5 = (byte)uVar4;
            return param_1;
          }
          if ((char)(uVar4 >> 8) == '\0') {
            *(short *)puVar5 = (short)uVar4;
            return param_1;
          }
          if ((uVar4 & 0xff0000) == 0) {
            *(short *)puVar5 = (short)uVar4;
            *(byte *)((int)puVar5 + 2) = 0;
            return param_1;
          }
          if ((uVar4 & 0xff000000) == 0) {
            *puVar5 = uVar4;
            return param_1;
          }
        }
        *puVar5 = uVar4;
        puVar5 = puVar5 + 1;
      } while( true );
    }
    bVar1 = (byte)*param_2;
    uVar4 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_00403798;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}


/*
 * _malloc at 004037a0
 * void * __cdecl _malloc(size_t _Size)
 * Address ranges: 004037a0-004037b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _malloc  Library: Visual Studio 2003 Release
 */


/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_00408108);
  return pvVar1;
}


/*
 * __nh_malloc at 004037b2
 * void * __cdecl __nh_malloc(size_t _Size, int _NhFlag)
 * Address ranges: 004037b2-004037dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __nh_malloc  Library: Visual Studio 2003 Release
 */


/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = (void *)FUN_004037de((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_00404ac8(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}


/*
 * FUN_004037de at 004037de
 * undefined __cdecl FUN_004037de(uint * param_1)
 * Address ranges: 004037de-00403813
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_004037de(uint *param_1)

{
  int *piVar1;
  
  if ((param_1 <= DAT_00407930) && (piVar1 = FUN_00403ee9(param_1), piVar1 != (int *)0x0)) {
    return;
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  HeapAlloc(DAT_00409364,0,(int)param_1 + 0xfU & 0xfffffff0);
  return;
}


/*
 * FUN_00403820 at 00403820
 * undefined4 * __cdecl FUN_00403820(undefined4 * param_1, undefined4 * param_2, uint param_3)
 * Address ranges: 00403820-0040387a;0040387c-00403882;00403890-004038b8;004038bc-004038de;004038e0-004038f8;0040391c-00403965;00403978-0040397e;00403980-0040398a;0040398c-0040399c;004039a0-004039b6;004039b8-004039dd;004039e0-004039e8;004039ec-00403a0a;00403a18-00403a34;00403a38-00403a5e;00403a60-00403a90;00403ab4-00403afd;00403b10-00403b16;00403b18-00403b24;00403b28-00403b3a;00403b3c-00403b54
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 * __cdecl FUN_00403820(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_004039d7_caseD_2;
        case 3:
          goto switchD_004039d7_caseD_3;
        }
        goto switchD_004039d7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_004039d7_caseD_0;
      case 1:
        goto switchD_004039d7_caseD_1;
      case 2:
        goto switchD_004039d7_caseD_2;
      case 3:
        goto switchD_004039d7_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_004039d7_caseD_2;
            case 3:
              goto switchD_004039d7_caseD_3;
            }
            goto switchD_004039d7_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_004039d7_caseD_2;
            case 3:
              goto switchD_004039d7_caseD_3;
            }
            goto switchD_004039d7_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_004039d7_caseD_2;
            case 3:
              goto switchD_004039d7_caseD_3;
            }
            goto switchD_004039d7_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_004039d7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_004039d7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_004039d7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_004039d7_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_00403855_caseD_2;
      case 3:
        goto switchD_00403855_caseD_3;
      }
      goto switchD_00403855_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_00403855_caseD_0;
    case 1:
      goto switchD_00403855_caseD_1;
    case 2:
      goto switchD_00403855_caseD_2;
    case 3:
      goto switchD_00403855_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_00403855_caseD_2;
          case 3:
            goto switchD_00403855_caseD_3;
          }
          goto switchD_00403855_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_00403855_caseD_2;
          case 3:
            goto switchD_00403855_caseD_3;
          }
          goto switchD_00403855_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_00403855_caseD_2;
          case 3:
            goto switchD_00403855_caseD_3;
          }
          goto switchD_00403855_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_00403855_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_00403855_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_00403855_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_00403855_caseD_0:
  return param_1;
}


/*
 * FUN_00403b55 at 00403b55
 * undefined4 __stdcall FUN_00403b55(void)
 * Address ranges: 00403b55-00403b92
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_00403b55(void)

{
  DAT_00408124 = HeapAlloc(DAT_00409364,0,0x140);
  if (DAT_00408124 == (LPVOID)0x0) {
    return 0;
  }
  DAT_0040811c = 0;
  DAT_00408120 = 0;
  DAT_00408118 = DAT_00408124;
  DAT_00408110 = 0x10;
  return 1;
}


/*
 * FUN_00403b93 at 00403b93
 * uint __cdecl FUN_00403b93(int param_1)
 * Address ranges: 00403b93-00403bbd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __cdecl FUN_00403b93(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_00408124;
  while( true ) {
    if (DAT_00408124 + DAT_00408120 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}


/*
 * FUN_00403bbe at 00403bbe
 * undefined __cdecl FUN_00403bbe(uint * param_1, uint param_2)
 * Address ranges: 00403bbe-00403ee8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_00403bbe(uint *param_1,uint param_2)

{
  char *pcVar1;
  uint *puVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int local_10;
  
  uVar5 = param_1[4];
  iVar6 = *(int *)(param_2 - 4);
  piVar9 = (int *)(param_2 - 4);
  uVar10 = param_2 - param_1[3] >> 0xf;
  uVar7 = *(uint *)(param_2 - 8);
  local_10 = iVar6 + -1;
  piVar3 = (int *)(uVar10 * 0x204 + 0x144 + uVar5);
  uVar12 = *(uint *)(local_10 + (int)piVar9);
  if ((uVar12 & 1) == 0) {
    param_2 = ((int)uVar12 >> 4) - 1;
    if (0x3f < param_2) {
      param_2 = 0x3f;
    }
    if (*(int *)(iVar6 + 3 + (int)piVar9) == *(int *)(iVar6 + 7 + (int)piVar9)) {
      if (param_2 < 0x20) {
        pcVar1 = (char *)(param_2 + 4 + uVar5);
        uVar11 = ~(0x80000000U >> ((byte)param_2 & 0x1f));
        puVar2 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar11;
        }
      }
      else {
        pcVar1 = (char *)(param_2 + 4 + uVar5);
        uVar11 = ~(0x80000000U >> ((byte)param_2 - 0x20 & 0x1f));
        puVar2 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar11;
        }
      }
    }
    *(undefined4 *)(*(int *)(iVar6 + 7 + (int)piVar9) + 4) =
         *(undefined4 *)(iVar6 + 3 + (int)piVar9);
    local_10 = local_10 + uVar12;
    *(undefined4 *)(*(int *)(iVar6 + 3 + (int)piVar9) + 8) =
         *(undefined4 *)(iVar6 + 7 + (int)piVar9);
  }
  uVar12 = (local_10 >> 4) - 1;
  if (0x3f < uVar12) {
    uVar12 = 0x3f;
  }
  if ((uVar7 & 1) == 0) {
    piVar9 = (int *)((int)piVar9 - uVar7);
    param_2 = ((int)uVar7 >> 4) - 1;
    if (0x3f < param_2) {
      param_2 = 0x3f;
    }
    local_10 = local_10 + uVar7;
    uVar12 = (local_10 >> 4) - 1;
    if (0x3f < uVar12) {
      uVar12 = 0x3f;
    }
    if (param_2 != uVar12) {
      if (piVar9[1] == piVar9[2]) {
        if (param_2 < 0x20) {
          pcVar1 = (char *)(param_2 + 4 + uVar5);
          uVar11 = ~(0x80000000U >> ((byte)param_2 & 0x1f));
          puVar2 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar11;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar11;
          }
        }
        else {
          pcVar1 = (char *)(param_2 + 4 + uVar5);
          uVar11 = ~(0x80000000U >> ((byte)param_2 - 0x20 & 0x1f));
          puVar2 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar11;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar11;
          }
        }
      }
      *(int *)(piVar9[2] + 4) = piVar9[1];
      *(int *)(piVar9[1] + 8) = piVar9[2];
    }
  }
  if (((uVar7 & 1) != 0) || (param_2 != uVar12)) {
    piVar9[1] = piVar3[uVar12 * 2 + 1];
    piVar9[2] = (int)(piVar3 + uVar12 * 2);
    (piVar3 + uVar12 * 2)[1] = (int)piVar9;
    *(int **)(piVar9[1] + 8) = piVar9;
    if (piVar9[1] == piVar9[2]) {
      cVar4 = *(char *)(uVar12 + 4 + uVar5);
      *(char *)(uVar12 + 4 + uVar5) = cVar4 + '\x01';
      bVar8 = (byte)uVar12;
      if (uVar12 < 0x20) {
        if (cVar4 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
        }
        puVar2 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
        *puVar2 = *puVar2 | 0x80000000U >> (bVar8 & 0x1f);
      }
      else {
        if (cVar4 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
        puVar2 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
        *puVar2 = *puVar2 | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
      }
    }
  }
  *piVar9 = local_10;
  *(int *)(local_10 + -4 + (int)piVar9) = local_10;
  *piVar3 = *piVar3 + -1;
  uVar5 = DAT_00408114;
  puVar2 = DAT_0040811c;
  if ((*piVar3 == 0) && (uVar5 = uVar10, puVar2 = param_1, DAT_0040811c != (uint *)0x0)) {
    VirtualFree((LPVOID)(DAT_00408114 * 0x8000 + DAT_0040811c[3]),0x8000,0x4000);
    DAT_0040811c[2] = DAT_0040811c[2] | 0x80000000U >> ((byte)DAT_00408114 & 0x1f);
    *(undefined4 *)(DAT_0040811c[4] + 0xc4 + DAT_00408114 * 4) = 0;
    *(char *)(DAT_0040811c[4] + 0x43) = *(char *)(DAT_0040811c[4] + 0x43) + -1;
    if (*(char *)(DAT_0040811c[4] + 0x43) == '\0') {
      DAT_0040811c[1] = DAT_0040811c[1] & 0xfffffffe;
    }
    puVar2 = param_1;
    if (DAT_0040811c[2] == 0xffffffff) {
      VirtualFree((LPVOID)DAT_0040811c[3],0,0x8000);
      HeapFree(DAT_00409364,0,(LPVOID)DAT_0040811c[4]);
      FUN_00404af0(DAT_0040811c,DAT_0040811c + 5,
                   (DAT_00408120 * 0x14 - (int)DAT_0040811c) + -0x14 + DAT_00408124);
      DAT_00408120 = DAT_00408120 + -1;
      if (DAT_0040811c < param_1) {
        param_1 = param_1 + -5;
      }
      DAT_00408118 = DAT_00408124;
      puVar2 = param_1;
    }
  }
  DAT_0040811c = puVar2;
  DAT_00408114 = uVar5;
  return;
}


/*
 * FUN_00403ee9 at 00403ee9
 * int * __cdecl FUN_00403ee9(uint * param_1)
 * Address ranges: 00403ee9-004041f1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int * __cdecl FUN_00403ee9(uint *param_1)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar8 = DAT_00408124 + DAT_00408120 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_00408118;
  if (iVar7 < 0x20) {
    local_10 = 0xffffffff >> (bVar5 & 0x1f);
    local_c = 0xffffffff;
  }
  else {
    local_c = 0xffffffff >> (bVar5 - 0x20 & 0x1f);
    local_10 = 0;
  }
  for (; (param_1 < puVar8 && ((param_1[1] & local_c) == 0 && (*param_1 & local_10) == 0));
      param_1 = param_1 + 5) {
  }
  puVar11 = DAT_00408124;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_00408118 && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_00408118) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_00408124;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_00408118 && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_00408118) && (param_1 = FUN_004041f2(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_004042a3((int)param_1);
      *(int *)param_1[4] = iVar7;
      if (*(int *)param_1[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  piVar4 = (int *)param_1[4];
  local_8 = *piVar4;
  if ((local_8 == -1) ||
     ((piVar4[local_8 + 0x31] & local_c) == 0 && (piVar4[local_8 + 0x11] & local_10) == 0)) {
    local_8 = 0;
    puVar8 = (uint *)(piVar4 + 0x11);
    if ((piVar4[0x31] & local_c) == 0 && (piVar4[0x11] & local_10) == 0) {
      do {
        puVar11 = puVar8 + 0x21;
        local_8 = local_8 + 1;
        puVar8 = puVar8 + 1;
      } while ((*puVar11 & local_c) == 0 && (local_10 & *puVar8) == 0);
    }
  }
  iVar7 = 0;
  piVar2 = piVar4 + local_8 * 0x81 + 0x51;
  local_10 = piVar4[local_8 + 0x11] & local_10;
  if (local_10 == 0) {
    local_10 = piVar4[local_8 + 0x31] & local_c;
    iVar7 = 0x20;
  }
  for (; -1 < (int)local_10; local_10 = local_10 << 1) {
    iVar7 = iVar7 + 1;
  }
  piVar10 = (int *)piVar2[iVar7 * 2 + 1];
  iVar9 = *piVar10 - uVar6;
  iVar14 = (iVar9 >> 4) + -1;
  if (0x3f < iVar14) {
    iVar14 = 0x3f;
  }
  DAT_00408118 = param_1;
  if (iVar14 != iVar7) {
    if (piVar10[1] == piVar10[2]) {
      if (iVar7 < 0x20) {
        pcVar1 = (char *)((int)piVar4 + iVar7 + 4);
        uVar13 = ~(0x80000000U >> ((byte)iVar7 & 0x1f));
        piVar4[local_8 + 0x11] = uVar13 & piVar4[local_8 + 0x11];
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar13;
        }
      }
      else {
        pcVar1 = (char *)((int)piVar4 + iVar7 + 4);
        uVar13 = ~(0x80000000U >> ((byte)iVar7 - 0x20 & 0x1f));
        piVar4[local_8 + 0x31] = piVar4[local_8 + 0x31] & uVar13;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar13;
        }
      }
    }
    *(int *)(piVar10[2] + 4) = piVar10[1];
    *(int *)(piVar10[1] + 8) = piVar10[2];
    if (iVar9 == 0) goto LAB_004041af;
    piVar10[1] = piVar2[iVar14 * 2 + 1];
    piVar10[2] = (int)(piVar2 + iVar14 * 2);
    (piVar2 + iVar14 * 2)[1] = (int)piVar10;
    *(int **)(piVar10[1] + 8) = piVar10;
    if (piVar10[1] == piVar10[2]) {
      cVar3 = *(char *)(iVar14 + 4 + (int)piVar4);
      bVar5 = (byte)iVar14;
      if (iVar14 < 0x20) {
        *(char *)(iVar14 + 4 + (int)piVar4) = cVar3 + '\x01';
        if (cVar3 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar5 & 0x1f);
        }
        piVar4[local_8 + 0x11] = piVar4[local_8 + 0x11] | 0x80000000U >> (bVar5 & 0x1f);
      }
      else {
        *(char *)(iVar14 + 4 + (int)piVar4) = cVar3 + '\x01';
        if (cVar3 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar5 - 0x20 & 0x1f);
        }
        piVar4[local_8 + 0x31] = piVar4[local_8 + 0x31] | 0x80000000U >> (bVar5 - 0x20 & 0x1f);
      }
    }
  }
  if (iVar9 != 0) {
    *piVar10 = iVar9;
    *(int *)(iVar9 + -4 + (int)piVar10) = iVar9;
  }
LAB_004041af:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_0040811c)) && (local_8 == DAT_00408114)) {
    DAT_0040811c = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}


/*
 * FUN_004041f2 at 004041f2
 * undefined4 * __stdcall FUN_004041f2(void)
 * Address ranges: 004041f2-004042a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 * FUN_004041f2(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_00408120 == DAT_00408110) {
    pvVar2 = HeapReAlloc(DAT_00409364,0,DAT_00408124,(DAT_00408110 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_00408110 = DAT_00408110 + 0x10;
    DAT_00408124 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_00408124 + DAT_00408120 * 0x14);
  pvVar2 = HeapAlloc(DAT_00409364,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_00408120 = DAT_00408120 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_00409364,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}


/*
 * FUN_004042a3 at 004042a3
 * int __cdecl FUN_004042a3(int param_1)
 * Address ranges: 004042a3-0040439d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_004042a3(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LPVOID pvVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *lpAddress;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar9 = 0;
  for (iVar4 = *(int *)(param_1 + 8); -1 < iVar4; iVar4 = iVar4 << 1) {
    iVar9 = iVar9 + 1;
  }
  iVar8 = 0x3f;
  iVar4 = iVar9 * 0x204 + 0x144 + iVar3;
  iVar5 = iVar4;
  do {
    *(int *)(iVar5 + 8) = iVar5;
    *(int *)(iVar5 + 4) = iVar5;
    iVar5 = iVar5 + 8;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  lpAddress = (int *)(iVar9 * 0x8000 + *(int *)(param_1 + 0xc));
  pvVar6 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar6 == (LPVOID)0x0) {
    iVar9 = -1;
  }
  else {
    if (lpAddress <= lpAddress + 0x1c00) {
      piVar7 = lpAddress + 4;
      do {
        piVar7[-2] = -1;
        piVar7[0x3fb] = -1;
        piVar7[-1] = 0xff0;
        *piVar7 = (int)(piVar7 + 0x3ff);
        piVar7[1] = (int)(piVar7 + -0x401);
        piVar7[0x3fa] = 0xff0;
        piVar1 = piVar7 + 0x3fc;
        piVar7 = piVar7 + 0x400;
      } while (piVar1 <= lpAddress + 0x1c00);
    }
    *(int **)(iVar4 + 0x1fc) = lpAddress + 3;
    lpAddress[5] = iVar4 + 0x1f8;
    *(int **)(iVar4 + 0x200) = lpAddress + 0x1c03;
    lpAddress[0x1c04] = iVar4 + 0x1f8;
    *(undefined4 *)(iVar3 + 0x44 + iVar9 * 4) = 0;
    *(undefined4 *)(iVar3 + 0xc4 + iVar9 * 4) = 1;
    cVar2 = *(char *)(iVar3 + 0x43);
    *(char *)(iVar3 + 0x43) = cVar2 + '\x01';
    if (cVar2 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(0x80000000U >> ((byte)iVar9 & 0x1f));
  }
  return iVar9;
}


/*
 * FUN_0040439e at 0040439e
 * int __cdecl FUN_0040439e(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0040439e-00404426
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_0040439e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_004080d4 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_004080d4 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_004080d4 != (FARPROC)0x0) {
        DAT_004080d8 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_004080dc = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_004043ed;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_004043ed:
    if (DAT_004080d8 != (FARPROC)0x0) {
      iVar1 = (*DAT_004080d8)();
      if ((iVar1 != 0) && (DAT_004080dc != (FARPROC)0x0)) {
        iVar1 = (*DAT_004080dc)(iVar1);
      }
    }
    iVar1 = (*DAT_004080d4)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}


/*
 * FUN_00404427 at 00404427
 * undefined __cdecl FUN_00404427(uint param_1)
 * Address ranges: 00404427-0040448d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00404427(uint param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  _DAT_00407f68 = param_1;
  puVar1 = &DAT_00407938;
  do {
    if (param_1 == *puVar1) {
      DAT_00407f64 = *(undefined4 *)(iVar2 * 8 + 0x40793c);
      return;
    }
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)puVar1 < 0x407aa0);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    DAT_00407f64 = 0xd;
    return;
  }
  if ((param_1 < 0xbc) || (DAT_00407f64 = 8, 0xca < param_1)) {
    DAT_00407f64 = 0x16;
  }
  return;
}


/*
 * FUN_0040448e at 0040448e
 * undefined4 __cdecl FUN_0040448e(uint param_1)
 * Address ranges: 0040448e-00404507
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0040448e(uint param_1)

{
  int *piVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if (param_1 < DAT_00409480) {
    iVar2 = (param_1 & 0x1f) * 8;
    piVar1 = (int *)((&DAT_00409380)[(int)param_1 >> 5] + iVar2);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_00407234 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_004044e7;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_004044e7:
      *(undefined4 *)((&DAT_00409380)[(int)param_1 >> 5] + iVar2) = 0xffffffff;
      return 0;
    }
  }
  _DAT_00407f68 = 0;
  DAT_00407f64 = 9;
  return 0xffffffff;
}


/*
 * FUN_00404508 at 00404508
 * undefined4 __cdecl FUN_00404508(uint param_1)
 * Address ranges: 00404508-00404544
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00404508(uint param_1)

{
  if ((param_1 < DAT_00409480) &&
     ((*(byte *)((&DAT_00409380)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    return *(undefined4 *)((&DAT_00409380)[(int)param_1 >> 5] + (param_1 & 0x1f) * 8);
  }
  _DAT_00407f68 = 0;
  DAT_00407f64 = 9;
  return 0xffffffff;
}


/*
 * FUN_00404545 at 00404545
 * int * __cdecl FUN_00404545(int param_1, int param_2)
 * Address ranges: 00404545-004045c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int * __cdecl FUN_00404545(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint *_Size;
  uint *puVar3;
  
  _Size = (uint *)(param_1 * param_2);
  puVar3 = _Size;
  if (_Size < (uint *)0xffffffe1) {
    if (_Size == (uint *)0x0) {
      puVar3 = (uint *)0x1;
    }
    puVar3 = (uint *)((int)puVar3 + 0xfU & 0xfffffff0);
  }
  do {
    if (puVar3 < (uint *)0xffffffe1) {
      if ((_Size < DAT_00407930 || (int)_Size - (int)DAT_00407930 == 0) &&
         (piVar1 = FUN_00403ee9(_Size), piVar1 != (int *)0x0)) {
        _memset(piVar1,0,(size_t)_Size);
        return piVar1;
      }
      piVar1 = HeapAlloc(DAT_00409364,8,(SIZE_T)puVar3);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
    }
    if (DAT_00408108 == 0) {
      return (int *)0x0;
    }
    iVar2 = FUN_00404ac8(puVar3);
  } while (iVar2 != 0);
  return (int *)0x0;
}


/*
 * FUN_0040461a at 0040461a
 * int __cdecl FUN_0040461a(int * param_1)
 * Address ranges: 0040461a-00404654
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_0040461a(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = flsall(0);
    return iVar1;
  }
  iVar1 = FUN_00404655(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_00404ede(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}


/*
 * FUN_00404655 at 00404655
 * undefined4 __cdecl FUN_00404655(int * param_1)
 * Address ranges: 00404655-004046b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_00404655(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    uVar3 = *param_1 - param_1[2];
    if (0 < (int)uVar3) {
      uVar1 = FUN_00402dae(param_1[4],(char *)param_1[2],uVar3);
      if (uVar1 == uVar3) {
        if ((param_1[3] & 0x80U) != 0) {
          param_1[3] = param_1[3] & 0xfffffffd;
        }
      }
      else {
        param_1[3] = param_1[3] | 0x20;
        uVar2 = 0xffffffff;
      }
    }
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return uVar2;
}


/*
 * flsall at 004046ba
 * int __cdecl flsall(int param_1)
 * Address ranges: 004046ba-00404726
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _flsall  Library: Visual Studio 2003 Release
 */


/* Library Function - Single Match
    _flsall
   
   Library: Visual Studio 2003 Release */

int __cdecl flsall(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar3 = 0;
  iVar5 = 0;
  if (0 < DAT_00409360) {
    do {
      piVar1 = *(int **)(DAT_00408348 + iVar4 * 4);
      if ((piVar1 != (int *)0x0) && ((piVar1[3] & 0x83U) != 0)) {
        if (param_1 == 1) {
          iVar2 = FUN_0040461a(piVar1);
          if (iVar2 != -1) {
            iVar3 = iVar3 + 1;
          }
        }
        else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
          iVar2 = FUN_0040461a(piVar1);
          if (iVar2 == -1) {
            iVar5 = -1;
          }
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_00409360);
  }
  if (param_1 != 1) {
    iVar3 = iVar5;
  }
  return iVar3;
}


/*
 * FUN_00404727 at 00404727
 * undefined __stdcall FUN_00404727(void)
 * Address ranges: 00404727-0040472f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_00404727(void)

{
  __amsg_exit(2);
  return;
}


/*
 * FUN_00404730 at 00404730
 * int __cdecl FUN_00404730(LCID param_1, uint param_2, char * param_3, int param_4, LPWSTR param_5, int param_6, UINT param_7, int param_8)
 * Address ranges: 00404730-0040483f;00404853-004048f3;00404906-00404953
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl
FUN_00404730(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_004064d0;
  puStack_10 = &LAB_00402ab0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_00408100 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_00408100 = 2;
    }
    else {
      DAT_00408100 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_00404954(param_3,param_4);
  }
  if (DAT_00408100 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_00408100 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_004080f8;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_00404f40();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_00404f40();
            local_8 = 0xffffffff;
            if (&stack0x00000000 == (undefined1 *)0x3c) {
              ExceptionList = local_14;
              return 0;
            }
            iVar1 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,
                                 (LPWSTR)&stack0xffffffc4,iVar2);
            if (iVar1 == 0) {
              ExceptionList = local_14;
              return 0;
            }
            if (param_6 == 0) {
              param_6 = 0;
              param_5 = (LPWSTR)0x0;
            }
            iVar2 = WideCharToMultiByte(param_7,0x220,(LPCWSTR)&stack0xffffffc4,iVar2,(LPSTR)param_5
                                        ,param_6,(LPCSTR)0x0,(LPBOOL)0x0);
            iVar1 = iVar2;
          }
          else {
            if (param_6 == 0) {
              ExceptionList = local_14;
              return iVar2;
            }
            if (param_6 < iVar2) {
              ExceptionList = local_14;
              return 0;
            }
            iVar1 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,param_5,param_6);
          }
          if (iVar1 != 0) {
            ExceptionList = local_14;
            return iVar2;
          }
        }
      }
    }
  }
  ExceptionList = local_14;
  return 0;
}


/*
 * FUN_00404954 at 00404954
 * int __cdecl FUN_00404954(char * param_1, int param_2)
 * Address ranges: 00404954-0040497e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_00404954(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = param_2;
  for (pcVar1 = param_1; (iVar2 != 0 && (iVar2 = iVar2 + -1, *pcVar1 != '\0')); pcVar1 = pcVar1 + 1)
  {
  }
  if (*pcVar1 != '\0') {
    return param_2;
  }
  return (int)pcVar1 - (int)param_1;
}


/*
 * FUN_0040497f at 0040497f
 * BOOL __cdecl FUN_0040497f(DWORD param_1, LPCSTR param_2, int param_3, LPWORD param_4, UINT param_5, LCID param_6, int param_7)
 * Address ranges: 0040497f-00404a77;00404a83-00404ac7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


BOOL __cdecl
FUN_0040497f(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
            int param_7)

{
  undefined1 *puVar1;
  BOOL BVar2;
  int iVar3;
  WORD local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_004064e8;
  puStack_10 = &LAB_00402ab0;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_00408104;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_00408104 == 0) {
    ExceptionList = &local_14;
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    iVar3 = 1;
    puVar1 = local_1c;
    if (BVar2 == 0) {
      BVar2 = GetStringTypeA(0,1,"",1,local_20);
      if (BVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      iVar3 = 2;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  DAT_00408104 = iVar3;
  if (DAT_00408104 != 2) {
    if (DAT_00408104 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_004080f8;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_00404f40();
        local_1c = &stack0xffffffc8;
        _memset(&stack0xffffffc8,0,iVar3 * 2);
        local_8 = 0xffffffff;
        if ((&stack0x00000000 != (undefined1 *)0x38) &&
           (iVar3 = MultiByteToWideChar(param_5,1,param_2,param_3,(LPWSTR)&stack0xffffffc8,iVar3),
           iVar3 != 0)) {
          BVar2 = GetStringTypeW(param_1,(LPCWSTR)&stack0xffffffc8,iVar3,param_4);
          ExceptionList = local_14;
          return BVar2;
        }
      }
    }
    ExceptionList = local_14;
    return 0;
  }
  if (param_6 == 0) {
    param_6 = DAT_004080e8;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}


/*
 * FUN_00404ac8 at 00404ac8
 * undefined4 __cdecl FUN_00404ac8(undefined4 param_1)
 * Address ranges: 00404ac8-00404ae2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_00404ac8(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_0040810c != (code *)0x0) {
    iVar1 = (*DAT_0040810c)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


/*
 * FUN_00404af0 at 00404af0
 * undefined4 * __cdecl FUN_00404af0(undefined4 * param_1, undefined4 * param_2, uint param_3)
 * Address ranges: 00404af0-00404b4a;00404b4c-00404b52;00404b60-00404b88;00404b8c-00404bae;00404bb0-00404bc8;00404bec-00404c35;00404c48-00404c4e;00404c50-00404c5a;00404c5c-00404c6c;00404c70-00404c86;00404c88-00404cad;00404cb0-00404cb8;00404cbc-00404cda;00404ce8-00404d04;00404d08-00404d2e;00404d30-00404d60;00404d84-00404dcd;00404de0-00404de6;00404de8-00404df4;00404df8-00404e0a;00404e0c-00404e24
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 * __cdecl FUN_00404af0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_00404ca7_caseD_2;
        case 3:
          goto switchD_00404ca7_caseD_3;
        }
        goto switchD_00404ca7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_00404ca7_caseD_0;
      case 1:
        goto switchD_00404ca7_caseD_1;
      case 2:
        goto switchD_00404ca7_caseD_2;
      case 3:
        goto switchD_00404ca7_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_00404ca7_caseD_2;
            case 3:
              goto switchD_00404ca7_caseD_3;
            }
            goto switchD_00404ca7_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_00404ca7_caseD_2;
            case 3:
              goto switchD_00404ca7_caseD_3;
            }
            goto switchD_00404ca7_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_00404ca7_caseD_2;
            case 3:
              goto switchD_00404ca7_caseD_3;
            }
            goto switchD_00404ca7_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_00404ca7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_00404ca7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_00404ca7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_00404ca7_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_00404b25_caseD_2;
      case 3:
        goto switchD_00404b25_caseD_3;
      }
      goto switchD_00404b25_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_00404b25_caseD_0;
    case 1:
      goto switchD_00404b25_caseD_1;
    case 2:
      goto switchD_00404b25_caseD_2;
    case 3:
      goto switchD_00404b25_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_00404b25_caseD_2;
          case 3:
            goto switchD_00404b25_caseD_3;
          }
          goto switchD_00404b25_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_00404b25_caseD_2;
          case 3:
            goto switchD_00404b25_caseD_3;
          }
          goto switchD_00404b25_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_00404b25_caseD_2;
          case 3:
            goto switchD_00404b25_caseD_3;
          }
          goto switchD_00404b25_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_00404b25_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_00404b25_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_00404b25_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_00404b25_caseD_0:
  return param_1;
}


/*
 * _memset at 00404e30
 * void * __cdecl _memset(void * _Dst, int _Val, size_t _Size)
 * Address ranges: 00404e30-00404e87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _memset  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */


/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  uint *puVar4;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  puVar4 = _Dst;
  if (3 < _Size) {
    uVar2 = -(int)_Dst & 3;
    sVar3 = _Size;
    if (uVar2 != 0) {
      sVar3 = _Size - uVar2;
      do {
        *(undefined1 *)puVar4 = (undefined1)_Val;
        puVar4 = (uint *)((int)puVar4 + 1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar3 & 3;
    uVar2 = sVar3 >> 2;
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar4 = (char)uVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}


/*
 * FUN_00404e88 at 00404e88
 * undefined4 __cdecl FUN_00404e88(FILE * param_1)
 * Address ranges: 00404e88-00404edd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_00404e88(FILE *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_1->_flag & 0x40U) == 0) {
    if ((param_1->_flag & 0x83U) != 0) {
      uVar2 = FUN_00404655((int *)param_1);
      __freebuf(param_1);
      iVar1 = FUN_00404f6f(param_1->_file);
      if (iVar1 < 0) {
        uVar2 = 0xffffffff;
      }
      else if (param_1->_tmpfname != (char *)0x0) {
        FUN_00403677(param_1->_tmpfname);
        param_1->_tmpfname = (char *)0x0;
      }
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  param_1->_flag = 0;
  return uVar2;
}


/*
 * FUN_00404ede at 00404ede
 * undefined4 __cdecl FUN_00404ede(uint param_1)
 * Address ranges: 00404ede-00404f34
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00404ede(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  
  DVar2 = _DAT_00407f68;
  if ((param_1 < DAT_00409480) &&
     ((*(byte *)((&DAT_00409380)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    hFile = (HANDLE)FUN_00404508(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    if (DVar2 == 0) {
      return 0;
    }
  }
  _DAT_00407f68 = DVar2;
  DAT_00407f64 = 9;
  return 0xffffffff;
}


/*
 * FUN_00404f40 at 00404f40
 * undefined __stdcall FUN_00404f40(void)
 * Address ranges: 00404f40-00404f6e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Unable to track spacebase fully for stack */

void FUN_00404f40(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  puVar1 = &stack0x00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x1000;
  }
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}


/*
 * FUN_00404f6f at 00404f6f
 * undefined4 __cdecl FUN_00404f6f(uint param_1)
 * Address ranges: 00404f6f-00405021
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00404f6f(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  
  if (DAT_00409480 <= param_1) {
    _DAT_00407f68 = 0;
    DAT_00407f64 = 9;
    return 0xffffffff;
  }
  iVar5 = (param_1 & 0x1f) * 8;
  if ((*(byte *)((&DAT_00409380)[(int)param_1 >> 5] + 4 + iVar5) & 1) == 0) {
    DAT_00407f64 = 9;
    _DAT_00407f68 = 0;
    return 0xffffffff;
  }
  iVar1 = FUN_00404508(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_00404508(2);
      iVar2 = FUN_00404508(1);
      if (iVar2 == iVar1) goto LAB_00404fe8;
    }
    hObject = (HANDLE)FUN_00404508(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_00404fea;
    }
  }
LAB_00404fe8:
  DVar4 = 0;
LAB_00404fea:
  FUN_0040448e(param_1);
  *(undefined1 *)((&DAT_00409380)[(int)param_1 >> 5] + 4 + iVar5) = 0;
  if (DVar4 == 0) {
    return 0;
  }
  FUN_00404427(DVar4);
  return 0xffffffff;
}


/*
 * __freebuf at 00405022
 * void __cdecl __freebuf(FILE * _File)
 * Address ranges: 00405022-0040504c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __freebuf  Library: Visual Studio 2003 Release
 */


/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2003 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    FUN_00403677(_File->_base);
    *(ushort *)&_File->_flag = (ushort)_File->_flag & 0xfbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}


/*
 * KERNEL32.DLL::RtlUnwind at 00405050
 * void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
 * Address ranges: 00405050-00405055
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::RtlUnwind
 */


void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x00405050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}


/*
 * FUN_00405056 at 00405056
 * undefined __cdecl FUN_00405056(uint * param_1, size_t param_2)
 * Address ranges: 00405056-00405068
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_00405056(uint *param_1,size_t param_2)

{
  FUN_00405069(0,param_1,param_2);
  return;
}


/*
 * FUN_00405069 at 00405069
 * uint * __cdecl FUN_00405069(uint param_1, uint * param_2, size_t param_3)
 * Address ranges: 00405069-00405139
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __cdecl FUN_00405069(uint param_1,uint *param_2,size_t param_3)

{
  int iVar1;
  DWORD DVar2;
  uint uVar3;
  uint *puVar4;
  uint local_10c [65];
  LPSTR local_8;
  
  uVar3 = param_1;
  if (param_1 == 0) {
    DVar2 = GetCurrentDirectoryA(0x104,(LPSTR)local_10c);
  }
  else {
    iVar1 = FUN_0040513a(param_1);
    if (iVar1 == 0) {
      DAT_00407f64 = 0xd;
      _DAT_00407f68 = 0xf;
      return (uint *)0x0;
    }
    param_1 = (uint)CONCAT12(0x2e,CONCAT11(0x3a,(char)uVar3 + '@'));
    DVar2 = GetFullPathNameA((LPCSTR)&param_1,0x104,(LPSTR)local_10c,&local_8);
  }
  if ((DVar2 != 0) && (uVar3 = DVar2 + 1, uVar3 < 0x105)) {
    if (param_2 == (uint *)0x0) {
      if ((int)uVar3 <= (int)param_3) {
        uVar3 = param_3;
      }
      puVar4 = _malloc(uVar3);
      if (puVar4 != (uint *)0x0) {
LAB_00405126:
        puVar4 = FUN_004036b0(puVar4,local_10c);
        return puVar4;
      }
      DAT_00407f64 = 0xc;
    }
    else {
      puVar4 = param_2;
      if ((int)uVar3 <= (int)param_3) goto LAB_00405126;
      DAT_00407f64 = 0x22;
    }
  }
  return (uint *)0x0;
}


/*
 * FUN_0040513a at 0040513a
 * undefined4 __cdecl FUN_0040513a(uint param_1)
 * Address ranges: 0040513a-00405170
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_0040513a(uint param_1)

{
  char cVar1;
  UINT UVar2;
  
  if (param_1 != 0) {
    cVar1 = (char)param_1;
    param_1 = (uint)CONCAT12(0x5c,CONCAT11(0x3a,cVar1 + '@'));
    UVar2 = GetDriveTypeA((LPCSTR)&param_1);
    if ((UVar2 == 0) || (UVar2 == 1)) {
      return 0;
    }
  }
  return 1;
}


/*
 * FUN_00405171 at 00405171
 * undefined __cdecl FUN_00405171(int param_1, uint * param_2, undefined4 * param_3)
 * Address ranges: 00405171-00405187
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_00405171(int param_1,uint *param_2,undefined4 *param_3)

{
  FUN_00405188(param_1,param_2,param_3,(char *)0x0);
  return;
}


/*
 * FUN_00405188 at 00405188
 * char * __cdecl FUN_00405188(int param_1, uint * param_2, undefined4 * param_3, char * param_4)
 * Address ranges: 00405188-004052d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


char * __cdecl FUN_00405188(int param_1,uint *param_2,undefined4 *param_3,char *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  size_t sVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  undefined **ppuVar7;
  char *local_c;
  
  pbVar1 = (byte *)FUN_004053d9((byte *)param_2,0x5c);
  pbVar2 = (byte *)FUN_004053d9((byte *)param_2,0x2f);
  puVar4 = param_2;
  if (pbVar2 == (byte *)0x0) {
    if ((pbVar1 != (byte *)0x0) ||
       (pbVar1 = FUN_00405366((byte *)param_2,0x3a), pbVar1 != (byte *)0x0)) goto LAB_004051fd;
    sVar3 = _strlen((char *)param_2);
    puVar4 = _malloc(sVar3 + 3);
    if (puVar4 != (uint *)0x0) {
      FUN_004036b0(puVar4,(uint *)&DAT_00406514);
      FUN_004036c0(puVar4,param_2);
      pbVar1 = (byte *)((int)puVar4 + 2);
      goto LAB_004051fd;
    }
LAB_00405256:
    local_c = (char *)0xffffffff;
  }
  else {
    if ((pbVar1 == (byte *)0x0) || (pbVar1 < pbVar2)) {
      pbVar1 = pbVar2;
    }
LAB_004051fd:
    local_c = (char *)0xffffffff;
    iVar5 = FUN_004053d9(pbVar1,0x2e);
    if (iVar5 == 0) {
      sVar3 = _strlen((char *)puVar4);
      puVar6 = _malloc(sVar3 + 5);
      if (puVar6 == (uint *)0x0) goto LAB_00405256;
      FUN_004036b0(puVar6,puVar4);
      sVar3 = _strlen((char *)puVar4);
      ppuVar7 = &PTR_DAT_00407abc;
      do {
        FUN_004036b0((uint *)(sVar3 + (int)puVar6),(uint *)*ppuVar7);
        iVar5 = FUN_00405322((LPCSTR)puVar6,0);
        if (iVar5 != -1) {
          local_c = FUN_004052d1(param_1,(LPCSTR)puVar6,param_3,param_4);
          break;
        }
        ppuVar7 = ppuVar7 + -1;
      } while (0x407aaf < (int)ppuVar7);
      FUN_00403677(puVar6);
    }
    else {
      iVar5 = FUN_00405322((LPCSTR)puVar4,0);
      if (iVar5 != -1) {
        local_c = FUN_004052d1(param_1,(LPCSTR)puVar4,param_3,param_4);
      }
    }
    if (puVar4 != param_2) {
      FUN_00403677(puVar4);
    }
  }
  return local_c;
}


/*
 * FUN_004052d1 at 004052d1
 * char * __cdecl FUN_004052d1(int param_1, LPCSTR param_2, undefined4 * param_3, char * param_4)
 * Address ranges: 004052d1-00405321
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


char * __cdecl FUN_004052d1(int param_1,LPCSTR param_2,undefined4 *param_3,char *param_4)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00405618(param_3,(undefined4 *)param_4,&param_4,&param_3);
  if (iVar1 == -1) {
    return (char *)0xffffffff;
  }
  pcVar2 = FUN_00405439(param_1,param_2,param_4,param_3);
  FUN_00403677(param_4);
  FUN_00403677(param_3);
  return pcVar2;
}


/*
 * FUN_00405322 at 00405322
 * undefined4 __cdecl FUN_00405322(LPCSTR param_1, byte param_2)
 * Address ranges: 00405322-00405365
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00405322(LPCSTR param_1,byte param_2)

{
  DWORD DVar1;
  
  DVar1 = GetFileAttributesA(param_1);
  if (DVar1 == 0xffffffff) {
    DVar1 = GetLastError();
    FUN_00404427(DVar1);
  }
  else {
    if (((DVar1 & 1) == 0) || ((param_2 & 2) == 0)) {
      return 0;
    }
    DAT_00407f64 = 0xd;
    _DAT_00407f68 = 5;
  }
  return 0xffffffff;
}


/*
 * FUN_00405366 at 00405366
 * byte * __cdecl FUN_00405366(byte * param_1, uint param_2)
 * Address ranges: 00405366-004053d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


byte * __cdecl FUN_00405366(byte *param_1,uint param_2)

{
  ushort uVar1;
  byte *pbVar2;
  
  if (DAT_0040813c == 0) {
    pbVar2 = (byte *)_strchr((char *)param_1,param_2);
    return pbVar2;
  }
  while( true ) {
    uVar1 = (ushort)*param_1;
    if (uVar1 == 0) break;
    if ((*(byte *)((int)&DAT_00408240 + uVar1 + 1) & 4) == 0) {
      pbVar2 = param_1;
      if (param_2 == uVar1) break;
    }
    else {
      pbVar2 = param_1 + 1;
      if (param_1[1] == 0) {
        return (byte *)0x0;
      }
      if (param_2 == CONCAT11(*param_1,param_1[1])) {
        return param_1;
      }
    }
    param_1 = pbVar2 + 1;
  }
  return (byte *)(~-(uint)(param_2 != uVar1) & (uint)param_1);
}


/*
 * FUN_004053d9 at 004053d9
 * undefined __cdecl FUN_004053d9(byte * param_1, uint param_2)
 * Address ranges: 004053d9-00405438
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_004053d9(byte *param_1,uint param_2)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  bool bVar6;
  
  pbVar3 = (byte *)0x0;
  if (DAT_0040813c == 0) {
    _strrchr((char *)param_1,param_2);
    return;
  }
  do {
    bVar5 = *param_1;
    if ((*(byte *)((int)&DAT_00408240 + bVar5 + 1) & 4) == 0) {
      bVar6 = param_2 == bVar5;
LAB_0040542c:
      pbVar4 = param_1;
      if (bVar6) {
        pbVar3 = param_1;
      }
    }
    else {
      bVar1 = param_1[1];
      pbVar4 = param_1 + 1;
      if (bVar1 == 0) {
        bVar6 = pbVar3 == (byte *)0x0;
        param_1 = pbVar4;
        bVar5 = bVar1;
        goto LAB_0040542c;
      }
      uVar2 = CONCAT11(bVar5,bVar1);
      bVar5 = bVar1;
      if (param_2 == uVar2) {
        pbVar3 = param_1;
      }
    }
    param_1 = pbVar4 + 1;
    if (bVar5 == 0) {
      return;
    }
  } while( true );
}


/*
 * FUN_00405439 at 00405439
 * char * __cdecl FUN_00405439(int param_1, LPCSTR param_2, char * param_3, LPVOID param_4)
 * Address ranges: 00405439-00405617
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl FUN_00405439(int param_1,LPCSTR param_2,char *param_3,LPVOID param_4)

{
  undefined4 *puVar1;
  byte bVar2;
  char *pcVar3;
  uint uVar5;
  undefined4 *puVar6;
  BOOL BVar7;
  DWORD DVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  _STARTUPINFOA local_64;
  _PROCESS_INFORMATION local_20;
  char *local_10;
  DWORD local_c;
  char local_5;
  char *pcVar4;
  
  local_5 = '\0';
  local_c = 0;
  if ((param_1 != 0) && (param_1 != 1)) {
    if (param_1 < 2) {
      DAT_00407f64 = 0x16;
      _DAT_00407f68 = 0;
      return (char *)0xffffffff;
    }
    if (3 < param_1) {
      if (param_1 != 4) {
        DAT_00407f64 = 0x16;
        _DAT_00407f68 = 0;
        return (char *)0xffffffff;
      }
      local_5 = '\x01';
    }
  }
  local_10 = param_3;
  pcVar3 = param_3;
  while (*pcVar3 != '\0') {
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar3 != '\0');
    if (pcVar4[2] != '\0') {
      *pcVar3 = ' ';
      pcVar3 = pcVar4 + 2;
    }
  }
  _memset(&local_64,0,0x44);
  local_64.cb = 0x44;
  uVar11 = DAT_00409480;
  uVar5 = DAT_00409480;
  while ((uVar11 != 0 &&
         (uVar5 = uVar5 - 1,
         *(char *)((&DAT_00409380)[(int)uVar5 >> 5] + 4 + (uVar5 & 0x1f) * 8) == '\0'))) {
    uVar11 = uVar11 - 1;
  }
  uVar5 = uVar11 * 5 + 4;
  local_64.cbReserved2 = (WORD)uVar5;
  local_64.lpReserved2 = (LPBYTE)FUN_00404545(uVar5 & 0xffff,1);
  *(uint *)local_64.lpReserved2 = uVar11;
  uVar5 = 0;
  puVar9 = (uint *)((int)local_64.lpReserved2 + 4);
  puVar6 = (undefined4 *)((int)local_64.lpReserved2 + uVar11 + 4);
  if (0 < (int)uVar11) {
    do {
      puVar1 = (undefined4 *)((&DAT_00409380)[(int)uVar5 >> 5] + (uVar5 & 0x1f) * 8);
      bVar2 = *(byte *)(puVar1 + 1);
      if ((bVar2 & 0x10) == 0) {
        *(byte *)puVar9 = bVar2;
        *puVar6 = *puVar1;
      }
      else {
        *(byte *)puVar9 = 0;
        *puVar6 = 0xffffffff;
      }
      uVar5 = uVar5 + 1;
      puVar9 = (uint *)((int)puVar9 + 1);
      puVar6 = puVar6 + 1;
    } while ((int)uVar5 < (int)uVar11);
  }
  if (local_5 != '\0') {
    puVar9 = (uint *)((int)local_64.lpReserved2 + 4);
    iVar10 = 0;
    puVar6 = (undefined4 *)((int)local_64.lpReserved2 + uVar11 + 4);
    while( true ) {
      uVar5 = uVar11;
      if (2 < (int)uVar11) {
        uVar5 = 3;
      }
      if ((int)uVar5 <= iVar10) break;
      *(undefined1 *)puVar9 = 0;
      *puVar6 = 0xffffffff;
      iVar10 = iVar10 + 1;
      puVar9 = (uint *)((int)puVar9 + 1);
      puVar6 = puVar6 + 1;
    }
    local_c = 8;
  }
  DAT_00407f64 = 0;
  _DAT_00407f68 = 0;
  BVar7 = CreateProcessA(param_2,local_10,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,1,
                         local_c,param_4,(LPCSTR)0x0,&local_64,&local_20);
  DVar8 = GetLastError();
  FUN_00403677(local_64.lpReserved2);
  if (BVar7 != 0) {
    if (param_1 != 2) {
      if (param_1 == 0) {
        WaitForSingleObject(local_20.hProcess,0xffffffff);
        GetExitCodeProcess(local_20.hProcess,(LPDWORD)&param_3);
        CloseHandle(local_20.hProcess);
      }
      else if (param_1 == 4) {
        CloseHandle(local_20.hProcess);
        param_3 = (char *)0x0;
      }
      else {
        param_3 = local_20.hProcess;
      }
      CloseHandle(local_20.hThread);
      return param_3;
    }
                    /* WARNING: Subroutine does not return */
    __exit(0);
  }
  FUN_00404427(DVar8);
  return (char *)0xffffffff;
}


/*
 * FUN_00405618 at 00405618
 * undefined4 __cdecl FUN_00405618(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4)
 * Address ranges: 00405618-0040581b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_00405618(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  size_t sVar1;
  void *pvVar2;
  size_t sVar3;
  char *pcVar4;
  undefined4 uVar5;
  char cVar6;
  undefined4 *puVar7;
  size_t sVar8;
  uint *puVar9;
  undefined4 *puVar10;
  
  sVar8 = 2;
  sVar3 = sVar8;
  for (puVar7 = param_1; (char *)*puVar7 != (char *)0x0; puVar7 = puVar7 + 1) {
    sVar1 = _strlen((char *)*puVar7);
    sVar3 = sVar3 + 1 + sVar1;
  }
  pvVar2 = _malloc(sVar3);
  *param_3 = pvVar2;
  if (pvVar2 == (void *)0x0) {
    *param_4 = 0;
LAB_00405739:
    DAT_00407f64 = 0xc;
    _DAT_00407f68 = 8;
LAB_0040574d:
    uVar5 = 0xffffffff;
  }
  else {
    puVar7 = param_2;
    if (param_2 == (undefined4 *)0x0) {
      *param_4 = 0;
      puVar7 = param_4;
      puVar10 = param_4;
    }
    else {
      for (; (char *)*puVar7 != (char *)0x0; puVar7 = puVar7 + 1) {
        sVar3 = _strlen((char *)*puVar7);
        sVar8 = sVar8 + 1 + sVar3;
      }
      if (DAT_00407fb0 == (char *)0x0) {
        DAT_00407fb0 = FUN_0040269e();
        if (DAT_00407fb0 != (LPSTR)0x0) goto LAB_004056b6;
        goto LAB_0040574d;
      }
LAB_004056b6:
      puVar7 = (undefined4 *)0x0;
      if (*DAT_00407fb0 != '\0') {
        cVar6 = *DAT_00407fb0;
        pcVar4 = DAT_00407fb0;
        do {
          if (cVar6 == '=') break;
          sVar3 = _strlen(pcVar4);
          puVar7 = (undefined4 *)((int)puVar7 + sVar3 + 1);
          cVar6 = DAT_00407fb0[(int)puVar7];
          pcVar4 = DAT_00407fb0 + (int)puVar7;
        } while (cVar6 != '\0');
      }
      pcVar4 = DAT_00407fb0 + (int)puVar7;
      puVar10 = puVar7;
      while ((((*pcVar4 == '=' && (pcVar4[1] != '\0')) && (pcVar4[2] == ':')) && (pcVar4[3] == '='))
            ) {
        sVar3 = _strlen(pcVar4 + 4);
        puVar10 = (undefined4 *)((int)puVar10 + sVar3 + 5);
        pcVar4 = DAT_00407fb0 + (int)puVar10;
      }
      pvVar2 = _malloc((int)puVar10 + (sVar8 - (int)puVar7));
      *param_4 = pvVar2;
      if (pvVar2 == (void *)0x0) {
        FUN_00403677((LPVOID)*param_3);
        *param_3 = 0;
        goto LAB_00405739;
      }
    }
    puVar9 = (uint *)*param_3;
    param_3 = param_1;
    if ((uint *)*param_1 != (uint *)0x0) {
      FUN_004036b0(puVar9,(uint *)*param_1);
      param_3 = param_1 + 1;
      sVar3 = _strlen((char *)*param_1);
      puVar9 = (uint *)((int)puVar9 + sVar3 + 1);
      goto LAB_00405774;
    }
    while( true ) {
      puVar9 = (uint *)((int)puVar9 + 1);
LAB_00405774:
      if ((uint *)*param_3 == (uint *)0x0) break;
      FUN_004036b0(puVar9,(uint *)*param_3);
      sVar3 = _strlen((char *)*param_3);
      puVar9 = (uint *)((int)puVar9 + sVar3);
      *(undefined1 *)puVar9 = 0x20;
      param_3 = param_3 + 1;
    }
    *(undefined1 *)((int)puVar9 + -1) = 0;
    *(undefined1 *)puVar9 = 0;
    puVar9 = (uint *)*param_4;
    if (param_2 != (undefined4 *)0x0) {
      FUN_00403820(puVar9,(undefined4 *)(DAT_00407fb0 + (int)puVar7),(int)puVar10 - (int)puVar7);
      puVar9 = (uint *)((int)puVar9 + ((int)puVar10 - (int)puVar7));
      for (; (uint *)*param_2 != (uint *)0x0; param_2 = param_2 + 1) {
        FUN_004036b0(puVar9,(uint *)*param_2);
        sVar3 = _strlen((char *)*param_2);
        puVar9 = (uint *)((int)puVar9 + sVar3 + 1);
      }
    }
    if (puVar9 != (uint *)0x0) {
      if (puVar9 == (uint *)*param_4) {
        *(undefined1 *)puVar9 = 0;
        puVar9 = (uint *)((int)puVar9 + 1);
      }
      *(undefined1 *)puVar9 = 0;
    }
    FUN_00403677(DAT_00407fb0);
    DAT_00407fb0 = (char *)0x0;
    uVar5 = 0;
  }
  return uVar5;
}


/*
 * _strchr at 00405830
 * char * __cdecl _strchr(char * _Str, int _Val)
 * Address ranges: 00405820-00405824;00405830-004058eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _strchr  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */


/* Library Function - Single Match
    _strchr
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strchr(char *_Str,int _Val)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)_Str & 3) != 0) {
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    _Str = (char *)((int)_Str + 1);
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *(uint *)_Str;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11((char)_Val,(char)_Val),CONCAT11((char)_Val,(char)_Val));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = (uint *)((int)_Str + 4);
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      _Str = (char *)puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (char *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (char *)0x0;
        }
      }
    }
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 1);
    }
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 3);
    }
    _Str = (char *)puVar5;
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
  }
  return (char *)0x0;
}


/*
 * _strrchr at 004058f0
 * char * __cdecl _strrchr(char * _Str, int _Ch)
 * Address ranges: 004058f0-00405916
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _strrchr  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */


/* Library Function - Single Match
    _strrchr
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strrchr(char *_Str,int _Ch)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = -1;
  do {
    pcVar4 = _Str;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = _Str + 1;
    cVar1 = *_Str;
    _Str = pcVar4;
  } while (cVar1 != '\0');
  iVar2 = -(iVar2 + 1);
  pcVar4 = pcVar4 + -1;
  do {
    pcVar3 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar3 = pcVar4 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar3;
  } while ((char)_Ch != cVar1);
  pcVar3 = pcVar3 + 1;
  if (*pcVar3 != (char)_Ch) {
    pcVar3 = (char *)0x0;
  }
  return pcVar3;
}


