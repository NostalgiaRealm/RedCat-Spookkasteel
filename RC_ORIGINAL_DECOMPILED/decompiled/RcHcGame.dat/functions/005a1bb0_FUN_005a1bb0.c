/*
 * FUN_005a1bb0 at 005a1bb0
 * undefined FUN_005a1bb0(void)
 * Address ranges: 005a1bb0-005a1d5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005a1bb0(int param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644ff0;
  pvStack_c = ExceptionList;
  if ((*(int *)(param_1 + 0x28) == 0) ||
     (ExceptionList = &pvStack_c, *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 2 == 0)) {
    local_1c[0] = (undefined1)param_2;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      puVar7 = local_18;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar4) = 0;
      local_14 = uVar4;
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_m_Stack_size___>_0_006a1058,
                                  s_D__Work_RCHorror_AdamSource_Davi_006a7824,0x78,local_1c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if (*(int *)(*(int *)(param_1 + 0x2c) + -4) != param_2) {
    local_2c[0] = (undefined1)param_2;
    uVar4 = 0xffffffff;
    local_28 = 0;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    local_24 = 0;
    uStack_20 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    local_4 = 1;
    pcVar2 = (code *)FUN_005a07f0(s___m_Stack_end_____1_____a_Sectio_006a79e0,
                                  s_D__Work_RCHorror_AdamSource_Davi_006a7824,0x79,local_2c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    if (local_28 != 0) {
      cVar1 = *(char *)(local_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_28 + -1));
      }
      else {
        *(char *)(local_28 + -1) = cVar1 + -1;
      }
    }
    local_28 = 0;
    local_24 = 0;
    uStack_20 = 0;
  }
  puVar7 = *(undefined4 **)(param_1 + 0x2c);
  for (puVar6 = *(undefined4 **)(param_1 + 0x2c); puVar6 != puVar7; puVar6 = puVar6 + 1) {
    puVar6[-1] = *puVar6;
  }
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -4;
  uVar3 = FUN_005a1a70();
  FUN_005a18c0(uVar3);
  ExceptionList = pvStack_c;
  return;
}

