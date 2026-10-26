/*
 * FUN_0052b470 at 0052b470
 * undefined FUN_0052b470(void)
 * Address ranges: 0052b470-0052b6e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0052b470(int param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  code *pcVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 local_2c [4];
  char *local_28;
  uint uStack_24;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639e3a;
  pvStack_c = ExceptionList;
  bVar1 = false;
  ExceptionList = &pvStack_c;
  if (*(char *)(param_1 + 0x14) == '\0') {
    local_2c[0] = param_2._0_1_;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    uVar8 = ~uVar8 - 1;
    cVar2 = FUN_00401940(uVar8,1);
    if (cVar2 != '\0') {
      pcVar10 = &DAT_006b3f70;
      pcVar11 = local_28;
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
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x3b0,local_2c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if (*(int *)(param_1 + 100) == 0) {
    pvVar4 = operator_new(0x454);
    local_4 = 1;
    if (pvVar4 == (void *)0x0) {
      iVar5 = 0;
    }
    else {
      local_2c[0] = param_2._0_1_;
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar10 = s_empty_sublevel_006a0490;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      uVar8 = ~uVar8 - 1;
      cVar2 = FUN_00401940(uVar8,1);
      if (cVar2 != '\0') {
        pcVar10 = s_empty_sublevel_006a0490;
        pcVar11 = local_28;
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
        local_28[uVar8] = '\0';
        uStack_24 = uVar8;
      }
      bVar1 = true;
      local_4 = CONCAT31(local_4._1_3_,2);
      iVar5 = FUN_004f3530(local_2c);
    }
    if (iVar5 != 0) {
      *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 1;
    }
    local_4 = 4;
    iVar7 = *(int *)(param_1 + 100);
    if (iVar7 != iVar5) {
      if ((iVar7 != 0) &&
         (iVar6 = *(int *)(iVar7 + 0x14) + -1, *(int *)(iVar7 + 0x14) = iVar6, iVar6 == 0)) {
        FUN_005abfc0(0);
      }
      *(int *)(param_1 + 100) = iVar5;
      if (iVar5 != 0) {
        *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 1;
      }
    }
    local_4 = CONCAT31(local_4._1_3_,3);
    if ((iVar5 != 0) &&
       (iVar7 = *(int *)(iVar5 + 0x14) + -1, *(int *)(iVar5 + 0x14) = iVar7, iVar7 == 0)) {
      FUN_005abfc0(0);
    }
    local_4 = 0xffffffff;
    if (bVar1) {
      FUN_004040a0(1);
    }
    if (*(int *)(param_1 + 100) == 0) {
      auStack_1c[0] = param_2._0_1_;
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
      local_4 = 5;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    auStack_1c);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    FUN_004f5b60();
  }
  iVar5 = *(int *)(param_1 + 100);
  *param_2 = iVar5;
  if (iVar5 != 0) {
    *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 1;
  }
  ExceptionList = pvStack_c;
  return;
}

