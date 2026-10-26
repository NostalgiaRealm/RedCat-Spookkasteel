/*
 * FUN_1000c330 at 1000c330
 * undefined FUN_1000c330(void)
 * Address ranges: 1000c330-1000c3eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000c330(float *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  float local_4;
  
  iVar2 = -1;
  local_4 = 0.0;
  iVar1 = 0;
  do {
    if (local_4 < ABS(*param_1)) {
      iVar2 = iVar1;
      local_4 = ABS(*param_1);
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
  } while (iVar1 < 3);
  if (iVar2 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0x3f800000;
  }
  else {
    if (iVar2 == 1) {
      *param_2 = 0x3f800000;
      param_2[1] = 0;
      param_2[2] = 0;
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0x3f800000;
      return 1;
    }
    if (iVar2 != 2) {
      (*DAT_1014e358)(s_TextureAxisFromPlane__No_Axis_fo_10038a50);
      return 0;
    }
    *param_2 = 0x3f800000;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  *param_3 = 0;
  param_3[2] = 0;
  param_3[1] = 0xbf800000;
  return 1;
}

