/*
 * FUN_0045c270 at 0045c270
 * undefined FUN_0045c270(void)
 * Address ranges: 0045c270-0045c5c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0045c270(int param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 local_41;
  int local_40;
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006270e0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar2 = (int *)FUN_004042e0(&local_40);
  local_4 = 0;
  if (*piVar2 == 0) {
    FUN_00409810(&DAT_006b3f70,&local_41);
    local_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  local_4 = 0xffffffff;
  if (local_40 != 0) {
    FUN_004098d0();
  }
  FUN_0045b500();
  FUN_0045c8d0(0);
  cVar1 = FUN_00502480();
  if (cVar1 != '\0') {
    auStack_3c[0] = local_41;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4 = 2;
    FUN_004eed10(7,auStack_3c,0,0);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar6 = *(int *)(param_1 + 0x168);
  FUN_004d68e0(*(undefined4 *)(iVar6 + 0x1c),*(undefined4 *)(iVar6 + 0x20),
               *(undefined4 *)(iVar6 + 0x24));
  cVar1 = FUN_005b0bf0(*(undefined4 *)(*(int *)(param_1 + 0x168) + 0x28));
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 0xa9) != '\0') {
      puVar4 = *(undefined1 **)(param_1 + 0x60);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      uVar5 = FUN_005ae390(auStack_3c,s_Trigger__s_tries_to_load_subleve_00691fac,puVar4,
                           *(undefined4 *)(*(int *)(param_1 + 0x168) + 0x28));
      local_4 = 3;
      FUN_005aff00(uVar5);
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    piVar2 = (int *)FUN_004042e0(&local_40);
    local_4 = 4;
    if (*piVar2 == 0) {
      auStack_3c[0] = local_41;
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4._0_1_ = 5;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    auStack_3c);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,4);
      FUN_004040a0(1);
    }
    uVar5 = 1;
    FUN_004f3d80(1);
    FUN_004fed00(uVar5);
    local_4 = 0xffffffff;
    if (local_40 != 0) {
      FUN_004098d0();
    }
    pcVar9 = *(char **)(*(int *)(param_1 + 0x168) + 0x28);
    local_1c[0] = local_41;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar8 = pcVar9;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(pcVar9,~uVar7 - 1);
    local_4 = 6;
    iVar6 = DAT_006b915c;
    if (DAT_006b915c == 0) {
      iVar6 = FUN_004bc480();
    }
    if (*(int *)(iVar6 + 0x3a4) == 0) {
      auStack_2c[0] = local_41;
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4._0_1_ = 7;
      pcVar3 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,
                                    0x130,auStack_2c);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,6);
      FUN_004040a0(1);
    }
    FUN_0040cc00(local_1c,0,0xffffffff);
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
        ExceptionList = pvStack_c;
        return;
      }
      FUN_005fe5f0((char *)(iStack_18 + -1));
    }
  }
  ExceptionList = pvStack_c;
  return;
}

