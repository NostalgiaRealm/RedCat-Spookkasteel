/*
 * FUN_0051263c at 0051263c
 * undefined __register FUN_0051263c(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 0051263c-0051265c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051263c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x290);
  *(undefined4 *)(iVar1 + 0x28) = param_4;
  *(undefined4 *)(iVar1 + 0x2c) = param_5;
  return;
}

