/*
 * FUN_00535d10 at 00535d10
 * undefined __register FUN_00535d10(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 00535d10-00535d30
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00535d10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2fc);
  *(undefined4 *)(iVar1 + 0x30) = param_4;
  *(undefined4 *)(iVar1 + 0x34) = param_5;
  return;
}

