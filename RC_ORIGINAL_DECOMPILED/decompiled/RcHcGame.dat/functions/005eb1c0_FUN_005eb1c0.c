/*
 * FUN_005eb1c0 at 005eb1c0
 * undefined FUN_005eb1c0(void)
 * Address ranges: 005eb1c0-005eb9b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005eb774) */
/* WARNING: Removing unreachable block (ram,0x005eb792) */
/* WARNING: Removing unreachable block (ram,0x005eb79e) */
/* WARNING: Removing unreachable block (ram,0x005eb7a5) */
/* WARNING: Removing unreachable block (ram,0x005eb962) */
/* WARNING: Removing unreachable block (ram,0x005eb980) */
/* WARNING: Removing unreachable block (ram,0x005eb98c) */
/* WARNING: Removing unreachable block (ram,0x005eb993) */

void FUN_005eb1c0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *pvVar6;
  void *pvVar7;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646fb4;
  local_c = ExceptionList;
  if ((DAT_0070fb24 == (undefined4 *)0x0) ||
     (((int)DAT_0070fb28 - (int)DAT_0070fb24 & 0xfffffffcU) == 0)) {
    puStack_34 = (undefined4 *)0x5eb200;
    ExceptionList = &local_c;
    local_14 = operator_new(0x20);
    local_4 = 0;
    if (local_14 == (undefined1 *)0x0) {
      local_18 = (undefined1 *)0x0;
    }
    else {
      local_10 = (undefined4 *)auStack_40;
      FUN_00409810(&DAT_006b1158,&local_1a);
      local_18 = (undefined1 *)FUN_005e3380();
    }
    puStack_34 = (undefined4 *)0x1;
    puStack_38 = DAT_0070fb28;
    local_4 = 0xffffffff;
    uStack_3c = 0x5eb25f;
    FUN_0053cff0();
    puStack_34 = (undefined4 *)0x5eb266;
    local_10 = operator_new(0x20);
    local_4 = 1;
    if (local_10 == (void *)0x0) {
      local_18 = (undefined1 *)0x0;
    }
    else {
      local_14 = auStack_40;
      FUN_00409810(s_randperc_006b114c,&local_1a);
      local_18 = (undefined1 *)FUN_005e3380();
    }
    puStack_34 = (undefined4 *)0x1;
    puStack_38 = DAT_0070fb28;
    local_4 = 0xffffffff;
    uStack_3c = 0x5eb2c2;
    FUN_0053cff0();
    puStack_34 = (undefined4 *)0x5eb2c9;
    local_10 = operator_new(0x20);
    local_4 = 2;
    if (local_10 == (void *)0x0) {
      local_18 = (undefined1 *)0x0;
    }
    else {
      local_14 = auStack_40;
      FUN_00409810(s_srand_006b1144,&local_1a);
      local_18 = (undefined1 *)FUN_005e3380();
    }
    puStack_34 = (undefined4 *)0x1;
    puStack_38 = DAT_0070fb28;
    local_4 = 0xffffffff;
    uStack_3c = 0x5eb325;
    FUN_0053cff0();
    puStack_34 = (undefined4 *)0x5eb32c;
    local_10 = operator_new(0x20);
    local_4 = 3;
    if (local_10 == (void *)0x0) {
      local_18 = (undefined1 *)0x0;
    }
    else {
      local_14 = auStack_40;
      FUN_00409810(s_clock_006b113c,&local_1a);
      local_18 = (undefined1 *)FUN_005e3380();
    }
    puStack_34 = (undefined4 *)0x1;
    puStack_38 = DAT_0070fb28;
    local_4 = 0xffffffff;
    uStack_3c = 0x5eb388;
    FUN_0053cff0();
    puStack_34 = (undefined4 *)0x5eb38f;
    local_10 = operator_new(0x20);
    local_4 = 4;
    if (local_10 == (void *)0x0) {
      local_18 = (undefined1 *)0x0;
    }
    else {
      local_14 = auStack_40;
      FUN_00409810(s_kbhit_006b1134,&local_1a);
      local_18 = (undefined1 *)FUN_005e3380();
    }
    puStack_34 = (undefined4 *)0x1;
    puStack_38 = DAT_0070fb28;
    local_4 = 0xffffffff;
    uStack_3c = 0x5eb3ec;
    FUN_0053cff0();
    puStack_34 = (undefined4 *)0x5eb3f3;
    local_10 = operator_new(0x20);
    local_4 = 5;
    if (local_10 == (void *)0x0) {
      local_18 = (undefined1 *)0x0;
    }
    else {
      local_14 = auStack_40;
      FUN_00409810(s_getch_006b112c,&local_1a);
      local_18 = (undefined1 *)FUN_005e3380();
    }
    puStack_34 = (undefined4 *)0x1;
    puStack_38 = DAT_0070fb28;
    local_4 = 0xffffffff;
    uStack_3c = 0x5eb44f;
    FUN_0053cff0();
    puStack_34 = (undefined4 *)0x5eb456;
    local_10 = operator_new(0x20);
    local_4 = 6;
    if (local_10 == (void *)0x0) {
      local_18 = (undefined1 *)0x0;
    }
    else {
      local_14 = auStack_40;
      FUN_00409810(&DAT_006b1124,&local_1a);
      local_18 = (undefined1 *)FUN_005e3380();
    }
    puStack_34 = (undefined4 *)0x1;
    puStack_38 = DAT_0070fb28;
    local_4 = 0xffffffff;
    uStack_3c = 0x5eb4b2;
    FUN_0053cff0();
    puStack_34 = (undefined4 *)0x5eb4b9;
    local_10 = operator_new(0x20);
    local_4 = 7;
    if (local_10 == (void *)0x0) {
      local_18 = (undefined1 *)0x0;
    }
    else {
      local_14 = auStack_40;
      FUN_00409810(s_strleft_006b111c,&local_1a);
      local_18 = (undefined1 *)FUN_005e3380();
    }
    puStack_34 = (undefined4 *)0x1;
    puStack_38 = DAT_0070fb28;
    local_4 = 0xffffffff;
    uStack_3c = 0x5eb515;
    FUN_0053cff0();
    puStack_34 = (undefined4 *)0x5eb51c;
    local_10 = operator_new(0x20);
    local_4 = 8;
    if (local_10 == (void *)0x0) {
      local_18 = (undefined1 *)0x0;
    }
    else {
      local_14 = auStack_40;
      FUN_00409810(s_strright_006b1110,&local_1a);
      local_18 = (undefined1 *)FUN_005e3380();
    }
    puStack_34 = (undefined4 *)0x1;
    puStack_38 = DAT_0070fb28;
    local_4 = 0xffffffff;
    uStack_3c = 0x5eb578;
    FUN_0053cff0();
    puStack_34 = (undefined4 *)0x5eb57f;
    local_10 = operator_new(0x20);
    local_4 = 9;
    if (local_10 == (void *)0x0) {
      local_18 = (undefined1 *)0x0;
    }
    else {
      local_14 = auStack_40;
      FUN_00409810(s_strmid_006b1108,&local_1a);
      local_18 = (undefined1 *)FUN_005e3380();
    }
    puStack_34 = (undefined4 *)0x1;
    puStack_38 = DAT_0070fb28;
    local_4 = 0xffffffff;
    uStack_3c = 0x5eb5db;
    FUN_0053cff0();
    puStack_34 = (undefined4 *)0x5eb5e2;
    local_10 = operator_new(0x20);
    local_4 = 10;
    if (local_10 == (void *)0x0) {
      local_18 = (undefined1 *)0x0;
    }
    else {
      local_14 = auStack_40;
      FUN_00409810(s_strfind_006b1100,&local_1a);
      local_18 = (undefined1 *)FUN_005e3380();
    }
    puVar5 = DAT_0070fb28;
    local_4 = 0xffffffff;
    if ((int)DAT_0070fb2c - (int)DAT_0070fb28 >> 2 == 0) {
      uVar1 = FUN_0044e4c0();
      if (uVar1 < 2) {
        iVar2 = 1;
      }
      else {
        iVar2 = FUN_0044e4c0();
      }
      iVar3 = FUN_0044e4c0();
      iVar3 = iVar3 + iVar2;
      iVar2 = iVar3;
      if (iVar3 < 0) {
        iVar2 = 0;
      }
      puStack_34 = (undefined4 *)0x5eb683;
      puVar4 = operator_new(iVar2 * 4);
      puStack_34 = puVar5;
      puStack_38 = DAT_0070fb24;
      uStack_3c = 0x5eb69b;
      puStack_38 = (undefined4 *)FUN_004dddf0();
      puStack_34 = (undefined4 *)0x1;
      uStack_3c = 0x5eb6af;
      FUN_004a7300();
      puStack_34 = DAT_0070fb28;
      puStack_38 = puVar5;
      uStack_3c = 0x5eb6c5;
      FUN_004dddf0();
      puStack_34 = DAT_0070fb24;
      puStack_38 = (undefined4 *)0x5eb6dc;
      FUN_00587d50();
      puStack_34 = (undefined4 *)0x5eb6e7;
      FUN_005fe5f0();
      DAT_0070fb2c = puVar4 + iVar3;
      iVar2 = FUN_0044e4c0();
      DAT_0070fb28 = puVar4 + iVar2 + 1;
      DAT_0070fb24 = puVar4;
    }
    else {
      puStack_34 = DAT_0070fb28;
      puStack_38 = DAT_0070fb28;
      uStack_3c = 0x5eb736;
      FUN_004dddf0();
      puStack_34 = (undefined4 *)(1 - ((int)DAT_0070fb28 - (int)puVar5 >> 2));
      puStack_38 = DAT_0070fb28;
      uStack_3c = 0x5eb75a;
      FUN_004a7300();
      puVar4 = DAT_0070fb28;
      for (; puVar5 != puVar4; puVar5 = puVar5 + 1) {
        *puVar5 = local_18;
      }
      DAT_0070fb28 = DAT_0070fb28 + 1;
    }
    puStack_34 = (undefined4 *)0x5eb7be;
    local_10 = operator_new(0x20);
    local_4 = 0xb;
    if (local_10 == (void *)0x0) {
      local_14 = (undefined1 *)0x0;
    }
    else {
      local_18 = auStack_40;
      FUN_00409810(&DAT_006b10f8,&local_19);
      local_14 = (undefined1 *)FUN_005e3380();
    }
    puVar5 = DAT_0070fb28;
    local_4 = 0xffffffff;
    if ((int)DAT_0070fb2c - (int)DAT_0070fb28 >> 2 == 0) {
      if ((DAT_0070fb24 == (undefined4 *)0x0) ||
         ((uint)((int)DAT_0070fb28 - (int)DAT_0070fb24 >> 2) < 2)) {
        iVar2 = 1;
      }
      else {
        iVar2 = (int)DAT_0070fb28 - (int)DAT_0070fb24 >> 2;
      }
      if (DAT_0070fb24 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)DAT_0070fb28 - (int)DAT_0070fb24 >> 2;
      }
      local_18 = (undefined1 *)(iVar3 + iVar2);
      iVar2 = (int)local_18;
      if ((int)local_18 < 0) {
        iVar2 = 0;
      }
      puStack_34 = (undefined4 *)0x5eb868;
      pvVar6 = operator_new(iVar2 * 4);
      pvVar7 = pvVar6;
      for (puVar4 = DAT_0070fb24; puStack_34 = pvVar7, puVar4 != puVar5; puVar4 = puVar4 + 1) {
        puStack_38 = (undefined4 *)0x5eb880;
        FUN_005f0760();
        pvVar7 = (void *)((int)pvVar7 + 4);
      }
      puStack_38 = (undefined4 *)0x5eb898;
      FUN_005f0760();
      puVar4 = DAT_0070fb28;
      for (; puVar5 != puVar4; puVar5 = puVar5 + 1) {
        pvVar7 = (void *)((int)pvVar7 + 4);
        puStack_38 = (undefined4 *)0x5eb8af;
        puStack_34 = pvVar7;
        FUN_005f0760();
      }
      puStack_34 = (undefined4 *)0x5eb8cb;
      local_10 = DAT_0070fb24;
      FUN_005fe5f0();
      DAT_0070fb2c = (undefined4 *)((int)pvVar6 + (int)local_18 * 4);
      iVar2 = FUN_0044e4c0();
      DAT_0070fb24 = pvVar6;
      DAT_0070fb28 = (undefined4 *)((int)pvVar6 + iVar2 * 4 + 4);
      ExceptionList = local_c;
      return;
    }
    puStack_34 = DAT_0070fb28;
    puStack_38 = DAT_0070fb28;
    uStack_3c = 0x5eb924;
    FUN_004dddf0();
    puStack_34 = (undefined4 *)(1 - ((int)DAT_0070fb28 - (int)puVar5 >> 2));
    puStack_38 = DAT_0070fb28;
    uStack_3c = 0x5eb948;
    FUN_004a7300();
    puVar4 = DAT_0070fb28;
    for (; puVar5 != puVar4; puVar5 = puVar5 + 1) {
      *puVar5 = local_14;
    }
    DAT_0070fb28 = DAT_0070fb28 + 1;
  }
  ExceptionList = local_c;
  return;
}

