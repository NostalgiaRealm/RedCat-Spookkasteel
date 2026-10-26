/*
 * FUN_005b6f10 at 005b6f10
 * undefined FUN_005b6f10(void)
 * Address ranges: 005b6f10-005b6f76
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005b6f10(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x94);
  if (*(int *)(param_1 + 0xb0) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  }
  if (*(int *)(param_1 + 0xb4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xb4) + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  }
  if (param_1 == *(int *)(iVar1 + 8)) {
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 0xb4);
  }
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  return;
}

