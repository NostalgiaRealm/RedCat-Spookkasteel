/*
 * FUN_005512a0 at 005512a0
 * undefined FUN_005512a0(void)
 * Address ranges: 005512a0-005514d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00551450) */
/* WARNING: Removing unreachable block (ram,0x00551461) */

int * __thiscall FUN_005512a0(int param_1,int *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  int local_3c;
  int iStack_38;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0063df1f;
  pvStack_c = ExceptionList;
  local_3c = 0;
  local_4 = 1;
  pcVar8 = *(char **)(param_3 + 4);
  if (pcVar8 == (char *)0x0) {
    pcVar8 = "";
  }
  local_2c[0] = (undefined1)param_3;
  ExceptionList = &pvStack_c;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar10 = pcVar8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  uVar6 = ~uVar6 - 1;
  cVar2 = FUN_00401940(uVar6,1);
  if (cVar2 != '\0') {
    pcVar10 = local_28;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    local_28[uVar6] = '\0';
    local_24 = uVar6;
  }
  iVar9 = 0;
  local_4._0_1_ = 2;
  if (*(int *)(param_1 + 0x30) == 0) {
    local_1c[0] = (undefined1)param_3;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4._0_1_ = 3;
    pcVar3 = (code *)FUN_005a07f0(s_m_Func_0069522c,s___AdamSource_DaviSortedList_h_00690798,0xb9,
                                  local_1c);
    (*pcVar3)();
    local_4._0_1_ = 2;
    FUN_004040a0(1);
  }
  iVar4 = FUN_0044e4c0();
  if (iVar4 == 0) {
    bVar1 = false;
  }
  else {
    iStack_38 = 0;
    iVar11 = (-(uint)(*(int *)(param_1 + 0x2c) != 0) & 0xfffffffe) + 2;
    iVar4 = FUN_0044e4c0();
    bVar1 = false;
    iVar4 = iVar4 + -1;
    do {
      iVar9 = (iVar4 + iStack_38) / 2;
      iVar5 = (**(code **)(param_1 + 0x30))(local_2c,*(int *)(param_1 + 0x20) + iVar9 * 4);
      if (iVar5 == 1) {
        bVar1 = true;
        goto LAB_00551424;
      }
      if (iVar5 == iVar11) {
        iStack_38 = iVar9 + 1;
      }
      else {
        iVar4 = iVar9 + -1;
      }
    } while (iStack_38 <= iVar4);
    if (iVar5 == iVar11) {
      iVar9 = iVar9 + 1;
    }
  }
LAB_00551424:
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004040a0(1);
  if ((bVar1) && (*(int *)(*(int *)(param_1 + 0x20) + iVar9 * 4) != 0)) {
    local_3c = *(int *)(*(int *)(param_1 + 0x20) + iVar9 * 4);
    FUN_005844b0();
  }
  *param_2 = local_3c;
  if (local_3c != 0) {
    *(int *)(local_3c + 0x14) = *(int *)(local_3c + 0x14) + 1;
  }
  local_4 = local_4 & 0xffffff00;
  if ((local_3c != 0) &&
     (iVar9 = *(int *)(local_3c + 0x14) + -1, *(int *)(local_3c + 0x14) = iVar9, iVar9 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return param_2;
}

