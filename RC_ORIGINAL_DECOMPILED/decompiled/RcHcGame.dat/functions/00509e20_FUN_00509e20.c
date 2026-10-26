/*
 * FUN_00509e20 at 00509e20
 * undefined FUN_00509e20(void)
 * Address ranges: 00509e20-0050a1ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00509e20(int *param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined1 local_2c [4];
  undefined4 *puStack_28;
  uint uStack_24;
  undefined1 auStack_20 [4];
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636680;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_2 == 0) {
    local_2c[0] = (undefined1)param_2;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
    local_4 = param_2;
    pcVar2 = (code *)FUN_005a07f0(s_a_Child____0_0069e3a0,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069e3b0,0x4c,local_2c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if (*(int **)(param_2 + 0x40) != param_1) {
    local_2c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
    local_4 = 1;
    pcVar2 = (code *)FUN_005a07f0(s_a_Child_>m_Parent____this_0069e49c,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069e3b0,0x4d,local_2c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  FUN_00516b30();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    puVar4 = *(undefined1 **)(param_2 + 0x60);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    puVar9 = (undefined1 *)param_1[0x18];
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &DAT_0064a3b4;
    }
    uVar5 = FUN_005ae390(local_2c,s_CAdamGO__RemoveChild____parent___0069e468,puVar9,puVar4);
    local_4 = 2;
    FUN_005aff00(uVar5);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if ((char)param_1[0x16] != '\0') {
    local_2c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8 - 1;
    cVar1 = FUN_00401940(uVar8,1);
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar11 = puStack_28;
      for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar11 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar10 = uVar8 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      FUN_00404190(uVar8);
    }
    local_4 = 3;
    pcVar2 = (code *)FUN_005a07f0(s___m_ChildrenLocked_0069e320,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069e3b0,0x56,local_2c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  *(undefined1 *)(param_1 + 0x16) = 1;
  iVar3 = FUN_0050a1b0(param_2);
  if ((iVar3 < 0) || (iVar6 = FUN_0050a440(), iVar6 <= iVar3)) {
    local_2c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8 - 1;
    cVar1 = FUN_00401940(uVar8,1);
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar11 = puStack_28;
      for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar11 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar10 = uVar8 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      *(undefined1 *)((int)puStack_28 + uVar8) = 0;
      uStack_24 = uVar8;
    }
    local_4 = 4;
    pcVar2 = (code *)FUN_005a07f0(s_index>_0____index<GetChildCount(_0069e444,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069e3b0,0x5b,local_2c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  (**(code **)(*param_1 + 0x28))(param_2);
  puVar11 = (undefined4 *)param_1[0x14];
  iVar3 = param_1[0x13] + iVar3 * 4;
  puVar7 = (undefined4 *)(iVar3 + 4);
  if (puVar7 != puVar11) {
    iVar3 = iVar3 - (int)puVar7;
    do {
      *(undefined4 *)(iVar3 + (int)puVar7) = *puVar7;
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar11);
  }
  iVar3 = param_1[0x14];
  param_1[0x14] = iVar3 + -4;
  if (*(int **)(param_2 + 0x44) != (int *)0x0) {
    iVar6 = **(int **)(param_2 + 0x44);
    if ((iVar6 != 0) && (iVar6 != param_2)) {
      iStack_1c = 0;
      uStack_18 = 0;
      uStack_14 = 0;
      uVar8 = 0xffffffff;
      pcVar12 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
      auStack_20[0] = (undefined1)(iVar3 + -4);
      FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
      puStack_8 = (undefined1 *)0x5;
      pcVar2 = (code *)FUN_005a07f0(s____a_Child_>m_ParentMemberToChil_0069e3ec,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069e3b0,0x67,auStack_20);
      (*pcVar2)();
      if (iStack_1c != 0) {
        cVar1 = *(char *)(iStack_1c + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(iStack_1c + -1));
        }
        else {
          *(char *)(iStack_1c + -1) = cVar1 + -1;
        }
      }
    }
    **(undefined4 **)(param_2 + 0x44) = 0;
  }
  *(undefined4 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  ExceptionList = pvStack_10;
  return;
}

