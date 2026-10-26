/*
 * FUN_00540f80 at 00540f80
 * undefined FUN_00540f80(void)
 * Address ranges: 00540f80-005413a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00540f80(int param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined1 auStack_14c [36];
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined4 uStack_120;
  char *pcStack_11c;
  char *local_118;
  char *pcStack_114;
  undefined1 *puStack_110;
  char *pcStack_10c;
  undefined1 local_f5;
  int local_f4;
  undefined1 local_ed;
  undefined1 *local_ec;
  int iStack_e4;
  int local_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [4];
  undefined1 *local_d4;
  char local_c8 [16];
  char local_b8 [16];
  undefined1 local_a8 [16];
  char local_98 [16];
  undefined1 local_88 [124];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063c736;
  pvStack_c = ExceptionList;
  puStack_110 = local_d8;
  pcStack_10c = &DAT_006b3f70;
  pcStack_114 = (char *)0x540fb0;
  ExceptionList = &pvStack_c;
  FUN_005ae390();
  pcStack_10c = &local_ed;
  iVar6 = 0;
  local_4 = 0;
  puStack_110 = (undefined1 *)0x540fca;
  FUN_0044e4a0();
  pcStack_10c = (char *)0x0;
  local_4._0_1_ = 1;
  puStack_110 = (undefined1 *)0x540fdc;
  FUN_005499f0();
  local_4 = CONCAT31(local_4._1_3_,2);
  iVar5 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x38;
    }
    if (iVar4 <= iVar5) break;
    if (iVar6 < 0) {
LAB_0054101f:
      pcStack_10c = &local_f5;
      puStack_110 = &DAT_006b3f70;
      pcStack_114 = (char *)0x541032;
      FUN_00409810();
      pcStack_10c = local_c8;
      local_4._0_1_ = 3;
      puStack_110 = (undefined1 *)0x97;
      pcStack_114 = s___AdamSource_DaviList_h_0068f458;
      local_118 = s_a_Index>_0____a_Index<Count()_0068f470;
      pcStack_11c = (char *)0x541053;
      pcVar2 = (code *)FUN_005a07f0();
      pcStack_11c = (char *)0x541055;
      (*pcVar2)();
      local_4 = CONCAT31(local_4._1_3_,2);
      pcStack_10c = (char *)0x1;
      puStack_110 = (undefined1 *)0x54106b;
      FUN_004040a0();
    }
    else {
      pcStack_10c = (char *)0x54101b;
      iVar4 = FUN_00549ae0();
      if (iVar4 <= iVar5) goto LAB_0054101f;
    }
    pcStack_10c = (char *)(*(int *)(param_1 + 0x18) + iVar6);
    puStack_110 = (undefined1 *)local_e0;
    pcStack_114 = (char *)0x54107f;
    FUN_0054a2c0();
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 0x38;
  }
  pcStack_10c = (char *)0x54108f;
  FUN_005449d0();
  pcVar7 = (char *)0x0;
  pcStack_10c = (char *)0x541098;
  iVar5 = FUN_00549ae0();
  if (0 < iVar5) {
    local_f4 = 0;
    do {
      pcStack_10c = (char *)0x0;
      puStack_110 = (undefined1 *)param_2;
      pcStack_114 = (char *)0x0;
      pcStack_11c = (char *)0x5410ba;
      local_118 = pcVar7;
      uVar3 = FUN_005494c0();
      local_ec = auStack_14c;
      FUN_005413b0(uVar3);
      pcStack_114 = (char *)FUN_00543590(local_88);
      local_118 = param_3;
      local_4._0_1_ = 4;
      uStack_120 = 0x5410f1;
      pcStack_11c = pcVar7;
      pcStack_11c = (char *)FUN_005494c0();
      uStack_120 = 0x5410fe;
      iVar5 = FUN_005acbc0();
      local_b8[0] = *(char *)(iVar5 + 0x14);
      pcStack_10c = (char *)0x0;
      local_4._0_1_ = 5;
      puStack_110 = (undefined1 *)0x54111b;
      FUN_004040a0();
      pcStack_10c = (char *)0xffffffff;
      puStack_110 = (undefined1 *)0x0;
      local_118 = (char *)0x54112d;
      pcStack_114 = (char *)(iVar5 + 0x14);
      FUN_0040cc00();
      pcStack_10c = (char *)0x0;
      local_c8[0] = local_b8[0];
      local_4._0_1_ = 6;
      puStack_110 = (undefined1 *)0x541148;
      FUN_004040a0();
      pcStack_114 = local_b8;
      pcStack_10c = (char *)0xffffffff;
      puStack_110 = (undefined1 *)0x0;
      local_118 = (char *)0x54115f;
      FUN_0040cc00();
      pcStack_114 = local_c8;
      pcStack_10c = (char *)0xffffffff;
      puStack_110 = (undefined1 *)0x0;
      local_4._0_1_ = 7;
      local_118 = (char *)0x54117e;
      FUN_0040cc00();
      pcStack_10c = (char *)0x1;
      local_4._0_1_ = 6;
      puStack_110 = (undefined1 *)0x541191;
      FUN_004040a0();
      pcStack_10c = (char *)0x1;
      local_4._0_1_ = 5;
      puStack_110 = (undefined1 *)0x5411a4;
      FUN_004040a0();
      local_4._0_1_ = 4;
      pcStack_10c = (char *)0x5411b8;
      FUN_005acca0();
      pcStack_10c = (char *)0x1;
      local_4 = CONCAT31(local_4._1_3_,2);
      puStack_110 = (undefined1 *)0x5411ce;
      FUN_004040a0();
      local_ec = (undefined1 *)&local_118;
      pcStack_11c = (char *)0x0;
      local_118 = (char *)CONCAT31(local_118._1_3_,local_d8[0]);
      uStack_120 = 0x5411e6;
      FUN_004040a0();
      puStack_124 = local_d8;
      pcStack_11c = (char *)0xffffffff;
      uStack_120 = 0;
      uStack_128 = 0x5411fb;
      FUN_0040cc00();
      pcStack_11c = (char *)0x541202;
      cVar1 = FUN_00543f60();
      iVar5 = local_f4;
      if (cVar1 != '\0') {
        if (local_f4 < 0) {
LAB_0054121d:
          pcStack_10c = &local_f5;
          puStack_110 = &DAT_006b3f70;
          pcStack_114 = (char *)0x541230;
          FUN_00409810();
          pcStack_10c = local_a8;
          local_4._0_1_ = 8;
          puStack_110 = (undefined1 *)0x97;
          pcStack_114 = s___AdamSource_DaviList_h_0068f458;
          local_118 = s_a_Index>_0____a_Index<Count()_0068f470;
          pcStack_11c = (char *)0x541251;
          pcVar2 = (code *)FUN_005a07f0();
          pcStack_11c = (char *)0x541253;
          (*pcVar2)();
          local_4 = CONCAT31(local_4._1_3_,2);
          pcStack_10c = (char *)0x1;
          puStack_110 = (undefined1 *)0x541269;
          FUN_004040a0();
        }
        else {
          pcStack_10c = (char *)0x541219;
          iVar6 = FUN_00549ae0();
          if (iVar6 <= (int)pcVar7) goto LAB_0054121d;
        }
        pcStack_10c = *(char **)(iVar5 + 4 + *(int *)(param_1 + 0x18));
        if (pcStack_10c == (undefined1 *)0x0) {
          pcStack_10c = &DAT_0064a3b4;
        }
        puStack_110 = local_d4;
        if (local_d4 == (undefined1 *)0x0) {
          puStack_110 = &DAT_0064a3b4;
        }
        local_118 = local_98;
        pcStack_114 = s_WARNING___One_of_the_keys___s__f_006a13fc;
        pcStack_11c = (char *)0x541297;
        pcStack_11c = (char *)FUN_005ae390();
        local_4._0_1_ = 9;
        uStack_120 = 0x5412a5;
        FUN_005aff00();
        local_4 = CONCAT31(local_4._1_3_,2);
        pcStack_10c = (char *)0x1;
        puStack_110 = (undefined1 *)0x5412bb;
        FUN_004040a0();
      }
      local_ec = (undefined1 *)&local_118;
      pcStack_11c = (char *)0x0;
      local_118 = (char *)CONCAT31(local_118._1_3_,local_d8[0]);
      uStack_120 = 0x5412d3;
      FUN_004040a0();
      puStack_124 = local_d8;
      pcStack_11c = (char *)0xffffffff;
      uStack_120 = 0;
      uStack_128 = 0x5412e8;
      FUN_0040cc00();
      local_4 = CONCAT31(local_4._1_3_,2);
      uStack_120 = 0x5412f8;
      pcStack_11c = pcVar7;
      pcStack_11c = (char *)FUN_005494c0();
      uStack_120 = 0x541300;
      FUN_00543370();
      local_f4 = local_f4 + 0x38;
      pcVar7 = pcVar7 + 1;
      pcStack_10c = (char *)0x541313;
      iVar5 = FUN_00549ae0();
    } while ((int)pcVar7 < iVar5);
  }
  pcStack_10c = (char *)0x541322;
  FUN_005425b0();
  local_4 = local_4 & 0xffffff00;
  for (; iStack_e4 != local_e0; iStack_e4 = iStack_e4 + 0x38) {
    pcStack_10c = (char *)0x0;
    puStack_110 = (undefined1 *)0x541340;
    FUN_00549810();
  }
  puStack_110 = (undefined1 *)0x541355;
  FUN_005fe5f0();
  iStack_e4 = 0;
  local_e0 = 0;
  uStack_dc = 0;
  if (local_d4 != (undefined1 *)0x0) {
    cVar1 = local_d4[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      pcStack_10c = local_d4 + -1;
      puStack_110 = (undefined1 *)0x541385;
      FUN_005fe5f0();
    }
    else {
      local_d4[-1] = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return;
}

