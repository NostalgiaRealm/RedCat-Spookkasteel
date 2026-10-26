/*
 * FUN_004e3090 at 004e3090
 * undefined FUN_004e3090(void)
 * Address ranges: 004e3090-004e30c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004e3090(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x130) = *param_2;
  *(undefined4 *)(param_1 + 0x134) = param_2[1];
  *(undefined4 *)(param_1 + 0x138) = param_2[2];
  *(undefined4 *)(param_1 + 0x13c) = param_2[3];
  *(undefined4 *)(param_1 + 0x13c) = 0x437f0000;
  FUN_004e2a30();
  return;
}

