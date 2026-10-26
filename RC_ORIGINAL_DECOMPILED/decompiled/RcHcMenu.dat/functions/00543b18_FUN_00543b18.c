/*
 * FUN_00543b18 at 00543b18
 * undefined __register FUN_00543b18(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 00543b18-00543b38
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00543b18(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2a4);
  *(undefined4 *)(iVar1 + 0x38) = param_4;
  *(undefined4 *)(iVar1 + 0x3c) = param_5;
  return;
}

