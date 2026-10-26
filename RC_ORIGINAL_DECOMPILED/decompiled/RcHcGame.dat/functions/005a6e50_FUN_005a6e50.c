/*
 * FUN_005a6e50 at 005a6e50
 * undefined FUN_005a6e50(void)
 * Address ranges: 005a6e50-005a7031
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005a6e50(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 unaff_EBX;
  char *pcVar5;
  char *pcVar6;
  undefined1 auStack_30 [4];
  char *pcStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_1c [4];
  char *local_18;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645710;
  local_c = ExceptionList;
  if (DAT_006cad50 == 0) {
    return 1;
  }
  if (DAT_006cad44 == (int *)0x0) {
    uVar3 = 0xffffffff;
    pcVar5 = s_Couldn_t_ReAcquire__Mouse_device_006a83a4;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    DAT_006cad40 = 0;
    local_18 = (char *)0x0;
    local_14 = 0;
    local_10 = (void *)0x0;
    ExceptionList = &local_c;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      pcVar5 = s_Couldn_t_ReAcquire__Mouse_device_006a83a4;
      pcVar6 = local_18;
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
      FUN_00404190(uVar3);
    }
    local_4 = 1;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Davi_006a81dc,0x12a,local_1c);
    if (local_18 != (char *)0x0) {
      cVar1 = local_18[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0(local_18 + -1);
      }
      else {
        local_18[-1] = cVar1 + -1;
      }
    }
    ExceptionList = local_c;
    return 0;
  }
  ExceptionList = &local_c;
  iVar2 = (**(code **)(*DAT_006cad44 + 0x1c))(DAT_006cad44);
  if (iVar2 < 0) {
    uVar3 = 0xffffffff;
    auStack_30[0] = (undefined1)((uint)unaff_EBX >> 0x18);
    pcVar5 = s_Couldn_t_acquire_DirectInput_mou_006a8234;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    DAT_006cad40 = 0;
    pcStack_2c = (char *)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      pcVar5 = s_Couldn_t_acquire_DirectInput_mou_006a8234;
      pcVar6 = pcStack_2c;
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
      FUN_00404190(uVar3);
    }
    puStack_8 = (undefined1 *)0x0;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Davi_006a81dc,0x123,auStack_30);
    if (pcStack_2c != (char *)0x0) {
      cVar1 = pcStack_2c[-1];
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        pcStack_2c[-1] = cVar1 + -1;
        DAT_006cad40 = 1;
        ExceptionList = local_10;
        return 1;
      }
      FUN_005fe5f0(pcStack_2c + -1);
    }
  }
  DAT_006cad40 = 1;
  ExceptionList = local_10;
  return 1;
}

