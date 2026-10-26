/*
 * FUN_0050d04c at 0050d04c
 * undefined __register FUN_0050d04c(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 0050d04c-0050d06c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050d04c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x280);
  *(undefined4 *)(iVar1 + 0x10) = param_4;
  *(undefined4 *)(iVar1 + 0x14) = param_5;
  return;
}

