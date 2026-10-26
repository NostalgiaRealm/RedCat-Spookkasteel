/*
 * FUN_0050d174 at 0050d174
 * undefined __register FUN_0050d174(int param_1, undefined4 * param_2)
 * Address ranges: 0050d174-0050d19a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050d174(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x280);
  *param_2 = *(undefined4 *)(iVar1 + 0x28);
  param_2[1] = *(undefined4 *)(iVar1 + 0x2c);
  return;
}

