/*
 * FUN_005dec30 at 005dec30
 * undefined FUN_005dec30(void)
 * Address ranges: 005dec30-005dec7c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_005dec30(int param_1,undefined4 param_2)

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
  uVar2 = FUN_005deca0(param_1,param_2);
  uVar2 = FUN_005cd370(uVar2);
  FUN_005decc0();
  return uVar2;
}

