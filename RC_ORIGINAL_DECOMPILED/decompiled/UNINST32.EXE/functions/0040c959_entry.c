/*
 * entry at 0040c959
 * undefined __stdcall entry(void)
 * Address ranges: 0040c959-0040ca43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  DWORD DVar1;
  int iVar2;
  HRSRC pHVar3;
  uint uVar4;
  HMODULE pHVar5;
  UINT UVar6;
  HGLOBAL pvVar7;
  _STARTUPINFOA local_60;
  undefined1 *local_1c;
  _EXCEPTION_POINTERS *local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_004107e8;
  puStack_10 = &LAB_0040e914;
  pvStack_14 = ExceptionList;
  local_1c = &stack0xffffff88;
  ExceptionList = &pvStack_14;
  DVar1 = GetVersion();
  _DAT_004134fc = DVar1 >> 8 & 0xff;
  _DAT_004134f8 = DVar1 & 0xff;
  _DAT_004134f4 = _DAT_004134f8 * 0x100 + _DAT_004134fc;
  _DAT_004134f0 = DVar1 >> 0x10;
  iVar2 = FUN_0040d980(0);
  if (iVar2 == 0) {
    FUN_0040ca74(0x1c);
  }
  local_8 = 0;
  FUN_0040d307();
  DAT_00413f18 = GetCommandLineA();
  DAT_004134d8 = FUN_0040e6e7();
  FUN_0040e49a();
  FUN_0040e3e1();
  FUN_0040cc70();
  local_60.dwFlags = 0;
  GetStartupInfoA(&local_60);
  pHVar3 = (HRSRC)FUN_0040e389();
  if ((local_60.dwFlags & 1) == 0) {
    uVar4 = 10;
  }
  else {
    uVar4 = (uint)local_60.wShowWindow;
  }
  pvVar7 = (HGLOBAL)0x0;
  pHVar5 = GetModuleHandleA((LPCSTR)0x0);
  UVar6 = FUN_00401000(pHVar5,pvVar7,pHVar3,uVar4);
  FUN_0040cc9d(UVar6);
  FUN_0040e205(local_18->ExceptionRecord->ExceptionCode,local_18);
  return;
}

