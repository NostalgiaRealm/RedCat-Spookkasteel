/*
 * FUN_004cd800 at 004cd800
 * undefined FUN_004cd800(void)
 * Address ranges: 004cd800-004cda79
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004cd800(int *param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined *puVar8;
  char *pcVar9;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [12];
  undefined1 auStack_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630f00;
  local_c = ExceptionList;
  if (*(char *)((int)param_1 + 0x172) == (char)param_2) {
    return;
  }
  ExceptionList = &local_c;
  *(char *)((int)param_1 + 0x172) = (char)param_2;
  switch(param_1[99]) {
  case 0:
    goto switchD_004cd841_caseD_0;
  case 1:
    if ((char)param_2 == '\0') {
      puVar8 = &DAT_006ba2c0;
    }
    else {
      puVar8 = &DAT_006ba360;
    }
    break;
  case 2:
    if ((char)param_2 == '\0') {
      puVar8 = &DAT_006ba298;
    }
    else {
      puVar8 = &DAT_006ba338;
    }
    break;
  case 3:
    if ((char)param_2 == '\0') {
      puVar8 = &DAT_006ba270;
    }
    else {
      puVar8 = &DAT_006ba310;
    }
    break;
  case 4:
    if ((char)param_2 == '\0') {
      puVar8 = &DAT_006ba240;
    }
    else {
      puVar8 = &DAT_006ba2e8;
    }
    break;
  default:
    puVar5 = (undefined1 *)param_1[0x18];
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    uVar6 = FUN_005ae390(local_1c,s_CAdamDoorModel__SetIsLocked_____D_00698e60,param_1[99],puVar5);
    local_4 = 0;
    FUN_005035a0(uVar6);
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(local_18 + -1) = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_005fe5f0((char *)(local_18 + -1));
      ExceptionList = local_c;
      return;
    }
    goto switchD_004cd841_caseD_0;
  }
  if (puVar8 != (undefined *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x48))(local_38);
    uStack_44 = *puVar2;
    uStack_40 = puVar2[1];
    uStack_3c = puVar2[2];
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xfc) == 0) {
      auStack_2c[0] = (char)param_2;
      uVar7 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      iStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4 = 1;
      pcVar4 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399,auStack_2c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      if (iStack_28 != 0) {
        cVar1 = *(char *)(iStack_28 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(iStack_28 + -1));
        }
        else {
          *(char *)(iStack_28 + -1) = cVar1 + -1;
        }
      }
      iStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
    }
    FUN_0054ea00(&param_2,puVar8,&uStack_44,0,1,0x3f800000,0,0);
    if ((param_2 != 0) &&
       (iVar3 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar3, iVar3 == 0)) {
      FUN_005abfc0(0);
    }
  }
switchD_004cd841_caseD_0:
  ExceptionList = local_c;
  return;
}

