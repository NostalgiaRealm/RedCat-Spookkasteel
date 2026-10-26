/*
 * FUN_005a6530 at 005a6530
 * undefined FUN_005a6530(void)
 * Address ranges: 005a6530-005a6798
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005a6530(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *unaff_EBX;
  char *unaff_ESI;
  char *pcVar5;
  char *pcVar6;
  void *pvStack_28;
  void *pvStack_24;
  void *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00645688;
  pvStack_c = ExceptionList;
  local_1c = (void *)0x6f1d2b61;
  local_10 = 0x5453;
  local_14 = 0x4544c7bf;
  local_18 = 0x11cfd5a0;
  ExceptionList = &pvStack_c;
  iVar2 = (**(code **)(*DAT_006cad50 + 0xc))(DAT_006cad50,&local_1c,&DAT_006cad4c,0);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*DAT_006cad4c + 0x34))(DAT_006cad4c,pvStack_c,6);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*DAT_006cad4c + 0x2c))(DAT_006cad4c,&DAT_006513d0);
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*DAT_006cad4c + 0x1c))(DAT_006cad4c);
        DAT_006cad48 = -1 < iVar2;
        ExceptionList = pvStack_28;
        return 1;
      }
      FUN_004040a0(0);
      uVar3 = 0xffffffff;
      pcVar5 = s_Couldn_t_set_data_receive_format_006a8158;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3 - 1;
      cVar1 = FUN_00401940(uVar3,1);
      if (cVar1 != '\0') {
        pcVar5 = s_Couldn_t_set_data_receive_format_006a8158;
        pcVar6 = unaff_EBX;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar6 = pcVar6 + 4;
        }
        for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar6 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        }
        unaff_EBX[uVar3] = '\0';
      }
      local_1c = (void *)0x2;
      FUN_005aff20(s_D__Work_RCHorror_AdamSource_Davi_006a81dc,0x4a,&stack0xffffffbc);
      local_1c = (void *)0xffffffff;
      FUN_004040a0(1);
      ExceptionList = pvStack_24;
      return 0;
    }
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar5 = s_Couldn_t_set_cooperation_level_f_006a819c;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      pcVar5 = s_Couldn_t_set_cooperation_level_f_006a819c;
      pcVar6 = unaff_ESI;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      unaff_ESI[uVar3] = '\0';
    }
    local_14 = 1;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Davi_006a81dc,0x2a,&stack0xffffffb4);
  }
  else {
    uVar3 = 0xffffffff;
    pcVar5 = s_Couldn_t_create_DirectInput_keyb_006a8208;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(s_Couldn_t_create_DirectInput_keyb_006a8208,~uVar3 - 1);
    local_14 = 0;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Davi_006a81dc,0x23,&stack0xffffffb4);
    unaff_ESI = (char *)0x0;
  }
  if (unaff_ESI != (char *)0x0) {
    cVar1 = unaff_ESI[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      unaff_ESI[-1] = cVar1 + -1;
      ExceptionList = local_1c;
      return 0;
    }
    FUN_005fe5f0(unaff_ESI + -1);
  }
  ExceptionList = local_1c;
  return 0;
}

