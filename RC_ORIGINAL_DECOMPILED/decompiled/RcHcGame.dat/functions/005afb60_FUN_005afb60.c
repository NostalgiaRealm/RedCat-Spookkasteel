/*
 * FUN_005afb60 at 005afb60
 * undefined FUN_005afb60(void)
 * Address ranges: 005afb60-005afd62
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005afd35) */
/* WARNING: Removing unreachable block (ram,0x005afd37) */

void __thiscall FUN_005afb60(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646108;
  pvStack_c = ExceptionList;
  iVar6 = 0;
  if (*(int *)(param_1 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  }
  ExceptionList = &pvStack_c;
  if (iVar2 <= param_2) {
    local_3c[0] = (undefined1)param_2;
    uVar5 = 0xffffffff;
    local_38 = 0;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_34 = 0;
    local_30 = 0;
    ExceptionList = &pvStack_c;
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_a_Index<Count()_0068f448,s___AdamSource_DaviList_h_0068f458,0xbb
                                  ,local_3c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    if (local_38 != 0) {
      cVar1 = *(char *)(local_38 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_38 + -1));
      }
      else {
        *(char *)(local_38 + -1) = cVar1 + -1;
      }
    }
  }
  iVar2 = FUN_0044e4c0();
  if (iVar2 < 1) {
    auStack_2c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
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
  if (iVar2 != 0) {
    iVar6 = *(int *)(param_1 + 8) - iVar2 >> 2;
  }
  if ((param_2 < 0) || (iVar4 = FUN_0044e4c0(), iVar4 <= param_2)) {
    auStack_1c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4 = 2;
    pcVar3 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                  s___AdamSource_DaviList_h_0068f458,0x8b,auStack_1c);
    (*pcVar3)();
    FUN_004040a0(1);
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4) = *(undefined4 *)(iVar2 + -4 + iVar6 * 4);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
  ExceptionList = pvStack_c;
  return;
}

