/*
 * FUN_005751c0 at 005751c0
 * undefined FUN_005751c0(void)
 * Address ranges: 005751c0-0057542a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005751c0(undefined4 *param_1)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  int local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 auStack_1c [4];
  char *pcStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064162a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar2 = operator_new(0x24c);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    local_34 = 0;
  }
  else {
    uVar3 = FUN_005033f0(local_2c,*param_1,s_EffectBeam_006a4a70);
    local_4 = CONCAT31(local_4._1_3_,1);
    local_34 = FUN_00573990(uVar3,param_1);
  }
  local_4 = 0xffffffff;
  if ((pvVar2 != (void *)0x0) && (local_28 != 0)) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_28 + -1));
    }
    else {
      *(char *)(local_28 + -1) = cVar1 + -1;
    }
  }
  if (local_34 == 0) {
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    local_2c[0] = param_1._0_1_;
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4 = 3;
    pcVar4 = (code *)FUN_005a07f0(s_result_00691bc0,s_D__Work_RCHorror_AdamSource_Adam_006a4908,
                                  0x158,local_2c);
    (*pcVar4)();
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
  }
  local_2c[0] = param_1._0_1_;
  pcVar8 = (char *)*param_1;
  FUN_004040a0(0);
  local_4 = 4;
  if (pcVar8 == (char *)0x0) {
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    pcVar8 = &DAT_006b3f70;
  }
  else {
    uVar5 = 0xffffffff;
    pcVar7 = pcVar8;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
  }
  FUN_004040f0(pcVar8,~uVar5 - 1);
  FUN_00503ae0(local_2c);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00502350(param_1[0xb] != 0);
  pcVar8 = (char *)param_1[1];
  auStack_1c[0] = param_1._0_1_;
  FUN_004040a0(0);
  local_4 = 5;
  if (pcVar8 != (char *)0x0) {
    uVar5 = 0xffffffff;
    pcVar7 = pcVar8;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      pcVar7 = pcStack_18;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar7 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar7 = pcVar7 + 1;
      }
      FUN_00404190(uVar5);
    }
  }
  FUN_0040cc00(auStack_1c,0,0xffffffff);
  if (pcStack_18 != (char *)0x0) {
    cVar1 = pcStack_18[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(pcStack_18 + -1);
    }
    else {
      pcStack_18[-1] = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return local_34;
}

