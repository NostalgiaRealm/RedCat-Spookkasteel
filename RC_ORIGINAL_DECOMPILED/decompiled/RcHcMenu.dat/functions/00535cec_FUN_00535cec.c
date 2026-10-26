/*
 * FUN_00535cec at 00535cec
 * undefined __register FUN_00535cec(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 00535cec-00535d0c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00535cec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2fc);
  *(undefined4 *)(iVar1 + 0x38) = param_4;
  *(undefined4 *)(iVar1 + 0x3c) = param_5;
  return;
}

