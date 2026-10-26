/*
 * FUN_004ef4d0 at 004ef4d0
 * undefined FUN_004ef4d0(void)
 * Address ranges: 004ef4d0-004ef71b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_004ef4d0(int *param_1,undefined4 param_2,undefined4 **param_3,int *param_4,int param_5)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  int unaff_EBP;
  char *pcVar8;
  int unaff_retaddr;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 *puStack_50;
  int iStack_4c;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00633ef8;
  pvStack_c = ExceptionList;
  iStack_4c = (int)(char)param_1[5];
  puStack_50 = (undefined4 *)&DAT_0069c1d4;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  FUN_005ae390(&local_3c);
  piVar1 = param_1 + 6;
  *piVar1 = (int)param_4;
  puStack_50 = &param_3;
  local_4 = CONCAT31(local_4._1_3_,2);
  param_1[8] = param_5;
  param_4 = &iStack_4c;
  FUN_00449760();
  puStack_50 = (undefined4 *)0x4ef539;
  iVar3 = (**(code **)(*param_1 + 0x14))();
  puStack_50 = (undefined4 *)*piVar1;
  param_3 = &puStack_50;
  param_1[7] = iVar3 + (int)puStack_50;
  FUN_00449760(&param_2);
  iVar4 = (**(code **)(*param_1 + 0x1c))();
  iVar3 = local_4;
  param_1[9] = param_1[8] + iVar4;
  if (local_4 == 0) {
    auStack_34[0] = (char)unaff_retaddr;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    pvStack_c._0_1_ = 3;
    pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  auStack_34);
    (*pcVar5)();
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,2);
    FUN_004040a0(1);
  }
  if (unaff_retaddr == 0) {
    auStack_24[0] = (char)unaff_retaddr;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    pvStack_c._0_1_ = 4;
    pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  auStack_24);
    (*pcVar5)();
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,2);
    FUN_004040a0(1);
  }
  uVar12 = 0x437f0000;
  uVar13 = 0x437f0000;
  uVar14 = 0x437f0000;
  iVar4 = *piVar1;
  uVar15 = 0x437f0000;
  iVar9 = param_1[7];
  iVar10 = param_1[8];
  iVar11 = param_1[9];
  uVar6 = FUN_0050aa70(iVar4,iVar9,iVar10,iVar11,0x437f0000,0x437f0000,0x437f0000,0x437f0000);
  FUN_004b1c00(&stack0xffffffbc,uVar6,iVar4,iVar9,iVar10,iVar11,uVar12,uVar13,uVar14,uVar15);
  if (unaff_EBP != 0) {
    cVar2 = *(char *)(unaff_EBP + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0((char *)(unaff_EBP + -1));
    }
    else {
      *(char *)(unaff_EBP + -1) = cVar2 + -1;
    }
  }
  local_3c = 0;
  uStack_38 = 0;
  pvStack_c = (void *)((uint)pvStack_c & 0xffffff00);
  if ((iVar3 != 0) &&
     (iVar4 = *(int *)(iVar3 + 0x14) + -1, *(int *)(iVar3 + 0x14) = iVar4, iVar4 == 0)) {
    FUN_005abfc0(0);
  }
  pvStack_c = (void *)0xffffffff;
  if ((unaff_retaddr != 0) &&
     (iVar3 = *(int *)(unaff_retaddr + 0x14) + -1, *(int *)(unaff_retaddr + 0x14) = iVar3,
     iVar3 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_14;
  return;
}

