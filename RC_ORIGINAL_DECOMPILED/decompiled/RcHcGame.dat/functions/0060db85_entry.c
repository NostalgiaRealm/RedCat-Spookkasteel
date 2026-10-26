/*
 * entry at 0060db85
 * undefined entry(void)
 * Address ranges: 0060db85-0060dc6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  DWORD DVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  HMODULE pHVar5;
  undefined4 uVar6;
  _STARTUPINFOA local_60;
  undefined1 *local_1c;
  undefined4 *local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00651d78;
  puStack_10 = &LAB_006106d0;
  pvStack_14 = ExceptionList;
  local_1c = &stack0xffffff88;
  ExceptionList = &pvStack_14;
  DVar1 = GetVersion();
  _DAT_0070ffb0 = DVar1 >> 8 & 0xff;
  _DAT_0070ffac = DVar1 & 0xff;
  _DAT_0070ffa8 = _DAT_0070ffac * 0x100 + _DAT_0070ffb0;
  _DAT_0070ffa4 = DVar1 >> 0x10;
  iVar2 = FUN_00616cfc(0);
  if (iVar2 == 0) {
    FUN_0060dca0(0x1c);
  }
  local_8 = 0;
  FUN_0061bcfe();
  DAT_00747eb4 = GetCommandLineA();
  DAT_0070ff7c = FUN_0061c2a7();
  FUN_0061c05a();
  FUN_0061bfa1();
  FUN_0060f192();
  local_60.dwFlags = 0;
  GetStartupInfoA(&local_60);
  uVar3 = FUN_0061bf49();
  if ((local_60.dwFlags & 1) == 0) {
    uVar4 = 10;
  }
  else {
    uVar4 = (uint)local_60.wShowWindow;
  }
  uVar6 = 0;
  pHVar5 = GetModuleHandleA((LPCSTR)0x0);
  uVar3 = FUN_00592260(pHVar5,uVar6,uVar3,uVar4);
  FUN_0060f1bf(uVar3);
  FUN_0061bab0(*(undefined4 *)*local_18,local_18);
  return;
}

