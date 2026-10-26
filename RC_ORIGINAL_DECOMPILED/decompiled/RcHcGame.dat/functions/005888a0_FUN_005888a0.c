/*
 * FUN_005888a0 at 005888a0
 * undefined FUN_005888a0(void)
 * Address ranges: 005888a0-00588921
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005888a0(int param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00642e70;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x110);
  local_4 = 1;
  ExceptionList = &local_c;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    ExceptionList = &local_c;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  local_4 = local_4 & 0xffffff00;
  FUN_0060af6c(param_1 + 0xfc,4,5,FUN_0057d310);
  local_4 = 0xffffffff;
  FUN_00501f40();
  ExceptionList = local_c;
  return;
}

