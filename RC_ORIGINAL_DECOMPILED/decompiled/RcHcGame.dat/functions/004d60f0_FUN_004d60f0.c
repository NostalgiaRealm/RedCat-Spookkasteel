/*
 * FUN_004d60f0 at 004d60f0
 * undefined FUN_004d60f0(void)
 * Address ranges: 004d60f0-004d614d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004d60f0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x198) = *param_2;
  *(undefined4 *)(param_1 + 0x19c) = param_2[1];
  *(undefined4 *)(param_1 + 0x1a0) = param_2[2];
  *(undefined4 *)(param_1 + 0x1a4) = *param_2;
  *(undefined4 *)(param_1 + 0x1a8) = param_2[1];
  *(undefined4 *)(param_1 + 0x1ac) = param_2[2];
  (**(code **)(**(int **)(param_1 + 0xf8) + 8))();
  (**(code **)(**(int **)(param_1 + 0xf8) + 0x14))(param_3);
  return;
}

