/*
 * FUN_005b9e10 at 005b9e10
 * undefined FUN_005b9e10(void)
 * Address ranges: 005b9e10-005b9e7e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005b9e10(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_005b7c80(param_2);
  if (iVar1 != 0) {
    FUN_005cf400(iVar1);
    _DAT_007203c0 = 0;
  }
  FUN_005b7c60(param_2,0);
  if (*(int *)(param_2 + 0x3c) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0x3c) + 0x38) = *(undefined4 *)(param_2 + 0x38);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0x38) + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  }
  if (param_2 == *(int *)(param_1 + 0xbe4)) {
    *(undefined4 *)(param_1 + 0xbe4) = *(undefined4 *)(param_2 + 0x38);
  }
  FUN_005b7bb0(param_2);
  return 1;
}

