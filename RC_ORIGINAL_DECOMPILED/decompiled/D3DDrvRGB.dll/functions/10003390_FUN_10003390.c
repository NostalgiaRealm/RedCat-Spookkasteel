/*
 * FUN_10003390 at 10003390
 * undefined4 __stdcall FUN_10003390(void)
 * Address ranges: 10003390-100035d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10003390(void)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (DAT_10028934 == 0) {
    return 1;
  }
  if (DAT_1001eee0 == 0) {
    local_10 = DAT_1001b490;
    local_8 = DAT_1001b490 + DAT_1001b47c;
    local_c = DAT_1001b494;
    local_4 = DAT_1001b494 + DAT_1001b480;
    local_14 = DAT_1001b480;
    local_20 = 0;
    local_18 = DAT_1001b47c;
    local_1c = 0;
    iVar1 = (**(code **)(*DAT_1001bcb8 + 0x14))
                      (DAT_1001bcb8,&local_10,DAT_1001bcbc,&local_20,0x1000000,0);
    if (iVar1 == 0) {
      return 1;
    }
    if (iVar1 != -0x7789fe3e) {
      FUN_10001000(iVar1);
      FUN_10002700(s_Main_ShowBackBuffer__Blt_of_back_10017600);
      return 0;
    }
    if (DAT_1001bcb0 != (int *)0x0) {
      iVar1 = FUN_10004960(DAT_1001b3f0,DAT_1001b47c,DAT_1001b480,DAT_1001b484,DAT_1001eee0);
      if (iVar1 == 0) goto LAB_100035a6;
      iVar1 = (**(code **)(*DAT_1001bcb0 + 100))(DAT_1001bcb0);
      if (iVar1 != 0) {
        FUN_10001000(iVar1);
        FUN_10002700(s_D3DMain_RestoreAllSurfaces__AppI_10016d9c);
        FUN_10002700(s_Main_ShowBackBuffer__D3DMain_Res_100175cc);
        return 0;
      }
    }
    if ((DAT_100ec088 == 0) || (iVar1 = FUN_10005340(DAT_100ec088), iVar1 != 0)) {
      if (DAT_100ec0f4 == 0) {
        return 1;
      }
      iVar1 = FUN_10005340(DAT_100ec0f4);
      if (iVar1 != 0) {
        return 1;
      }
    }
LAB_100035a6:
    FUN_10002700(s_Main_ShowBackBuffer__D3DMain_Res_100175cc);
    return 0;
  }
  iVar1 = (**(code **)(*DAT_1001bcb8 + 0x2c))(DAT_1001bcb8,DAT_1001bcbc,8);
  if (iVar1 != -0x7789fe3e) {
    if (iVar1 == -0x7789fde4) {
      return 1;
    }
    if (iVar1 == 0) {
      return 1;
    }
    FUN_10001000(iVar1);
    FUN_10002700(s_Flipping_complex_display_surface_1001759c);
    return 0;
  }
  if (DAT_1001bcb0 != (int *)0x0) {
    iVar1 = FUN_10004960(DAT_1001b3f0,DAT_1001b47c,DAT_1001b480,DAT_1001b484,DAT_1001eee0);
    if (iVar1 == 0) goto LAB_1000345b;
    iVar1 = (**(code **)(*DAT_1001bcb0 + 100))(DAT_1001bcb0);
    if (iVar1 != 0) {
      FUN_10001000(iVar1);
      FUN_10002700(s_D3DMain_RestoreAllSurfaces__AppI_10016d9c);
      FUN_10003060();
      return 1;
    }
  }
  if (((DAT_100ec088 == 0) || (iVar1 = FUN_10005340(DAT_100ec088), iVar1 != 0)) &&
     (DAT_100ec0f4 != 0)) {
    FUN_10005340(DAT_100ec0f4);
  }
LAB_1000345b:
  FUN_10003060();
  return 1;
}

