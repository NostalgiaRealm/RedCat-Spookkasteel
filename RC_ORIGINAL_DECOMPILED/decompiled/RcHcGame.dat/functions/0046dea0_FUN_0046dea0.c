/*
 * FUN_0046dea0 at 0046dea0
 * undefined FUN_0046dea0(void)
 * Address ranges: 0046dea0-0046df21
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0046dea0(int param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00628066;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_0060af6c(param_1 + 0x14bc,4,5,FUN_0057d310);
  iVar1 = *(int *)(param_1 + 0xf8);
  local_4 = local_4 & 0xffffff00;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00501f40();
  ExceptionList = local_c;
  return;
}

