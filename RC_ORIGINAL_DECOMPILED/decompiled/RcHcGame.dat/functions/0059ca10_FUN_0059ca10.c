/*
 * FUN_0059ca10 at 0059ca10
 * undefined FUN_0059ca10(void)
 * Address ranges: 0059ca10-0059d113
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0059ca10(int param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 auStack_80 [4];
  undefined1 local_7c [4];
  undefined4 *puStack_78;
  uint uStack_74;
  undefined1 auStack_6c [4];
  int iStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_5c [4];
  int iStack_58;
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644908;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0059b200();
  if (param_1 == 0) {
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4 = param_1;
    pcVar2 = (code *)FUN_005a07f0(s_a_WayPoint1____0_006a73a4,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a72cc,0x105,local_7c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if (param_2 == 0) {
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4 = 1;
    pcVar2 = (code *)FUN_005a07f0(s_a_WayPoint2____0_006a7390,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a72cc,0x106,local_7c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if (param_1 == param_2) {
    FUN_005195f0();
    iVar3 = FUN_004337e0();
    if (iVar3 != 0) {
      uVar4 = FUN_0059a1b0(auStack_1c);
      local_4 = 2;
      uVar5 = FUN_0059a1b0(auStack_2c);
      local_4._0_1_ = 3;
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar10 = s_Can_not_create_path_between_006a7370;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(s_Can_not_create_path_between_006a7370,~uVar7 - 1);
      local_4._0_1_ = 4;
      uVar5 = FUN_0044e370(auStack_3c,local_7c,uVar5);
      local_4._0_1_ = 5;
      uVar5 = FUN_0040cad0(auStack_4c,uVar5,s_and_006a7368);
      local_4._0_1_ = 6;
      uVar4 = FUN_0044e370(auStack_5c,uVar5,uVar4);
      local_4._0_1_ = 7;
      uVar4 = FUN_0040cad0(auStack_6c,uVar4,s___same_way_point_006a7354);
      local_4._0_1_ = 8;
      FUN_005aff00(uVar4);
      local_4._0_1_ = 7;
      FUN_004040a0(1);
      local_4._0_1_ = 6;
      FUN_004040a0(1);
      local_4._0_1_ = 5;
      FUN_004040a0(1);
      local_4._0_1_ = 4;
      FUN_004040a0(1);
      local_4._0_1_ = 3;
      FUN_004040a0(1);
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_004040a0(1);
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    uVar4 = 0;
  }
  else {
    iVar3 = FUN_005995c0();
    iVar6 = FUN_005995c0();
    if (iVar3 == iVar6) {
      FUN_00598580(0xffffffff);
      cVar1 = FUN_0059c630(param_2,param_1);
      FUN_00598580(1);
      if (cVar1 == '\0') {
        FUN_005195f0();
        iVar3 = FUN_004337e0();
        if (iVar3 != 0) {
          uVar4 = FUN_0059a1b0(auStack_5c);
          local_4 = 0x10;
          uVar5 = FUN_0059a1b0(auStack_6c);
          local_4._0_1_ = 0x11;
          FUN_004040a0(0);
          uVar7 = 0xffffffff;
          pcVar10 = s_Can_not_create_path_between_006a7370;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar1 != '\0');
          FUN_004040f0(s_Can_not_create_path_between_006a7370,~uVar7 - 1);
          local_4._0_1_ = 0x12;
          uVar5 = FUN_0044e370(auStack_4c,local_7c,uVar5);
          local_4._0_1_ = 0x13;
          uVar5 = FUN_0040cad0(auStack_3c,uVar5,s_and_006a7368);
          local_4._0_1_ = 0x14;
          uVar4 = FUN_0044e370(auStack_2c,uVar5,uVar4);
          local_4._0_1_ = 0x15;
          uVar4 = FUN_0040cad0(auStack_1c,uVar4,s___all_paths_blocked_006a7328);
          local_4._0_1_ = 0x16;
          FUN_005aff00(uVar4);
          local_4._0_1_ = 0x15;
          FUN_004040a0(1);
          local_4._0_1_ = 0x14;
          FUN_004040a0(1);
          local_4._0_1_ = 0x13;
          FUN_004040a0(1);
          local_4._0_1_ = 0x12;
          FUN_004040a0(1);
          local_4 = CONCAT31(local_4._1_3_,0x11);
          FUN_004040a0(1);
          if (iStack_68 != 0) {
            cVar1 = *(char *)(iStack_68 + -1);
            if ((cVar1 == '\0') || (cVar1 == -1)) {
              FUN_005fe5f0((char *)(iStack_68 + -1));
            }
            else {
              *(char *)(iStack_68 + -1) = cVar1 + -1;
            }
          }
          iStack_68 = 0;
          uStack_64 = 0;
          uStack_60 = 0;
          if (iStack_58 != 0) {
            cVar1 = *(char *)(iStack_58 + -1);
            if ((cVar1 != '\0') && (cVar1 != -1)) {
              *(char *)(iStack_58 + -1) = cVar1 + -1;
              ExceptionList = pvStack_c;
              return 0;
            }
            FUN_005fe5f0((char *)(iStack_58 + -1));
          }
        }
        uVar4 = 0;
      }
      else {
        iVar3 = FUN_005994c0();
        if (iVar3 == 0) {
          FUN_004040a0(0);
          uVar7 = 0xffffffff;
          pcVar10 = &DAT_006b3f70;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar1 != '\0');
          uVar7 = ~uVar7 - 1;
          cVar1 = FUN_00401940(uVar7,1);
          if (cVar1 != '\0') {
            puVar9 = (undefined4 *)&DAT_006b3f70;
            puVar11 = puStack_78;
            for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *puVar11 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar11 = puVar11 + 1;
            }
            for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
              puVar9 = (undefined4 *)((int)puVar9 + 1);
              puVar11 = (undefined4 *)((int)puVar11 + 1);
            }
            *(undefined1 *)((int)puStack_78 + uVar7) = 0;
            uStack_74 = uVar7;
          }
          local_4 = 0x17;
          pcVar2 = (code *)FUN_005a07f0(s_neighbourWayPoint____0_006a7310,
                                        s_D__Work_RCHorror_AdamSource_Adam_006a72cc,300,local_7c);
          (*pcVar2)();
          local_4 = 0xffffffff;
          if (puStack_78 != (undefined4 *)0x0) {
            cVar1 = *(char *)((int)puStack_78 + -1);
            if ((cVar1 == '\0') || (cVar1 == -1)) {
              FUN_005fe5f0((char *)((int)puStack_78 + -1));
            }
            else {
              *(char *)((int)puStack_78 + -1) = cVar1 + -1;
            }
          }
        }
        uVar4 = FUN_00599450(auStack_80);
        local_4 = 0x18;
        FUN_0059b1d0(uVar4);
        local_4 = 0xffffffff;
        FUN_005630e0();
        uVar4 = 1;
      }
    }
    else {
      FUN_005195f0();
      iVar3 = FUN_004337e0();
      if (iVar3 != 0) {
        uVar4 = FUN_0059a1b0(auStack_6c);
        local_4 = 9;
        uVar5 = FUN_0059a1b0(auStack_5c);
        local_4._0_1_ = 10;
        FUN_004040a0(0);
        uVar7 = 0xffffffff;
        pcVar10 = s_Can_not_create_path_between_006a7370;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(s_Can_not_create_path_between_006a7370,~uVar7 - 1);
        local_4._0_1_ = 0xb;
        uVar5 = FUN_0044e370(auStack_4c,local_7c,uVar5);
        local_4._0_1_ = 0xc;
        uVar5 = FUN_0040cad0(auStack_3c,uVar5,s_and_006a7368);
        local_4._0_1_ = 0xd;
        uVar4 = FUN_0044e370(auStack_2c,uVar5,uVar4);
        local_4._0_1_ = 0xe;
        uVar4 = FUN_0040cad0(auStack_1c,uVar4,s___different_subsystems_006a733c);
        local_4._0_1_ = 0xf;
        FUN_005aff00(uVar4);
        local_4._0_1_ = 0xe;
        FUN_004040a0(1);
        local_4._0_1_ = 0xd;
        FUN_004040a0(1);
        local_4._0_1_ = 0xc;
        FUN_004040a0(1);
        local_4._0_1_ = 0xb;
        FUN_004040a0(1);
        local_4._0_1_ = 10;
        FUN_004040a0(1);
        local_4 = CONCAT31(local_4._1_3_,9);
        FUN_004040a0(1);
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      uVar4 = 0;
    }
  }
  ExceptionList = pvStack_c;
  return uVar4;
}

