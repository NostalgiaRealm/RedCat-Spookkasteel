/*
 * FUN_1001aad0 at 1001aad0
 * undefined FUN_1001aad0(void)
 * Address ranges: 1001aad0-1001ab1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1001aad0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    return 0;
  }
  iVar1 = FUN_1001aa00();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_10014a20(param_2);
  FUN_1001aa40();
  return uVar2;
}

