/*
 * FUN_005126a8 at 005126a8
 * undefined __register FUN_005126a8(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 005126a8-005126c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005126a8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x290);
  *(undefined4 *)(iVar1 + 0x30) = param_4;
  *(undefined4 *)(iVar1 + 0x34) = param_5;
  return;
}

