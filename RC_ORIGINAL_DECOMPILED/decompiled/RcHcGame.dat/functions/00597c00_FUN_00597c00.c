/*
 * FUN_00597c00 at 00597c00
 * undefined FUN_00597c00(void)
 * Address ranges: 00597c00-00597eb5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_00597c00(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 *param_6,undefined4 param_7,undefined4 param_8)

{
  undefined1 uVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00644052;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_004ff0e0();
  local_4._0_1_ = 1;
  uVar1 = *param_6;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 6) = uVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_0040cc00(param_6,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_0060b1db(param_1 + 0xd,4,8,FUN_0059b1c0,FUN_005630e0);
  local_4._0_1_ = 3;
  FUN_0060b1db(param_1 + 0x15,4,4,FUN_0059b1c0,FUN_005630e0);
  param_1[0x1a] = param_7;
  local_4._0_1_ = 5;
  param_1[0x1b] = param_8;
  FUN_0059b210();
  FUN_0059b210();
  param_1[0x24] = param_2;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0xffffffff;
  *param_1 = &PTR_FUN_0065008c;
  cVar2 = FUN_0059b1f0();
  if (cVar2 == '\0') {
    uVar4 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    local_1c[0] = (undefined1)param_7;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    local_4._0_1_ = 6;
    pcVar3 = (code *)FUN_005a07f0(s_m_WayPointId_IsValid___006a6cd4,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a6cec,0x31,local_1c);
    (*pcVar3)();
    local_4._0_1_ = 5;
    if (local_18 != (undefined4 *)0x0) {
      cVar2 = *(char *)((int)local_18 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)((int)local_18 + -1));
      }
      else {
        *(char *)((int)local_18 + -1) = cVar2 + -1;
      }
    }
  }
  if (param_2 == 0) {
    local_1c[0] = (undefined1)param_7;
    uVar4 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    uVar4 = ~uVar4 - 1;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    cVar2 = FUN_00401940(uVar4,1);
    if (cVar2 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar9 = local_18;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      FUN_00404190(uVar4);
    }
    local_4._0_1_ = 7;
    pcVar3 = (code *)FUN_005a07f0(s_a_World____0_006a6cc4,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a6cec,0x32,local_1c);
    (*pcVar3)();
    local_4._0_1_ = 5;
    if (local_18 != (undefined4 *)0x0) {
      cVar2 = *(char *)((int)local_18 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)((int)local_18 + -1));
      }
      else {
        *(char *)((int)local_18 + -1) = cVar2 + -1;
      }
    }
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x2a] = 0;
  param_1[0x1d] = 0;
  param_1[0x29] = 0x497423f0;
  param_1[10] = param_3;
  param_1[0xb] = param_4;
  param_1[0xc] = param_5;
  param_1[0x1c] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  iVar6 = 8;
  do {
    FUN_0059b200();
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar6 = 4;
  do {
    FUN_0059b200();
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  FUN_0059b270();
  FUN_0059b2c0();
  local_4 = 0xffffffff;
  FUN_005630e0();
  ExceptionList = pvStack_c;
  return param_1;
}

