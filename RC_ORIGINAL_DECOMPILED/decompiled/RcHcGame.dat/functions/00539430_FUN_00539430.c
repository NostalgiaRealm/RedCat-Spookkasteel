/*
 * FUN_00539430 at 00539430
 * undefined FUN_00539430(void)
 * Address ranges: 00539430-005396d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_00539430(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 *param_6,undefined4 param_7)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063bcab;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00537a20(param_2,param_3,param_7);
  param_1[0x10] = param_4;
  param_1[0x11] = param_5;
  local_4 = 0;
  if (*(int *)(param_6 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_6 + 8) - *(int *)(param_6 + 4) >> 4;
  }
  param_1[0x12] = iVar2 + -1;
  *(undefined1 *)(param_1 + 0x13) = *param_6;
  if (*(int *)(param_6 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_6 + 8) - *(int *)(param_6 + 4) >> 4;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  pvVar3 = operator_new(iVar2 << 4);
  param_1[0x14] = pvVar3;
  iVar2 = *(int *)(param_6 + 8);
  for (iVar8 = *(int *)(param_6 + 4); iVar8 != iVar2; iVar8 = iVar8 + 0x10) {
    FUN_00443140(pvVar3,iVar8);
    pvVar3 = (void *)((int)pvVar3 + 0x10);
  }
  param_1[0x15] = pvVar3;
  param_1[0x16] = pvVar3;
  local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
  local_4._0_1_ = 1;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *param_1 = &PTR_FUN_0064f768;
  if (param_1[0x10] == 0) {
    local_1c[0] = (undefined1)param_7;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar9 = local_18;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      FUN_00404190(uVar5);
    }
    local_4._0_1_ = 2;
    pcVar4 = (code *)FUN_005a07f0(s_m_GetValueFunc_006a0ef8,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a0d5c,0x195,local_1c);
    (*pcVar4)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  if (param_1[0x11] == 0) {
    local_1c[0] = (undefined1)param_7;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar9 = local_18;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar5) = 0;
      uStack_14 = uVar5;
    }
    local_4._0_1_ = 3;
    pcVar4 = (code *)FUN_005a07f0(s_m_SetValueFunc_006a0ee8,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a0d5c,0x196,local_1c);
    (*pcVar4)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  if ((int)param_1[0x12] < 0) {
    uVar5 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    local_1c[0] = (undefined1)param_7;
    local_18 = (undefined4 *)0x0;
    uStack_14 = 0;
    uStack_10 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4._0_1_ = 4;
    pcVar4 = (code *)FUN_005a07f0(s_m_MaxValue_>__0_006a0f50,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a0d5c,0x197,local_1c);
    (*pcVar4)();
    local_4._0_1_ = 1;
    if (local_18 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_18 + -1));
      }
      else {
        *(char *)((int)local_18 + -1) = cVar1 + -1;
      }
    }
  }
  FUN_005397d0();
  ExceptionList = pvStack_c;
  return param_1;
}

