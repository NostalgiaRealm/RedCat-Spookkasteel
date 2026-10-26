/*
 * FUN_005a4c70 at 005a4c70
 * undefined FUN_005a4c70(void)
 * Address ranges: 005a4c70-005a5461
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005a4c70(int param_1)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined1 local_8e4 [4];
  undefined4 *local_8e0;
  undefined4 local_8dc;
  undefined4 local_8d8;
  undefined1 local_8d4 [4];
  int local_8d0;
  undefined4 local_8cc;
  undefined4 local_8c8;
  int local_8c4;
  int local_8c0;
  undefined1 local_8bc [16];
  undefined4 local_8ac;
  undefined4 local_8a8;
  undefined4 local_8a4;
  int local_89c;
  undefined4 local_898;
  undefined4 local_894;
  int local_88c;
  undefined4 local_888;
  undefined4 local_884;
  int local_87c;
  undefined4 local_878;
  undefined4 local_874;
  void *local_870;
  int local_868;
  undefined1 local_85c [16];
  undefined1 local_84c [16];
  undefined1 local_83c [16];
  undefined1 local_82c [16];
  undefined1 local_81c [16];
  char local_80c;
  char local_80b [2047];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064551b;
  local_c = ExceptionList;
  iVar11 = 0;
  ExceptionList = &local_c;
  FUN_004040a0(0);
  local_4 = 0;
  FUN_004040a0(0);
  local_4._0_1_ = 1;
  FUN_004040a0(0);
  local_4._0_1_ = 2;
  FUN_004040a0(0);
  puVar2 = *(undefined1 **)(param_1 + 0x1c);
  local_4._0_1_ = 3;
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0064a3b4;
  }
  iVar3 = FUN_0060d46b(puVar2,&DAT_006a7f5c);
  local_8c0 = iVar3;
  if (iVar3 == 0) {
    puVar2 = *(undefined1 **)(param_1 + 0x1c);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0064a3b4;
    }
    uVar4 = FUN_005ae390(local_8bc,s_File_not_found___s__006a7f48,puVar2);
    local_4._0_1_ = 4;
    FUN_00442bf0(*(undefined4 *)(param_1 + 0x40),uVar4);
    local_4._0_1_ = 3;
    FUN_004040a0(1);
  }
  else {
    local_80c = DAT_006b3f70;
    pcVar9 = local_80b;
    for (iVar6 = 0x1ff; iVar6 != 0; iVar6 = iVar6 + -1) {
      pcVar9[0] = '\0';
      pcVar9[1] = '\0';
      pcVar9[2] = '\0';
      pcVar9[3] = '\0';
      pcVar9 = pcVar9 + 4;
    }
    pcVar9[0] = '\0';
    pcVar9[1] = '\0';
    pcVar9[2] = '\0';
    pcVar9 = &local_80c;
    for (iVar6 = 0x200; iVar6 != 0; iVar6 = iVar6 + -1) {
      pcVar9[0] = '\0';
      pcVar9[1] = '\0';
      pcVar9[2] = '\0';
      pcVar9[3] = '\0';
      pcVar9 = pcVar9 + 4;
    }
    local_8c4 = 0;
    iVar6 = FUN_0060d7c4(&local_80c,0x7ff,iVar3);
    while (iVar6 != 0) {
      iVar11 = iVar11 + 1;
      pcVar9 = &local_80c;
      iVar3 = FUN_0060b2e2((int)local_80c);
      while (iVar3 != 0) {
        pcVar10 = pcVar9 + 1;
        pcVar9 = pcVar9 + 1;
        iVar3 = FUN_0060b2e2((int)*pcVar10);
      }
      cVar1 = *pcVar9;
      if ((cVar1 != '\0') && (cVar1 != ';')) {
        if (cVar1 == '[') {
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
          cVar1 = pcVar9[1];
          pcVar9 = pcVar9 + 1;
          local_4._0_1_ = 5;
          while ((((cVar1 != ']' && (cVar1 != '\0')) && (cVar1 != '\r')) && (cVar1 != '\n'))) {
            uVar7 = (uint)local_8ac >> 8;
            local_8ac = CONCAT31((int3)uVar7,cVar1);
            pcVar9 = pcVar9 + 1;
            FUN_004eeef0(1,local_8ac);
            cVar1 = *pcVar9;
          }
          if (*pcVar9 == ']') {
            FUN_005a4190(local_8bc);
            local_870 = operator_new(0x34);
            local_4._0_1_ = 7;
            if (local_870 == (void *)0x0) {
              iVar3 = 0;
            }
            else {
              iVar3 = FUN_005a5740(local_8bc);
            }
            local_4._0_1_ = 5;
            cVar1 = FUN_005a5470(iVar3);
            iVar6 = iVar3;
            if (cVar1 == '\0') {
              uVar4 = FUN_005ae390(local_82c,s_Syntax_error_at_line__d__duplica_006a7e7c,iVar11);
              local_4._0_1_ = 8;
              FUN_00442bf0(*(undefined4 *)(param_1 + 0x40),uVar4);
              local_4._0_1_ = 5;
              FUN_004040a0(1);
              iVar6 = local_8c4;
              if (iVar3 != 0) {
                FUN_005a57a0();
                FUN_005fe5f0(iVar3);
                iVar6 = local_8c4;
              }
            }
            local_8c4 = iVar6;
            local_4._0_1_ = 3;
            FUN_004040a0(1);
          }
          else {
            uVar4 = FUN_005ae390(local_84c,s_Syntax_error_at_line__d__expecte_006a7ea8,iVar11);
            local_4._0_1_ = 6;
            FUN_00442bf0(*(undefined4 *)(param_1 + 0x40),uVar4);
            local_4._0_1_ = 5;
            FUN_004040a0(1);
            local_4._0_1_ = 3;
            FUN_004040a0(1);
          }
        }
        else {
          iVar3 = FUN_0060b28c((int)cVar1);
          if (iVar3 != 0) {
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
              puVar12 = (undefined4 *)&DAT_006b3f70;
              puVar13 = local_8e0;
              for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                *puVar13 = *puVar12;
                puVar12 = puVar12 + 1;
                puVar13 = puVar13 + 1;
              }
              for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *(undefined1 *)puVar13 = *(undefined1 *)puVar12;
                puVar12 = (undefined4 *)((int)puVar12 + 1);
                puVar13 = (undefined4 *)((int)puVar13 + 1);
              }
              FUN_00404190(uVar7);
            }
            local_4._0_1_ = 9;
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
            iVar3 = local_8c4;
            local_4._0_1_ = 10;
            if (local_8c4 == 0) {
              uVar4 = FUN_005ae390(local_85c,s_Syntax_error_at_line__d__setting_006a7f14,iVar11);
              local_4._0_1_ = 0xb;
              FUN_00444d70(*(undefined4 *)(param_1 + 0x40),1,uVar4);
            }
            else {
              cVar1 = *pcVar9;
              while (((cVar1 != '=' && (cVar1 != '\0')) && ((cVar1 != '\r' && (cVar1 != '\n'))))) {
                uVar7 = (uint)local_8a8 >> 8;
                local_8a8 = CONCAT31((int3)uVar7,cVar1);
                pcVar9 = pcVar9 + 1;
                FUN_004eeef0(1,local_8a8);
                cVar1 = *pcVar9;
              }
              FUN_005a4190(local_8e4);
              if (*pcVar9 == '=') {
                iVar6 = FUN_0060b2e2((int)pcVar9[1]);
                while (pcVar10 = pcVar9 + 1, iVar6 != 0) {
                  iVar6 = FUN_0060b2e2((int)pcVar9[2]);
                  pcVar9 = pcVar10;
                }
                cVar1 = *pcVar10;
                while (((cVar1 != '\0' && (cVar1 != '\r')) && (cVar1 != '\n'))) {
                  uVar7 = (uint)local_8a4 >> 8;
                  local_8a4 = CONCAT31((int3)uVar7,cVar1);
                  pcVar10 = pcVar10 + 1;
                  FUN_004eeef0(1,local_8a4);
                  cVar1 = *pcVar10;
                }
                FUN_005a4190(local_8d4);
                pvVar5 = operator_new(0x24);
                local_4._0_1_ = 0xd;
                if (pvVar5 == (void *)0x0) {
                  iVar6 = 0;
                }
                else {
                  iVar6 = FUN_005a5bc0(local_8e4,local_8d4);
                }
                local_4._0_1_ = 10;
                cVar1 = FUN_005a58a0(iVar6);
                if (cVar1 == '\0') {
                  puVar2 = *(undefined1 **)(iVar3 + 0x28);
                  if (puVar2 == (undefined1 *)0x0) {
                    puVar2 = &DAT_0064a3b4;
                  }
                  uVar4 = FUN_005ae390(local_81c,s_Syntax_error_at_line__d___s_006a7ed0,iVar11,
                                       puVar2);
                  local_4._0_1_ = 0xf;
                  FUN_00444d70(*(undefined4 *)(param_1 + 0x40),1,uVar4);
                  local_4 = CONCAT31(local_4._1_3_,10);
                  FUN_004040a0(1);
                  if (iVar6 != 0) {
                    FUN_005a5cf0();
                    FUN_005fe5f0(iVar6);
                  }
                  if (local_8d0 != 0) {
                    cVar1 = *(char *)(local_8d0 + -1);
                    if ((cVar1 == '\0') || (cVar1 == -1)) {
                      FUN_005fe5f0((char *)(local_8d0 + -1));
                    }
                    else {
                      *(char *)(local_8d0 + -1) = cVar1 + -1;
                    }
                  }
                  local_8d0 = 0;
                  local_8cc = 0;
                  local_8c8 = 0;
                  local_4._0_1_ = 3;
                  if (local_8e0 != (undefined4 *)0x0) {
                    cVar1 = *(char *)((int)local_8e0 + -1);
                    if ((cVar1 == '\0') || (cVar1 == -1)) {
                      FUN_005fe5f0((undefined1 *)((int)local_8e0 + -1));
                    }
                    else {
                      *(char *)((int)local_8e0 + -1) = cVar1 + -1;
                    }
                  }
                  local_8e0 = (undefined4 *)0x0;
                  local_8dc = 0;
                  local_8d8 = 0;
                }
                else {
                  if (local_8d0 != 0) {
                    cVar1 = *(char *)(local_8d0 + -1);
                    if ((cVar1 == '\0') || (cVar1 == -1)) {
                      FUN_005fe5f0((char *)(local_8d0 + -1));
                    }
                    else {
                      *(char *)(local_8d0 + -1) = cVar1 + -1;
                    }
                  }
                  local_8d0 = 0;
                  local_8cc = 0;
                  local_8c8 = 0;
                  local_4._0_1_ = 3;
                  if (local_8e0 != (undefined4 *)0x0) {
                    cVar1 = *(char *)((int)local_8e0 + -1);
                    if ((cVar1 == '\0') || (cVar1 == -1)) {
                      FUN_005fe5f0((undefined1 *)((int)local_8e0 + -1));
                    }
                    else {
                      *(char *)((int)local_8e0 + -1) = cVar1 + -1;
                    }
                  }
                  local_8e0 = (undefined4 *)0x0;
                  local_8dc = 0;
                  local_8d8 = 0;
                }
                goto LAB_005a5345;
              }
              uVar4 = FUN_005ae390(local_83c,s_Syntax_error_at_line__d__expecte_006a7eec,iVar11);
              local_4._0_1_ = 0xc;
              FUN_00444d70(*(undefined4 *)(param_1 + 0x40),1,uVar4);
            }
            local_4._0_1_ = 10;
            FUN_004040a0(1);
            local_4._0_1_ = 9;
            FUN_004040a0(1);
            local_4._0_1_ = 3;
            FUN_004040a0(1);
          }
        }
      }
LAB_005a5345:
      iVar6 = FUN_0060d7c4(&local_80c,0x7ff,local_8c0);
      iVar3 = local_8c0;
    }
    FUN_0060d30d(iVar3);
  }
  if (local_87c != 0) {
    cVar1 = *(char *)(local_87c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_87c + -1);
    }
    else {
      *(char *)(local_87c + -1) = cVar1 + -1;
    }
  }
  local_87c = 0;
  local_878 = 0;
  local_874 = 0;
  if (local_89c != 0) {
    cVar1 = *(char *)(local_89c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_89c + -1);
    }
    else {
      *(char *)(local_89c + -1) = cVar1 + -1;
    }
  }
  local_89c = 0;
  local_898 = 0;
  local_894 = 0;
  if (local_88c != 0) {
    cVar1 = *(char *)(local_88c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_88c + -1);
    }
    else {
      *(char *)(local_88c + -1) = cVar1 + -1;
    }
  }
  local_88c = 0;
  local_888 = 0;
  local_884 = 0;
  if (local_868 != 0) {
    cVar1 = *(char *)(local_868 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_868 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_005fe5f0(local_868 + -1);
  }
  ExceptionList = local_c;
  return;
}

