/*
 * FUN_1001aa70 at 1001aa70
 * undefined FUN_1001aa70(void)
 * Address ranges: 1001aa70-1001aacc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1001aa70(int param_1,int param_2)

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
  iVar1 = FUN_1001aa20(param_1,param_2);
  if (iVar1 != param_2) {
    return 0;
  }
  uVar2 = FUN_10014a00(param_2);
  FUN_1001aa40();
  return uVar2;
}

