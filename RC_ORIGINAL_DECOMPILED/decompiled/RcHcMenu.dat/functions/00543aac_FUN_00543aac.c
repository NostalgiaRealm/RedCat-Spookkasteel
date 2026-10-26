/*
 * FUN_00543aac at 00543aac
 * undefined __register FUN_00543aac(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 00543aac-00543acc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00543aac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2a4);
  *(undefined4 *)(iVar1 + 0x20) = param_4;
  *(undefined4 *)(iVar1 + 0x24) = param_5;
  return;
}

