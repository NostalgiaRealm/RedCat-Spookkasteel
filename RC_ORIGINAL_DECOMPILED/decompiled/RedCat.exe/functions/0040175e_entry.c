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

