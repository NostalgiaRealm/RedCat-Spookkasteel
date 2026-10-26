/*
 * FUN_0050f804 at 0050f804
 * undefined __register FUN_0050f804(int param_1, undefined4 * param_2)
 * Address ranges: 0050f804-0050f82a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050f804(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x218);
  *param_2 = *(undefined4 *)(iVar1 + 0x20);
  param_2[1] = *(undefined4 *)(iVar1 + 0x24);
  return;
}

