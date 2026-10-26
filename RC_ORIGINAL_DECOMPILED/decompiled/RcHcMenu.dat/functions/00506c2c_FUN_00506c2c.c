/*
 * FUN_00506c2c at 00506c2c
 * undefined __register FUN_00506c2c(int param_1, undefined4 * param_2)
 * Address ranges: 00506c2c-00506c52
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00506c2c(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x280);
  *param_2 = *(undefined4 *)(iVar1 + 0x30);
  param_2[1] = *(undefined4 *)(iVar1 + 0x34);
  return;
}

