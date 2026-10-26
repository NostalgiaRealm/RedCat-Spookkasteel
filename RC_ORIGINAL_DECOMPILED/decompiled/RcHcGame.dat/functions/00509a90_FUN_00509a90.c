/*
 * FUN_00509a90 at 00509a90
 * undefined FUN_00509a90(void)
 * Address ranges: 00509a90-00509e12
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00509a90(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined1 auStack_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  undefined4 *puStack_18;
  uint uStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636640;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_2 == 0) {
    local_1c[0] = 0;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_a_Child____0_0069e3a0,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069e3b0,0x22,local_1c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    local_1c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4 = 1;
    pcVar3 = (code *)FUN_005a07f0(s_a_Child_>m_Parent____0_0069e388,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069e3b0,0x23,local_1c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if (*(int *)(param_2 + 0x44) != 0) {
    local_1c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4 = 2;
    pcVar3 = (code *)FUN_005a07f0(s_a_Child_>m_ParentMemberToChild___0069e364,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069e3b0,0x24,local_1c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  FUN_00516b30();
  iVar4 = FUN_004337e0();
  if (iVar4 != 0) {
    puVar8 = &DAT_0064a3b4;
    if (*(undefined1 **)(param_2 + 0x60) != (undefined1 *)0x0) {
      puVar8 = *(undefined1 **)(param_2 + 0x60);
    }
    puVar5 = (undefined1 *)param_1[0x18];
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    uVar6 = FUN_005ae390(local_1c,s_CAdamGO__AddChild____parent__s_a_0069e334,puVar5,puVar8);
    local_4 = 3;
    FUN_005aff00(uVar6);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if ((char)param_1[0x16] != '\0') {
    local_1c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar2 = FUN_00401940(uVar7,1);
    if (cVar2 != '\0') {
      puVar10 = (undefined4 *)&DAT_006b3f70;
      puVar11 = puStack_18;
      for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar9 = uVar7 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      *(undefined1 *)((int)puStack_18 + uVar7) = 0;
      uStack_14 = uVar7;
    }
    local_4 = 4;
    pcVar3 = (code *)FUN_005a07f0(s___m_ChildrenLocked_0069e320,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069e3b0,0x2d,local_1c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    if (puStack_18 != (undefined4 *)0x0) {
      cVar2 = *(char *)((int)puStack_18 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)((int)puStack_18 + -1));
      }
      else {
        *(char *)((int)puStack_18 + -1) = cVar2 + -1;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x16) = 1;
  FUN_0053cff0(param_1[0x14],1,&param_2);
  piVar1 = param_3;
  *(int **)(param_2 + 0x40) = param_1;
  if (param_3 == (int *)0x0) {
    *(undefined4 *)(param_2 + 0x44) = 0;
  }
  else {
    if ((*param_3 != 0) && (*param_3 != param_2)) {
      auStack_2c[0] = (undefined1)param_2;
      uVar7 = 0xffffffff;
      iStack_28 = 0;
      pcVar12 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      uStack_24 = 0;
      uStack_20 = 0;
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4 = 5;
      pcVar3 = (code *)FUN_005a07f0(s____a_ParentMember___0________a_P_0069e2e8,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069e3b0,0x39,auStack_2c);
      (*pcVar3)();
      local_4 = 0xffffffff;
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
    }
    *(int **)(param_2 + 0x44) = piVar1;
    **(int **)(param_2 + 0x44) = param_2;
  }
  (**(code **)(*param_1 + 0x24))(param_2);
  *(undefined1 *)(param_1 + 0x16) = 0;
  ExceptionList = pvStack_10;
  return;
}

