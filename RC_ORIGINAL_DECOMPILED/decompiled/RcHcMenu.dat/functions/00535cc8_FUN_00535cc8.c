/*
 * FUN_00535cc8 at 00535cc8
 * undefined __register FUN_00535cc8(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 00535cc8-00535ce8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00535cc8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2fc);
  *(undefined4 *)(iVar1 + 0x18) = param_4;
  *(undefined4 *)(iVar1 + 0x1c) = param_5;
  return;
}

