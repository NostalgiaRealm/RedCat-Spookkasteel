/*
 * FUN_004f41c0 at 004f41c0
 * undefined FUN_004f41c0(void)
 * Address ranges: 004f41c0-004f48f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004f41c0(TypeDescriptor *param_1,TypeDescriptor *param_2)

{
  TypeDescriptor *pTVar1;
  char cVar2;
  code *pcVar3;
  int *piVar4;
  TypeDescriptor *pTVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  TypeDescriptor *extraout_ECX;
  TypeDescriptor *extraout_ECX_00;
  TypeDescriptor *extraout_ECX_01;
  TypeDescriptor *extraout_ECX_02;
  TypeDescriptor *extraout_ECX_03;
  TypeDescriptor *extraout_ECX_04;
  TypeDescriptor *extraout_ECX_05;
  void *pvVar10;
  char *pcVar11;
  TypeDescriptor *pTStack_54;
  TypeDescriptor *pTStack_50;
  undefined1 auStack_3a [2];
  TypeDescriptor *local_38;
  TypeDescriptor TStack_34;
  TypeDescriptor local_2c [2];
  TypeDescriptor TStack_1c;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006348f0;
  pvStack_c = ExceptionList;
  pTStack_50 = (TypeDescriptor *)0x110;
  pTStack_54 = (TypeDescriptor *)s_D__Work_RCHorror_AdamSource_Adam_0069c628;
  ExceptionList = &pvStack_c;
  local_38 = param_1;
  FUN_005ae5f0();
  local_4 = 0;
  if (param_2 == (TypeDescriptor *)0x0) {
    pTStack_50 = (TypeDescriptor *)0x0;
    local_2c[0].pVFTable._0_1_ = 0;
    pTStack_54 = (TypeDescriptor *)0x4f4215;
    FUN_004040a0();
    uVar9 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    pTStack_50 = (TypeDescriptor *)(~uVar9 - 1);
    pTStack_54 = (TypeDescriptor *)&DAT_006b3f70;
    FUN_004040f0();
    pTStack_50 = local_2c;
    local_4._0_1_ = 1;
    pTStack_54 = (TypeDescriptor *)0x111;
    pcVar3 = (code *)FUN_005a07f0(s_a_GameObject____0_0069c7e4,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069c628);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    pTStack_50 = (TypeDescriptor *)0x1;
    pTStack_54 = (TypeDescriptor *)0x4f4265;
    FUN_004040a0();
  }
  if (param_2[3].pVFTable != (void *)0x0) {
    pTStack_50 = (TypeDescriptor *)0x0;
    local_2c[0].pVFTable._0_1_ = param_2._0_1_;
    pTStack_54 = (TypeDescriptor *)0x4f4280;
    FUN_004040a0();
    uVar9 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    pTStack_50 = (TypeDescriptor *)(~uVar9 - 1);
    pTStack_54 = (TypeDescriptor *)&DAT_006b3f70;
    FUN_004040f0();
    pTStack_50 = local_2c;
    local_4._0_1_ = 2;
    pTStack_54 = (TypeDescriptor *)0x112;
    pcVar3 = (code *)FUN_005a07f0(s___a_GameObject_>TestSubLevel___0069c7c4,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069c628);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    pTStack_50 = (TypeDescriptor *)0x1;
    pTStack_54 = (TypeDescriptor *)0x4f42d0;
    FUN_004040a0();
  }
  pTStack_50 = (TypeDescriptor *)&param_2[0xd].spare;
  pTStack_54 = (TypeDescriptor *)0x4f42df;
  FUN_004fcc90();
  pTStack_50 = param_2 + 0x12;
  pTStack_54 = (TypeDescriptor *)0x4f42f0;
  FUN_004fce60();
  pTStack_50 = &TStack_34;
  pTStack_54 = (TypeDescriptor *)0x4f42fe;
  piVar4 = (int *)FUN_00504650();
  local_4._0_1_ = 3;
  if (*piVar4 != 0) {
    pTStack_50 = (TypeDescriptor *)0x0;
    local_2c[0].pVFTable._0_1_ = param_2._0_1_;
    pTStack_54 = (TypeDescriptor *)0x4f431b;
    FUN_004040a0();
    uVar9 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    pTStack_50 = (TypeDescriptor *)(~uVar9 - 1);
    pTStack_54 = (TypeDescriptor *)&DAT_006b3f70;
    FUN_004040f0();
    pTStack_50 = local_2c;
    local_4._0_1_ = 4;
    pTStack_54 = (TypeDescriptor *)0x11a;
    pcVar3 = (code *)FUN_005a07f0(s_a_GameObject_>GetDSGameObjectPtr_0069c798,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069c628);
    (*pcVar3)();
    local_4._0_1_ = 3;
    pTStack_50 = (TypeDescriptor *)0x1;
    pTStack_54 = (TypeDescriptor *)0x4f436c;
    FUN_004040a0();
  }
  local_4._0_1_ = 0;
  if (TStack_34.pVFTable != (TypeDescriptor *)0x0) {
    pTStack_50 = (TypeDescriptor *)0x4f437d;
    FUN_004098d0();
  }
  if (param_2[0xe].spare != (void *)0x0) {
    pTStack_50 = param_2;
    TStack_34.pVFTable = &pTStack_54;
    pTStack_54 = param_2;
    FUN_00457240(param_1);
    pTVar5 = (TypeDescriptor *)FUN_005b1e20();
    if (pTVar5 != (TypeDescriptor *)0x0) {
      pTVar5[2].spare = (void *)((int)pTVar5[2].spare + 1);
    }
    pTStack_54 = param_1[0x82].spare;
    pTStack_50 = &TStack_34;
    local_4._0_1_ = 5;
    TStack_34.pVFTable = pTVar5;
    FUN_004fdb90();
    local_4._0_1_ = 0;
    if (TStack_34.pVFTable != (TypeDescriptor *)0x0) {
      pTStack_50 = (TypeDescriptor *)0x4f43dc;
      FUN_004098d0();
    }
    iVar6 = DAT_006b915c;
    if (DAT_006b915c == 0) {
      pTStack_50 = (TypeDescriptor *)0x4f43eb;
      iVar6 = FUN_004bc480();
    }
    if (*(int *)(iVar6 + 0x3a4) == 0) {
      pTStack_50 = (TypeDescriptor *)0x0;
      local_2c[0].pVFTable._0_1_ = param_2._0_1_;
      pTStack_54 = (TypeDescriptor *)0x4f4407;
      FUN_004040a0();
      uVar9 = 0xffffffff;
      pcVar11 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      pTStack_50 = (TypeDescriptor *)(~uVar9 - 1);
      pTStack_54 = (TypeDescriptor *)&DAT_006b3f70;
      FUN_004040f0();
      pTStack_50 = local_2c;
      local_4._0_1_ = 6;
      pTStack_54 = (TypeDescriptor *)0x130;
      pcVar3 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c);
      (*pcVar3)();
      local_4._0_1_ = 0;
      pTStack_50 = (TypeDescriptor *)0x1;
      pTStack_54 = (TypeDescriptor *)0x4f4457;
      FUN_004040a0();
    }
    pTStack_50 = (TypeDescriptor *)0x4f4462;
    FUN_00535930();
    pTStack_50 = (TypeDescriptor *)0x4f4469;
    FUN_00515db0();
    pTStack_50 = (TypeDescriptor *)0x4f4470;
    iVar6 = FUN_004337e0();
    if (iVar6 != 0) {
      pTStack_54 = pTVar5[4].spare;
      if (pTStack_54 == (TypeDescriptor *)0x0) {
        pTStack_54 = (TypeDescriptor *)&DAT_0064a3b4;
      }
      pTStack_50 = pTVar5;
      uVar7 = FUN_005ae390(&TStack_1c,s_Declare_game_object___s___addres_0069c770);
      local_4._0_1_ = 7;
      FUN_005aff00(uVar7);
      local_4._0_1_ = 0;
      pTStack_50 = (TypeDescriptor *)0x1;
      pTStack_54 = (TypeDescriptor *)0x4f44ae;
      FUN_004040a0();
    }
    pTStack_54 = pTVar5 + 4;
    pTStack_50 = pTVar5;
    FUN_005e3620();
    param_1 = local_38;
  }
  pTStack_50 = (TypeDescriptor *)0x4f44c7;
  cVar2 = (**(code **)((int)param_2->pVFTable + 0x3c))();
  if (cVar2 != '\0') {
    uVar9 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    pTStack_50 = (TypeDescriptor *)(~uVar9 - 1);
    pTStack_54 = (TypeDescriptor *)&DAT_006b3f70;
    iVar6 = FUN_004251b0(0,param_2[0xc].spare);
    if (iVar6 == 0) {
      pTStack_50 = param_2;
      pTStack_54 = (TypeDescriptor *)0x4f4505;
      FUN_0060a613();
      pTStack_50 = (TypeDescriptor *)0x4f450f;
      pTStack_50 = (TypeDescriptor *)FUN_0060b060();
      pTStack_54 = (TypeDescriptor *)s_GO_s_of_type__s_must_have_a_non__0069c744;
      pTStack_50 = (TypeDescriptor *)FUN_005ae390(&TStack_1c);
      pTStack_54 = (TypeDescriptor *)0x134;
      local_4._0_1_ = 8;
      pcVar3 = (code *)FUN_005a07f0(s_a_GameObject_>GetName___compare__0069c718,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069c628);
      (*pcVar3)();
      local_4._0_1_ = 0;
      pTStack_50 = (TypeDescriptor *)0x1;
      pTStack_54 = (TypeDescriptor *)0x4f4550;
      FUN_004040a0();
    }
    pTVar1 = local_38;
    pTVar5 = param_2 + 0xb;
    if (*(char *)&local_38[10].pVFTable != '\0') {
      pTStack_50 = (TypeDescriptor *)0x0;
      local_2c[0].pVFTable._0_1_ = param_2._0_1_;
      pTStack_54 = (TypeDescriptor *)0x4f4577;
      FUN_004040a0();
      uVar9 = 0xffffffff;
      pcVar11 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      pTStack_50 = (TypeDescriptor *)(~uVar9 - 1);
      pTStack_54 = (TypeDescriptor *)&DAT_006b3f70;
      FUN_004040f0();
      pTStack_50 = local_2c;
      local_4._0_1_ = 9;
      pTStack_54 = (TypeDescriptor *)0x49;
      pcVar3 = (code *)FUN_005a07f0(s__GetIsLocked___00695180,
                                    s___AdamSource_DaviSortedList_h_00690798);
      (*pcVar3)();
      local_4._0_1_ = 0;
      pTStack_50 = (TypeDescriptor *)0x1;
      pTStack_54 = (TypeDescriptor *)0x4f45c4;
      FUN_004040a0();
    }
    pTStack_50 = (TypeDescriptor *)auStack_3a;
    pTStack_54 = (TypeDescriptor *)&pTVar5->spare;
    iVar6 = FUN_004fd4d0();
    if (auStack_3a[0] != '\0') {
      pTStack_50 = (TypeDescriptor *)(auStack_3a + 1);
      pTStack_54 = (TypeDescriptor *)&DAT_006b3f70;
      FUN_00409810();
      pTStack_50 = &TStack_1c;
      local_4._0_1_ = 10;
      pTStack_54 = (TypeDescriptor *)0x4b;
      pcVar3 = (code *)FUN_005a07f0(s___exist_00695178,s___AdamSource_DaviSortedList_h_00690798);
      (*pcVar3)();
      local_4._0_1_ = 0;
      pTStack_50 = (TypeDescriptor *)0x1;
      pTStack_54 = (TypeDescriptor *)0x4f461d;
      FUN_004040a0();
    }
    pTStack_50 = (TypeDescriptor *)&param_2;
    pTStack_54 = (TypeDescriptor *)((int)pTVar1[7].spare + iVar6 * 4);
    FUN_004f15f0();
    param_1 = local_38;
  }
  pTVar1 = param_2;
  pTVar5 = param_2 + 5;
  if (pTVar5 == (TypeDescriptor *)0x0) {
    pTStack_50 = (TypeDescriptor *)0x0;
    local_2c[0].pVFTable._0_1_ = param_2._0_1_;
    pTStack_54 = (TypeDescriptor *)0x4f4651;
    FUN_004040a0();
    uVar9 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    pTStack_50 = (TypeDescriptor *)(~uVar9 - 1);
    pTStack_54 = (TypeDescriptor *)&DAT_006b3f70;
    FUN_004040f0();
    pTStack_50 = local_2c;
    local_4._0_1_ = 0xb;
    pTStack_54 = (TypeDescriptor *)0xda;
    pcVar3 = (code *)FUN_005a07f0(s_a_Node__0_0069c70c,s___AdamSource_DaviLinkedList_h_00699ef4);
    (*pcVar3)();
    local_4._0_1_ = 0;
    pTStack_50 = (TypeDescriptor *)0x1;
    pTStack_54 = (TypeDescriptor *)0x4f46a1;
    FUN_004040a0();
  }
  if (param_1[6].spare == (void *)0x0) {
    pTVar1[5].spare = (void *)0x0;
    pTVar1[6].pVFTable = (void *)0x0;
  }
  else {
    pTVar1[5].spare = param_1[6].spare;
    pTVar1[6].pVFTable = (void *)0x0;
    *(TypeDescriptor **)((int)param_1[6].spare + 8) = pTVar5;
  }
  TStack_34.pVFTable = &pTStack_50;
  param_1[6].spare = pTVar5;
  if (param_1 != (TypeDescriptor *)0x0) {
    param_1[2].spare = (void *)((int)param_1[2].spare + 1);
  }
  local_38 = (TypeDescriptor *)&pTStack_54;
  local_4._0_1_ = 0xc;
  pTStack_50 = param_1;
  FUN_00457240(0);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005028d0();
  pTStack_50 = (TypeDescriptor *)0x0;
  pTStack_54 = &CAdamActor::RTTI_Type_Descriptor;
  local_38 = (TypeDescriptor *)FUN_0060a6f2(param_2,0,&CAdamGO::RTTI_Type_Descriptor);
  if (local_38 != (TypeDescriptor *)0x0) {
    pTStack_50 = (TypeDescriptor *)0x0;
    pTStack_54 = &CAdamPreLoadedActor::RTTI_Type_Descriptor;
    iVar6 = FUN_0060a6f2(param_2,0,&CAdamGO::RTTI_Type_Descriptor);
    if (iVar6 == 0) {
      pTStack_50 = (TypeDescriptor *)0x4f473b;
      iVar8 = FUN_00515ff0();
      iVar6 = *(int *)(iVar8 + 100);
      pTStack_50 = extraout_ECX;
      if (iVar6 == -0x80000000) {
        pTStack_50 = *(TypeDescriptor **)(iVar8 + 0x18);
        if (pTStack_50 == (TypeDescriptor *)0x0) {
          pTStack_50 = (TypeDescriptor *)&DAT_0064a3b4;
        }
        pTStack_54 = (TypeDescriptor *)0x4f4759;
        iVar6 = FUN_0060af10();
        *(int *)(iVar8 + 100) = iVar6;
        pTStack_50 = extraout_ECX_00;
      }
      if (iVar6 != 0) {
        TStack_34.pVFTable = &pTStack_50;
        pTStack_54 = (TypeDescriptor *)&pTStack_50;
        FUN_00421000();
        pTStack_54 = (TypeDescriptor *)0x4f477d;
        cVar2 = FUN_004f6bf0();
        pTStack_50 = extraout_ECX_01;
        if (cVar2 == '\0') {
          pTStack_50 = (TypeDescriptor *)0x4f478a;
          iVar8 = FUN_00515ff0();
          iVar6 = *(int *)(iVar8 + 100);
          pTStack_50 = extraout_ECX_02;
          if (iVar6 == -0x80000000) {
            pTStack_50 = *(TypeDescriptor **)(iVar8 + 0x18);
            if (pTStack_50 == (TypeDescriptor *)0x0) {
              pTStack_50 = (TypeDescriptor *)&DAT_0064a3b4;
            }
            pTStack_54 = (TypeDescriptor *)0x4f47a8;
            iVar6 = FUN_0060af10();
            *(int *)(iVar8 + 100) = iVar6;
            pTStack_50 = extraout_ECX_03;
          }
          if (iVar6 != 0) {
            pTStack_50 = &TStack_34;
            pTStack_54 = (TypeDescriptor *)0x4f47c2;
            piVar4 = (int *)FUN_00421000();
            local_4._0_1_ = 0xd;
            if (*piVar4 == 0) {
              pTStack_50 = (TypeDescriptor *)0x0;
              local_2c[0].pVFTable._0_1_ = param_2._0_1_;
              pTStack_54 = (TypeDescriptor *)0x4f47e1;
              FUN_004040a0();
              uVar9 = 0xffffffff;
              pcVar11 = &DAT_006b3f70;
              do {
                if (uVar9 == 0) break;
                uVar9 = uVar9 - 1;
                cVar2 = *pcVar11;
                pcVar11 = pcVar11 + 1;
              } while (cVar2 != '\0');
              pTStack_50 = (TypeDescriptor *)(~uVar9 - 1);
              pTStack_54 = (TypeDescriptor *)&DAT_006b3f70;
              FUN_004040f0();
              pTStack_50 = local_2c;
              local_4._0_1_ = 0xe;
              pTStack_54 = (TypeDescriptor *)0xb6;
              pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638);
              (*pcVar3)();
              local_4._0_1_ = 0xd;
              pTStack_50 = (TypeDescriptor *)0x1;
              pTStack_54 = (TypeDescriptor *)0x4f4832;
              FUN_004040a0();
            }
            pTStack_50 = (TypeDescriptor *)0x4f483d;
            iVar6 = FUN_0059bd20();
            pTStack_50 = *(TypeDescriptor **)(iVar6 + 4);
            if (pTStack_50 == (TypeDescriptor *)0x0) {
              pTStack_50 = (TypeDescriptor *)&DAT_0064a3b4;
            }
            pTStack_54 = (TypeDescriptor *)s_CAdamSubLevel__AddGameObject___a_0069c6a4;
            uVar7 = FUN_005ae390(&TStack_1c);
            local_4 = CONCAT31(local_4._1_3_,0xf);
            FUN_005aff00(uVar7);
            pTStack_50 = (TypeDescriptor *)0x0;
            if (TStack_1c.spare != (void *)0x0) {
              cVar2 = *(char *)((int)TStack_1c.spare + -1);
              pTStack_50 = (TypeDescriptor *)((int)TStack_1c.spare + -1);
              if ((cVar2 == '\0') || (cVar2 == -1)) {
                pTStack_54 = (TypeDescriptor *)0x4f4887;
                FUN_005fe5f0();
                pTStack_50 = extraout_ECX_04;
              }
              else {
                *(char *)pTStack_50 = cVar2 + -1;
              }
            }
            pTVar5 = TStack_34.pVFTable;
            TStack_1c.spare = (void *)0x0;
            uStack_14 = 0;
            uStack_10 = 0;
            local_4 = local_4 & 0xffffff00;
            if (TStack_34.pVFTable != (TypeDescriptor *)0x0) {
              pvVar10 = (void *)((int)((TypeDescriptor *)((int)TStack_34.pVFTable + 0x10))->spare +
                                -1);
              ((TypeDescriptor *)((int)TStack_34.pVFTable + 0x10))->spare = pvVar10;
              if (pvVar10 == (void *)0x0) {
                pTStack_50 = (TypeDescriptor *)0x0;
                pTStack_54 = (TypeDescriptor *)0x4f48b9;
                FUN_005abfc0();
                pTVar5 = extraout_ECX_05;
              }
              TStack_34.pVFTable = (TypeDescriptor *)0x0;
              pTStack_50 = pTVar5;
            }
          }
        }
      }
      local_38 = (TypeDescriptor *)&pTStack_50;
      pTStack_54 = (TypeDescriptor *)&pTStack_50;
      FUN_00421000();
      pTStack_54 = (TypeDescriptor *)0x4f48d3;
      FUN_004f68a0();
    }
  }
  local_4 = 0xffffffff;
  pTStack_50 = (TypeDescriptor *)0x4f48e4;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return;
}

