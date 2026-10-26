/*
 * FUN_00544ce0 at 00544ce0
 * undefined FUN_00544ce0(void)
 * Address ranges: 00544ce0-00544f8d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_00544ce0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int local_34;
  int local_30;
  undefined1 auStack_2c [4];
  undefined4 *puStack_28;
  uint uStack_24;
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ce38;
  pvStack_c = ExceptionList;
  local_34 = -1;
  local_30 = 0;
  iVar10 = 0;
  ExceptionList = &pvStack_c;
  do {
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x38;
    }
    if (iVar8 <= local_30) goto LAB_00544e18;
    pcVar9 = "";
    if (*(char **)(param_2 + 4) != (char *)0x0) {
      pcVar9 = *(char **)(param_2 + 4);
    }
    if (iVar10 < 0) {
LAB_00544d76:
      local_1c[0] = (undefined1)param_2;
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar3 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
      local_4 = 0;
      pcVar2 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                    s___AdamSource_DaviList_h_0068f458,0x97,local_1c);
      (*pcVar2)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    else {
      if (*(int *)(param_1 + 0x18) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x38;
      }
      if (iVar8 <= local_30) goto LAB_00544d76;
    }
    pcVar3 = *(char **)(iVar10 + 4 + *(int *)(param_1 + 0x18));
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "";
    }
    iVar8 = __strcmpi(pcVar3,pcVar9);
    if (iVar8 == 0) break;
    local_30 = local_30 + 1;
    iVar10 = iVar10 + 0x38;
  } while( true );
  local_34 = local_30;
  if (local_30 == -1) {
LAB_00544e18:
    puVar4 = *(undefined1 **)(param_2 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    uVar5 = FUN_005ae390(local_1c,s_Unknown_action___s___006a12e8,puVar4);
    local_4 = 1;
    pcVar2 = (code *)FUN_005a07f0(s__actionNr___1__006a1538,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a13c8,0x489,uVar5);
    (*pcVar2)();
    local_4 = 0xffffffff;
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
      }
    }
  }
  if (-1 < local_34) {
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x38;
    }
    if (local_34 < iVar10) goto LAB_00544f4f;
  }
  auStack_2c[0] = (undefined1)param_2;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = &DAT_006b3f70;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  cVar1 = FUN_00401940(uVar6,1);
  if (cVar1 != '\0') {
    puVar11 = (undefined4 *)&DAT_006b3f70;
    puVar12 = puStack_28;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    }
    *(undefined1 *)((int)puStack_28 + uVar6) = 0;
    uStack_24 = uVar6;
  }
  local_4 = 2;
  pcVar2 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                s___AdamSource_DaviList_h_0068f458,0x97,auStack_2c);
  (*pcVar2)();
  local_4 = 0xffffffff;
  FUN_004040a0(1);
LAB_00544f4f:
  FUN_00544f90(*(int *)(param_1 + 0x18) + local_34 * 0x38,param_3,param_4,param_5);
  ExceptionList = pvStack_c;
  return;
}

