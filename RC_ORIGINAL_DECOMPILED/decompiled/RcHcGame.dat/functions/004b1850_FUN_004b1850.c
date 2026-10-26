/*
 * FUN_004b1850 at 004b1850
 * undefined FUN_004b1850(void)
 * Address ranges: 004b1850-004b1bfe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_004b1850(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,char param_6,
            int param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 uVar12;
  int iStack_6c;
  undefined4 local_60;
  undefined4 *local_5c;
  uint local_58;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 *local_30;
  undefined4 uStack_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062e7f0;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_004040a0();
  FUN_0040cc00(param_3,0);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar2 = FUN_00518f30();
  iVar3 = *(int *)(iVar2 + 100);
  if (iVar3 == -0x80000000) {
    iVar3 = FUN_0060af10();
    *(int *)(iVar2 + 100) = iVar3;
  }
  if (iVar3 != 0) {
    uVar4 = FUN_004b1410(&local_60);
    local_4._0_1_ = 2;
    FUN_0040cc00(uVar4,0);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0();
  }
  if (param_2 == 0) {
    local_60 = CONCAT31(local_60._1_3_,param_6);
    FUN_004040a0();
    uVar6 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar1 = FUN_00401940(uVar6);
    if (cVar1 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      puVar10 = local_5c;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      *(undefined1 *)((int)local_5c + uVar6) = 0;
      local_58 = uVar6;
    }
    local_4._0_1_ = 3;
    pcVar5 = (code *)FUN_005a07f0(s_a_TextureBitmap__0_00696b40,
                                  s_D__Work_RCHorror_AdamSource_Adam_00696748,0x1a7);
    (*pcVar5)();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0();
  }
  iVar3 = FUN_005c3350();
  if (iVar3 == 0) {
    FUN_005ae390(&local_60);
    local_4._0_1_ = 4;
    pcVar5 = (code *)FUN_005a07f0(&PTR_DAT_006967dc,s_D__Work_RCHorror_AdamSource_Adam_00696748,
                                  0x1ad);
    (*pcVar5)();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0();
  }
  if (param_7 != 0) {
    if (param_1 != 0) {
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    }
    FUN_004b9de0();
  }
  uStack_40 = 0x437f0000;
  uStack_3c = 0x437f0000;
  uStack_38 = 0x437f0000;
  uStack_34 = 0x437f0000;
  iStack_50 = -param_4;
  iStack_48 = -param_5;
  FUN_004b0230();
  iStack_4c = FUN_005bff90();
  iStack_4c = iStack_4c + iStack_50;
  FUN_004b0230();
  iStack_44 = FUN_005c0070();
  iStack_44 = iStack_44 + iStack_48;
  if (param_6 == '\0') {
    uVar12 = 0;
    puVar8 = &uStack_40;
    uVar4 = 0;
    piVar11 = &iStack_50;
    FUN_004b0230(piVar11,puVar8,0,0);
    iVar3 = FUN_005bf560(piVar11,puVar8,uVar4,uVar12);
  }
  else {
    local_5c = local_30;
    puVar8 = &local_60;
    uStack_54 = uStack_2c;
    local_60 = 0;
    local_58 = 0;
    uVar4 = 0;
    puVar10 = &uStack_40;
    piVar11 = &iStack_50;
    FUN_004b0230(piVar11,puVar10,0,puVar8);
    iVar3 = FUN_005bf560(piVar11,puVar10,uVar4,puVar8);
  }
  if (iVar3 == 0) {
    FUN_005ae390(&local_60);
    local_4 = CONCAT31(local_4._1_3_,5);
    pcVar5 = (code *)FUN_005a07f0(&PTR_DAT_006967dc,s_D__Work_RCHorror_AdamSource_Adam_00696748,
                                  0x1e5);
    (*pcVar5)();
    if (local_5c != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_5c + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0();
      }
      else {
        *(char *)((int)local_5c + -1) = cVar1 + -1;
      }
    }
    local_5c = (undefined4 *)0x0;
    local_58 = 0;
    uStack_54 = 0;
  }
  if (iStack_6c != 0) {
    cVar1 = *(char *)(iStack_6c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0();
    }
    else {
      *(char *)(iStack_6c + -1) = cVar1 + -1;
    }
  }
  local_4 = 0xffffffff;
  if ((param_1 != 0) &&
     (iVar3 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar3, iVar3 == 0)) {
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return 1;
}

