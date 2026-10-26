/*
 * FUN_00420ba0 at 00420ba0
 * undefined FUN_00420ba0(void)
 * Address ranges: 00420ba0-00420c07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00420ba0(int param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00622158;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x310);
  local_4 = 0;
  ExceptionList = &local_c;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    ExceptionList = &local_c;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0x310) = 0;
  }
  local_4 = 0xffffffff;
  FUN_0049b720();
  ExceptionList = local_c;
  return;
}

