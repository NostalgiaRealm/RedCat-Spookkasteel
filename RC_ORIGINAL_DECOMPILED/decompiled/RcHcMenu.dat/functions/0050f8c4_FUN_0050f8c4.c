/*
 * FUN_0050f8c4 at 0050f8c4
 * undefined __register FUN_0050f8c4(int param_1, undefined4 * param_2)
 * Address ranges: 0050f8c4-0050f8ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050f8c4(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x218);
  *param_2 = *(undefined4 *)(iVar1 + 0x30);
  param_2[1] = *(undefined4 *)(iVar1 + 0x34);
  return;
}

