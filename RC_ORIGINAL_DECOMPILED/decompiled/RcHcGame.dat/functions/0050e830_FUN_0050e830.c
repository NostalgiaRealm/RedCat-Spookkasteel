/*
 * FUN_0050e830 at 0050e830
 * undefined FUN_0050e830(void)
 * Address ranges: 0050e830-0050e86c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0050e830(int param_1,float param_2)

{
  *(float *)(param_1 + 0x14) = param_2;
  if (param_2 < 0.0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    return;
  }
  if (255.0 < param_2) {
    *(undefined4 *)(param_1 + 0x14) = 0x437f0000;
  }
  return;
}

