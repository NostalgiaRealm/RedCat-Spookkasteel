/*
 * FUN_004e3f70 at 004e3f70
 * undefined FUN_004e3f70(void)
 * Address ranges: 004e3f70-004e4439
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_004e3f70(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  char *_Str1;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  TypeDescriptor *pTVar15;
  TypeDescriptor *pTVar16;
  undefined4 uVar17;
  undefined1 local_59;
  int *local_58;
  int *local_54;
  int *piStack_50;
  undefined1 local_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [4];
  int iStack_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632a98;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x1d8) != 0) {
    ExceptionList = &local_c;
    if (*(int *)(param_1 + 0x1e8) == 0) {
      ExceptionList = &local_c;
      piVar2 = (int *)FUN_004042e0(&local_58);
      local_4 = 0;
      if (*piVar2 == 0) {
        FUN_00409810(&DAT_006b3f70,&local_59);
        local_4._0_1_ = 1;
        pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_4c);
        (*pcVar3)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
      }
      FUN_004f4940(&local_54);
      local_4._0_1_ = 3;
      FUN_0057d310();
      if (local_54 == (int *)0x0) {
        FUN_00409810(&DAT_006b3f70,&local_59);
        local_4._0_1_ = 4;
        pcVar3 = (code *)FUN_005a07f0(s_m_List_00699eec,s___AdamSource_DaviLinkedList_h_00699ef4,
                                      0x51,local_4c);
        (*pcVar3)();
        local_4._0_1_ = 3;
        FUN_004040a0(1);
      }
      piStack_50 = (int *)*local_54;
      if (piStack_50 != (int *)0x0) {
        iVar7 = *piStack_50;
        while (iVar7 != 0) {
          iVar4 = FUN_004337e0();
          if (iVar4 != 0) {
            puVar5 = *(undefined1 **)(iVar7 + 0x70);
            if (puVar5 == (undefined1 *)0x0) {
              puVar5 = &DAT_0064a3b4;
            }
            puVar12 = *(undefined1 **)(param_1 + 0x1d4);
            if (puVar12 == (undefined1 *)0x0) {
              puVar12 = &DAT_0064a3b4;
            }
            FUN_0060a613(iVar7,puVar5);
            uVar6 = FUN_0060b060();
            uVar6 = FUN_005ae390(auStack_2c,s_Look_for__s__look_at__s___s__0069a4b0,puVar12,uVar6);
            local_4._0_1_ = 5;
            FUN_005aff00(uVar6);
            local_4._0_1_ = 3;
            FUN_004040a0(1);
          }
          pcVar8 = "";
          if (*(char **)(param_1 + 0x1d4) != (char *)0x0) {
            pcVar8 = *(char **)(param_1 + 0x1d4);
          }
          _Str1 = *(char **)(iVar7 + 0x70);
          if (_Str1 == (char *)0x0) {
            _Str1 = "";
          }
          iVar4 = __strcmpi(_Str1,pcVar8);
          if (iVar4 == 0) {
            iVar4 = FUN_0060a6f2(iVar7,0,&CAdamGO::RTTI_Type_Descriptor,
                                 &CAdamEffectCorona::RTTI_Type_Descriptor,0);
            if (iVar4 != 0) {
              FUN_0040cc00(iVar7 + 0x5c,0,0xffffffff);
              goto LAB_004e428f;
            }
            puVar5 = *(undefined1 **)(iVar7 + 0x60);
            if (puVar5 == (undefined1 *)0x0) {
              puVar5 = &DAT_0064a3b4;
            }
            puVar12 = *(undefined1 **)(param_1 + 0x60);
            if (puVar12 == (undefined1 *)0x0) {
              puVar12 = &DAT_0064a3b4;
            }
            FUN_0060a613(iVar7,puVar5);
            uVar6 = FUN_0060b060();
            uVar6 = FUN_005ae390(auStack_1c,s_Dynamiclight___s__finds_object___0069a454,puVar12,
                                 uVar6);
            local_4._0_1_ = 6;
            FUN_005035a0(uVar6);
            local_4._0_1_ = 3;
            FUN_004040a0(1);
          }
          if (local_54 == (int *)0x0) {
            local_4c[0] = param_2._0_1_;
            FUN_004040a0(0);
            uVar9 = 0xffffffff;
            pcVar8 = &DAT_006b3f70;
            do {
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              cVar1 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar1 != '\0');
            FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
            local_4._0_1_ = 8;
            pcVar3 = (code *)FUN_005a07f0(s_m_List_00699eec,s___AdamSource_DaviLinkedList_h_00699ef4
                                          ,0x5f,local_4c);
            (*pcVar3)();
            local_4._0_1_ = 3;
            FUN_004040a0(1);
          }
          if (piStack_50 == (int *)0x0) {
            FUN_00409810(&DAT_006b3f70,&local_59);
            local_4._0_1_ = 9;
            pcVar3 = (code *)FUN_005a07f0(s_m_Node_00699ec4,s___AdamSource_DaviLinkedList_h_00699ef4
                                          ,0x60,auStack_3c);
            (*pcVar3)();
            local_4._0_1_ = 3;
            FUN_004040a0(1);
          }
          piVar2 = (int *)piStack_50[1];
          if (piVar2 == (int *)0x0) break;
          piStack_50 = piVar2;
          iVar7 = *piVar2;
        }
      }
      uVar9 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar9 = ~uVar9 - 1;
      cVar1 = FUN_00401940(uVar9,1);
      if (cVar1 != '\0') {
        puVar11 = (undefined4 *)&DAT_006b3f70;
        puVar13 = *(undefined4 **)(param_1 + 0x1d4);
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar13 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar13 = puVar13 + 1;
        }
        for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
          puVar13 = (undefined4 *)((int)puVar13 + 1);
        }
        FUN_00404190(uVar9);
      }
      *param_2 = 0;
      ExceptionList = local_c;
      return 0;
    }
LAB_004e428f:
    local_4 = 0xffffffff;
    piVar2 = (int *)FUN_004042e0(&local_58);
    local_4 = 10;
    if (*piVar2 == 0) {
      local_4c[0] = param_2._0_1_;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
      local_4._0_1_ = 0xb;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_4c);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,10);
      FUN_004040a0(1);
    }
    uVar17 = 0;
    pTVar16 = &CAdamEffectCorona::RTTI_Type_Descriptor;
    pTVar15 = &CAdamGO::RTTI_Type_Descriptor;
    uVar14 = 0;
    uVar6 = FUN_004f4960(param_1 + 0x1e0);
    iVar7 = FUN_0060a6f2(uVar6,uVar14,pTVar15,pTVar16,uVar17);
    local_4 = 0xffffffff;
    *param_2 = iVar7;
    if ((local_58 != (int *)0x0) && (iVar7 = local_58[5], local_58[5] = iVar7 + -1, iVar7 + -1 == 0)
       ) {
      FUN_005abfc0(0);
    }
    if (*param_2 != 0) {
      ExceptionList = local_c;
      return 1;
    }
    puVar5 = *(undefined1 **)(param_1 + 0x1e4);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    uVar6 = FUN_005ae390(auStack_1c,s_Can_t_find_corona_by_name_anymor_0069a428,puVar5);
    local_4 = 0xc;
    FUN_005035a0(uVar6);
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
      }
    }
  }
  *param_2 = 0;
  ExceptionList = local_c;
  return 0;
}

