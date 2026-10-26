/*
 * FUN_0050d1c4 at 0050d1c4
 * undefined __register FUN_0050d1c4(int param_1, undefined4 * param_2)
 * Address ranges: 0050d1c4-0050d1ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050d1c4(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x280);
  *param_2 = *(undefined4 *)(iVar1 + 0x38);
  param_2[1] = *(undefined4 *)(iVar1 + 0x3c);
  return;
}

