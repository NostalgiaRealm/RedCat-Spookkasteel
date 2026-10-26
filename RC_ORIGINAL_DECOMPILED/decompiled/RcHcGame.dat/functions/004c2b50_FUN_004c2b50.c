/*
 * FUN_004c2b50 at 004c2b50
 * undefined FUN_004c2b50(void)
 * Address ranges: 004c2b50-004c2df0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_004c2b50(int param_1)

{
  char cVar1;
  BOOL BVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  void **ppvVar7;
  tagOFNA *ptVar8;
  char *pcVar9;
  char *pcVar10;
  void **ppvVar11;
  undefined1 local_470 [4];
  char *local_46c;
  uint local_468;
  undefined4 local_464;
  int local_45c;
  tagOFNA local_458 [6];
  char local_20c [512];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006301f1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_45c = param_1;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006975f0,0x5c3);
  ptVar8 = local_458;
  for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
    ptVar8->lStructSize = 0;
    ptVar8 = (tagOFNA *)&ptVar8->hwndOwner;
  }
  local_470[0] = *(undefined1 *)(param_1 + 0x648);
  local_4 = 0;
  FUN_004040a0(0);
  FUN_0040cc00((undefined1 *)(param_1 + 0x648),0,0xffffffff);
  pcVar9 = local_46c;
  if (local_46c == (char *)0x0) {
    pcVar9 = "";
  }
  uVar5 = 0xffffffff;
  do {
    pcVar10 = pcVar9;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar9 = pcVar10 + -uVar5;
  ppvVar7 = &local_458[0].pvReserved;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *ppvVar7 = *(void **)pcVar9;
    pcVar9 = pcVar9 + 4;
    ppvVar7 = ppvVar7 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(char *)ppvVar7 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    ppvVar7 = (void **)((int)ppvVar7 + 1);
  }
  FUN_004040a0(1);
  uVar5 = 0xffffffff;
  pcVar9 = &DAT_006b3f70;
  do {
    pcVar10 = pcVar9;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  local_458[0].lStructSize = 0x4c;
  local_458[0].lpstrFileTitle = local_20c;
  pcVar9 = pcVar10 + -uVar5;
  pcVar10 = local_20c;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar10 = pcVar10 + 4;
  }
  local_458[0].nMaxFile = 0x200;
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar10 = pcVar10 + 1;
  }
  local_458[0].nMaxFileTitle = 0x200;
  local_458[0].lpstrFile = (LPSTR)&local_458[0].pvReserved;
  local_458[0].hwndOwner = (HWND)0x0;
  local_458[0].lpstrFilter = s_Level_files_0069834c;
  local_458[0].nFilterIndex = 0;
  local_458[0].lpstrInitialDir = s___Levels_00693c44;
  local_458[0].Flags = 0x1808;
  local_458[0].lpstrTitle = s_Select_a__BSP_file_to_view_00698330;
  BVar2 = GetOpenFileNameA(local_458);
  ppvVar7 = (void **)local_458[0].lpstrFile;
  if (BVar2 == 0) {
    local_4 = 0xffffffff;
    FUN_005ae770();
    uVar3 = 0;
  }
  else {
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    ppvVar11 = ppvVar7;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)ppvVar11;
      ppvVar11 = (void **)((int)ppvVar11 + 1);
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      pcVar9 = local_46c;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(void **)pcVar9 = *ppvVar7;
        ppvVar7 = ppvVar7 + 1;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *(char *)ppvVar7;
        ppvVar7 = (void **)((int)ppvVar7 + 1);
        pcVar9 = pcVar9 + 1;
      }
      local_46c[uVar5] = '\0';
      local_468 = uVar5;
    }
    local_4._0_1_ = 1;
    FUN_0040cc00(local_470,0,0xffffffff);
    local_4._0_1_ = 0;
    if (local_46c != (char *)0x0) {
      cVar1 = local_46c[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0(local_46c + -1);
      }
      else {
        local_46c[-1] = cVar1 + -1;
      }
    }
    uVar5 = 0xffffffff;
    local_46c = (undefined1 *)0x0;
    local_468 = 0;
    local_464 = 0;
    ppvVar7 = (void **)local_458[0].lpstrFile;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)ppvVar7;
      ppvVar7 = (void **)((int)ppvVar7 + 1);
    } while (cVar1 != '\0');
    FUN_004040f0(local_458[0].lpstrFile,~uVar5 - 1);
    local_4 = CONCAT31(local_4._1_3_,2);
    pcVar9 = local_46c;
    if (local_46c == (undefined1 *)0x0) {
      pcVar9 = &DAT_0064a3b4;
    }
    FUN_005acdb0(pcVar9);
    if (local_46c != (undefined1 *)0x0) {
      cVar1 = local_46c[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0(local_46c + -1);
      }
      else {
        local_46c[-1] = cVar1 + -1;
      }
    }
    local_46c = (char *)0x0;
    local_468 = 0;
    local_464 = 0;
    local_4 = 0xffffffff;
    FUN_005ae770();
    uVar3 = 1;
  }
  ExceptionList = local_c;
  return uVar3;
}

