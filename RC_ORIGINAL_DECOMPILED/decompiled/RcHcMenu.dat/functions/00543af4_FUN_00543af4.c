/*
 * FUN_00543af4 at 00543af4
 * undefined __register FUN_00543af4(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 00543af4-00543b14
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00543af4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2a4);
  *(undefined4 *)(iVar1 + 0x18) = param_4;
  *(undefined4 *)(iVar1 + 0x1c) = param_5;
  return;
}

