/*
 * FUN_0051271c at 0051271c
 * undefined __register FUN_0051271c(int param_1, undefined4 * param_2)
 * Address ranges: 0051271c-00512742
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051271c(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x290);
  *param_2 = *(undefined4 *)(iVar1 + 0x28);
  param_2[1] = *(undefined4 *)(iVar1 + 0x2c);
  return;
}

