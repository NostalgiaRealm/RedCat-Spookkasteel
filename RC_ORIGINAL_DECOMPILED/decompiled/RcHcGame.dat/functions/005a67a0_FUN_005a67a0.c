/*
 * FUN_005a67a0 at 005a67a0
 * undefined FUN_005a67a0(void)
 * Address ranges: 005a67a0-005a6c58
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005a67a0(undefined4 param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  void ***pppvVar5;
  uint uVar6;
  int *piVar7;
  char *unaff_ESI;
  char *pcVar8;
  char *pcVar9;
  int *piVar10;
  undefined1 **ppuVar11;
  uint uStack_8c;
  undefined1 **ppuStack_88;
  undefined4 **ppuStack_84;
  void ***pppvStack_80;
  int *piStack_7c;
  undefined1 *puStack_78;
  undefined1 *puStack_74;
  int *piStack_70;
  void **ppvStack_6c;
  char *pcStack_68;
  undefined4 uStack_64;
  undefined1 auStack_50 [4];
  void *pvStack_4c;
  void *pvStack_48;
  char acStack_44 [8];
  void *pvStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  void *local_30;
  undefined4 local_2c;
  void *local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  void *pvStack_1c;
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006456d0;
  pvStack_c = ExceptionList;
  local_30 = (void *)0x6f1d2b60;
  local_24 = 0x5453;
  ExceptionList = &pvStack_c;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  local_28 = (void *)0x4544c7bf;
  uStack_64 = 0;
  ppvStack_6c = &local_30;
  local_2c = 0x11cfd5a0;
  pcStack_68 = (char *)&DAT_006cad44;
  piStack_70 = DAT_006cad50;
  puStack_74 = (undefined1 *)0x5a6812;
  iVar2 = (**(code **)(*DAT_006cad50 + 0xc))();
  if (iVar2 == 0) {
    puStack_74 = (undefined1 *)0x5;
    puStack_78 = pvStack_c;
    piStack_7c = DAT_006cad44;
    pppvStack_80 = (void ***)0x5a68c2;
    iVar2 = (**(code **)(*DAT_006cad44 + 0x34))();
    if (iVar2 == 0) {
      pppvStack_80 = (void ***)&DAT_006513e8;
      ppuStack_84 = (undefined4 **)DAT_006cad44;
      ppuStack_88 = (undefined1 **)0x5a6977;
      iVar2 = (**(code **)(*DAT_006cad44 + 0x2c))();
      if (iVar2 == 0) {
        ppuStack_88 = (undefined1 **)acStack_44;
        acStack_44[4] = '\x10';
        acStack_44[5] = '\0';
        acStack_44[6] = '\0';
        acStack_44[7] = '\0';
        uStack_34 = 0x10;
        acStack_44[0] = '\x14';
        acStack_44[1] = '\0';
        acStack_44[2] = '\0';
        acStack_44[3] = '\0';
        pvStack_3c = (void *)0x0;
        uStack_38 = 0;
        uStack_8c = 1;
        iVar2 = (**(code **)(*DAT_006cad44 + 0x18))(DAT_006cad44);
        if (iVar2 == 0) {
          acStack_44[4] = '\x01';
          acStack_44[5] = '\0';
          acStack_44[6] = '\0';
          acStack_44[7] = '\0';
          iVar2 = (**(code **)(*DAT_006cad44 + 0x18))(DAT_006cad44,2,auStack_50);
          if (iVar2 == 0) {
            iVar2 = (**(code **)(*DAT_006cad44 + 0x1c))(DAT_006cad44);
            if (iVar2 < 0) {
              uVar3 = 0xffffffff;
              pcVar8 = s_Couldn_t_acquire_DirectInput_mou_006a8234;
              do {
                if (uVar3 == 0) break;
                uVar3 = uVar3 - 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar8 + 1;
              } while (cVar1 != '\0');
              pppvStack_80 = (void ***)CONCAT31(pppvStack_80._1_3_,(undefined1)uStack_38);
              piStack_7c = (int *)0x0;
              puStack_78 = (undefined1 *)0x0;
              puStack_74 = (undefined1 *)0x0;
              FUN_004040f0(s_Couldn_t_acquire_DirectInput_mou_006a8234,~uVar3 - 1);
              acStack_44[0] = '\x05';
              acStack_44[1] = '\0';
              acStack_44[2] = '\0';
              acStack_44[3] = '\0';
              FUN_005aff20(s_D__Work_RCHorror_AdamSource_Davi_006a81dc,0xd0,&pppvStack_80);
              if (piStack_7c != (int *)0x0) {
                cVar1 = *(char *)((int)piStack_7c + -1);
                if ((cVar1 == '\0') || (cVar1 == -1)) {
                  FUN_005fe5f0((char *)((int)piStack_7c + -1));
                }
                else {
                  *(char *)((int)piStack_7c + -1) = cVar1 + -1;
                }
              }
              DAT_006cad40 = 0;
            }
            else {
              DAT_006cad40 = 1;
            }
            ExceptionList = pvStack_4c;
            return 1;
          }
          uStack_8c = CONCAT31(uStack_8c._1_3_,(undefined1)uStack_34);
          FUN_004040a0(0);
          uVar3 = 0xffffffff;
          pcVar8 = s_Couldn_t_set_properties_for_Dire_006a8260;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          piVar7 = (int *)(~uVar3 - 1);
          cVar1 = FUN_00401940(piVar7,1);
          if (cVar1 != '\0') {
            pcVar8 = s_Couldn_t_set_properties_for_Dire_006a8260;
            ppuVar11 = ppuStack_88;
            for (uVar3 = (uint)piVar7 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
              *ppuVar11 = (undefined1 *)*(undefined4 *)pcVar8;
              pcVar8 = pcVar8 + 4;
              ppuVar11 = (undefined1 **)((int)ppuVar11 + 4);
            }
            for (uVar3 = (uint)piVar7 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *(char *)ppuVar11 = *pcVar8;
              pcVar8 = pcVar8 + 1;
              ppuVar11 = (undefined1 **)((int)ppuVar11 + 1);
            }
            *(char *)((int)ppuStack_88 + (int)piVar7) = '\0';
            ppuStack_84 = (undefined4 **)piVar7;
          }
          acStack_44[4] = '\x04';
          acStack_44[5] = '\0';
          acStack_44[6] = '\0';
          acStack_44[7] = '\0';
          FUN_005aff20(s_D__Work_RCHorror_AdamSource_Davi_006a81dc,0xc1,&uStack_8c);
          acStack_44[4] = -1;
          acStack_44[5] = -1;
          acStack_44[6] = -1;
          acStack_44[7] = -1;
          FUN_004040a0(1);
          ExceptionList = pvStack_48;
          return 0;
        }
        pppvStack_80 = (void ***)CONCAT31(pppvStack_80._1_3_,local_28._0_1_);
        FUN_004040a0(0);
        uVar3 = 0xffffffff;
        pcVar8 = s_Couldn_t_set_properties_for_Dire_006a8260;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3 - 1;
        cVar1 = FUN_00401940(uVar3,1);
        if (cVar1 != '\0') {
          piVar7 = (int *)s_Couldn_t_set_properties_for_Dire_006a8260;
          piVar10 = piStack_7c;
          for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *piVar10 = *piVar7;
            piVar7 = piVar7 + 1;
            piVar10 = piVar10 + 1;
          }
          for (uVar6 = uVar3 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(char *)piVar10 = (char)*piVar7;
            piVar7 = (int *)((int)piVar7 + 1);
            piVar10 = (int *)((int)piVar10 + 1);
          }
          FUN_00404190(uVar3);
        }
        uStack_34 = 3;
        FUN_005aff20(s_D__Work_RCHorror_AdamSource_Davi_006a81dc,0xba,&pppvStack_80);
        uStack_34 = 0xffffffff;
        FUN_004040a0(1);
        ExceptionList = pvStack_3c;
        return 0;
      }
      ppuStack_88 = (undefined1 **)0x0;
      puStack_74 = (undefined1 *)CONCAT31(puStack_74._1_3_,pvStack_1c._0_1_);
      uStack_8c = 0x5a6991;
      FUN_004040a0();
      uVar3 = 0xffffffff;
      ppuStack_88 = (undefined1 **)0x1;
      pcVar8 = s_Couldn_t_set_data_receive_format_006a8298;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3 - 1;
      uStack_8c = uVar3;
      cVar1 = FUN_00401940();
      if (cVar1 != '\0') {
        piVar7 = (int *)s_Couldn_t_set_data_receive_format_006a8298;
        piVar10 = piStack_70;
        for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *piVar10 = *piVar7;
          piVar7 = piVar7 + 1;
          piVar10 = piVar10 + 1;
        }
        for (uVar6 = uVar3 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(char *)piVar10 = (char)*piVar7;
          piVar7 = (int *)((int)piVar7 + 1);
          piVar10 = (int *)((int)piVar10 + 1);
        }
        uStack_8c = 0x5a69d5;
        ppuStack_88 = (undefined1 **)uVar3;
        FUN_00404190();
      }
      ppuStack_88 = &puStack_74;
      local_28 = (void *)0x2;
      uStack_8c = 0xad;
      FUN_005aff20(s_D__Work_RCHorror_AdamSource_Davi_006a81dc);
      local_28 = (void *)0xffffffff;
      ppuStack_88 = (undefined1 **)0x1;
      uStack_8c = 0x5a6a07;
      FUN_004040a0();
      ExceptionList = local_30;
      return 0;
    }
    pppvStack_80 = (void ***)0x0;
    ppvStack_6c = (void **)CONCAT31(ppvStack_6c._1_3_,(undefined1)uStack_14);
    ppuStack_84 = (undefined4 **)0x5a68dc;
    FUN_004040a0();
    uVar3 = 0xffffffff;
    pppvStack_80 = (void ***)0x1;
    pcVar8 = s_Couldn_t_set_cooperation_level_f_006a82d8;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    pppvVar5 = (void ***)(~uVar3 - 1);
    ppuStack_88 = (undefined1 **)0x5a68f9;
    ppuStack_84 = pppvVar5;
    cVar1 = FUN_00401940();
    if (cVar1 != '\0') {
      pcVar8 = s_Couldn_t_set_cooperation_level_f_006a82d8;
      pcVar9 = pcStack_68;
      for (uVar3 = (uint)pppvVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar3 = (uint)pppvVar5 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      ppuStack_84 = (undefined4 **)0x5a6920;
      pppvStack_80 = pppvVar5;
      FUN_00404190();
    }
    pppvStack_80 = &ppvStack_6c;
    uStack_20 = 1;
    ppuStack_84 = (undefined4 **)0x8b;
    ppuStack_88 = (undefined1 **)s_D__Work_RCHorror_AdamSource_Davi_006a81dc;
    uStack_8c = 0x5a693c;
    FUN_005aff20();
    uStack_20 = 0xffffffff;
    pppvStack_80 = (void ***)0x1;
    ppuStack_84 = (undefined4 **)0x5a6952;
    FUN_004040a0();
    ExceptionList = local_28;
    return 0;
  }
  puStack_74 = (undefined1 *)0x0;
  puStack_78 = (undefined1 *)0x5a682c;
  FUN_004040a0();
  uVar3 = 0xffffffff;
  puStack_74 = (undefined1 *)0x1;
  pcVar8 = s_Couldn_t_create_DirectInput_mous_006a8314;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  puVar4 = (undefined1 *)(~uVar3 - 1);
  piStack_7c = (int *)0x5a6849;
  puStack_78 = puVar4;
  cVar1 = FUN_00401940();
  if (cVar1 != '\0') {
    pcVar8 = s_Couldn_t_create_DirectInput_mous_006a8314;
    for (uVar3 = (uint)puVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)unaff_ESI = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      unaff_ESI = unaff_ESI + 4;
    }
    for (uVar3 = (uint)puVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *unaff_ESI = *pcVar8;
      pcVar8 = pcVar8 + 1;
      unaff_ESI = unaff_ESI + 1;
    }
    puStack_78 = (undefined1 *)0x5a6870;
    puStack_74 = puVar4;
    FUN_00404190();
  }
  puStack_74 = &stack0xffffffa0;
  uStack_14 = 0;
  puStack_78 = (undefined1 *)0x7a;
  piStack_7c = (int *)s_D__Work_RCHorror_AdamSource_Davi_006a81dc;
  pppvStack_80 = (void ***)0x5a6885;
  FUN_005aff20();
  uStack_14 = 0xffffffff;
  puStack_74 = (undefined1 *)0x1;
  puStack_78 = (undefined1 *)0x5a689b;
  FUN_004040a0();
  ExceptionList = pvStack_1c;
  return 0;
}

