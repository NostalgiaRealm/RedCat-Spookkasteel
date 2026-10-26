/*
 * FUN_005af3c0 at 005af3c0
 * undefined FUN_005af3c0(void)
 * Address ranges: 005af3c0-005af8d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005af3c0(char *param_1,char *param_2)

{
  char cVar1;
  code *pcVar2;
  void *pvVar3;
  LPCSTR lpText;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 local_84 [4];
  LPCSTR pCStack_80;
  char *pcStack_70;
  undefined1 auStack_64 [4];
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined **ppuStack_44;
  undefined1 uStack_38;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646079;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_006cad9c == 0) {
    ExceptionList = &pvStack_c;
    if (DAT_006cada0 != '\0') {
      ExceptionList = &pvStack_c;
      FUN_00409810();
      local_4 = 0;
      pcVar2 = (code *)FUN_005a07f0();
      (*pcVar2)();
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    pvVar3 = operator_new(0x14);
    local_4 = 1;
    if (pvVar3 == (void *)0x0) {
      DAT_006cad9c = 0;
    }
    else {
      DAT_006cad9c = FUN_005af8e0();
    }
    DAT_006cada0 = '\x01';
  }
  iVar6 = DAT_006cad9c;
  local_4 = 0xffffffff;
  FUN_004040a0();
  local_4 = 2;
  pcVar4 = s_Second_____006a9150;
  if (DAT_006cada1 == '\0') {
    pcVar4 = &DAT_006b3f70;
  }
  FUN_005ae390(auStack_64,s__sAssertion_fails___s___d____s___006a912c,pcVar4);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_005aefb0(auStack_64);
  FUN_005b1740();
  iVar5 = -1;
  pcVar4 = &DAT_006b3f70;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  DAT_006cada1 = 1;
  FUN_004040f0();
  iVar5 = -1;
  pcVar4 = s_DaviAssert__006a911c;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00484c30();
  iVar5 = -1;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  FUN_00484c30();
  iVar5 = -1;
  pcVar4 = &DAT_006a9118;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00484c30();
  iVar5 = *(int *)(iVar6 + 4);
  if ((iVar5 != 0) && (0 < (int)(*(int *)(iVar6 + 8) - iVar5 & 0xfffffffcU))) {
    iVar6 = -1;
    pcVar4 = s________________________________006a90f4;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00484c30();
    FUN_005ae9d0();
    iVar6 = -1;
    pcVar4 = s________________________________006a90d4;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00484c30();
  }
  iVar6 = -1;
  pcVar4 = &DAT_006b3f70;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar6 = FUN_004251b0();
  if (iVar6 != 0) {
    FUN_0045db40();
    iVar6 = -1;
    pcVar4 = &DAT_006a90d0;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00484c30();
  }
  iVar6 = -1;
  pcVar4 = s_FILE_006a90c8;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00484c30();
  iVar6 = -1;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  FUN_00484c30();
  iVar6 = -1;
  pcVar4 = s_LINE_006a90c0;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00484c30();
  FUN_005ae390();
  local_4._0_1_ = 4;
  FUN_0045db40();
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_004040a0();
  iVar6 = -1;
  pcVar4 = &DAT_006a90d0;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00484c30();
  if (DAT_006a9020 == 0) {
    lpText = pCStack_80;
    if (pCStack_80 == (LPCSTR)0x0) {
      lpText = "";
    }
    MessageBoxA((HWND)0x0,lpText,s_DaviTrace_exception_006a9080,0x10);
    FUN_0060d897();
    if (iStack_60 != 0) {
      cVar1 = *(char *)(iStack_60 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0();
      }
      else {
        *(char *)(iStack_60 + -1) = cVar1 + -1;
      }
    }
    iStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    if (pCStack_80 != (LPCSTR)0x0) {
      cVar1 = pCStack_80[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0();
      }
      else {
        pCStack_80[-1] = cVar1 + -1;
      }
    }
    ExceptionList = pvStack_c;
    return;
  }
  if (DAT_006a9020 != 1) {
    FUN_004040a0();
    uVar7 = 0xffffffff;
    pcVar4 = s_Invalid_value_for_CDaviTrace__m__006a9094;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    cVar1 = FUN_00401940();
    if (cVar1 != '\0') {
      pcVar4 = s_Invalid_value_for_CDaviTrace__m__006a9094;
      for (uVar8 = ~uVar7 - 1 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcStack_70 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcStack_70 = pcStack_70 + 4;
      }
      for (uVar7 = ~uVar7 - 1 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcStack_70 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcStack_70 = pcStack_70 + 1;
      }
      FUN_00404190();
    }
    local_4._0_1_ = 5;
    FUN_005aff20();
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_004040a0();
  }
  FUN_004040a0(0);
  FUN_0040cc00(local_84,0,0xffffffff);
  iVar6 = FUN_004bf8f0();
  local_4._0_1_ = 6;
  FUN_0060b3a2();
  uStack_38 = *(undefined1 *)(iVar6 + 0xc);
  local_4._0_1_ = 7;
  FUN_004040a0();
  FUN_0040cc00();
  ppuStack_44 = &PTR_FUN_0064ee2c;
  local_4 = CONCAT31(local_4._1_3_,6);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8();
}

