/*
 * FUN_004301b4 at 004301b4
 * uint __register FUN_004301b4(uint param_1, uint param_2)
 * Address ranges: 004301b4-004301d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_004301b4(uint param_1,uint param_2)

{
  if ((int)((param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f)) <
      (int)((param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f))) {
    return param_1;
  }
  return param_2;
}

