/*
 * FUN_00523620 at 00523620
 * undefined FUN_00523620(void)
 * Address ranges: 00523620-00523d2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00523620(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  undefined1 *puStack_64;
  undefined1 uStack_4d;
  undefined1 *puStack_4c;
  undefined4 *local_44;
  undefined4 *puStack_40;
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006392bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064f6a8;
  puStack_64 = (undefined1 *)0xf6;
  local_4 = 0x20;
  local_44 = param_1;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069fb00);
  local_4 = CONCAT31(local_4._1_3_,0x21);
  *(undefined1 *)(param_1 + 5) = 0;
  iVar6 = 0;
  do {
    if (*(undefined4 **)(iVar6 + param_1[0x23]) != (undefined4 *)0x0) {
      puStack_64 = (undefined1 *)0x1;
      (**(code **)**(undefined4 **)(iVar6 + param_1[0x23]))();
    }
    iVar7 = iVar6 + 4;
    *(undefined4 *)(iVar6 + param_1[0x23]) = 0;
    iVar6 = iVar7;
  } while (iVar7 < 0x20);
  puStack_4c = (undefined1 *)&puStack_64;
  puStack_64 = (undefined1 *)0x0;
  FUN_005296e0();
  puStack_4c = (undefined1 *)&puStack_64;
  puStack_64 = (undefined1 *)0x0;
  FUN_00529840();
  if (param_1[0x19] != 0) {
    if (param_1[0x19] == 0) {
      puStack_64 = &uStack_4d;
      FUN_00409810(&DAT_006b3f70);
      puStack_64 = auStack_2c;
      local_4._0_1_ = 0x22;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,0x21);
      puStack_64 = (undefined1 *)0x1;
      FUN_004040a0();
    }
    puStack_64 = (undefined1 *)0x523711;
    FUN_004faab0();
    if (param_1[0x19] == 0) {
      puStack_64 = &uStack_4d;
      FUN_00409810(&DAT_006b3f70);
      puStack_64 = auStack_2c;
      local_4._0_1_ = 0x23;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,0x21);
      puStack_64 = (undefined1 *)0x1;
      FUN_004040a0();
    }
    if (*(int *)(param_1[0x19] + 0x14) != 1) {
      puStack_64 = (undefined1 *)0x0;
      auStack_3c[0] = uStack_4d;
      FUN_004040a0();
      uVar5 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      puStack_64 = (undefined1 *)(~uVar5 - 1);
      FUN_004040f0(&DAT_006b3f70);
      puStack_64 = auStack_3c;
      local_4._0_1_ = 0x24;
      pcVar4 = (code *)FUN_005a07f0(s_m_EmptySubLevel_>GetUseCount_____0069fc6c,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x10b);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,0x21);
      puStack_64 = (undefined1 *)0x1;
      FUN_004040a0();
    }
    if (param_1[0x19] != 0) {
      puStack_64 = (undefined1 *)0x5237d4;
      FUN_004098d0();
      param_1[0x19] = 0;
    }
  }
  iVar6 = 0;
  while( true ) {
    if (param_1[10] == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = (int)(param_1[0xb] - param_1[10]) >> 2;
    }
    if (iVar7 <= iVar6) break;
    iVar7 = param_1[10];
    iVar2 = *(int *)(iVar7 + iVar6 * 4);
    if (iVar2 != 0) {
      puStack_64 = (undefined1 *)0x1;
      *(undefined4 *)(iVar2 + 0x14) = 0;
      FUN_005abfc0();
      *(undefined4 *)(iVar7 + iVar6 * 4) = 0;
    }
    iVar6 = iVar6 + 1;
  }
  puStack_64 = (undefined1 *)0x523811;
  FUN_004a6d40();
  *(undefined1 *)(param_1 + 0x16) = 0;
  puStack_4c = (undefined1 *)0x0;
  do {
    if (param_1[0x11] == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)(param_1[0x12] - param_1[0x11]) >> 2;
    }
    if (iVar6 <= (int)puStack_4c) {
      puVar9 = (undefined1 *)param_1[0x2c];
      if (puVar9 != (undefined1 *)0x0) {
        puStack_64 = (undefined1 *)0x523995;
        FUN_005e6a30();
        puStack_64 = puVar9;
        FUN_005fe5f0();
        param_1[0x2c] = 0;
      }
      local_4._0_1_ = 0x20;
      puStack_64 = (undefined1 *)0x5239b2;
      FUN_005ae770();
      local_4._0_1_ = 0x1f;
      if (param_1[0x205] != 0) {
        puStack_64 = (undefined1 *)0x5239c6;
        FUN_004098d0();
        param_1[0x205] = 0;
      }
      iVar6 = param_1[0x204];
      local_4._0_1_ = 0x1e;
      if (iVar6 != 0) {
        iVar7 = *(int *)(iVar6 + 0x14) + -1;
        *(int *)(iVar6 + 0x14) = iVar7;
        if (iVar7 == 0) {
          puStack_64 = (undefined1 *)0x0;
          FUN_005abfc0();
        }
        param_1[0x204] = 0;
      }
      iVar6 = param_1[0x203];
      local_4._0_1_ = 0x1d;
      if (iVar6 != 0) {
        iVar7 = *(int *)(iVar6 + 0x14) + -1;
        *(int *)(iVar6 + 0x14) = iVar7;
        if (iVar7 == 0) {
          puStack_64 = (undefined1 *)0x0;
          FUN_005abfc0();
        }
        param_1[0x203] = 0;
      }
      local_4._0_1_ = 0x1c;
      puStack_64 = (undefined1 *)0x523a24;
      FUN_005acca0();
      local_4._0_1_ = 0x1b;
      puStack_64 = (undefined1 *)0x523a34;
      FUN_005acca0();
      local_4._0_1_ = 0x1a;
      puStack_64 = (undefined1 *)0x523a44;
      FUN_005acca0();
      local_4._0_1_ = 0x19;
      puStack_64 = (undefined1 *)0x523a54;
      FUN_005acca0();
      local_4._0_1_ = 0x18;
      puStack_64 = (undefined1 *)0x523a64;
      FUN_005acca0();
      local_4._0_1_ = 0x17;
      puStack_64 = (undefined1 *)0x523a74;
      FUN_005acca0();
      local_4._0_1_ = 0x16;
      puStack_64 = (undefined1 *)0x523a84;
      FUN_005acca0();
      local_4._0_1_ = 0x15;
      puStack_64 = (undefined1 *)0x523a94;
      FUN_005acca0();
      local_4._0_1_ = 0x14;
      puStack_64 = (undefined1 *)0x523aa4;
      FUN_005acca0();
      local_4._0_1_ = 0x13;
      puStack_64 = (undefined1 *)0x523ab4;
      FUN_005acca0();
      local_4._0_1_ = 0x12;
      puStack_64 = (undefined1 *)0x523ac4;
      FUN_005acca0();
      local_4._0_1_ = 0x11;
      puStack_64 = (undefined1 *)0x523ad4;
      FUN_005acca0();
      local_4._0_1_ = 0x10;
      puStack_64 = (undefined1 *)0x523ae4;
      FUN_005acca0();
      local_4._0_1_ = 0xf;
      puStack_64 = (undefined1 *)0x523af4;
      FUN_005acca0();
      local_4._0_1_ = 0xe;
      puStack_64 = (undefined1 *)0x523b04;
      FUN_005acca0();
      local_4._0_1_ = 0xd;
      puStack_64 = (undefined1 *)0x523b14;
      FUN_005acca0();
      local_4._0_1_ = 0xc;
      puStack_64 = (undefined1 *)0x523b24;
      FUN_005acca0();
      iVar6 = param_1[0x37];
      local_4._0_1_ = 0xb;
      if (iVar6 != 0) {
        iVar7 = *(int *)(iVar6 + 0x14) + -1;
        *(int *)(iVar6 + 0x14) = iVar7;
        if (iVar7 == 0) {
          puStack_64 = (undefined1 *)0x0;
          FUN_005abfc0();
        }
        param_1[0x37] = 0;
      }
      puStack_64 = (undefined1 *)0x1;
      local_4._0_1_ = 10;
      FUN_004040a0();
      iVar6 = param_1[0x2f];
      iVar7 = param_1[0x2e];
      local_4._0_1_ = 9;
      for (; iVar7 != iVar6; iVar7 = iVar7 + 0x10) {
        puStack_64 = (undefined1 *)0x0;
        FUN_004fe5c0();
      }
      puStack_64 = (undefined1 *)param_1[0x2e];
      FUN_005fe5f0();
      param_1[0x2e] = 0;
      param_1[0x2f] = 0;
      param_1[0x30] = 0;
      iVar6 = param_1[0x2a];
      local_4._0_1_ = 8;
      if (iVar6 != 0) {
        iVar7 = *(int *)(iVar6 + 0x14) + -1;
        *(int *)(iVar6 + 0x14) = iVar7;
        if (iVar7 == 0) {
          puStack_64 = (undefined1 *)0x0;
          FUN_005abfc0();
        }
        param_1[0x2a] = 0;
      }
      puStack_64 = (undefined1 *)param_1[0x23];
      puStack_4c = puStack_64;
      FUN_005fe5f0();
      param_1[0x23] = 0;
      param_1[0x24] = 0;
      param_1[0x25] = 0;
      puVar3 = (undefined4 *)param_1[0x20];
      puVar10 = (undefined4 *)param_1[0x1f];
      local_4._0_1_ = 6;
      for (; puVar10 != puVar3; puVar10 = puVar10 + 0xb) {
        puStack_64 = (undefined1 *)0x0;
        (**(code **)*puVar10)();
      }
      puStack_64 = (undefined1 *)param_1[0x1f];
      FUN_005fe5f0();
      param_1[0x1f] = 0;
      param_1[0x20] = 0;
      puStack_64 = (undefined1 *)0x1;
      param_1[0x21] = 0;
      local_4._0_1_ = 5;
      FUN_004040a0();
      iVar6 = param_1[0x19];
      local_4._0_1_ = 4;
      if (iVar6 != 0) {
        iVar7 = *(int *)(iVar6 + 0x14) + -1;
        *(int *)(iVar6 + 0x14) = iVar7;
        if (iVar7 == 0) {
          puStack_64 = (undefined1 *)0x0;
          FUN_005abfc0();
        }
        param_1[0x19] = 0;
      }
      iVar6 = param_1[0x18];
      local_4._0_1_ = 3;
      if (iVar6 != 0) {
        iVar7 = *(int *)(iVar6 + 0x14) + -1;
        *(int *)(iVar6 + 0x14) = iVar7;
        if (iVar7 == 0) {
          puStack_64 = (undefined1 *)0x0;
          FUN_005abfc0();
        }
        param_1[0x18] = 0;
      }
      iVar6 = param_1[0x17];
      local_4._0_1_ = 2;
      if (iVar6 != 0) {
        iVar7 = *(int *)(iVar6 + 0x14) + -1;
        *(int *)(iVar6 + 0x14) = iVar7;
        if (iVar7 == 0) {
          puStack_64 = (undefined1 *)0x0;
          FUN_005abfc0();
        }
        param_1[0x17] = 0;
      }
      puStack_40 = param_1 + 0x10;
      puStack_64 = (undefined1 *)0x2d;
      local_4._0_1_ = 0x28;
      FUN_005ae5f0(s___AdamSource_DaviSortedList_h_00690798);
      puStack_64 = (undefined1 *)0x523cb1;
      FUN_005ae770();
      local_4._0_1_ = 1;
      puStack_64 = (undefined1 *)0x523cbd;
      FUN_004f2780();
      puStack_40 = param_1 + 9;
      puStack_64 = (undefined1 *)0x2d;
      local_4._0_1_ = 0x29;
      FUN_005ae5f0(s___AdamSource_DaviSortedList_h_00690798);
      puStack_64 = (undefined1 *)0x523ce2;
      FUN_005ae770();
      puStack_64 = (undefined1 *)param_1[0xb];
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004fdd20(param_1[10]);
      puStack_64 = (undefined1 *)param_1[10];
      FUN_005fe5f0();
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      local_4 = 0xffffffff;
      puStack_64 = (undefined1 *)0x523d19;
      FUN_005ab4d0();
      ExceptionList = pvStack_c;
      return;
    }
    iVar6 = param_1[0x11];
    if (*(int *)(iVar6 + (int)puStack_4c * 4) == 0) {
      puStack_64 = (undefined1 *)0x0;
      auStack_3c[0] = uStack_4d;
      FUN_004040a0();
      uVar5 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      puStack_64 = (undefined1 *)(~uVar5 - 1);
      FUN_004040f0(&DAT_006b3f70);
      puStack_64 = auStack_3c;
      local_4._0_1_ = 0x25;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,0x21);
      puStack_64 = (undefined1 *)0x1;
      FUN_004040a0();
    }
    puVar9 = puStack_4c;
    if (*(int *)(*(int *)(iVar6 + (int)puStack_4c * 4) + 0x14) != 1) {
      if (*(int *)(param_1[0x11] + (int)puStack_4c * 4) == 0) {
        puStack_64 = (undefined1 *)0x0;
        auStack_2c[0] = uStack_4d;
        FUN_004040a0();
        uVar5 = 0xffffffff;
        pcVar8 = &DAT_006b3f70;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        puStack_64 = (undefined1 *)(~uVar5 - 1);
        FUN_004040f0(&DAT_006b3f70);
        puStack_64 = auStack_2c;
        local_4._0_1_ = 0x26;
        pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
        (*pcVar4)();
        local_4 = CONCAT31(local_4._1_3_,0x21);
        puStack_64 = (undefined1 *)0x1;
        FUN_004040a0();
      }
      puVar9 = puStack_4c;
      puStack_64 = (undefined1 *)0x52392f;
      iVar6 = FUN_005a1d60();
      puStack_64 = *(undefined1 **)(iVar6 + 4);
      if (puStack_64 == (undefined1 *)0x0) {
        puStack_64 = &DAT_0064a3b4;
      }
      puStack_64 = (undefined1 *)FUN_005ae390(auStack_1c,s_GO_Factory__s_is_still_in_use_0069fc4c);
      local_4._0_1_ = 0x27;
      pcVar4 = (code *)FUN_005a07f0(s_m_GOFactories__i___>GetUseCount__0069fc24,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x128);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,0x21);
      puStack_64 = (undefined1 *)0x1;
      FUN_004040a0();
    }
    puStack_4c = (undefined1 *)((int)puVar9 + 1);
  } while( true );
}

