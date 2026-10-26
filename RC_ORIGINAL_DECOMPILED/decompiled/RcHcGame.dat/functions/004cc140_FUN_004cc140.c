/*
 * FUN_004cc140 at 004cc140
 * undefined FUN_004cc140(void)
 * Address ranges: 004cc140-004cc325
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004cc140(int *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  undefined *puVar8;
  char *pcVar9;
  int iStack_48;
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
  puStack_8 = &LAB_00630d80;
  local_c = ExceptionList;
  switch(param_1[99]) {
  case 0:
    goto switchD_004cc16a_caseD_0;
  case 1:
    puVar8 = &DAT_006ba408;
    break;
  case 2:
    puVar8 = &DAT_006ba3e0;
    break;
  case 3:
    puVar8 = &DAT_006ba3b8;
    break;
  case 4:
    puVar8 = &DAT_006ba388;
    break;
  default:
    goto switchD_004cc16a_default;
  }
  if (puVar8 == (undefined *)0x0) {
switchD_004cc16a_default:
    puVar2 = (undefined1 *)param_1[0x18];
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0064a3b4;
    }
    ExceptionList = &local_c;
    uVar3 = FUN_005ae390(local_1c,s_CAdamDoorModel__PlayDoorOpenSoun_00698e0c,param_1[99],puVar2);
    local_4 = 0;
    FUN_005035a0(uVar3);
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
  }
  else {
    ExceptionList = &local_c;
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x48))(local_38);
    uStack_44 = *puVar4;
    uStack_40 = puVar4[1];
    uStack_3c = puVar4[2];
    iVar5 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar5 = FUN_0055b280();
    }
    if (*(int *)(iVar5 + 0xfc) == 0) {
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
      pcVar6 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399,auStack_2c);
      (*pcVar6)();
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
    FUN_0054ea00(&iStack_48,puVar8,&uStack_44,0,1,0x3f800000,0,0);
    if ((iStack_48 != 0) &&
       (iVar5 = *(int *)(iStack_48 + 0x14) + -1, *(int *)(iStack_48 + 0x14) = iVar5, iVar5 == 0)) {
      FUN_005abfc0(0);
    }
  }
switchD_004cc16a_caseD_0:
  ExceptionList = local_c;
  return;
}

