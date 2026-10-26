/*
 * FUN_004b23e0 at 004b23e0
 * undefined FUN_004b23e0(void)
 * Address ranges: 004b23e0-004b2663
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004b250b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_004b23e0(undefined *param_1)

{
  char cVar1;
  HWND pHVar2;
  HDC hdc;
  code *pcVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  CHAR *pCVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined1 local_58 [4];
  undefined4 *local_54;
  uint local_50;
  undefined4 local_4c;
  tagLOGFONTA tStack_48;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e8b8;
  pvStack_c = ExceptionList;
  uVar5 = 0xffffffff;
  pcVar7 = &DAT_006b3f70;
  do {
    pcVar9 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  tStack_48.lfCharSet = '\x01';
  pcVar7 = pcVar9 + -uVar5;
  pCVar10 = tStack_48.lfFaceName;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pCVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pCVar10 = pCVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pCVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pCVar10 = pCVar10 + 1;
  }
  tStack_48.lfPitchAndFamily = '\0';
  ExceptionList = &pvStack_c;
  pHVar2 = GetDesktopWindow();
  hdc = GetDC(pHVar2);
  if (hdc == (HDC)0x0) {
    local_58[0] = param_1._0_1_;
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    local_54 = (undefined4 *)0x0;
    local_50 = 0;
    local_4c = 0;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      puVar12 = local_54;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar12 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      *(undefined1 *)((int)local_54 + uVar5) = 0;
      local_50 = uVar5;
    }
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(&PTR_LAB_00696c10,s_D__Work_RCHorror_AdamSource_Adam_00696748,
                                  0x362,local_58);
    (*pcVar3)();
    local_4 = 0xffffffff;
    if (local_54 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_54 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_54 + -1));
      }
      else {
        *(char *)((int)local_54 + -1) = cVar1 + -1;
      }
    }
    local_54 = (undefined4 *)0x0;
    local_50 = 0;
    local_4c = 0;
  }
  uVar5 = *(uint *)(param_1 + 8);
  if (param_1 == &DAT_006b9090) {
    if (DAT_006b9098 < uVar5) {
      FUN_005fe747();
    }
    FUN_0040ce10();
    iVar11 = -1;
    if (DAT_006b9098 - uVar5 != -1) {
      iVar11 = DAT_006b9098 - uVar5;
    }
    if (iVar11 != 0) {
      FUN_0060ab50((undefined1 *)((int)DAT_006b9094 + uVar5),
                   (undefined1 *)((int)DAT_006b9094 + uVar5) + iVar11,
                   (DAT_006b9098 - iVar11) - uVar5);
      iVar11 = DAT_006b9098 - iVar11;
      cVar1 = FUN_00401940(iVar11,0);
      if (cVar1 != '\0') {
        FUN_00404190(iVar11);
      }
    }
    FUN_0040c9b0(0,0);
  }
  else {
    if (uVar5 != 0) {
      puVar4 = *(undefined1 **)(param_1 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004040a0(1);
        DAT_006b9094 = *(undefined4 **)(param_1 + 4);
        if (DAT_006b9094 == (undefined4 *)0x0) {
          DAT_006b9094 = (undefined4 *)&DAT_0064a3b4;
        }
        DAT_006b9098 = *(uint *)(param_1 + 8);
        _DAT_006b909c = *(undefined4 *)(param_1 + 0xc);
        *(char *)((int)DAT_006b9094 + -1) = *(char *)((int)DAT_006b9094 + -1) + '\x01';
        goto LAB_004b2621;
      }
    }
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      puVar8 = (undefined4 *)&DAT_0064a3b4;
      if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
        puVar8 = *(undefined4 **)(param_1 + 4);
      }
      puVar12 = DAT_006b9094;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar12 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      FUN_00404190(uVar5);
    }
  }
LAB_004b2621:
  iVar11 = EnumFontFamiliesExA(hdc,&tStack_48,(FONTENUMPROCA)&LAB_004b23a0,0,0);
  pHVar2 = GetDesktopWindow();
  ReleaseDC(pHVar2,hdc);
  ExceptionList = pvStack_c;
  return iVar11 == 0;
}

