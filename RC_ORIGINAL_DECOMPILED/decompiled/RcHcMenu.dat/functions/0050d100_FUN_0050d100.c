/*
 * FUN_0050d100 at 0050d100
 * undefined __register FUN_0050d100(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 0050d100-0050d120
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050d100(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x280);
  *(undefined4 *)(iVar1 + 0x30) = param_4;
  *(undefined4 *)(iVar1 + 0x34) = param_5;
  return;
}

