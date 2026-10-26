/*
 * FUN_00535c80 at 00535c80
 * undefined __register FUN_00535c80(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 00535c80-00535ca0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00535c80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2fc);
  *(undefined4 *)(iVar1 + 0x20) = param_4;
  *(undefined4 *)(iVar1 + 0x24) = param_5;
  return;
}

