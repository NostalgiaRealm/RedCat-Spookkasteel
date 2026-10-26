/*
 * FUN_005c31d0 at 005c31d0
 * undefined FUN_005c31d0(void)
 * Address ranges: 005c31d0-005c3233
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005c31d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (((*(int *)(param_1 + 0x70) != 0) || (*(int *)(param_1 + 0x6c) != 0)) ||
     (*(int *)(param_1 + 0x74) != 0)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x7c) == param_2) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xa8);
    if ((iVar2 != 0) && (iVar1 = FUN_005c1c20(), iVar1 == 0)) {
      return 0;
    }
  }
  *(int *)(param_1 + 0x7c) = param_2;
  if ((iVar2 != 0) && (iVar2 = FUN_005c19b0(0), iVar2 == 0)) {
    return 0;
  }
  return 1;
}

