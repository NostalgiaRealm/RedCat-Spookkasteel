/*
 * FUN_004ffdc8 at 004ffdc8
 * undefined __register FUN_004ffdc8(int param_1, undefined4 * param_2)
 * Address ranges: 004ffdc8-004ffdee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ffdc8(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x220);
  *param_2 = *(undefined4 *)(iVar1 + 0x20);
  param_2[1] = *(undefined4 *)(iVar1 + 0x24);
  return;
}

