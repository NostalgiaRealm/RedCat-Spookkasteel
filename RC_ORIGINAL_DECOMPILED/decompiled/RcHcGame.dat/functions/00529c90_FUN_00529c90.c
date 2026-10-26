/*
 * FUN_00529c90 at 00529c90
 * undefined FUN_00529c90(void)
 * Address ranges: 00529c90-0052a1fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_00529c90(int param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  char *_Str1;
  int iVar7;
  DWORD DVar8;
  undefined1 *puVar9;
  char *pcVar10;
  uint uVar11;
  int local_68;
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined **appuStack_38 [5];
  undefined1 auStack_24 [4];
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  DWORD DStack_14;
  undefined1 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639ca0;
  pvStack_c = ExceptionList;
  if ((char)param_3 == '\0') {
    ExceptionList = &pvStack_c;
    FUN_00519170();
    iVar4 = FUN_004337e0();
    if (iVar4 != 0) {
      puVar5 = *(undefined1 **)(param_2 + 4);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0064a3b4;
      }
      uVar6 = FUN_005ae390(local_48,s_CAdamGame__DisplayMessage____dis_006a014c,puVar5);
      local_4 = 7;
      FUN_005aff00(uVar6);
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
  }
  else {
    ExceptionList = &pvStack_c;
    piVar2 = (int *)FUN_00453d20(local_64);
    local_4 = 0;
    if (*piVar2 == 0) {
      FUN_00409810(&DAT_006b3f70,&param_3);
      local_4._0_1_ = 1;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_58);
      (*pcVar3)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    cVar1 = FUN_0052a370(*piVar2 + 0x1c,&local_68,local_5c,local_60);
    local_4 = 0xffffffff;
    FUN_0057d310();
    if (cVar1 == '\0') {
      FUN_00519170();
      iVar4 = FUN_004337e0();
      if (iVar4 != 0) {
        piVar2 = (int *)FUN_00453d20(local_64);
        local_4 = 4;
        if (*piVar2 == 0) {
          FUN_00409810(&DAT_006b3f70,&param_3);
          local_4._0_1_ = 5;
          pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                        local_58);
          (*pcVar3)();
          local_4 = CONCAT31(local_4._1_3_,4);
          FUN_004040a0(1);
        }
        puVar5 = *(undefined1 **)(*piVar2 + 0x20);
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_0064a3b4;
        }
        puVar9 = *(undefined1 **)(param_2 + 4);
        if (puVar9 == (undefined1 *)0x0) {
          puVar9 = &DAT_0064a3b4;
        }
        uVar6 = FUN_005ae390(local_48,s_CAdamGame__DisplayMessage____won_006a0184,puVar9,puVar5);
        local_4._0_1_ = 6;
        FUN_005aff00(uVar6);
        local_4 = CONCAT31(local_4._1_3_,4);
        FUN_004040a0(1);
        local_4 = 0xffffffff;
        FUN_0057d310();
      }
      ExceptionList = pvStack_c;
      return 0;
    }
    if (local_68 != 1) {
      FUN_00519170();
      iVar4 = FUN_004337e0();
      if (iVar4 != 0) {
        puVar5 = *(undefined1 **)(param_2 + 4);
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_0064a3b4;
        }
        uVar6 = FUN_005ae390(local_58,s_CAdamGame__DisplayMessage____won_006a0204,puVar5,local_68);
        local_4 = 2;
        FUN_005aff00(uVar6);
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      ExceptionList = pvStack_c;
      return 0;
    }
    FUN_00519170();
    iVar4 = FUN_004337e0();
    if (iVar4 != 0) {
      puVar5 = *(undefined1 **)(param_2 + 4);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0064a3b4;
      }
      uVar6 = FUN_005ae390(local_58,s_CAdamGame__DisplayMessage____dis_006a01cc,puVar5,local_68);
      local_4 = 3;
      FUN_005aff00(uVar6);
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
  }
  iVar4 = *(int *)(param_1 + 0x7c);
  if (iVar4 != *(int *)(param_1 + 0x80)) {
    piVar2 = (int *)(iVar4 + 0x18);
    do {
      pcVar10 = "";
      if (*(char **)(param_2 + 4) != (char *)0x0) {
        pcVar10 = *(char **)(param_2 + 4);
      }
      _Str1 = (char *)*piVar2;
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      iVar7 = __strcmpi(_Str1,pcVar10);
      if (iVar7 == 0) {
        iVar7 = FUN_00519170();
        iVar4 = *(int *)(iVar7 + 100);
        if (iVar4 == -0x80000000) {
          puVar5 = *(undefined1 **)(iVar7 + 0x18);
          if (puVar5 == (undefined1 *)0x0) {
            puVar5 = &DAT_0064a3b4;
          }
          iVar4 = FUN_0060af10(puVar5);
          *(int *)(iVar7 + 100) = iVar4;
        }
        if (iVar4 != 0) {
          puVar5 = *(undefined1 **)(param_2 + 4);
          if (puVar5 == (undefined1 *)0x0) {
            puVar5 = &DAT_0064a3b4;
          }
          uVar6 = FUN_005ae390(local_48,s_CAdamGame__DisplayMessage____don_006a0108,puVar5);
          local_4 = 8;
          FUN_005aff00(uVar6);
          local_4 = 0xffffffff;
          FUN_004040a0(1);
        }
        ExceptionList = pvStack_c;
        return 0;
      }
      iVar4 = iVar4 + 0x2c;
      piVar2 = piVar2 + 0xb;
    } while (iVar4 != *(int *)(param_1 + 0x80));
  }
  puVar5 = *(undefined1 **)(param_1 + 0xcc);
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = &DAT_0064a3b4;
  }
  iVar4 = FUN_004251b0(0,*(undefined4 *)(param_2 + 8),puVar5,*(undefined4 *)(param_1 + 0xd0));
  if (iVar4 == 0) {
    DVar8 = timeGetTime();
    param_3 = *(int *)(param_1 + 0xc4);
    if ((DVar8 != 0xffffffff) && (param_3 != -1)) {
      if ((int)DVar8 < param_3) {
        local_58[0] = (char)param_3;
        FUN_004040a0(0);
        uVar11 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar11 - 1);
        local_4 = 9;
        pcVar3 = (code *)FUN_005a07f0(s_a_Now_>__a_Then_006934d0,s___AdamSource_AdamClock_h_0068e22c
                                      ,0x7d,local_58);
        (*pcVar3)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      if (3000 < (int)(DVar8 - param_3)) goto LAB_0052a0f0;
    }
    uVar6 = 0;
  }
  else {
LAB_0052a0f0:
    FUN_005ab4a0();
    local_4 = 10;
    auStack_24[0] = (char)param_3;
    FUN_004040a0(0);
    uVar11 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar11 - 1);
    DStack_14 = 0xffffffff;
    uStack_10 = 0;
    appuStack_38[0] = &PTR_FUN_0064f6d8;
    local_4 = 0xb;
    FUN_0040cc00(param_2,0,0xffffffff);
    DStack_14 = timeGetTime();
    FUN_00536fa0(*(undefined4 *)(param_1 + 0x80),1,appuStack_38);
    *(DWORD *)(param_1 + 0xc4) = DStack_14;
    FUN_0040cc00(auStack_24,0,0xffffffff);
    local_4 = 0xffffffff;
    if (iStack_20 != 0) {
      cVar1 = *(char *)(iStack_20 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_20 + -1));
      }
      else {
        *(char *)(iStack_20 + -1) = cVar1 + -1;
      }
    }
    iStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    FUN_005ab4d0();
    uVar6 = 1;
  }
  ExceptionList = pvStack_c;
  return uVar6;
}

