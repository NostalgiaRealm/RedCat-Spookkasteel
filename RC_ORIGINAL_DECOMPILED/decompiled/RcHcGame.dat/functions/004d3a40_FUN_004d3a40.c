/*
 * FUN_004d3a40 at 004d3a40
 * undefined FUN_004d3a40(void)
 * Address ranges: 004d3a40-004d3df0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004d3a40(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  int *piVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 local_39;
  int local_38 [3];
  undefined1 local_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631738;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006995e4,0x99);
  local_4 = 0;
  FUN_004d4100(0);
  cVar2 = FUN_00502480();
  if (cVar2 != '\0') {
    FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006995e4,0xa0);
    local_4._0_1_ = 1;
    local_2c[0] = local_39;
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
    local_4._0_1_ = 2;
    FUN_004eed10(7,local_2c,0,0);
    local_4._0_1_ = 1;
    FUN_004040a0(1);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_005ae770();
  }
  piVar3 = (int *)FUN_004042e0(local_38);
  local_4._0_1_ = 3;
  if (*piVar3 == 0) {
    FUN_00409810(&DAT_006b3f70,&local_39);
    local_4._0_1_ = 4;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar4)();
    local_4._0_1_ = 3;
    FUN_004040a0(1);
  }
  local_4._0_1_ = 0;
  if (local_38[0] != 0) {
    FUN_004098d0();
  }
  iVar7 = *(int *)(param_1 + 0x168);
  FUN_004d68e0(*(undefined4 *)(iVar7 + 0x1c),*(undefined4 *)(iVar7 + 0x20),
               *(undefined4 *)(iVar7 + 0x24));
  cVar2 = FUN_005b0bf0(*(undefined4 *)(*(int *)(param_1 + 0x168) + 0x28));
  if (cVar2 != '\0') {
    FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006995e4,0xb1);
    local_4._0_1_ = 5;
    uVar1 = (undefined1)local_4;
    local_4._0_1_ = 5;
    if (*(char *)(param_1 + 0xa9) != '\0') {
      puVar5 = *(undefined1 **)(param_1 + 0x60);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0064a3b4;
      }
      uVar6 = FUN_005ae390(local_1c,s_Trigger__s_tries_to_load_subleve_00691fac,puVar5,
                           *(undefined4 *)(*(int *)(param_1 + 0x168) + 0x28));
      local_4._0_1_ = 6;
      FUN_005aff00(uVar6);
      local_4._0_1_ = 5;
      FUN_004040a0(1);
      uVar1 = (undefined1)local_4;
    }
    local_4._0_1_ = uVar1;
    piVar3 = (int *)FUN_004042e0(local_38);
    local_4._0_1_ = 7;
    uVar1 = (undefined1)local_4;
    local_4._0_1_ = 7;
    if (*piVar3 == 0) {
      local_2c[0] = local_39;
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
      local_4._0_1_ = 8;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_2c);
      (*pcVar4)();
      local_4._0_1_ = 7;
      FUN_004040a0(1);
      uVar1 = (undefined1)local_4;
    }
    local_4._0_1_ = uVar1;
    uVar6 = 1;
    FUN_004f3d80(1);
    FUN_004fed00(uVar6);
    local_4._0_1_ = 5;
    if (local_38[0] != 0) {
      FUN_004098d0();
    }
    pcVar10 = *(char **)(*(int *)(param_1 + 0x168) + 0x28);
    local_2c[0] = local_39;
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar9 = pcVar10;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(pcVar10,~uVar8 - 1);
    local_4._0_1_ = 9;
    iVar7 = DAT_006b915c;
    if (DAT_006b915c == 0) {
      iVar7 = FUN_004bc480();
    }
    if (*(int *)(iVar7 + 0x3a4) == 0) {
      local_1c[0] = local_39;
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
      local_4._0_1_ = 10;
      pcVar4 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,
                                    0x130,local_1c);
      (*pcVar4)();
      local_4._0_1_ = 9;
      FUN_004040a0(1);
    }
    FUN_0040cc00(local_2c,0,0xffffffff);
    if (iStack_28 != 0) {
      cVar2 = *(char *)(iStack_28 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)(iStack_28 + -1));
      }
      else {
        *(char *)(iStack_28 + -1) = cVar2 + -1;
      }
    }
    iStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_005ae770();
  }
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return;
}

