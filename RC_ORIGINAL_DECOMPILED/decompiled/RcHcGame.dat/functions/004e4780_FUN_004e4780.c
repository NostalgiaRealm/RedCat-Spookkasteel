/*
 * FUN_004e4780 at 004e4780
 * undefined FUN_004e4780(void)
 * Address ranges: 004e4780-004e4899
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_004e4780(int param_1,int param_2)

{
  float fVar1;
  float10 fVar2;
  undefined1 local_d;
  int local_c;
  int local_4;
  
  local_c = 0;
  local_4 = 0;
  local_d = 1;
  do {
    while( true ) {
      while( true ) {
        fVar1 = (float)s_333_spark_a_bmp_0069a4d0._0_4_ * 0.05;
        FUN_005b3020(fVar1,param_1 + 0x128);
        *(float *)(param_1 + 0x144) =
             *(float *)(param_1 + 0x144) - *(float *)(param_1 + 0x164) * 50.0 * fVar1;
        if (*(char *)(param_1 + 0x158) == '\0') {
          fVar2 = (float10)FUN_005b30a0();
          if ((float10)*(float *)(param_1 + 0x180) <= fVar2) {
            *(undefined1 *)(param_1 + 0x158) = 1;
          }
        }
        else {
          fVar1 = (float)s_333_spark_a_bmp_0069a4d0._0_4_ * 0.05;
          FUN_005b3020(fVar1,param_1 + 0x134);
          *(float *)(param_1 + 0x150) =
               *(float *)(param_1 + 0x150) - *(float *)(param_1 + 0x164) * 50.0 * fVar1;
        }
        local_c = local_c + 0x32;
        local_4 = local_4 + 1;
        if (local_4 < 0x2711) break;
        local_d = 0;
      }
      if (param_2 == -1) break;
      if (param_2 <= local_c) {
        return local_d;
      }
    }
  } while (*(char *)(param_1 + 0x158) == '\0');
  return local_d;
}

