/*
 * FUN_005d16c0 at 005d16c0
 * undefined FUN_005d16c0(void)
 * Address ranges: 005d16c0-005d1740
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005d16c0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (0 < param_4) {
    do {
      iVar1 = FUN_005b7e20(0x80);
      if (iVar1 == 0) {
        FUN_005c9330(&local_c);
      }
      else {
        FUN_005c92e0(&local_c);
      }
      *param_3 = local_c;
      param_3[1] = local_8;
      param_3[2] = local_4;
      param_3[3] = *param_2;
      param_3[4] = param_2[1];
      param_3 = param_3 + 9;
      param_4 = param_4 + -1;
      param_2 = param_2 + 6;
    } while (param_4 != 0);
  }
  return;
}

