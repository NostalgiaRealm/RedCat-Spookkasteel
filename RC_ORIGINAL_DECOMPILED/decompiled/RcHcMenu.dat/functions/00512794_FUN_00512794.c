/*
 * FUN_00512794 at 00512794
 * undefined __register FUN_00512794(int param_1, undefined4 * param_2)
 * Address ranges: 00512794-005127ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00512794(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x290);
  *param_2 = *(undefined4 *)(iVar1 + 0x30);
  param_2[1] = *(undefined4 *)(iVar1 + 0x34);
  return;
}

