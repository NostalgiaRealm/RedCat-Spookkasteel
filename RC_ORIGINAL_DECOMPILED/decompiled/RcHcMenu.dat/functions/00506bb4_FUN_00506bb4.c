/*
 * FUN_00506bb4 at 00506bb4
 * undefined __register FUN_00506bb4(int param_1, undefined4 * param_2)
 * Address ranges: 00506bb4-00506bda
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00506bb4(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x280);
  *param_2 = *(undefined4 *)(iVar1 + 0x28);
  param_2[1] = *(undefined4 *)(iVar1 + 0x2c);
  return;
}

