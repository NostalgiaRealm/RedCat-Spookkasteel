/*
 * FUN_10002d40 at 10002d40
 * undefined4 __stdcall FUN_10002d40(void)
 * Address ranges: 10002d40-10002e55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10002d40(void)

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
  
  if (DAT_10038e64 != 0) {
    if (DAT_1002a6c8 == 0) {
      local_10 = DAT_10027088;
      local_8 = DAT_10027088 + DAT_10027074;
      local_14 = DAT_10027078;
      local_c = DAT_1002708c;
      local_4 = DAT_1002708c + DAT_10027078;
      local_20 = 0;
      local_18 = DAT_10027074;
      local_1c = 0;
      iVar1 = (**(code **)(*DAT_100274b0 + 0x14))
                        (DAT_100274b0,&local_10,DAT_100274b4,&local_20,0x1000000,0);
      if (iVar1 != 0) {
        if (iVar1 != -0x7789fe3e) {
          FUN_10001000(iVar1);
          FUN_100020f0(s_Main_ShowBackBuffer__Blt_of_back_10014428);
          return 0;
        }
        iVar1 = FUN_10001b50();
        if (iVar1 == 0) {
          FUN_100020f0(s_Main_ShowBackBuffer__D3DMain_Res_10014470);
          return 0;
        }
      }
    }
    else {
      iVar1 = (**(code **)(*DAT_100274b0 + 0x2c))(DAT_100274b0,DAT_100274b4,1);
      if (iVar1 == -0x7789fe3e) {
        FUN_10001b50();
        FUN_10002b40();
      }
      else if ((iVar1 != -0x7789fde4) && (iVar1 != 0)) {
        FUN_10001000(iVar1);
        FUN_100020f0(s_Flipping_complex_display_surface_100144a4);
        return 0;
      }
    }
  }
  return 1;
}

