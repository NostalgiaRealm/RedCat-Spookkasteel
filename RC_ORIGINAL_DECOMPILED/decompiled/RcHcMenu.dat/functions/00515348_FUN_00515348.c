/*
 * FUN_00515348 at 00515348
 * undefined __register FUN_00515348(int param_1, undefined4 * param_2)
 * Address ranges: 00515348-0051536e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00515348(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x280);
  *param_2 = *(undefined4 *)(iVar1 + 0x28);
  param_2[1] = *(undefined4 *)(iVar1 + 0x2c);
  return;
}

