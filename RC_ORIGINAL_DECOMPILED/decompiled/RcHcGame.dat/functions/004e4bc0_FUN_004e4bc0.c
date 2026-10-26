/*
 * FUN_004e4bc0 at 004e4bc0
 * undefined FUN_004e4bc0(void)
 * Address ranges: 004e4bc0-004e4c7a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004e4bc0(int param_1,float param_2)

{
  float fVar1;
  float10 fVar2;
  
  fVar1 = param_2 * (float)s_333_spark_a_bmp_0069a4d0._0_4_;
  FUN_005b3020(fVar1,param_1 + 0x128);
  *(float *)(param_1 + 0x144) =
       *(float *)(param_1 + 0x144) - *(float *)(param_1 + 0x164) * 50.0 * fVar1;
  if (*(char *)(param_1 + 0x158) == '\0') {
    fVar2 = (float10)FUN_005b30a0();
    if ((float10)*(float *)(param_1 + 0x180) <= fVar2) {
      *(undefined1 *)(param_1 + 0x158) = 1;
      return;
    }
  }
  else {
    param_2 = param_2 * (float)s_333_spark_a_bmp_0069a4d0._0_4_;
    FUN_005b3020(param_2,param_1 + 0x134);
    *(float *)(param_1 + 0x150) =
         *(float *)(param_1 + 0x150) - *(float *)(param_1 + 0x164) * 50.0 * param_2;
  }
  return;
}

