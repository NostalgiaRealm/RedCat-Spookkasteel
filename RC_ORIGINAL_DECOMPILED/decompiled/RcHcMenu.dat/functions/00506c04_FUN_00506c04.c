/*
 * FUN_00506c04 at 00506c04
 * undefined __register FUN_00506c04(int param_1, undefined4 * param_2)
 * Address ranges: 00506c04-00506c2a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00506c04(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x280);
  *param_2 = *(undefined4 *)(iVar1 + 0x38);
  param_2[1] = *(undefined4 *)(iVar1 + 0x3c);
  return;
}

