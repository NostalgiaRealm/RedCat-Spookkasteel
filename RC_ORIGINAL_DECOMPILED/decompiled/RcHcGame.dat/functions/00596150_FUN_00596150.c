/*
 * FUN_00596150 at 00596150
 * undefined FUN_00596150(void)
 * Address ranges: 00596150-0059647f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00596150(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  char *pcVar11;
  float10 fVar12;
  int iStack_34;
  undefined1 local_30 [4];
  int iStack_2c;
  undefined1 local_20 [4];
  undefined4 uStack_1c;
  float fStack_18;
  float fStack_14;
  undefined1 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643d60;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00595470();
  cVar3 = FUN_0059be60();
  if (cVar3 == '\0') {
    FUN_00595470();
    iVar4 = FUN_0059bc20();
  }
  else {
    FUN_00595470();
    iVar4 = FUN_0059bd30();
  }
  if (iVar4 == 0) {
    local_30[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar10 = 0xffffffff;
    pcVar11 = s_no_way_point_found_to_get_target_006a6a54;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar3 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(s_no_way_point_found_to_get_target_006a6a54,~uVar10 - 1);
    local_4 = iVar4;
    pcVar5 = (code *)FUN_005a07f0(s_latestWayPoint____NULL_006a6a0c,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a6a24,0x19e,local_30);
    (*pcVar5)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  FUN_0059b1c0();
  local_4 = 1;
  FUN_005951d0();
  piVar6 = (int *)FUN_004042e0(&iStack_34);
  local_4._0_1_ = 2;
  if (*piVar6 == 0) {
    local_30[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar10 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar3 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
    local_4._0_1_ = 3;
    pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_30);
    (*pcVar5)();
    local_4._0_1_ = 2;
    FUN_004040a0(1);
  }
  iVar4 = *(int *)(*piVar6 + 0x360);
  local_4._0_1_ = 1;
  if (iStack_34 != 0) {
    FUN_004098d0();
    iStack_34 = 0;
  }
  if ((iVar4 == 0) || (*(char *)(iVar4 + 0xa8) == '\0')) {
    if (*(char *)(param_1 + 0xa9) != '\0') {
      puVar9 = *(undefined1 **)(param_1 + 0x60);
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &DAT_0064a3b4;
      }
      uVar7 = FUN_005ae390(local_30,s_CursorActor__s_has_no_target_or_t_006a69d8,puVar9);
      local_4._0_1_ = 4;
      FUN_005aff00(uVar7);
      local_4._0_1_ = 1;
      if (iStack_2c != 0) {
        cVar3 = *(char *)(iStack_2c + -1);
        if ((cVar3 == '\0') || (cVar3 == -1)) {
          FUN_005fe5f0((char *)(iStack_2c + -1));
        }
        else {
          *(char *)(iStack_2c + -1) = cVar3 + -1;
        }
      }
    }
    FUN_005951d0();
  }
  else {
    uVar7 = FUN_00599450(&iStack_34);
    local_4._0_1_ = 5;
    FUN_0059b1d0(uVar7);
    local_4._0_1_ = 1;
    FUN_005630e0();
    puVar8 = (undefined4 *)FUN_0059a280(param_2);
    uStack_1c = *puVar8;
    fVar2 = (float)puVar8[1];
    fStack_14 = (float)puVar8[2];
    fStack_18 = fVar2;
    if ((char)uStack_1c == '\0') {
      uStack_10 = 0;
    }
    else {
      uVar7 = FUN_00595d60();
      fVar12 = (float10)FUN_005b15f0(uVar7);
      fVar12 = (float10)FUN_005b1630((float)((float10)fStack_14 - fVar12));
      iVar4 = FUN_005954a0();
      fVar1 = *(float *)(iVar4 + 0xc);
      iVar4 = FUN_005954a0();
      if ((fVar2 < *(float *)(iVar4 + 4)) ||
         (((float)ABS(fVar12) < fVar1 * 0.5 &&
          (iVar4 = FUN_005954a0(), fVar2 < *(float *)(iVar4 + 8))))) {
        uStack_10 = 1;
      }
      else {
        uStack_10 = 0;
      }
    }
  }
  FUN_0059b1d0(local_20);
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x334) = uStack_1c;
  *(float *)(param_1 + 0x338) = fStack_18;
  *(undefined1 *)(param_1 + 0x340) = uStack_10;
  *(float *)(param_1 + 0x33c) = fStack_14;
  FUN_005630e0();
  ExceptionList = pvStack_c;
  return;
}

