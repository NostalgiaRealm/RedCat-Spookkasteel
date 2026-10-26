/*
 * FUN_00515320 at 00515320
 * undefined __register FUN_00515320(int param_1, undefined4 * param_2)
 * Address ranges: 00515320-00515346
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00515320(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x280);
  *param_2 = *(undefined4 *)(iVar1 + 0x20);
  param_2[1] = *(undefined4 *)(iVar1 + 0x24);
  return;
}

