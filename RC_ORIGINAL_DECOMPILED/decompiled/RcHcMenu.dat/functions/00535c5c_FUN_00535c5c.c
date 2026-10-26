/*
 * FUN_00535c5c at 00535c5c
 * undefined __register FUN_00535c5c(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 00535c5c-00535c7c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00535c5c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2fc);
  *(undefined4 *)(iVar1 + 0x10) = param_4;
  *(undefined4 *)(iVar1 + 0x14) = param_5;
  return;
}

