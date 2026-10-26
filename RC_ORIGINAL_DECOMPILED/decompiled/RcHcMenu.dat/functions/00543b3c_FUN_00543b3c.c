/*
 * FUN_00543b3c at 00543b3c
 * undefined __register FUN_00543b3c(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 00543b3c-00543b5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00543b3c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2a4);
  *(undefined4 *)(iVar1 + 0x30) = param_4;
  *(undefined4 *)(iVar1 + 0x34) = param_5;
  return;
}

