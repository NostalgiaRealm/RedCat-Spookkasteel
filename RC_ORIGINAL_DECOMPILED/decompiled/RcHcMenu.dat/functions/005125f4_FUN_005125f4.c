/*
 * FUN_005125f4 at 005125f4
 * undefined __register FUN_005125f4(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 005125f4-00512614
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005125f4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x290);
  *(undefined4 *)(iVar1 + 0x10) = param_4;
  *(undefined4 *)(iVar1 + 0x14) = param_5;
  return;
}

