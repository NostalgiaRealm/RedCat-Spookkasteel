/*
 * FUN_004b1150 at 004b1150
 * undefined FUN_004b1150(void)
 * Address ranges: 004b1150-004b140d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_004b1150(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  undefined1 extraout_AL;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 uVar9;
  uint uVar10;
  char *pcVar11;
  undefined1 auStack_3c [4];
  undefined1 *puStack_38;
  undefined1 local_2c [16];
  undefined1 auStack_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e790;
  pvStack_c = ExceptionList;
  iVar2 = DAT_006c8de0;
  ExceptionList = &pvStack_c;
  if (DAT_006c8de0 == 0) {
    ExceptionList = &pvStack_c;
    iVar2 = FUN_0055b280();
  }
  if (*(char *)(iVar2 + 0x125) == '\0') {
    local_2c[0] = param_1._0_1_;
    FUN_004040a0(0);
    uVar10 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,s___AdamSource_AdamEngine_h_0068eb58,
                                  0x12d,local_2c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar2 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar2 = FUN_0055b280();
  }
  if (*(char *)(iVar2 + 0x125) == '\0') {
    local_2c[0] = param_1._0_1_;
    FUN_004040a0(0);
    uVar10 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
    local_4 = 1;
    pcVar3 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,s___AdamSource_AdamEngine_h_0068eb58,
                                  0x127,local_2c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  auStack_3c[0] = *param_1;
  FUN_004040a0(0);
  FUN_0040cc00(param_1,0,0xffffffff);
  local_4 = 2;
  iVar4 = FUN_00518f30();
  iVar2 = *(int *)(iVar4 + 100);
  if (iVar2 == -0x80000000) {
    puVar5 = *(undefined1 **)(iVar4 + 0x18);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    iVar2 = FUN_0060af10(puVar5);
    *(int *)(iVar4 + 100) = iVar2;
  }
  if (iVar2 != 0) {
    uVar6 = FUN_004b1410(auStack_1c,auStack_3c);
    local_4._0_1_ = 3;
    FUN_0040cc00(uVar6,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
      }
    }
  }
  puVar5 = puStack_38;
  if (puStack_38 == (undefined1 *)0x0) {
    puVar5 = &DAT_0064a3b4;
  }
  iVar2 = __ftol();
  iVar4 = __ftol();
  FUN_004b0230();
  iVar7 = FUN_005bff90();
  FUN_004b0230();
  iVar8 = FUN_005c0070();
  FUN_004b0fb0(puVar5,iVar2,iVar7 + iVar2,iVar4,iVar8 + iVar4,param_4,param_5,param_6,param_7);
  uVar9 = extraout_var;
  if (puStack_38 != (undefined1 *)0x0) {
    cVar1 = puStack_38[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(puStack_38 + -1);
      uVar9 = extraout_var_00;
    }
    else {
      puStack_38[-1] = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return CONCAT31(uVar9,extraout_AL);
}

