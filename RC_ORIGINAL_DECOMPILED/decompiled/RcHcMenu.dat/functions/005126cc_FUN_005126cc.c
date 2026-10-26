/*
 * FUN_005126cc at 005126cc
 * undefined __register FUN_005126cc(int param_1, undefined4 * param_2)
 * Address ranges: 005126cc-005126f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005126cc(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x290);
  *param_2 = *(undefined4 *)(iVar1 + 0x10);
  param_2[1] = *(undefined4 *)(iVar1 + 0x14);
  return;
}

