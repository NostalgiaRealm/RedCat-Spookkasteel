/*
 * FUN_00512618 at 00512618
 * undefined __register FUN_00512618(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 00512618-00512638
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00512618(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x290);
  *(undefined4 *)(iVar1 + 0x20) = param_4;
  *(undefined4 *)(iVar1 + 0x24) = param_5;
  return;
}

