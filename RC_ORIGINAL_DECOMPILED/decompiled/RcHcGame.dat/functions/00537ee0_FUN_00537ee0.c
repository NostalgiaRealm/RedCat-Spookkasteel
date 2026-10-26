/*
 * FUN_00537ee0 at 00537ee0
 * undefined FUN_00537ee0(void)
 * Address ranges: 00537ee0-0053821a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00537ee0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint uVar5;
  char *pcVar6;
  int local_44;
  int local_40;
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [4];
  int iStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063baf0;
  local_c = ExceptionList;
  switch(param_1) {
  case 0:
  case 4:
    break;
  case 1:
    iVar2 = DAT_006c8de0;
    ExceptionList = &local_c;
    if (DAT_006c8de0 == 0) {
      ExceptionList = &local_c;
      iVar2 = FUN_0055b280();
    }
    if (*(int *)(iVar2 + 0xfc) == 0) {
      local_3c[0] = (undefined1)param_1;
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar6 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
      local_4 = 0;
      pcVar4 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399,local_3c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    FUN_0054ffe0(&param_1,&DAT_006ba128,0,0x40000000,0,0);
    if ((param_1 != 0) &&
       (iVar2 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar2, iVar2 == 0)) {
      FUN_005abfc0(0);
      ExceptionList = local_c;
      return;
    }
    break;
  case 2:
    iVar2 = DAT_006c8de0;
    ExceptionList = &local_c;
    if (DAT_006c8de0 == 0) {
      ExceptionList = &local_c;
      iVar2 = FUN_0055b280();
    }
    if (*(int *)(iVar2 + 0xfc) == 0) {
      local_3c[0] = (undefined1)param_1;
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar6 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
      local_4 = 1;
      pcVar4 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399,local_3c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    FUN_0054ffe0(&local_44,&DAT_006ba0f8,0,0x40000000,0,0);
    if ((local_44 != 0) &&
       (iVar2 = *(int *)(local_44 + 0x14) + -1, *(int *)(local_44 + 0x14) = iVar2, iVar2 == 0)) {
      FUN_005abfc0(0);
      ExceptionList = local_c;
      return;
    }
    break;
  case 3:
    iVar2 = DAT_006c8de0;
    ExceptionList = &local_c;
    if (DAT_006c8de0 == 0) {
      ExceptionList = &local_c;
      iVar2 = FUN_0055b280();
    }
    if (*(int *)(iVar2 + 0xfc) == 0) {
      local_2c[0] = (undefined1)param_1;
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar6 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
      local_4 = 2;
      pcVar4 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399,local_2c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    FUN_0054ffe0(&local_40,&DAT_006ba0d0,0,0x40000000,0,0);
    if ((local_40 != 0) &&
       (iVar2 = *(int *)(local_40 + 0x14) + -1, *(int *)(local_40 + 0x14) = iVar2, iVar2 == 0)) {
      FUN_005abfc0(0);
      ExceptionList = local_c;
      return;
    }
    break;
  default:
    ExceptionList = &local_c;
    uVar3 = FUN_005ae390(local_1c,s_No_such_menu_sound_type___i___006a0d88,param_1);
    local_4 = 3;
    pcVar4 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_006a0d5c,0x48,
                                  uVar3);
    (*pcVar4)();
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_005fe5f0((char *)(iStack_18 + -1));
    }
  }
  ExceptionList = local_c;
  return;
}

