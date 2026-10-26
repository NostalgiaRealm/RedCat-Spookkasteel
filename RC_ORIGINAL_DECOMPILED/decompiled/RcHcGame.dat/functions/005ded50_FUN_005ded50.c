/*
 * FUN_005ded50 at 005ded50
 * undefined FUN_005ded50(void)
 * Address ranges: 005ded50-005ded9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_005ded50(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    return 0;
  }
  iVar1 = FUN_005dec80();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_005cd3b0(param_2);
  FUN_005decc0();
  return uVar2;
}

