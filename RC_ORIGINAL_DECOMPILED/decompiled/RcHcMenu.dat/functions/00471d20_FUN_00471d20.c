/*
 * FUN_00471d20 at 00471d20
 * undefined __register FUN_00471d20(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00471d20-00471d56
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00471d20(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  FUN_00471ac8(*(int *)(param_1 + 0x24),0,param_3,(int)&stack0xfffffffc);
  return;
}

