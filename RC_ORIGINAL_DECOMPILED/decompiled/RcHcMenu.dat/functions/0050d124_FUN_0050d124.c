/*
 * FUN_0050d124 at 0050d124
 * undefined __register FUN_0050d124(int param_1, undefined4 * param_2)
 * Address ranges: 0050d124-0050d14a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050d124(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x280);
  *param_2 = *(undefined4 *)(iVar1 + 0x10);
  param_2[1] = *(undefined4 *)(iVar1 + 0x14);
  return;
}

