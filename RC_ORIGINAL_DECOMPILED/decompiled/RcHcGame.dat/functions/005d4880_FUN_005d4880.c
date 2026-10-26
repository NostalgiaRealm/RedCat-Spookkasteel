/*
 * FUN_005d4880 at 005d4880
 * undefined FUN_005d4880(void)
 * Address ranges: 005d4880-005d48f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005d4880(int param_1,float *param_2,float param_3)

{
  if ((((*(float *)(param_1 + 0x40) <= param_3 + *param_2) &&
       (*param_2 - param_3 <= *(float *)(param_1 + 0x4c))) &&
      (*(float *)(param_1 + 0x44) <= param_3 + param_2[1])) &&
     (((param_2[1] - param_3 <= *(float *)(param_1 + 0x50) &&
       (*(float *)(param_1 + 0x48) <= param_3 + param_2[2])) &&
      (param_2[2] - param_3 <= *(float *)(param_1 + 0x54))))) {
    return 1;
  }
  return 0;
}

