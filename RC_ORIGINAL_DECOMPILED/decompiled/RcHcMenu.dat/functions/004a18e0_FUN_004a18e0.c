/*
 * FUN_004a18e0 at 004a18e0
 * undefined __register FUN_004a18e0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 004a18e0-004a190c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a18e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x10) = param_4;
  *(undefined4 *)(param_1 + 0x14) = param_5;
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(iVar1 + 8) = param_4;
  *(undefined4 *)(iVar1 + 0xc) = param_5;
  return;
}

