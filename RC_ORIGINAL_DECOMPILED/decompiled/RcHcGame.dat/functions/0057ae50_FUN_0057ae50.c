/*
 * FUN_0057ae50 at 0057ae50
 * undefined FUN_0057ae50(void)
 * Address ranges: 0057ae50-0057b02c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0057ae50(undefined4 *param_1)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_2c [4];
  char *local_28;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00641cd2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = operator_new(0x104);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_005033f0(local_2c,*param_1,s_EffectCorona_006a50a4);
    local_4 = CONCAT31(local_4._1_3_,1);
    iVar4 = FUN_00579d50(uVar3,param_1);
  }
  local_4 = 0xffffffff;
  if ((pvVar2 != (void *)0x0) && (local_28 != (char *)0x0)) {
    cVar1 = local_28[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_28 + -1);
    }
    else {
      local_28[-1] = cVar1 + -1;
    }
  }
  pcVar7 = (char *)*param_1;
  local_2c[0] = param_1._0_1_;
  FUN_004040a0(0);
  local_4 = 3;
  if (pcVar7 == (char *)0x0) {
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
  }
  else {
    uVar5 = 0xffffffff;
    pcVar8 = pcVar7;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)local_28 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        local_28 = local_28 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *local_28 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        local_28 = local_28 + 1;
      }
      FUN_00404190(uVar5);
    }
  }
  FUN_00503ae0(local_2c);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  pcVar7 = (char *)param_1[1];
  local_1c[0] = param_1._0_1_;
  FUN_004040a0(0);
  local_4 = 4;
  if (pcVar7 != (char *)0x0) {
    uVar5 = 0xffffffff;
    pcVar8 = pcVar7;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(pcVar7,~uVar5 - 1);
  }
  FUN_0040cc00(local_1c,0,0xffffffff);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00502350(param_1[5] != 0);
  *(undefined4 *)(iVar4 + 0xcc) = 0x4f;
  ExceptionList = local_c;
  return iVar4;
}

