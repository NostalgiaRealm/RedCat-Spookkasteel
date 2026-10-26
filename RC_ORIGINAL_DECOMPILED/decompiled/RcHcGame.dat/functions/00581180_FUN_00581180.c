/*
 * FUN_00581180 at 00581180
 * undefined FUN_00581180(void)
 * Address ranges: 00581180-00581745
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_00581180(int param_1,undefined1 **param_2)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  undefined1 **ppuVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined4 *puVar13;
  undefined1 **ppuStack_54;
  undefined1 local_3d;
  undefined1 *local_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  undefined1 *local_2c [4];
  undefined1 auStack_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00642500;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_2 = *(undefined1 **)(param_1 + 0x1b8);
  param_2[1] = *(undefined1 **)(param_1 + 0x1bc);
  param_2[2] = *(undefined1 **)(param_1 + 0x1c0);
  if (*(int *)(param_1 + 0x188) != 0) {
    ppuStack_54 = &local_3c;
    piVar2 = (int *)FUN_004042e0();
    local_4 = 0;
    if (*piVar2 == 0) {
      ppuStack_54 = (undefined1 **)&local_3d;
      FUN_00409810(&DAT_006b3f70);
      ppuStack_54 = local_2c;
      local_4._0_1_ = 1;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
      (*pcVar3)();
      local_4 = (uint)local_4._1_3_ << 8;
      ppuStack_54 = (undefined1 **)0x1;
      FUN_004040a0();
    }
    ppuStack_54 = (undefined1 **)(param_1 + 0x180);
    iVar4 = FUN_004f4c30();
    local_4 = 0xffffffff;
    ppuStack_54 = (undefined1 **)0x58124c;
    FUN_0057d310();
    if (iVar4 == 0) {
      ppuStack_54 = (undefined1 **)0x581255;
      FUN_005193b0();
      ppuStack_54 = (undefined1 **)0x58125c;
      iVar4 = FUN_004337e0();
      if (iVar4 != 0) {
        ppuStack_54 = *(undefined1 ***)(param_1 + 0x184);
        if (ppuStack_54 == (undefined1 **)0x0) {
          ppuStack_54 = (undefined1 **)&DAT_0064a3b4;
        }
        puVar6 = &DAT_0064a3b4;
        if (*(undefined1 **)(param_1 + 0x60) != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)(param_1 + 0x60);
        }
        uVar5 = FUN_005ae390(local_2c,s__s_can_t_find_object_s__with_Dav_006a54cc,puVar6);
        local_4 = 2;
        FUN_005aff00(uVar5);
        local_4 = 0xffffffff;
        ppuStack_54 = (undefined1 **)0x1;
        FUN_004040a0();
      }
      uVar9 = 0xffffffff;
      pcVar12 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
      ppuStack_54 = (undefined1 **)(~uVar9 - 1);
      FUN_004040f0(&DAT_006b3f70);
      ExceptionList = pvStack_c;
      return 0;
    }
    ppuStack_54 = (undefined1 **)0x5812d3;
    FUN_005193b0();
    ppuStack_54 = (undefined1 **)0x5812da;
    iVar4 = FUN_004337e0();
    if (iVar4 != 0) {
      ppuStack_54 = (undefined1 **)&DAT_0064a3b4;
      if (*(undefined1 ***)(param_1 + 0x184) != (undefined1 **)0x0) {
        ppuStack_54 = *(undefined1 ***)(param_1 + 0x184);
      }
      puVar6 = *(undefined1 **)(param_1 + 0x60);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      uVar5 = FUN_005ae390(local_2c,s__s_found_object_with_DaviName____006a54a8,puVar6);
      local_4 = 3;
      FUN_005aff00(uVar5);
      local_4 = 0xffffffff;
      ppuStack_54 = (undefined1 **)0x1;
      FUN_004040a0();
    }
    ppuStack_54 = &local_3c;
    piVar2 = (int *)FUN_004ff240();
    iVar4 = *(int *)(param_1 + 0x1a0);
    local_4 = 4;
    if (iVar4 != *piVar2) {
      if ((iVar4 != 0) &&
         (iVar7 = *(int *)(iVar4 + 0x14) + -1, *(int *)(iVar4 + 0x14) = iVar7, iVar7 == 0)) {
        ppuStack_54 = (undefined1 **)0x0;
        FUN_005abfc0();
      }
      *(int *)(param_1 + 0x1a0) = *piVar2;
      ppuStack_54 = (undefined1 **)0x581370;
      FUN_005844b0();
    }
    local_4 = 0xffffffff;
    ppuStack_54 = (undefined1 **)0x581381;
    FUN_0057d310();
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    ppuStack_54 = (undefined1 **)(~uVar9 - 1);
    FUN_004040f0(&DAT_006b3f70);
  }
  if (*(int *)(param_1 + 0x198) != 0) {
    ppuStack_54 = &local_3c;
    piVar2 = (int *)FUN_004042e0();
    local_4 = 5;
    if (*piVar2 == 0) {
      ppuStack_54 = (undefined1 **)&local_3d;
      FUN_00409810(&DAT_006b3f70);
      ppuStack_54 = local_2c;
      local_4._0_1_ = 6;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,5);
      ppuStack_54 = (undefined1 **)0x1;
      FUN_004040a0();
    }
    ppuStack_54 = (undefined1 **)(param_1 + 400);
    iVar4 = FUN_004f4960();
    local_4 = 0xffffffff;
    ppuStack_54 = (undefined1 **)0x58142d;
    FUN_0057d310();
    if (iVar4 == 0) {
      ppuStack_54 = (undefined1 **)0x581436;
      FUN_005193b0();
      ppuStack_54 = (undefined1 **)0x58143d;
      iVar4 = FUN_004337e0();
      if (iVar4 != 0) {
        ppuStack_54 = (undefined1 **)&DAT_0064a3b4;
        if (*(undefined1 ***)(param_1 + 0x194) != (undefined1 **)0x0) {
          ppuStack_54 = *(undefined1 ***)(param_1 + 0x194);
        }
        puVar6 = &DAT_0064a3b4;
        if (*(undefined1 **)(param_1 + 0x60) != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)(param_1 + 0x60);
        }
        uVar5 = FUN_005ae390(local_2c,s__s_can_t_find_object_s__with_Nam_006a5480,puVar6);
        local_4 = 7;
        FUN_005aff00(uVar5);
        local_4 = 0xffffffff;
        ppuStack_54 = (undefined1 **)0x1;
        FUN_004040a0();
      }
      uVar9 = 0xffffffff;
      pcVar12 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
      ppuStack_54 = (undefined1 **)(~uVar9 - 1);
      FUN_004040f0(&DAT_006b3f70);
      ExceptionList = pvStack_c;
      return 0;
    }
    ppuStack_54 = (undefined1 **)0x5814b5;
    FUN_005193b0();
    ppuStack_54 = (undefined1 **)0x5814bc;
    iVar4 = FUN_004337e0();
    if (iVar4 != 0) {
      ppuStack_54 = (undefined1 **)&DAT_0064a3b4;
      if (*(undefined1 ***)(param_1 + 0x194) != (undefined1 **)0x0) {
        ppuStack_54 = *(undefined1 ***)(param_1 + 0x194);
      }
      puVar6 = *(undefined1 **)(param_1 + 0x60);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      uVar5 = FUN_005ae390(local_2c,s__s_found_object_with_Name___s__006a5460,puVar6);
      local_4 = 8;
      FUN_005aff00(uVar5);
      local_4 = 0xffffffff;
      ppuStack_54 = (undefined1 **)0x1;
      FUN_004040a0();
    }
    ppuStack_54 = &local_3c;
    piVar2 = (int *)FUN_004ff240();
    iVar4 = *(int *)(param_1 + 0x1a0);
    local_4 = 9;
    if (iVar4 != *piVar2) {
      if ((iVar4 != 0) &&
         (iVar7 = *(int *)(iVar4 + 0x14) + -1, *(int *)(iVar4 + 0x14) = iVar7, iVar7 == 0)) {
        ppuStack_54 = (undefined1 **)0x0;
        FUN_005abfc0();
      }
      *(int *)(param_1 + 0x1a0) = *piVar2;
      ppuStack_54 = (undefined1 **)0x581552;
      FUN_005844b0();
    }
    local_4 = 0xffffffff;
    if (local_3c != (undefined1 *)0x0) {
      ppuStack_54 = (undefined1 **)0x581567;
      FUN_004098d0();
    }
    uVar9 = 0xffffffff;
    ppuStack_54 = (undefined1 **)0x1;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    ppuVar10 = (undefined1 **)(~uVar9 - 1);
    cVar1 = FUN_00401940(ppuVar10);
    if (cVar1 != '\0') {
      puVar11 = (undefined4 *)&DAT_006b3f70;
      puVar13 = *(undefined4 **)(param_1 + 0x194);
      for (uVar9 = (uint)ppuVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar13 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar13 = puVar13 + 1;
      }
      for (uVar9 = (uint)ppuVar10 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
      ppuStack_54 = ppuVar10;
      FUN_00404190();
    }
  }
  ppuStack_54 = *(undefined1 ***)(param_1 + 0x1a0);
  if (ppuStack_54 != (undefined1 **)0x0) {
    local_3c = (undefined1 *)&ppuStack_54;
    if (ppuStack_54 != (undefined1 **)0x0) {
      ppuStack_54[5] = ppuStack_54[5] + 1;
    }
    piVar2 = (int *)FUN_0040b060();
    if (piVar2 == (int *)0x0) {
      ppuStack_54 = (undefined1 **)0x5815de;
      iVar7 = FUN_005193b0();
      iVar4 = *(int *)(iVar7 + 100);
      if (iVar4 == -0x80000000) {
        ppuStack_54 = *(undefined1 ***)(iVar7 + 0x18);
        if (ppuStack_54 == (undefined1 **)0x0) {
          ppuStack_54 = (undefined1 **)&DAT_0064a3b4;
        }
        iVar4 = FUN_0060af10();
        *(int *)(iVar7 + 100) = iVar4;
      }
      if (iVar4 != 0) {
        ppuStack_54 = (undefined1 **)&DAT_0064a3b4;
        if (*(undefined1 ***)(param_1 + 0x60) != (undefined1 **)0x0) {
          ppuStack_54 = *(undefined1 ***)(param_1 + 0x60);
        }
        uVar5 = FUN_005ae390(local_2c,s__s_can_t_find_referenced_object_006a5440);
        local_4 = 10;
        FUN_005aff00(uVar5);
        local_4 = 0xffffffff;
        ppuStack_54 = (undefined1 **)0x1;
        FUN_004040a0();
      }
      ExceptionList = pvStack_c;
      return 0;
    }
    ppuStack_54 = local_2c;
    pfVar8 = (float *)(**(code **)(*piVar2 + 0x48))();
    fStack_38 = *pfVar8;
    fStack_34 = pfVar8[1];
    fStack_30 = pfVar8[2];
    if ((9000.0 < fStack_38) || (fStack_38 < -9000.0)) {
      ppuStack_54 = (undefined1 **)0x5816be;
      iVar7 = FUN_005193b0();
      iVar4 = *(int *)(iVar7 + 100);
      if (iVar4 == -0x80000000) {
        ppuStack_54 = *(undefined1 ***)(iVar7 + 0x18);
        if (ppuStack_54 == (undefined1 **)0x0) {
          ppuStack_54 = (undefined1 **)&DAT_0064a3b4;
        }
        iVar4 = FUN_0060af10();
        *(int *)(iVar7 + 100) = iVar4;
      }
      if (iVar4 != 0) {
        ppuStack_54 = (undefined1 **)&DAT_0064a3b4;
        if (*(undefined1 ***)(param_1 + 0x60) != (undefined1 **)0x0) {
          ppuStack_54 = *(undefined1 ***)(param_1 + 0x60);
        }
        uVar5 = FUN_005ae390(auStack_1c,s__s_finds_referenced_object_with_p_006a5408);
        local_4 = 0xb;
        FUN_005aff00(uVar5);
        if (iStack_18 != 0) {
          ppuStack_54 = (undefined1 **)(iStack_18 + -1);
          cVar1 = *(char *)(iStack_18 + -1);
          if ((cVar1 != '\0') && (cVar1 != -1)) {
            *(char *)ppuStack_54 = cVar1 + -1;
            ExceptionList = pvStack_c;
            return 0;
          }
          FUN_005fe5f0();
        }
      }
      ExceptionList = pvStack_c;
      return 0;
    }
    ppuStack_54 = param_2;
    FUN_005b3000();
  }
  ExceptionList = pvStack_c;
  return 1;
}

