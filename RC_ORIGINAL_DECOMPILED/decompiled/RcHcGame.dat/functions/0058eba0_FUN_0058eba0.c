/*
 * FUN_0058eba0 at 0058eba0
 * undefined FUN_0058eba0(void)
 * Address ranges: 0058eba0-0058eeac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0058eba0(int param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  float *pfVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 uStack_38;
  int local_34;
  int local_30;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  undefined1 local_1c [12];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_006433c3;
  pvStack_c = ExceptionList;
  local_30 = 0;
  local_34 = 0;
  local_4 = 1;
  uStack_3 = 0;
  ExceptionList = &pvStack_c;
  if (DAT_006c8de0 == 0) {
    ExceptionList = &pvStack_c;
    FUN_0055b280();
  }
  piVar2 = (int *)FUN_00421750();
  local_4 = 2;
  if (local_30 != *piVar2) {
    if ((local_30 != 0) &&
       (iVar8 = *(int *)(local_30 + 0x14) + -1, *(int *)(local_30 + 0x14) = iVar8, iVar8 == 0)) {
      FUN_005abfc0();
    }
    local_30 = *piVar2;
    FUN_005844b0();
  }
  _local_4 = CONCAT31(uStack_3,1);
  FUN_0057d310();
  iVar8 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar8 = FUN_004bc480();
  }
  if (*(int *)(iVar8 + 0x3a4) == 0) {
    FUN_00409810(&DAT_006b3f70,(int)&uStack_38 + 3);
    local_4 = 3;
    pcVar3 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130)
    ;
    (*pcVar3)();
    _local_4 = CONCAT31(uStack_3,1);
    FUN_004040a0();
  }
  piVar2 = (int *)FUN_00453d20();
  local_4 = 4;
  if (local_34 != *piVar2) {
    if ((local_34 != 0) &&
       (iVar8 = *(int *)(local_34 + 0x14) + -1, *(int *)(local_34 + 0x14) = iVar8, iVar8 == 0)) {
      FUN_005abfc0();
    }
    local_34 = *piVar2;
    FUN_005844b0();
  }
  local_4 = 1;
  FUN_0057d310();
  if (local_30 == 0) {
    fStack_28 = 0.0;
    uVar6 = 0xffffffff;
    fStack_24 = 0.0;
    pcVar9 = s_No_current_camera_____006a6254;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    fStack_20 = 0.0;
    cVar1 = FUN_00401940(uVar6,1);
    if (cVar1 != '\0') {
      pcVar9 = s_No_current_camera_____006a6254;
      pcVar10 = *(char **)(param_1 + 4);
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
      FUN_00404190();
    }
  }
  else {
    pfVar4 = (float *)FUN_00556840(local_1c,0x43480000);
    fStack_28 = *pfVar4;
    fStack_24 = pfVar4[1];
    fStack_20 = pfVar4[2];
    FUN_005ae390(local_1c,s_Created_explosion_at___f___f___f_006a626c,(double)fStack_28,
                 (double)fStack_24,(double)fStack_20);
    local_4 = 6;
    FUN_0040cc00();
    local_4 = 1;
    FUN_004040a0();
  }
  piVar2 = (int *)0x0;
  pvVar5 = operator_new(0x194);
  local_4 = 7;
  if (pvVar5 != (void *)0x0) {
    piVar2 = (int *)FUN_0058d500();
  }
  _local_4 = CONCAT31(uStack_3,1);
  (**(code **)(*piVar2 + 0x4c))(&fStack_28);
  FUN_00502350(1);
  if (uStack_38 == 0) {
    FUN_00409810(&DAT_006b3f70,&stack0x00000000);
    puStack_8._0_1_ = 8;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  &fStack_20);
    (*pcVar3)();
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
    FUN_004040a0(1);
  }
  FUN_004f41c0(piVar2);
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  if (uStack_38 != 0) {
    FUN_004098d0();
    uStack_38 = 0;
  }
  puStack_8 = (undefined1 *)0xffffffff;
  if (local_34 != 0) {
    iVar8 = *(int *)(local_34 + 0x14) + -1;
    *(int *)(local_34 + 0x14) = iVar8;
    if (iVar8 == 0) {
      FUN_005abfc0(0);
    }
  }
  ExceptionList = pvStack_10;
  return 1;
}

