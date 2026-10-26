/*
 * FUN_005decf0 at 005decf0
 * undefined FUN_005decf0(void)
 * Address ranges: 005decf0-005ded4c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_005decf0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  iVar1 = FUN_005dec80();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_005deca0(param_1,param_2);
  if (iVar1 != param_2) {
    return 0;
  }
  uVar2 = FUN_005cd390(param_2);
  FUN_005decc0();
  return uVar2;
}

