/*
 * FUN_0040b880 at 0040b880
 * undefined FUN_0040b880(void)
 * Address ranges: 0040b880-0040baa9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_0040b880(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  char cVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  bool bVar10;
  undefined1 local_4c [4];
  undefined4 *local_48;
  uint local_44;
  undefined1 local_3c [4];
  char *local_38;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006209c1;
  local_c = ExceptionList;
  local_4c[0] = (undefined1)param_3;
  ExceptionList = &local_c;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = (char *)&DAT_0068e3dc;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar2 = FUN_00401940(uVar5,1);
  if (cVar2 != '\0') {
    puVar7 = &DAT_0068e3dc;
    puVar9 = local_48;
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
    *(undefined1 *)((int)local_48 + uVar5) = 0;
    local_44 = uVar5;
  }
  local_3c[0] = (undefined1)param_3;
  local_4 = 0;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = s_gargoyle_act_0068e3e8;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar2 = FUN_00401940(uVar5,1);
  if (cVar2 != '\0') {
    pcVar8 = s_gargoyle_act_0068e3e8;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)local_38 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      local_38 = local_38 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *local_38 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      local_38 = local_38 + 1;
    }
    FUN_00404190(uVar5);
  }
  local_4._0_1_ = 1;
  FUN_0042b270(param_2,local_3c,param_3,local_4c);
  local_4._0_1_ = 4;
  FUN_004040a0(1);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  *(undefined1 *)(param_1 + 0x8c) = 0;
  param_1[0x8d] = 0;
  *param_1 = &PTR_FUN_0064aac4;
  pvVar3 = operator_new(0x15e0);
  local_4._0_1_ = 5;
  uVar1 = (undefined1)local_4;
  local_4._0_1_ = 5;
  bVar10 = pvVar3 == (void *)0x0;
  if (bVar10) {
    uVar4 = 0;
    local_4._0_1_ = uVar1;
  }
  else {
    uVar4 = FUN_0040cad0(local_1c,param_1 + 0x1b,s_Blast_0068e4d4);
    local_4 = CONCAT31(local_4._1_3_,6);
    uVar4 = FUN_005033a0(local_2c,uVar4);
    local_4._0_1_ = 7;
    local_4._1_3_ = 0;
    uVar4 = FUN_0045dca0(uVar4);
  }
  param_1[0x8d] = uVar4;
  if (!bVar10) {
    if (local_28 != 0) {
      cVar2 = *(char *)(local_28 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)(local_28 + -1));
      }
      else {
        *(char *)(local_28 + -1) = cVar2 + -1;
      }
    }
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
  }
  if ((!bVar10) && (local_18 != 0)) {
    cVar2 = *(char *)(local_18 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

