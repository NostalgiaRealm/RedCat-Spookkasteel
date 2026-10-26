/*
 * FUN_0050f87c at 0050f87c
 * undefined __register FUN_0050f87c(int param_1, undefined4 * param_2)
 * Address ranges: 0050f87c-0050f8a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050f87c(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x218);
  *param_2 = *(undefined4 *)(iVar1 + 0x38);
  param_2[1] = *(undefined4 *)(iVar1 + 0x3c);
  return;
}

