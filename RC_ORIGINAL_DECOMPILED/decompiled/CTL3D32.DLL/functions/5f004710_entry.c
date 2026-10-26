/*
 * entry at 5f004710
 * undefined4 __stdcall entry(undefined4 param_1, int param_2)
 * Address ranges: 5f004710-5f0047e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 entry(undefined4 param_1,int param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  DWORD DVar2;
  int iVar3;
  
  if (param_2 == 1) {
    hModule = GetModuleHandleA(s_KERNEL32_DLL_5f00c250);
    pFVar1 = GetProcAddress(hModule,s_DisableThreadLibraryCalls_5f00c234);
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(param_1);
    }
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
    DAT_5f00525c = param_1;
    DAT_5f005258 = param_1;
    DVar2 = GetVersion();
    DAT_5f005260 = CONCAT11((char)DVar2,(char)(DVar2 >> 8));
    if (((DVar2 & 0x80000000) == 0) || (DAT_5f005262 = 0x10, 0x35e < DAT_5f005260)) {
      DAT_5f005262 = 0x20;
    }
    _DAT_5f00a394 = GetSystemMetrics(7);
    _DAT_5f00a394 = _DAT_5f00a394 + -1;
    iVar3 = GetSystemMetrics(8);
    DAT_5f00a398 = iVar3 + -1;
    DAT_5f00a39c = GetSystemMetrics(4);
    _DAT_5f00a3a0 = GetSystemMetrics(0x1e);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  }
  return 1;
}

