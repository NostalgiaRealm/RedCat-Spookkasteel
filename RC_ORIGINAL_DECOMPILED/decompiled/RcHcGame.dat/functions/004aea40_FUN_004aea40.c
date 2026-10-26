/*
 * FUN_004aea40 at 004aea40
 * undefined FUN_004aea40(void)
 * Address ranges: 004aea40-004aea84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004aea40(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x9c) = *param_2;
  *(undefined4 *)(param_1 + 0xa0) = param_2[1];
  *(undefined4 *)(param_1 + 0xa4) = param_2[2];
  *(undefined4 *)(param_1 + 0xa8) = param_2[3];
  *(undefined4 *)(param_1 + 0x8c) = *param_2;
  *(undefined4 *)(param_1 + 0x90) = param_2[1];
  *(undefined4 *)(param_1 + 0x94) = param_2[2];
  *(undefined4 *)(param_1 + 0x98) = param_2[3];
  return;
}

