/*
 * FUN_100079e0 at 100079e0
 * undefined FUN_100079e0(void)
 * Address ranges: 100079e0-10007a6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100079e0(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_1014e2a4;
  if (*param_1 != -1) {
    iVar1 = FUN_100079e0(param_1[4]);
    if (iVar1 == 0) {
      return false;
    }
    iVar1 = FUN_100079e0(param_1[5]);
    return iVar1 != 0;
  }
  if ((param_1[2] & 1U) != 0) {
    return true;
  }
  if ((param_1[2] & 0x100U) != 0) {
    return true;
  }
  if (param_1[0x16] != 0) {
    return true;
  }
  if (0xff < DAT_1014e2a4) {
    (*DAT_1014e358)(s_CreateAreas_r__Max_Areas__1003791c);
    return false;
  }
  DAT_1014e2a4 = DAT_1014e2a4 + 1;
  iVar1 = FUN_100078f0(param_1,iVar1);
  return iVar1 != 0;
}

