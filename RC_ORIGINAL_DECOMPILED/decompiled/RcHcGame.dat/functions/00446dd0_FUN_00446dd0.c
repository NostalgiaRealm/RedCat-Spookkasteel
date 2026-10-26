/*
 * FUN_00446dd0 at 00446dd0
 * undefined FUN_00446dd0(void)
 * Address ranges: 00446dd0-004471c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_00446dd0(undefined1 ***param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  code *pcVar4;
  int *piVar5;
  void *pvVar6;
  undefined1 **ppuVar7;
  uint uVar8;
  int iVar9;
  undefined4 unaff_EBP;
  char *pcVar10;
  undefined4 *unaff_retaddr;
  undefined1 **in_stack_00000018;
  undefined1 **ppuStack_98;
  undefined1 *puStack_94;
  undefined4 *puStack_90;
  char *pcStack_8c;
  char *pcStack_88;
  undefined1 **local_80;
  undefined1 *apuStack_68 [2];
  void *pvStack_60;
  undefined1 *local_5c;
  undefined1 *puStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 uStack_40;
  undefined1 auStack_38 [12];
  int iStack_2c;
  undefined4 uStack_28;
  void *pvStack_24;
  undefined1 auStack_20 [4];
  int iStack_1c;
  undefined4 *puStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  ppuVar3 = in_stack_00000018;
  puStack_8 = &LAB_00625253;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  if (in_stack_00000018 == (undefined1 **)0x0) {
    local_80 = in_stack_00000018;
    local_5c = (undefined1 *)CONCAT31(local_5c._1_3_,param_1._0_1_);
    ExceptionList = &pvStack_c;
    FUN_004040a0();
    uVar8 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    local_80 = (undefined1 **)(~uVar8 - 1);
    pcStack_88 = (char *)0x446e32;
    FUN_004040f0();
    local_80 = &local_5c;
    local_4._0_1_ = 2;
    pcStack_88 = s_D__Work_RCHorror_RCSource_RcWeap_00691178;
    pcStack_8c = s_a_Target_IsNotNull___00691160;
    puStack_90 = (undefined4 *)0x446e50;
    pcVar4 = (code *)FUN_005a07f0();
    puStack_90 = (undefined4 *)0x446e52;
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,1);
    local_80 = (undefined1 **)0x1;
    FUN_004040a0();
  }
  local_80 = ppuVar3;
  if (ppuVar3 != (undefined1 **)0x0) {
    ppuVar3[5] = ppuVar3[5] + 1;
  }
  piVar5 = (int *)FUN_0040b060();
  local_80 = apuStack_68;
  pcStack_88 = (char *)0x446e95;
  (**(code **)(*piVar5 + 0x48))();
  pcStack_88 = (char *)0x446e9e;
  FUN_005b2fe0();
  pcStack_88 = (char *)0x446ea8;
  FUN_0044b5d0();
  uStack_40 = SUB41(unaff_retaddr,0);
  puStack_8._0_1_ = 3;
  pcStack_88 = (char *)0x446ec7;
  FUN_004040a0();
  iVar9 = -1;
  pcVar10 = s_RcMagicBall_00691154;
  do {
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  pcStack_88 = s_RcMagicBall_00691154;
  pcStack_8c = (char *)0x446ee5;
  FUN_004040f0();
  pcStack_88 = auStack_20;
  puStack_8._0_1_ = 4;
  pcStack_8c = (char *)0x446efc;
  FUN_005033a0();
  puStack_8._0_1_ = 5;
  pcStack_88 = "hP\x02";
  FUN_004041b0();
  pcStack_88 = (char *)0x446f19;
  pvVar6 = operator_new(0x250);
  puStack_8._0_1_ = 6;
  if (pvVar6 == (void *)0x0) {
    ppuVar7 = (undefined1 **)0x0;
  }
  else {
    pcStack_88 = (char *)0x446f35;
    ppuVar7 = (undefined1 **)FUN_00446570();
  }
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,5);
  *in_stack_00000018 = (undefined1 *)ppuVar7;
  if (ppuVar7 != (undefined1 **)0x0) {
    puVar2 = *ppuVar7;
    FUN_0044c1e0();
    pcStack_88 = (char *)0x446f62;
    (**(code **)(puVar2 + 0x78))();
    pcStack_88 = (char *)0x446f69;
    pcStack_88 = (char *)FUN_0044c1e0();
    pcStack_8c = (char *)0x446f71;
    FUN_0044c1f0();
    pcStack_88 = (char *)0x1;
    *(undefined1 *)((int)ppuVar7 + 0x1d1) = 0;
    pcStack_8c = (char *)0x446f81;
    FUN_00502350();
    pcStack_88 = (char *)&param_1;
    pcStack_8c = (char *)0x446f90;
    (**(code **)(*ppuVar7 + 0x4c))();
    pcStack_8c = &stack0xffffff8c;
    puStack_90 = &uStack_48;
    puStack_94 = auStack_38;
    ppuStack_98 = (undefined1 **)0x446fa6;
    (**(code **)(*ppuVar7 + 0x7c))();
    ppuStack_98 = (undefined1 **)0x446fad;
    FUN_0044bf50();
    param_1 = &ppuStack_98;
    ppuStack_98 = ppuVar3;
    if (ppuVar3 != (undefined1 **)0x0) {
      ppuVar3[5] = ppuVar3[5] + 1;
    }
    FUN_00446750();
    if (pvStack_10 == (void *)0x0) {
      ppuStack_98 = (undefined1 **)&param_1;
      FUN_00409810(&DAT_006b3f70);
      ppuStack_98 = (undefined1 **)&stack0xffffff8c;
      iStack_1c._0_1_ = 7;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
      (*pcVar4)();
      iStack_1c = CONCAT31(iStack_1c._1_3_,5);
      ppuStack_98 = (undefined1 **)0x1;
      FUN_004040a0();
    }
    ppuStack_98 = ppuVar7;
    FUN_004f41c0();
    param_1 = (undefined1 ***)ppuVar7[0x87];
    ppuStack_98 = (undefined1 **)0x447042;
    ppuStack_98 = (undefined1 **)__ftol();
    FUN_004041b0();
    *puStack_14 = unaff_EBP;
    ppuStack_98 = (undefined1 **)0x1;
    puStack_14[1] = pvVar6;
    puStack_14[2] = &local_80;
    puStack_58 = apuStack_68[0];
    iStack_1c._0_1_ = 4;
    puStack_14[3] = apuStack_68[0];
    pvStack_60 = pvVar6;
    local_5c = (undefined1 *)&local_80;
    FUN_004040a0();
    ppuStack_98 = (undefined1 **)0x1;
    iStack_1c._0_1_ = 3;
    FUN_004040a0();
    ppuStack_98 = (undefined1 **)0x1;
    iStack_1c._0_1_ = 1;
    FUN_004040a0();
    iStack_1c = (uint)iStack_1c._1_3_ << 8;
    if ((pvStack_10 != (void *)0x0) &&
       (iVar9 = *(int *)((int)pvStack_10 + 0x14) + -1, *(int *)((int)pvStack_10 + 0x14) = iVar9,
       iVar9 == 0)) {
      ppuStack_98 = (undefined1 **)0x0;
      FUN_005abfc0();
    }
    iStack_1c = 0xffffffff;
    if ((ppuVar3 != (undefined1 **)0x0) &&
       (puVar2 = ppuVar3[5], ppuVar3[5] = puVar2 + -1, puVar2 + -1 == (undefined1 *)0x0)) {
      ppuStack_98 = (undefined1 **)0x0;
      FUN_005abfc0();
    }
    ExceptionList = pvStack_24;
    return puStack_14;
  }
  puStack_8._0_1_ = 4;
  *unaff_retaddr = uStack_50;
  unaff_retaddr[1] = uStack_4c;
  unaff_retaddr[2] = uStack_48;
  unaff_retaddr[3] = uStack_44;
  pcStack_88 = (char *)0x447135;
  FUN_004040a0();
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,3);
  pcStack_88 = (char *)0x447144;
  FUN_004040a0();
  if (iStack_2c != 0) {
    cVar1 = *(char *)(iStack_2c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      pcStack_88 = (char *)0x447166;
      FUN_005fe5f0();
    }
    else {
      *(char *)(iStack_2c + -1) = cVar1 + -1;
    }
  }
  iStack_2c = 0;
  uStack_28 = 0;
  pvStack_24 = (void *)0x0;
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  if ((param_1 != (undefined1 ***)0x0) &&
     (iVar9 = *(int *)((int)param_1 + 0x14), *(int *)((int)param_1 + 0x14) = iVar9 + -1,
     iVar9 + -1 == 0)) {
    pcStack_88 = (char *)0x447194;
    FUN_005abfc0();
  }
  puStack_8 = (undefined1 *)0xffffffff;
  if ((ppuVar3 != (undefined1 **)0x0) &&
     (puVar2 = ppuVar3[5], ppuVar3[5] = puVar2 + -1, puVar2 + -1 == (undefined1 *)0x0)) {
    pcStack_88 = (char *)0x4471b1;
    FUN_005abfc0();
  }
  ExceptionList = pvStack_10;
  return unaff_retaddr;
}

