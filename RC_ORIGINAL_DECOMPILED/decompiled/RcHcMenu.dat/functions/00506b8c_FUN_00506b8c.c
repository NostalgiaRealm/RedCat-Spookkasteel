/*
 * FUN_00506b8c at 00506b8c
 * undefined __register FUN_00506b8c(int param_1, undefined4 * param_2)
 * Address ranges: 00506b8c-00506bb2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00506b8c(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x280);
  *param_2 = *(undefined4 *)(iVar1 + 0x20);
  param_2[1] = *(undefined4 *)(iVar1 + 0x24);
  return;
}

