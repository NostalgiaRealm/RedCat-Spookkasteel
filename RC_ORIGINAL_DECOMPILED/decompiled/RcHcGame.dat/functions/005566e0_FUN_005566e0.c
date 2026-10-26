/*
 * FUN_005566e0 at 005566e0
 * undefined FUN_005566e0(void)
 * Address ranges: 005566e0-00556702
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_005566e0(int param_1,float param_2,float param_3,float param_4)

{
  *(float *)(param_1 + 0x34) = param_2 + *(float *)(param_1 + 0x34);
  *(float *)(param_1 + 0x38) = param_3 + *(float *)(param_1 + 0x38);
  *(float *)(param_1 + 0x3c) = param_4 + *(float *)(param_1 + 0x3c);
  return 1;
}

