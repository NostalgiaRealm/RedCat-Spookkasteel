/*
 * FUN_0057cde0 at 0057cde0
 * undefined FUN_0057cde0(void)
 * Address ranges: 0057cde0-0057d000
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0057cde0(uint param_1)

{
  uint uVar1;
  char cVar2;
  void *pvVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_3c [4];
  char *local_38;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [12];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00642032;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar3 = operator_new(0x128);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    uVar4 = FUN_005033f0(local_2c,*(undefined4 *)(param_1 + 0xc),s_EffectFog_006a51b0);
    local_4 = CONCAT31(local_4._1_3_,1);
    piVar5 = (int *)FUN_0057c600(uVar4);
  }
  local_4 = 0xffffffff;
  if (pvVar3 != (void *)0x0) {
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
  FUN_0057cbf0(param_1 + 0x14);
  pcVar7 = *(char **)(param_1 + 0xc);
  local_3c[0] = (undefined1)param_1;
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
    param_1 = ~uVar6 - 1;
    cVar2 = FUN_00401940(param_1,1);
    if (cVar2 != '\0') {
      for (uVar6 = param_1 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)local_38 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        local_38 = local_38 + 4;
      }
      for (uVar6 = param_1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *local_38 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        local_38 = local_38 + 1;
      }
      FUN_00404190(param_1);
    }
  }
  FUN_00503ae0(local_3c);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  pcVar7 = *(char **)(uVar1 + 0x10);
  local_1c[0] = (undefined1)param_1;
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
  (**(code **)(*piVar5 + 0x4c))(uVar1);
  FUN_0057c990(*(undefined4 *)(uVar1 + 0x24));
  FUN_0057cab0(*(undefined4 *)(uVar1 + 0x28));
  FUN_0057cbd0(*(int *)(uVar1 + 0x30) != 0);
  FUN_0057cdc0(*(int *)(uVar1 + 0x2c) != 0);
  FUN_00502350(1);
  ExceptionList = pvStack_10;
  return piVar5;
}

