/*
 * FUN_00506c54 at 00506c54
 * undefined __register FUN_00506c54(int param_1, undefined4 * param_2)
 * Address ranges: 00506c54-00506c7a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00506c54(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x280);
  *param_2 = *(undefined4 *)(iVar1 + 0x40);
  param_2[1] = *(undefined4 *)(iVar1 + 0x44);
  return;
}

