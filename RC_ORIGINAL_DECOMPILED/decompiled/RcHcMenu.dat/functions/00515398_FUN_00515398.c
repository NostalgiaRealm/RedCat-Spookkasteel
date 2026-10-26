/*
 * FUN_00515398 at 00515398
 * undefined __register FUN_00515398(int param_1, undefined4 * param_2)
 * Address ranges: 00515398-005153be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00515398(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x280);
  *param_2 = *(undefined4 *)(iVar1 + 0x38);
  param_2[1] = *(undefined4 *)(iVar1 + 0x3c);
  return;
}

