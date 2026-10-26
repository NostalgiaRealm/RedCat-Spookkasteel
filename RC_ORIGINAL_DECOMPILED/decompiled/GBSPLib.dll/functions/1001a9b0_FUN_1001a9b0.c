/*
 * FUN_1001a9b0 at 1001a9b0
 * undefined FUN_1001a9b0(void)
 * Address ranges: 1001a9b0-1001a9fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1001a9b0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  iVar1 = FUN_1001aa00();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1001aa20(param_1,param_2);
  uVar2 = FUN_100149e0(uVar2);
  FUN_1001aa40();
  return uVar2;
}

