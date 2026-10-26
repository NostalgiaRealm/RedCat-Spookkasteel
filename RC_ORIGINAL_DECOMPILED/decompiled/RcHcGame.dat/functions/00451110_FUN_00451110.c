/*
 * FUN_00451110 at 00451110
 * undefined FUN_00451110(void)
 * Address ranges: 00451110-0045122f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00451110(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006260e8;
  pvStack_c = ExceptionList;
  if (*(int *)(param_2 + 0x44) == 0) {
    local_1c[0] = (undefined1)param_3;
    uVar6 = 0xffffffff;
    pcVar9 = s_Total_icons_per_line_is_0_006919c8;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    uVar6 = ~uVar6 - 1;
    local_18 = (char *)0x0;
    local_14 = 0;
    local_10 = 0;
    ExceptionList = &pvStack_c;
    cVar3 = FUN_00401940(uVar6,1);
    if (cVar3 != '\0') {
      pcVar9 = s_Total_icons_per_line_is_0_006919c8;
      pcVar10 = local_18;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
      local_18[uVar6] = '\0';
      local_14 = uVar6;
    }
    local_4 = 0;
    pcVar4 = (code *)FUN_005a07f0(s_a_Def_m_TotalPerLine__0_0069197c,
                                  s_D__Work_RCHorror_RCSource_RcHUDI_00691994,0x19,local_1c);
    (*pcVar4)();
    if (local_18 != (char *)0x0) {
      cVar3 = local_18[-1];
      if ((cVar3 == '\0') || (cVar3 == -1)) {
        FUN_005fe5f0(local_18 + -1);
      }
      else {
        local_18[-1] = cVar3 + -1;
      }
    }
  }
  iVar1 = *(int *)(param_2 + 0x3c);
  iVar8 = (param_3 % *(int *)(param_2 + 0x44)) * iVar1 + *(int *)(param_2 + 0x34);
  iVar2 = *(int *)(param_2 + 0x40);
  iVar5 = (param_3 / *(int *)(param_2 + 0x44)) * iVar2 + *(int *)(param_2 + 0x38);
  *param_1 = iVar8;
  param_1[1] = iVar1 + iVar8;
  param_1[2] = iVar5;
  param_1[3] = iVar2 + iVar5;
  ExceptionList = pvStack_c;
  return param_1;
}

