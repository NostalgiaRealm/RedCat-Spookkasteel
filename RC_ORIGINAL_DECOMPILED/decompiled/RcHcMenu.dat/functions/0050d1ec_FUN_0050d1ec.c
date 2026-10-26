/*
 * FUN_0050d1ec at 0050d1ec
 * undefined __register FUN_0050d1ec(int param_1, undefined4 * param_2)
 * Address ranges: 0050d1ec-0050d212
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050d1ec(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x280);
  *param_2 = *(undefined4 *)(iVar1 + 0x30);
  param_2[1] = *(undefined4 *)(iVar1 + 0x34);
  return;
}

