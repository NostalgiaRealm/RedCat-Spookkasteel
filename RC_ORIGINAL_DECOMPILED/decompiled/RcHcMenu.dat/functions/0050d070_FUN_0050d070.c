/*
 * FUN_0050d070 at 0050d070
 * undefined __register FUN_0050d070(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 0050d070-0050d090
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050d070(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x280);
  *(undefined4 *)(iVar1 + 0x20) = param_4;
  *(undefined4 *)(iVar1 + 0x24) = param_5;
  return;
}

