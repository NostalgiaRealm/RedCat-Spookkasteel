/*
 * FUN_00456870 at 00456870
 * undefined FUN_00456870(void)
 * Address ranges: 00456870-00456bef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_00456870(int param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 local_3c [4];
  char *local_38;
  uint local_34;
  undefined1 auStack_2c [16];
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00626ab0;
  pvStack_c = ExceptionList;
  iVar9 = 0;
  iVar10 = 0;
  ExceptionList = &pvStack_c;
  do {
    if (*(int *)(param_1 + 0x28) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28)) / 0x50;
    }
    if (iVar8 <= iVar9) {
      puVar4 = *(undefined1 **)(param_2 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      iVar9 = FUN_005ae390(local_1c,s_Unknown_icon_name___s__00691cd8,puVar4);
      pcVar3 = *(char **)(iVar9 + 4);
      local_4 = 2;
      if (pcVar3 == (char *)0x0) {
        pcVar3 = "";
      }
      local_3c[0] = (undefined1)param_2;
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar6 = pcVar3;
      break;
    }
    if ((iVar10 < 0) || (iVar8 = FUN_004574b0(), iVar8 <= iVar9)) {
      local_3c[0] = (undefined1)param_2;
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar3 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
      local_4 = 0;
      pcVar2 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                    s___AdamSource_DaviList_h_0068f458,0x97,local_3c);
      (*pcVar2)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    pcVar3 = *(char **)(*(int *)(param_1 + 0x28) + 4 + iVar10);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "";
    }
    pcVar6 = *(char **)(param_2 + 4);
    if (pcVar6 == (char *)0x0) {
      pcVar6 = "";
    }
    iVar8 = __strcmpi(pcVar6,pcVar3);
    if (iVar8 == 0) goto LAB_00456970;
    iVar9 = iVar9 + 1;
    iVar10 = iVar10 + 0x50;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    if (cVar1 == '\0') break;
    if (uVar5 == 0) break;
  }
  uVar5 = ~uVar5 - 1;
  cVar1 = FUN_00401940(uVar5,1);
  if (cVar1 != '\0') {
    pcVar6 = local_38;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar7 = uVar5 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar6 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar6 = pcVar6 + 1;
    }
    FUN_00404190(uVar5);
  }
  local_4._0_1_ = 3;
  FUN_005aff20(s_D__Work_RCHorror_RCSource_RcHUDI_00691cac,0x8d,local_3c);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  local_3c[0] = (undefined1)param_2;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar3 = &DAT_006b3f70;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar1 = FUN_00401940(uVar5,1);
  if (cVar1 != '\0') {
    pcVar3 = &DAT_006b3f70;
    pcVar6 = local_38;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar7 = uVar5 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar6 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar6 = pcVar6 + 1;
    }
    local_38[uVar5] = '\0';
    local_34 = uVar5;
  }
  local_4 = 4;
  pcVar2 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_RCSource_RcHUDI_00691cac,0x8e,
                                local_3c);
  (*pcVar2)();
  local_4 = 0xffffffff;
  if (local_38 != (char *)0x0) {
    cVar1 = local_38[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_38 + -1);
    }
    else {
      local_38[-1] = cVar1 + -1;
    }
  }
  iVar9 = FUN_004574b0();
  if (iVar9 < 1) {
    auStack_2c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar3 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4 = 5;
    pcVar2 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                  s___AdamSource_DaviList_h_0068f458,0x97,auStack_2c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  ExceptionList = pvStack_c;
  return *(int *)(param_1 + 0x28);
LAB_00456970:
  if ((iVar9 < 0) || (iVar10 = FUN_004574b0(), iVar10 <= iVar9)) {
    local_3c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar3 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4 = 1;
    pcVar2 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                  s___AdamSource_DaviList_h_0068f458,0x97,local_3c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  ExceptionList = pvStack_c;
  return *(int *)(param_1 + 0x28) + iVar9 * 0x50;
}

