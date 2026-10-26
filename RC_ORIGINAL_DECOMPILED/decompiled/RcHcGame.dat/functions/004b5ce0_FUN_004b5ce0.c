/*
 * FUN_004b5ce0 at 004b5ce0
 * undefined FUN_004b5ce0(void)
 * Address ranges: 004b5ce0-004b618c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004b5ea4) */

undefined4 * __thiscall
FUN_004b5ce0(undefined4 *param_1,char **param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char **ppcVar10;
  char *pcStack_3c;
  char *local_28;
  undefined1 local_24 [4];
  undefined4 *local_20;
  char local_1c [4];
  char *pcStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062ed4e;
  pvStack_c = ExceptionList;
  pcStack_3c = (char *)0x0;
  ExceptionList = &pvStack_c;
  local_20 = param_1;
  FUN_005914f0(param_2);
  pcStack_3c = (char *)0xffffffff;
  local_4 = 0;
  param_1[0x68] = 1;
  param_1[0x69] = 0x3e4ccccd;
  param_1[0x6a] = 0x3e99999a;
  FUN_004041b0();
  piVar1 = param_1 + 0x77;
  param_1[0x70] = 0x411ccccd;
  *piVar1 = 0;
  local_4._0_1_ = 1;
  *param_1 = &PTR_FUN_0064ec64;
  local_28 = (char *)0x0;
  pcStack_3c = (char *)0x4b5d6b;
  FUN_005844b0();
  local_4._0_1_ = 2;
  iVar3 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    pcStack_3c = (char *)0x4b5d7f;
    iVar3 = FUN_0055b280();
  }
  if (*(int *)(iVar3 + 0xd8) == 0) {
    pcStack_3c = (char *)&param_2;
    FUN_00409810(&DAT_006b3f70);
    pcStack_3c = local_1c;
    local_4._0_1_ = 3;
    pcVar4 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188)
    ;
    (*pcVar4)();
    local_4._0_1_ = 2;
    pcStack_3c = (char *)0x1;
    FUN_004040a0();
  }
  pcStack_3c = &DAT_006b9d88;
  piVar5 = (int *)FUN_0050d730(local_24);
  local_4._0_1_ = 4;
  if (*piVar1 != *piVar5) {
    if (*piVar1 != 0) {
      pcStack_3c = (char *)0x4b5e00;
      FUN_004098d0();
    }
    *piVar1 = *piVar5;
    pcStack_3c = (char *)0x4b5e0b;
    FUN_005844b0();
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  pcStack_3c = (char *)0x4b5e19;
  FUN_0057d310();
  iVar3 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    pcStack_3c = (char *)0x4b5e28;
    iVar3 = FUN_0055b280();
  }
  if (*(int *)(iVar3 + 0xd8) == 0) {
    pcStack_3c = (char *)&param_2;
    FUN_00409810(&DAT_006b3f70);
    pcStack_3c = local_1c;
    local_4._0_1_ = 5;
    pcVar4 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188)
    ;
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,2);
    pcStack_3c = (char *)0x1;
    FUN_004040a0();
  }
  pcStack_3c = &DAT_006b9dc8;
  piVar5 = (int *)FUN_0050d730(local_24);
  if (*piVar5 != 0) {
    local_4._0_1_ = 6;
    local_28 = (char *)*piVar5;
    pcStack_3c = (char *)0x4b5eb8;
    FUN_005844b0();
  }
  local_4._0_1_ = 2;
  pcStack_3c = (char *)0x4b5ec6;
  FUN_0057d310();
  if ((*piVar1 != 0) && (local_28 != (char *)0x0)) {
    param_2 = &pcStack_3c;
    pcStack_3c = local_28;
    if (local_28 != (char *)0x0) {
      *(int *)(local_28 + 0x14) = *(int *)(local_28 + 0x14) + 1;
    }
    local_4._0_1_ = 2;
    FUN_00412de0();
    FUN_0050aea0();
  }
  pcStack_3c = (char *)*piVar1;
  param_2 = &pcStack_3c;
  if (pcStack_3c != (char *)0x0) {
    *(int *)(pcStack_3c + 0x14) = *(int *)(pcStack_3c + 0x14) + 1;
  }
  FUN_00437280();
  pcStack_3c = (char *)0x4b5f18;
  iVar3 = FUN_0060a4a0();
  pcStack_3c = (char *)0x3e8;
  param_2 = (char **)(iVar3 % 10000);
  param_1[0x41] = param_5;
  param_1[0x40] = param_4;
  param_1[0x3f] = param_3;
  param_1[0x4c] = (float)(int)param_2 * 3.0000001e-05 + 0.25;
  FUN_004041b0();
  param_1[0x71] = 0x40a00000;
  param_1[0x72] = 0x42480000;
  param_1[0x73] = 0x40a00000;
  param_1[0x74] = param_1[0x71];
  param_1[0x75] = param_1[0x72];
  param_1[0x76] = param_1[0x73];
  param_1[0x6b] = 0xffffffff;
  param_1[0x6c] = 0xffffffff;
  param_1[0x6d] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x6e) = 1;
  pcStack_3c = (char *)0x4b5fc7;
  iVar3 = FUN_0060a4a0();
  param_2 = (char **)(iVar3 % 10000);
  param_1[0x5f] = (float)(int)param_2 * 0.001 + 80.0;
  pcStack_3c = (char *)0x4b5fee;
  iVar3 = FUN_0060a4a0();
  param_2 = (char **)(iVar3 % 10000);
  param_1[0x60] = (float)(int)param_2 * 0.002 + 50.0;
  pcStack_3c = (char *)0x4b6015;
  iVar3 = FUN_0060a4a0();
  param_2 = (char **)(iVar3 % 10000);
  param_1[0x61] = (float)(int)param_2 * 0.001 + 80.0;
  pcStack_3c = (char *)0x4b603c;
  iVar3 = FUN_0060a4a0();
  pcStack_3c = (char *)0x1;
  param_2 = (char **)(iVar3 % 10000);
  param_1[0x62] = (float)(int)param_2 * 0.002 + 40.0;
  FUN_00591dc0();
  iVar3 = param_1[0x67];
  if (iVar3 != 0) {
    pcStack_3c = (char *)0x0;
    *(undefined4 *)(iVar3 + 0x40) = 0x437a0000;
    *(undefined4 *)(iVar3 + 0x44) = 0x437a0000;
    *(undefined4 *)(iVar3 + 0x48) = 0x43480000;
    *(undefined4 *)(iVar3 + 0x4c) = 0x43340000;
    *(undefined4 *)(iVar3 + 0x3c) = 0x3f23d70a;
    *(undefined4 *)(iVar3 + 0x50) = 0x41800000;
    *(undefined4 *)(iVar3 + 0x58) = 300;
    local_1c[0] = (char)param_2;
    FUN_004040a0();
    uVar6 = 0xffffffff;
    pcStack_3c = (char *)0x1;
    pcVar7 = s_grobber_trail3_bmp_00697098;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    pcVar7 = (char *)(~uVar6 - 1);
    param_2 = (char **)pcVar7;
    cVar2 = FUN_00401940(pcVar7);
    if (cVar2 != '\0') {
      pcVar8 = s_grobber_trail3_bmp_00697098;
      pcVar9 = pcStack_18;
      for (uVar6 = (uint)pcVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = (uint)pcVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      pcStack_3c = pcVar7;
      FUN_00404190();
    }
    param_2 = &pcStack_3c;
    ppcVar10 = &pcStack_3c;
    pcVar7 = local_1c;
    local_4._0_1_ = 9;
    FUN_00454200(&pcStack_3c,pcVar7);
    FUN_0047d800();
    FUN_0050d980(ppcVar10,pcVar7);
    FUN_00587100();
    if (pcStack_18 != (char *)0x0) {
      pcStack_3c = pcStack_18 + -1;
      cVar2 = pcStack_18[-1];
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0();
      }
      else {
        *pcStack_3c = cVar2 + -1;
      }
    }
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  if ((local_28 != (char *)0x0) &&
     (iVar3 = *(int *)(local_28 + 0x14), *(int *)(local_28 + 0x14) = iVar3 + -1, iVar3 + -1 == 0)) {
    pcStack_3c = (char *)0x0;
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return param_1;
}

