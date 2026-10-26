/*
 * FUN_004d68e0 at 004d68e0
 * undefined FUN_004d68e0(void)
 * Address ranges: 004d68e0-004d6912
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004d68e0(int param_1,float param_2,float param_3,float param_4)

{
  *(float *)(param_1 + 0x1b4) = param_2 + *(float *)(param_1 + 0x1b4);
  *(float *)(param_1 + 0x1b8) = param_3 + *(float *)(param_1 + 0x1b8);
  *(float *)(param_1 + 0x1bc) = param_4 + *(float *)(param_1 + 0x1bc);
  return;
}

