/*
 * FUN_0051c250 at 0051c250
 * undefined FUN_0051c250(void)
 * Address ranges: 0051c250-0051c479
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_0051c250(int param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined1 local_2c [4];
  undefined4 *local_28;
  uint uStack_24;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638968;
  pvStack_c = ExceptionList;
  if ((param_2 < 0) || (ExceptionList = &pvStack_c, 7 < param_2)) {
    local_2c[0] = (undefined1)param_2;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      puVar5 = (undefined4 *)&DAT_006b3f70;
      puVar6 = local_28;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      FUN_00404190(uVar3);
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_a_State_>__0____a_State_<_GS_NR__00697cb8,
                                  s___AdamSource_AdamGame_h_00697ce0,0x1f5,local_2c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if (*(int *)(*(int *)(param_1 + 0x8c) + param_2 * 4) == 0) {
    local_2c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      puVar5 = (undefined4 *)&DAT_006b3f70;
      puVar6 = local_28;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      *(undefined1 *)((int)local_28 + uVar3) = 0;
      uStack_24 = uVar3;
    }
    local_4 = 1;
    pcVar2 = (code *)FUN_005a07f0(s_m_States__a_State______0_00697c9c,
                                  s___AdamSource_AdamGame_h_00697ce0,0x1f6,local_2c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x8c) + param_2 * 4) + 0x24) != param_2) {
    auStack_1c[0] = (undefined1)param_2;
    uVar3 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar3 - 1);
    local_4 = 2;
    pcVar2 = (code *)FUN_005a07f0(s_m_States__a_State___>GetState____00697c70,
                                  s___AdamSource_AdamGame_h_00697ce0,0x1f7,auStack_1c);
    (*pcVar2)();
    if (iStack_18 == 0) {
      ExceptionList = pvStack_c;
      return *(undefined4 *)(*(int *)(param_1 + 0x8c) + param_2 * 4);
    }
    cVar1 = *(char *)(iStack_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iStack_18 + -1));
      ExceptionList = pvStack_c;
      return *(undefined4 *)(*(int *)(param_1 + 0x8c) + param_2 * 4);
    }
    *(char *)(iStack_18 + -1) = cVar1 + -1;
  }
  ExceptionList = pvStack_c;
  return *(undefined4 *)(*(int *)(param_1 + 0x8c) + param_2 * 4);
}

