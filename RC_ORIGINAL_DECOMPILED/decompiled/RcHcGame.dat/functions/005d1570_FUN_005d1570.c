/*
 * FUN_005d1570 at 005d1570
 * undefined FUN_005d1570(void)
 * Address ranges: 005d1570-005d15f1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005d1570(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int param_4,
                 undefined4 param_5,float param_6)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (0 < param_4) {
    do {
      FUN_005c9330(&local_c);
      *param_3 = local_c;
      param_3[1] = local_8;
      param_3[2] = local_4;
      param_3[3] = *param_2;
      param_3[4] = param_2[1];
      param_4 = param_4 + -1;
      param_3[5] = param_6 * (float)param_2[2];
      param_3[6] = param_6 * (float)param_2[3];
      param_3[7] = param_6 * (float)param_2[4];
      param_3[8] = param_2[5];
      param_3 = param_3 + 9;
      param_2 = param_2 + 6;
    } while (param_4 != 0);
  }
  return;
}

