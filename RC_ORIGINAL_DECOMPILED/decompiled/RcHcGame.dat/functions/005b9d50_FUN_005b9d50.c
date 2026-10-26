/*
 * FUN_005b9d50 at 005b9d50
 * undefined FUN_005b9d50(void)
 * Address ranges: 005b9d50-005b9db3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005b9d50(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005b7b60(&LAB_005b9dc0);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0xbe4) != 0) {
      *(int *)(*(int *)(param_1 + 0xbe4) + 0x3c) = iVar1;
    }
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(param_1 + 0xbe4);
    *(int *)(param_1 + 0xbe4) = iVar1;
    iVar2 = FUN_005cf3b0(0x24);
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x20) = param_1;
      FUN_005b7c60(iVar1,iVar2);
      return iVar1;
    }
    FUN_005b9e10(param_1,iVar1);
  }
  return 0;
}

