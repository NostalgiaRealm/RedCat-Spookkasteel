/*
 * FUN_00423be0 at 00423be0
 * undefined FUN_00423be0(void)
 * Address ranges: 00423be0-00423f37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00423be0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar10 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00622668;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_1[0x42] != 0) {
    ExceptionList = &pvStack_c;
    if (param_1[0x42] == 0) {
      local_2c[0] = (undefined1)param_2;
      ExceptionList = &pvStack_c;
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
      local_4 = 0;
      pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_2c);
      (*pcVar2)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    cVar1 = FUN_005530e0();
    if (cVar1 != '\0') {
      if ((char)param_1[0x43] == '\0') {
        ExceptionList = pvStack_c;
        return;
      }
      iVar3 = FUN_005a1d60();
      puVar4 = *(undefined1 **)(iVar3 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      iVar3 = FUN_004251b0(0,param_1[0x46],puVar4,*(undefined4 *)(iVar3 + 8));
      if (iVar3 == 0) {
        ExceptionList = pvStack_c;
        return;
      }
      if (param_1[0x42] == 0) {
        local_2c[0] = (undefined1)param_2;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar9 = &DAT_006b3f70;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
        local_4 = 1;
        pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_2c);
        (*pcVar2)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      FUN_00553130();
    }
  }
  iVar3 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar3 = FUN_0055b280();
  }
  if (*(int *)(iVar3 + 0xfc) == 0) {
    local_2c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
    local_4 = 2;
    pcVar2 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,399,
                                  local_2c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x48))(local_2c);
  uVar7 = param_3;
  uStack_38 = *puVar5;
  uStack_34 = puVar5[1];
  uStack_30 = puVar5[2];
  piVar6 = (int *)FUN_0054ea00(&param_2,iVar10,&uStack_38,param_3,1,0x3f800000,0,0);
  iVar10 = param_1[0x42];
  local_4 = 3;
  if (iVar10 != *piVar6) {
    if ((iVar10 != 0) &&
       (iVar3 = *(int *)(iVar10 + 0x14) + -1, *(int *)(iVar10 + 0x14) = iVar3, iVar3 == 0)) {
      FUN_005abfc0(0);
    }
    iVar10 = *piVar6;
    param_1[0x42] = iVar10;
    if (iVar10 != 0) {
      *(int *)(iVar10 + 0x14) = *(int *)(iVar10 + 0x14) + 1;
    }
  }
  local_4 = 0xffffffff;
  if ((param_2 != 0) &&
     (iVar10 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar10, iVar10 == 0)) {
    FUN_005abfc0(0);
  }
  if (param_1[0x42] == 0) {
    auStack_1c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
    local_4 = 4;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  auStack_1c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  FUN_00553610(param_4);
  *(char *)(param_1 + 0x43) = (char)uVar7;
  uVar7 = FUN_005a1d60();
  FUN_0040cc00(uVar7,0,0xffffffff);
  ExceptionList = pvStack_c;
  return;
}

