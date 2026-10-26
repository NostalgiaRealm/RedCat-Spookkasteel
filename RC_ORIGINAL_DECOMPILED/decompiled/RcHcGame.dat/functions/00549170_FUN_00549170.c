/*
 * FUN_00549170 at 00549170
 * undefined FUN_00549170(void)
 * Address ranges: 00549170-005493bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00549375) */
/* WARNING: Removing unreachable block (ram,0x00549378) */

void __thiscall FUN_00549170(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined1 local_3c [4];
  undefined4 *local_38;
  uint local_34;
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063d488;
  pvStack_c = ExceptionList;
  if (*(int *)(param_1 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 4;
  }
  ExceptionList = &pvStack_c;
  if (iVar2 <= param_2) {
    local_3c[0] = (undefined1)param_2;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar8 = local_38;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *(undefined1 *)((int)local_38 + uVar5) = 0;
      local_34 = uVar5;
    }
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_a_Index<Count()_0068f448,s___AdamSource_DaviList_h_0068f458,0xbb
                                  ,local_3c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    if (local_38 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_38 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_38 + -1));
      }
      else {
        *(char *)((int)local_38 + -1) = cVar1 + -1;
      }
    }
  }
  iVar2 = FUN_00442d80();
  if (iVar2 < 1) {
    auStack_2c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4 = 1;
    pcVar3 = (code *)FUN_005a07f0(s_Count__>0_0068f4c0,s___AdamSource_DaviList_h_0068f458,0x9d,
                                  auStack_2c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar2 = *(int *)(param_1 + 4);
  if ((param_2 < 0) || (iVar4 = FUN_00442d80(), iVar4 <= param_2)) {
    auStack_1c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4 = 2;
    pcVar3 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                  s___AdamSource_DaviList_h_0068f458,0x8b,auStack_1c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar4 = FUN_00442d80();
  FUN_004f12a0(iVar4 * 0x10 + -0x10 + iVar2);
  iVar4 = *(int *)(param_1 + 8);
  for (iVar2 = iVar4 + -0x10; iVar2 != iVar4; iVar2 = iVar2 + 0x10) {
    FUN_00514430();
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x10;
  ExceptionList = pvStack_c;
  return;
}

