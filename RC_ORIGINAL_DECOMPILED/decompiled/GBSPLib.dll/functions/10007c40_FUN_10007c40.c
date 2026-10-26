/*
 * FUN_10007c40 at 10007c40
 * undefined FUN_10007c40(void)
 * Address ranges: 10007c40-10007d55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10007c40(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  (*DAT_1014e35c)(s_____Create_Area_Leafs_____10037a74);
  if (1 < DAT_1003fdf4) {
    puVar1 = &DAT_100dc3b8;
    iVar2 = DAT_1003fdf4 + -1;
    do {
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[-1] = 0;
      puVar1 = puVar1 + 0x39;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (DAT_1014e250 != 0) {
    FUN_10014360(DAT_1014e250);
    DAT_1014e250 = 0;
    _DAT_1003fde8 = 0;
  }
  if (DAT_1014e294 != 0) {
    FUN_10014360(DAT_1014e294);
    DAT_1014e294 = 0;
    _DAT_1003fde8 = 0;
  }
  DAT_1014e250 = FUN_10014310(0x800);
  if (DAT_1014e250 == 0) {
    return 0;
  }
  DAT_1014e294 = FUN_10014310(0x2000);
  if (DAT_1014e294 == 0) {
    return 0;
  }
  DAT_1014e2dc = 0;
  DAT_1014e2a4 = 1;
  iVar2 = FUN_100079e0(param_1);
  if (iVar2 == 0) {
    (*DAT_1014e358)(s_Could_not_create_model_areas__10037a54);
    return 0;
  }
  iVar2 = FUN_10007a70(param_1);
  if (iVar2 == 0) {
    (*DAT_1014e358)(s_CreateAreas__FinishAreaPortals_r_10037a28);
    return 0;
  }
  iVar2 = FUN_10007af0();
  if (iVar2 == 0) {
    (*DAT_1014e358)(s_Could_not_finalize_model_areas__10037a04);
    return 0;
  }
  return 1;
}

