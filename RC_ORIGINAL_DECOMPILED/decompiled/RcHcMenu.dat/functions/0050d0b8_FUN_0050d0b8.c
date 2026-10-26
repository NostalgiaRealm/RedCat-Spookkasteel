/*
 * FUN_0050d0b8 at 0050d0b8
 * undefined __register FUN_0050d0b8(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 0050d0b8-0050d0d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050d0b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x280);
  *(undefined4 *)(iVar1 + 0x18) = param_4;
  *(undefined4 *)(iVar1 + 0x1c) = param_5;
  return;
}

