/*
 * FUN_004547e0 at 004547e0
 * undefined FUN_004547e0(void)
 * Address ranges: 004547e0-00455bf8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004547e0(int param_1)

{
  undefined *puVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 local_70d;
  int local_70c;
  undefined1 local_705;
  int local_704;
  undefined1 local_6fd;
  int local_6fc;
  int local_6f8;
  undefined1 local_6f4 [16];
  undefined1 local_6e4 [16];
  undefined1 local_6d4 [16];
  undefined1 local_6c4 [4];
  char *local_6c0;
  undefined1 local_6b4 [4];
  char *local_6b0;
  undefined1 local_6a4 [4];
  char *local_6a0;
  int local_69c;
  int local_674;
  int local_670;
  int local_66c;
  int local_668;
  int local_664;
  int local_660;
  int local_65c;
  int local_658;
  undefined1 local_654;
  int local_650;
  undefined4 local_64c;
  undefined4 local_648;
  undefined1 local_644 [16];
  undefined1 local_634 [16];
  undefined1 local_624 [16];
  undefined1 local_614 [16];
  undefined1 local_604 [16];
  undefined1 local_5f4 [16];
  undefined1 local_5e4 [16];
  undefined1 local_5d4 [16];
  undefined1 local_5c4 [16];
  undefined1 local_5b4 [16];
  undefined1 local_5a4 [16];
  undefined1 local_594 [16];
  undefined1 local_584 [16];
  undefined1 local_574 [16];
  undefined1 local_564 [16];
  undefined1 local_554 [16];
  undefined1 local_544 [16];
  undefined1 local_534 [16];
  undefined1 local_524 [16];
  undefined1 local_514 [16];
  undefined1 local_504 [16];
  undefined1 local_4f4 [16];
  undefined1 local_4e4 [16];
  undefined1 local_4d4 [16];
  undefined1 local_4c4 [16];
  undefined1 local_4b4 [16];
  undefined1 local_4a4 [16];
  undefined1 local_494 [16];
  undefined1 local_484 [16];
  undefined1 local_474 [16];
  undefined1 local_464 [16];
  undefined1 local_454 [1096];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006268dc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_704 = param_1;
  if (DAT_006c8de0 == 0) {
    ExceptionList = &local_c;
    FUN_0055b280();
  }
  FUN_0044e4a0(&local_6fd);
  local_4 = 0;
  FUN_0044e4a0(&local_705);
  local_4._0_1_ = 1;
  FUN_0044e4a0(&local_70d);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00457240(0);
  local_4 = 3;
  local_654 = local_70d;
  FUN_004040a0(0);
  pcVar10 = *(char **)(param_1 + 0x18);
  local_4._0_1_ = 4;
  if (pcVar10 == (char *)0x0) {
    pcVar10 = "";
  }
  local_6d4[0] = local_70d;
  FUN_004040a0(0);
  uVar8 = 0xffffffff;
  pcVar11 = pcVar10;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar3 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar3 != '\0');
  FUN_004040f0(pcVar10,~uVar8 - 1);
  puVar1 = PTR_s_IconList_00691bc8;
  local_4._0_1_ = 5;
  local_6f4[0] = local_70d;
  FUN_004040a0(0);
  uVar8 = 0xffffffff;
  pcVar10 = puVar1;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar3 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar3 != '\0');
  FUN_004040f0(puVar1,~uVar8 - 1);
  local_4._0_1_ = 6;
  local_6e4[0] = local_70d;
  FUN_004040a0(0);
  uVar8 = 0xffffffff;
  pcVar10 = s_Count_00691c7c;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar3 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar3 != '\0');
  FUN_004040f0(s_Count_00691c7c,~uVar8 - 1);
  local_4 = CONCAT31(local_4._1_3_,7);
  iVar4 = FUN_005ac9d0(local_6e4,local_6f4,0,local_6d4,0);
  iVar6 = *(int *)(iVar4 + 100);
  if (iVar6 == -0x80000000) {
    puVar5 = *(undefined1 **)(iVar4 + 0x18);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    iVar6 = FUN_0060af10(puVar5);
    *(int *)(iVar4 + 100) = iVar6;
  }
  local_6f8 = iVar6;
  FUN_005acca0();
  local_4._0_1_ = 6;
  FUN_004040a0(1);
  local_4._0_1_ = 5;
  FUN_004040a0(1);
  local_4._0_1_ = 4;
  FUN_004040a0(1);
  uVar2 = local_70d;
  local_6fc = 0;
  if (0 < iVar6) {
    do {
      pcVar10 = *(char **)(local_704 + 0x18);
      if (pcVar10 == (char *)0x0) {
        pcVar10 = "";
      }
      local_474[0] = local_70d;
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar11 = pcVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar3 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(pcVar10,~uVar8 - 1);
      puVar1 = PTR_s_IconList_00691bc8;
      local_4._0_1_ = 8;
      local_624[0] = local_70d;
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar10 = puVar1;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar3 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(puVar1,~uVar8 - 1);
      local_4._0_1_ = 9;
      iVar4 = FUN_005ae390(local_454,s_ico_d_00691c74,local_6fc);
      pcVar10 = *(char **)(iVar4 + 4);
      local_4._0_1_ = 10;
      if (pcVar10 == (char *)0x0) {
        pcVar10 = "";
      }
      local_4b4[0] = local_70d;
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar11 = pcVar10;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar3 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(pcVar10,~uVar8 - 1);
      local_4._0_1_ = 0xb;
      iVar4 = FUN_005acaf0(local_4b4,local_624,&DAT_006b3f70,local_474,0);
      local_6d4[0] = *(undefined1 *)(iVar4 + 0x14);
      local_4._0_1_ = 0xc;
      FUN_004040a0(0);
      FUN_0040cc00(iVar4 + 0x14,0,0xffffffff);
      local_4._0_1_ = 0xd;
      local_564[0] = local_6d4[0];
      FUN_004040a0(0);
      FUN_0040cc00(local_6d4,0,0xffffffff);
      local_4._0_1_ = 0xe;
      FUN_0040cc00(local_564,0,0xffffffff);
      local_4._0_1_ = 0xd;
      FUN_004040a0(1);
      local_4._0_1_ = 0xc;
      FUN_004040a0(1);
      local_4._0_1_ = 0xb;
      FUN_005acca0();
      local_4._0_1_ = 10;
      FUN_004040a0(1);
      local_4._0_1_ = 9;
      FUN_004040a0(1);
      local_4._0_1_ = 8;
      FUN_004040a0(1);
      local_4._0_1_ = 4;
      FUN_004040a0(1);
      iVar4 = local_704;
      if (local_69c != 0) {
        pcVar10 = *(char **)(local_704 + 0x18);
        if (pcVar10 == (char *)0x0) {
          pcVar10 = "";
        }
        local_494[0] = local_70d;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar11 = pcVar10;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(pcVar10,~uVar8 - 1);
        local_4._0_1_ = 0xf;
        pcVar10 = local_6a0;
        if (local_6a0 == (char *)0x0) {
          pcVar10 = "";
        }
        local_5e4[0] = local_70d;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar11 = pcVar10;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(pcVar10,~uVar8 - 1);
        local_4d4[0] = local_70d;
        local_4._0_1_ = 0x10;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar10 = s_BitMap_00691c6c;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar3 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(s_BitMap_00691c6c,~uVar8 - 1);
        local_4._0_1_ = 0x11;
        iVar6 = FUN_005acaf0(local_4d4,local_5e4,&DAT_006b3f70,local_494,0);
        local_6f4[0] = *(undefined1 *)(iVar6 + 0x14);
        local_4._0_1_ = 0x12;
        FUN_004040a0(0);
        FUN_0040cc00(iVar6 + 0x14,0,0xffffffff);
        local_604[0] = local_6f4[0];
        local_4._0_1_ = 0x13;
        FUN_004040a0(0);
        FUN_0040cc00(local_6f4,0,0xffffffff);
        local_4._0_1_ = 0x14;
        FUN_0040cc00(local_604,0,0xffffffff);
        local_4._0_1_ = 0x13;
        FUN_004040a0(1);
        local_4._0_1_ = 0x12;
        FUN_004040a0(1);
        local_4._0_1_ = 0x11;
        FUN_005acca0();
        local_4._0_1_ = 0x10;
        FUN_004040a0(1);
        local_4._0_1_ = 0xf;
        FUN_004040a0(1);
        local_4._0_1_ = 4;
        FUN_004040a0(1);
        pcVar10 = "";
        if (*(char **)(iVar4 + 0x18) != (char *)0x0) {
          pcVar10 = *(char **)(iVar4 + 0x18);
        }
        local_504[0] = local_70d;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar11 = pcVar10;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(pcVar10,~uVar8 - 1);
        local_4._0_1_ = 0x15;
        pcVar10 = local_6a0;
        if (local_6a0 == (char *)0x0) {
          pcVar10 = "";
        }
        local_5a4[0] = uVar2;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar11 = pcVar10;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(pcVar10,~uVar8 - 1);
        local_514[0] = local_70d;
        local_4._0_1_ = 0x16;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar10 = s_AlphaBitMap_00691c60;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar3 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(s_AlphaBitMap_00691c60,~uVar8 - 1);
        local_4._0_1_ = 0x17;
        iVar6 = FUN_005acaf0(local_514,local_5a4,&DAT_006b3f70,local_504,0);
        local_6e4[0] = *(undefined1 *)(iVar6 + 0x14);
        local_4._0_1_ = 0x18;
        FUN_004040a0(0);
        FUN_0040cc00(iVar6 + 0x14,0,0xffffffff);
        local_5c4[0] = local_6e4[0];
        local_4._0_1_ = 0x19;
        FUN_004040a0(0);
        FUN_0040cc00(local_6e4,0,0xffffffff);
        local_4._0_1_ = 0x1a;
        FUN_0040cc00(local_5c4,0,0xffffffff);
        local_4._0_1_ = 0x19;
        FUN_004040a0(1);
        local_4._0_1_ = 0x18;
        FUN_004040a0(1);
        local_4._0_1_ = 0x17;
        FUN_005acca0();
        local_4._0_1_ = 0x16;
        FUN_004040a0(1);
        local_4._0_1_ = 0x15;
        FUN_004040a0(1);
        local_4._0_1_ = 4;
        FUN_004040a0(1);
        local_70c = 0;
        FUN_005844b0();
        local_4._0_1_ = 0x1b;
        if (local_674 != local_70c) {
          if (local_674 != 0) {
            FUN_004098d0();
          }
          local_674 = local_70c;
          FUN_005844b0();
        }
        local_4._0_1_ = 4;
        FUN_0057d310();
        pcVar10 = *(char **)(iVar4 + 0x18);
        if (pcVar10 == (char *)0x0) {
          pcVar10 = "";
        }
        local_644[0] = local_70d;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar11 = pcVar10;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(pcVar10,~uVar8 - 1);
        local_4._0_1_ = 0x1c;
        pcVar10 = local_6a0;
        if (local_6a0 == (char *)0x0) {
          pcVar10 = "";
        }
        local_4e4[0] = local_70d;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar11 = pcVar10;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(pcVar10,~uVar8 - 1);
        local_4._0_1_ = 0x1d;
        local_584[0] = local_70d;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar10 = s_BaseX_00691c58;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar3 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(s_BaseX_00691c58,~uVar8 - 1);
        local_4 = CONCAT31(local_4._1_3_,0x1e);
        iVar7 = FUN_005ac9d0(local_584,local_4e4,0,local_644,0);
        iVar6 = *(int *)(iVar7 + 100);
        if (iVar6 == -0x80000000) {
          puVar5 = *(undefined1 **)(iVar7 + 0x18);
          if (puVar5 == (undefined1 *)0x0) {
            puVar5 = &DAT_0064a3b4;
          }
          iVar6 = FUN_0060af10(puVar5);
          *(int *)(iVar7 + 100) = iVar6;
        }
        local_670 = iVar6;
        FUN_005acca0();
        local_4._0_1_ = 0x1d;
        FUN_004040a0(1);
        local_4._0_1_ = 0x1c;
        FUN_004040a0(1);
        local_4._0_1_ = 4;
        FUN_004040a0(1);
        pcVar10 = "";
        if (*(char **)(iVar4 + 0x18) != (char *)0x0) {
          pcVar10 = *(char **)(iVar4 + 0x18);
        }
        local_4a4[0] = local_70d;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar11 = pcVar10;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(pcVar10,~uVar8 - 1);
        local_4._0_1_ = 0x1f;
        pcVar10 = local_6a0;
        if (local_6a0 == (char *)0x0) {
          pcVar10 = "";
        }
        local_544[0] = local_70d;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar11 = pcVar10;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(pcVar10,~uVar8 - 1);
        local_4._0_1_ = 0x20;
        local_4c4[0] = local_70d;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar10 = s_BaseY_00691c50;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar3 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(s_BaseY_00691c50,~uVar8 - 1);
        local_4 = CONCAT31(local_4._1_3_,0x21);
        iVar7 = FUN_005ac9d0(local_4c4,local_544,0,local_4a4,0);
        iVar6 = *(int *)(iVar7 + 100);
        if (iVar6 == -0x80000000) {
          puVar5 = *(undefined1 **)(iVar7 + 0x18);
          if (puVar5 == (undefined1 *)0x0) {
            puVar5 = &DAT_0064a3b4;
          }
          iVar6 = FUN_0060af10(puVar5);
          *(int *)(iVar7 + 100) = iVar6;
        }
        local_66c = iVar6;
        FUN_005acca0();
        local_4._0_1_ = 0x20;
        FUN_004040a0(1);
        local_4._0_1_ = 0x1f;
        FUN_004040a0(1);
        local_4._0_1_ = 4;
        FUN_004040a0(1);
        pcVar10 = "";
        if (*(char **)(iVar4 + 0x18) != (char *)0x0) {
          pcVar10 = *(char **)(iVar4 + 0x18);
        }
        local_464[0] = local_70d;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar11 = pcVar10;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(pcVar10,~uVar8 - 1);
        local_4._0_1_ = 0x22;
        pcVar10 = local_6a0;
        if (local_6a0 == (char *)0x0) {
          pcVar10 = "";
        }
        local_484[0] = local_70d;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar11 = pcVar10;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(pcVar10,~uVar8 - 1);
        local_4._0_1_ = 0x23;
        local_524[0] = local_70d;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar10 = &DAT_00691c48;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar3 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(&DAT_00691c48,~uVar8 - 1);
        local_4 = CONCAT31(local_4._1_3_,0x24);
        iVar7 = FUN_005ac9d0(local_524,local_484,0,local_464,0);
        iVar6 = *(int *)(iVar7 + 100);
        if (iVar6 == -0x80000000) {
          puVar5 = *(undefined1 **)(iVar7 + 0x18);
          if (puVar5 == (undefined1 *)0x0) {
            puVar5 = &DAT_0064a3b4;
          }
          iVar6 = FUN_0060af10(puVar5);
          *(int *)(iVar7 + 100) = iVar6;
        }
        local_668 = iVar6;
        FUN_005acca0();
        local_4._0_1_ = 0x23;
        FUN_004040a0(1);
        local_4._0_1_ = 0x22;
        FUN_004040a0(1);
        local_4._0_1_ = 4;
        FUN_004040a0(1);
        pcVar10 = "";
        if (*(char **)(iVar4 + 0x18) != (char *)0x0) {
          pcVar10 = *(char **)(iVar4 + 0x18);
        }
        local_614[0] = local_70d;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar11 = pcVar10;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(pcVar10,~uVar8 - 1);
        local_4._0_1_ = 0x25;
        pcVar10 = local_6a0;
        if (local_6a0 == (char *)0x0) {
          pcVar10 = "";
        }
        local_634[0] = local_70d;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar11 = pcVar10;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(pcVar10,~uVar8 - 1);
        local_4._0_1_ = 0x26;
        local_4f4[0] = local_70d;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar10 = &DAT_00691c40;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar3 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(&DAT_00691c40,~uVar8 - 1);
        local_4 = CONCAT31(local_4._1_3_,0x27);
        iVar7 = FUN_005ac9d0(local_4f4,local_634,0,local_614,0);
        iVar6 = *(int *)(iVar7 + 100);
        if (iVar6 == -0x80000000) {
          puVar5 = *(undefined1 **)(iVar7 + 0x18);
          if (puVar5 == (undefined1 *)0x0) {
            puVar5 = &DAT_0064a3b4;
          }
          iVar6 = FUN_0060af10(puVar5);
          *(int *)(iVar7 + 100) = iVar6;
        }
        local_664 = iVar6;
        FUN_005acca0();
        local_4._0_1_ = 0x26;
        FUN_004040a0(1);
        local_4._0_1_ = 0x25;
        FUN_004040a0(1);
        local_4._0_1_ = 4;
        FUN_004040a0(1);
        pcVar10 = "";
        if (*(char **)(iVar4 + 0x18) != (char *)0x0) {
          pcVar10 = *(char **)(iVar4 + 0x18);
        }
        local_5b4[0] = local_70d;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar11 = pcVar10;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(pcVar10,~uVar8 - 1);
        local_4._0_1_ = 0x28;
        pcVar10 = local_6a0;
        if (local_6a0 == (char *)0x0) {
          pcVar10 = "";
        }
        local_5d4[0] = local_70d;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar11 = pcVar10;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(pcVar10,~uVar8 - 1);
        local_4._0_1_ = 0x29;
        local_5f4[0] = local_70d;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar10 = s_TotalPerLine_00691c30;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar3 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(s_TotalPerLine_00691c30,~uVar8 - 1);
        local_4 = CONCAT31(local_4._1_3_,0x2a);
        iVar7 = FUN_005ac9d0(local_5f4,local_5d4,0,local_5b4,0);
        iVar6 = *(int *)(iVar7 + 100);
        if (iVar6 == -0x80000000) {
          puVar5 = *(undefined1 **)(iVar7 + 0x18);
          if (puVar5 == (undefined1 *)0x0) {
            puVar5 = &DAT_0064a3b4;
          }
          iVar6 = FUN_0060af10(puVar5);
          *(int *)(iVar7 + 100) = iVar6;
        }
        local_660 = iVar6;
        FUN_005acca0();
        local_4._0_1_ = 0x29;
        FUN_004040a0(1);
        local_4._0_1_ = 0x28;
        FUN_004040a0(1);
        local_4._0_1_ = 4;
        FUN_004040a0(1);
        pcVar10 = "";
        if (*(char **)(iVar4 + 0x18) != (char *)0x0) {
          pcVar10 = *(char **)(iVar4 + 0x18);
        }
        local_554[0] = local_70d;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar11 = pcVar10;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(pcVar10,~uVar8 - 1);
        local_4._0_1_ = 0x2b;
        pcVar10 = local_6a0;
        if (local_6a0 == (char *)0x0) {
          pcVar10 = "";
        }
        local_574[0] = local_70d;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar11 = pcVar10;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(pcVar10,~uVar8 - 1);
        local_4._0_1_ = 0x2c;
        local_594[0] = local_70d;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar10 = s_Total_00691c28;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar3 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(s_Total_00691c28,~uVar8 - 1);
        local_4 = CONCAT31(local_4._1_3_,0x2d);
        iVar7 = FUN_005ac9d0(local_594,local_574,0,local_554,0);
        iVar6 = *(int *)(iVar7 + 100);
        if (iVar6 == -0x80000000) {
          puVar5 = *(undefined1 **)(iVar7 + 0x18);
          if (puVar5 == (undefined1 *)0x0) {
            puVar5 = &DAT_0064a3b4;
          }
          iVar6 = FUN_0060af10(puVar5);
          *(int *)(iVar7 + 100) = iVar6;
        }
        local_65c = iVar6;
        FUN_005acca0();
        local_4._0_1_ = 0x2c;
        FUN_004040a0(1);
        local_4._0_1_ = 0x2b;
        FUN_004040a0(1);
        local_4 = CONCAT31(local_4._1_3_,4);
        FUN_004040a0(1);
        pcVar10 = "";
        if (*(char **)(iVar4 + 0x18) != (char *)0x0) {
          pcVar10 = *(char **)(iVar4 + 0x18);
        }
        local_6b4[0] = local_70d;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar11 = pcVar10;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        uVar8 = ~uVar8 - 1;
        cVar3 = FUN_00401940(uVar8,1);
        if (cVar3 != '\0') {
          pcVar11 = local_6b0;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar11 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar11 = pcVar11 + 1;
          }
          FUN_00404190(uVar8);
        }
        local_4 = CONCAT31(local_4._1_3_,0x2e);
        pcVar10 = local_6a0;
        if (local_6a0 == (char *)0x0) {
          pcVar10 = "";
        }
        local_6c4[0] = local_70d;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar11 = pcVar10;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        uVar8 = ~uVar8 - 1;
        cVar3 = FUN_00401940(uVar8,1);
        if (cVar3 != '\0') {
          pcVar11 = local_6c0;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar11 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar11 = pcVar11 + 1;
          }
          FUN_00404190(uVar8);
        }
        local_4._0_1_ = 0x2f;
        local_534[0] = local_70d;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar10 = &DAT_00691c20;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar3 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(&DAT_00691c20,~uVar8 - 1);
        local_4 = CONCAT31(local_4._1_3_,0x30);
        iVar4 = FUN_005ac9d0(local_534,local_6c4,0,local_6b4,0);
        iVar6 = *(int *)(iVar4 + 100);
        if (iVar6 == -0x80000000) {
          puVar5 = *(undefined1 **)(iVar4 + 0x18);
          if (puVar5 == (undefined1 *)0x0) {
            puVar5 = &DAT_0064a3b4;
          }
          iVar6 = FUN_0060af10(puVar5);
          *(int *)(iVar4 + 100) = iVar6;
        }
        local_658 = iVar6;
        FUN_005acca0();
        local_4._0_1_ = 0x2f;
        FUN_004040a0(1);
        local_4._0_1_ = 0x2e;
        FUN_004040a0(1);
        local_4._0_1_ = 4;
        FUN_004040a0(1);
        FUN_004574e0(*(undefined4 *)(local_704 + 0x2c),1,local_6a4);
        iVar6 = local_6f8;
      }
      local_6fc = local_6fc + 1;
    } while (local_6fc < iVar6);
  }
  if (local_650 != 0) {
    cVar3 = *(char *)(local_650 + -1);
    if ((cVar3 == '\0') || (cVar3 == -1)) {
      FUN_005fe5f0((char *)(local_650 + -1));
    }
    else {
      *(char *)(local_650 + -1) = cVar3 + -1;
    }
  }
  local_650 = 0;
  local_64c = 0;
  local_648 = 0;
  local_4 = 0x33;
  FUN_0057d310();
  local_4._0_1_ = 0x32;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,0x31);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  ExceptionList = local_c;
  return;
}

