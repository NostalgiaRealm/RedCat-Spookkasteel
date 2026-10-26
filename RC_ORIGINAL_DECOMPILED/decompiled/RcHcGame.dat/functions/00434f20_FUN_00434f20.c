/*
 * FUN_00434f20 at 00434f20
 * undefined FUN_00434f20(void)
 * Address ranges: 00434f20-0043543d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00434f20(undefined4 param_1,int *param_2)

{
  undefined1 uVar1;
  char cVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  float *pfVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int unaff_EBX;
  char *pcVar11;
  undefined4 *puVar12;
  float10 fVar13;
  undefined *puVar14;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined4 *puStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 auStack_3c [8];
  void *pvStack_1c;
  int *piStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00623c23;
  piStack_c = ExceptionList;
  ExceptionList = &piStack_c;
  uVar1 = (**(code **)(*param_2 + 0x3c))();
  uStack_88 = CONCAT13(uVar1,(undefined3)uStack_88);
  iStack_7c = 0;
  iStack_78 = 0;
  iStack_74 = 0;
  if (DAT_006b915c == 0) {
    FUN_004bc480();
  }
  piVar3 = (int *)FUN_00409f20(&iStack_84);
  uStack_4 = 0;
  if (*piVar3 == 0) {
    auStack_4c[0] = uStack_88._3_1_;
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    uVar8 = ~uVar8 - 1;
    cVar2 = FUN_00401940(uVar8,1);
    if (cVar2 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar12 = puStack_48;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar12 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      *(undefined1 *)((int)puStack_48 + uVar8) = 0;
      uStack_44 = uVar8;
    }
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  auStack_4c);
    (*pcVar4)();
    if (puStack_48 != (undefined4 *)0x0) {
      cVar2 = *(char *)((int)puStack_48 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)((int)puStack_48 + -1));
      }
      else {
        *(char *)((int)puStack_48 + -1) = cVar2 + -1;
      }
    }
    puStack_48 = (undefined4 *)0x0;
    uStack_44 = 0;
    uStack_40 = 0;
  }
  uStack_4 = 0xffffffff;
  puVar7 = (undefined4 *)(*piVar3 + 0x1e0);
  puVar12 = auStack_3c;
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar12 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar12 = puVar12 + 1;
  }
  if ((iStack_84 != 0) &&
     (iVar10 = *(int *)(iStack_84 + 0x14) + -1, *(int *)(iStack_84 + 0x14) = iVar10, iVar10 == 0)) {
    FUN_005abfc0(0);
  }
  FUN_005b3630();
  FUN_005b3650();
  uStack_60 = 0;
  uStack_6c = 0;
  FUN_005b2f20();
  iVar10 = local_80;
  cVar2 = '\x01';
  if (*(char *)(local_80 + 0x364) == '\0') {
    cVar2 = uStack_88._3_1_;
  }
  iVar5 = (**(code **)(*param_2 + 0x24))(auStack_4c);
  if ((0.0 < *(float *)(iVar5 + 8)) || (cVar2 != '\0')) {
    iVar5 = (**(code **)(*param_2 + 0x24))(auStack_50);
    if (*(float *)(iVar5 + 8) <= 0.0) {
      if (cVar2 == '\0') goto LAB_00435382;
    }
    else if (cVar2 == '\0') {
      pfVar6 = (float *)(**(code **)(*param_2 + 0x24))(auStack_5c);
      if (0.0 <= *pfVar6) {
        pfVar6 = (float *)(**(code **)(*param_2 + 0x24))(auStack_5c);
        if (0.0 < *pfVar6) goto LAB_004352cf;
        uStack_88 = iStack_7c;
        iStack_84 = iStack_78;
        unaff_EBX = local_80;
      }
      else {
        FUN_005b3080();
LAB_004352cf:
        FUN_005b3000(&stack0xffffff74);
      }
      fVar13 = (float10)FUN_005b2fd0();
      if ((float10)0.0 < fVar13) {
        FUN_005b2f20();
      }
      puVar14 = &DAT_00690180;
      goto LAB_0043537b;
    }
    if (*(char *)(iVar10 + 0x364) != '\0') goto LAB_00435382;
    puVar7 = (undefined4 *)(**(code **)(*param_2 + 0x24))(auStack_5c);
    _DAT_00690190 = *puVar7;
    _DAT_00690194 = 0;
    _DAT_00690198 = 0;
    puVar14 = &DAT_00690190;
  }
  else {
    iVar5 = (**(code **)(*param_2 + 0x24))(auStack_50);
    if (*(float *)(iVar5 + 8) != 0.0) {
      iStack_84 = iStack_78;
      local_80 = iStack_74;
      iStack_7c = iStack_70;
    }
    pfVar6 = (float *)(**(code **)(*param_2 + 0x24))(auStack_54);
    if (0.0 <= *pfVar6) {
      pfVar6 = (float *)(**(code **)(*param_2 + 0x24))(auStack_58);
      if (0.0 < *pfVar6) {
        FUN_005b3080();
        FUN_005b3000(&uStack_88);
        *(undefined4 *)(iVar10 + 0x344) = 8;
      }
    }
    else {
      FUN_005b3000(&uStack_88);
      *(undefined4 *)(iVar10 + 0x344) = 7;
    }
    fVar13 = (float10)FUN_005b2fd0();
    if ((float10)0.0 < fVar13) {
      FUN_005b2f20();
    }
    pfVar6 = (float *)(**(code **)(*param_2 + 0x24))(auStack_58);
    if (*pfVar6 != 0.0) {
      iVar5 = (**(code **)(*param_2 + 0x24))(auStack_5c);
      if ((*(float *)(iVar5 + 8) == 0.0) && (*(int *)(iVar10 + 0x33c) == 1)) {
        _DAT_006b5858 = 0;
        puVar14 = &DAT_006b5850;
        goto LAB_0043537b;
      }
    }
    pfVar6 = (float *)(**(code **)(*param_2 + 0x24))(auStack_5c);
    if (*pfVar6 == 0.0) {
      iVar5 = (**(code **)(*param_2 + 0x24))(auStack_5c);
      if (*(float *)(iVar5 + 8) != 0.0) {
        *(undefined4 *)(iVar10 + 0x344) = 4;
      }
    }
    _DAT_006b5858 = 0xbf800000;
    puVar14 = &DAT_006b5850;
  }
LAB_0043537b:
  FUN_00437770(puVar14);
LAB_00435382:
  iVar5 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar5 = FUN_004bc480();
  }
  FUN_0060a6f2(iVar5,0,&CAdamApplication::RTTI_Type_Descriptor,&CRCApplication::RTTI_Type_Descriptor
               ,1);
  piVar3 = (int *)FUN_00492360();
  FUN_0060a6f2(*(undefined4 *)(iVar10 + 0x1f0),0,&CAdamPlayerGameProperties::RTTI_Type_Descriptor,
               &CRcPlayerProperties::RTTI_Type_Descriptor,0);
  cVar2 = (**(code **)(*piVar3 + 0xc))();
  if (cVar2 != '\0') {
    iVar10 = FUN_00439f30();
    if (iVar10 != 0) {
      uStack_68 = 0;
      uStack_64 = 0;
      uStack_60 = 0;
      FUN_00437770(&uStack_68);
    }
  }
  *piStack_c = unaff_EBX;
  piStack_c[1] = uStack_88;
  piStack_c[2] = iStack_84;
  ExceptionList = pvStack_1c;
  return;
}

