/*
 * FUN_00535ca4 at 00535ca4
 * undefined __register FUN_00535ca4(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 00535ca4-00535cc4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00535ca4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2fc);
  *(undefined4 *)(iVar1 + 0x28) = param_4;
  *(undefined4 *)(iVar1 + 0x2c) = param_5;
  return;
}

