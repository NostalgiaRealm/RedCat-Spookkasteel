/*
 * FUN_004baea0 at 004baea0
 * undefined FUN_004baea0(void)
 * Address ranges: 004baea0-004bb07a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004baea0(undefined4 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_2c [4];
  char *local_28;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062f4c2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar3 = operator_new(0x130);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    uVar4 = FUN_005033f0(local_2c,*param_1,s_AnimatorLiquid_006975a0);
    local_4 = CONCAT31(local_4._1_3_,1);
    iVar5 = FUN_004ba8e0(uVar4,param_1);
  }
  local_4 = 0xffffffff;
  if ((pvVar3 != (void *)0x0) && (local_28 != (char *)0x0)) {
    cVar2 = local_28[-1];
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0(local_28 + -1);
    }
    else {
      local_28[-1] = cVar2 + -1;
    }
  }
  FUN_00502350(param_1[10] != 0);
  pcVar7 = (char *)*param_1;
  local_2c[0] = param_1._0_1_;
  FUN_004040a0(0);
  local_4 = 3;
  if (pcVar7 == (char *)0x0) {
    uVar6 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
  }
  else {
    uVar6 = 0xffffffff;
    pcVar8 = pcVar7;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    param_1 = (undefined4 *)(~uVar6 - 1);
    cVar2 = FUN_00401940(param_1,1);
    if (cVar2 != '\0') {
      for (uVar6 = (uint)param_1 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)local_28 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        local_28 = local_28 + 4;
      }
      for (uVar6 = (uint)param_1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *local_28 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        local_28 = local_28 + 1;
      }
      FUN_00404190(param_1);
    }
  }
  FUN_00503ae0(local_2c);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  pcVar7 = (char *)puVar1[1];
  local_1c[0] = param_1._0_1_;
  FUN_004040a0(0);
  local_4 = 4;
  if (pcVar7 != (char *)0x0) {
    uVar6 = 0xffffffff;
    pcVar8 = pcVar7;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(pcVar7,~uVar6 - 1);
  }
  FUN_0040cc00(local_1c,0,0xffffffff);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  *(undefined4 *)(iVar5 + 0xcc) = 200;
  ExceptionList = local_c;
  return iVar5;
}

