/*
 * FUN_0050d14c at 0050d14c
 * undefined __register FUN_0050d14c(int param_1, undefined4 * param_2)
 * Address ranges: 0050d14c-0050d172
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050d14c(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x280);
  *param_2 = *(undefined4 *)(iVar1 + 0x20);
  param_2[1] = *(undefined4 *)(iVar1 + 0x24);
  return;
}

