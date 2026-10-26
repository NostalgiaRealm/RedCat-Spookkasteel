/*
 * FUN_005bb580 at 005bb580
 * undefined FUN_005bb580(void)
 * Address ranges: 005bb580-005bb5db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005bb580(int param_1,float param_2)

{
  float fVar1;
  
  if (param_2 < 0.01) {
    param_2 = 0.01;
  }
  fVar1 = *(float *)(param_1 + 0x390b0) - param_2;
  if (fVar1 < 0.0) {
    fVar1 = -fVar1;
  }
  if (0.01 <= fVar1) {
    *(float *)(param_1 + 0x390b0) = param_2;
    FUN_005bb6b0(param_1);
  }
  return 1;
}

