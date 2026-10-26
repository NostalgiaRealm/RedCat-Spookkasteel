/*
 * FUN_00401de0 at 00401de0
 * undefined __register FUN_00401de0(uint * param_1, uint param_2)
 * Address ranges: 00401de0-00401e07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00401de0(uint *param_1,uint param_2)

{
  if (0xb < (int)param_2) {
    *param_1 = param_2 | 2;
    FUN_00401dbc((int)(param_1 + 1));
    return;
  }
  if (3 < (int)param_2) {
    *param_1 = param_2 | 0x80000002;
  }
  *(uint *)((int)param_1 + param_2) = *(uint *)((int)param_1 + param_2) & 0xfffffffe;
  return;
}

