/*
 * FUN_0050f854 at 0050f854
 * undefined __register FUN_0050f854(int param_1, undefined4 * param_2)
 * Address ranges: 0050f854-0050f87a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050f854(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x218);
  *param_2 = *(undefined4 *)(iVar1 + 0x18);
  param_2[1] = *(undefined4 *)(iVar1 + 0x1c);
  return;
}

