/*
 * FUN_0043ec80 at 0043ec80
 * undefined FUN_0043ec80(void)
 * Address ranges: 0043ec80-0043ee8e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0043ec80(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  int *piVar5;
  code *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_2c [4];
  int local_28 [4];
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00624933;
  pvStack_c = ExceptionList;
  uVar3 = *(int *)(param_1 + 0x14) - 1;
  uVar3 = ((int)uVar3 < 0) - 1 & uVar3;
  if (2 < (int)uVar3) {
    uVar3 = 2;
  }
  ExceptionList = &pvStack_c;
  pvVar4 = operator_new(0x35c);
  local_4 = 0;
  if (pvVar4 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_0043e950(uVar3,*(undefined4 *)(param_1 + 0x1c));
  }
  uVar3 = 0xffffffff;
  local_4 = 0xffffffff;
  if (piVar5 == (int *)0x0) {
    param_1._0_1_ = SUB41(pvVar4,0);
    local_2c[0] = (undefined1)param_1;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    local_28[0] = 0;
    local_28[1] = 0;
    local_28[2] = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar3 - 1);
    local_4 = 1;
    pcVar6 = (code *)FUN_005a07f0(s_item____0_006909d0,s_D__Work_RCHorror_RCSource_RcItem_00690b34,
                                  0x4d,local_2c);
    (*pcVar6)();
    local_4 = 0xffffffff;
    if (local_28[0] != 0) {
      cVar1 = *(char *)(local_28[0] + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_28[0] + -1));
      }
      else {
        *(char *)(local_28[0] + -1) = cVar1 + -1;
      }
    }
  }
  (**(code **)(*piVar5 + 0x74))(iVar2,iVar2 + 4,iVar2 + 8);
  pcVar8 = *(char **)(iVar2 + 0xc);
  FUN_004040a0(0);
  uStack_10 = 2;
  if (pcVar8 == (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    pcVar8 = &DAT_006b3f70;
  }
  else {
    uVar3 = 0xffffffff;
    pcVar7 = pcVar8;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
  }
  FUN_004040f0(pcVar8,~uVar3 - 1);
  FUN_00503ae0(&stack0xffffffc8);
  uStack_10 = 0xffffffff;
  FUN_004040a0(1);
  pcVar8 = *(char **)(iVar2 + 0x10);
  local_28[0] = CONCAT31(local_28[0]._1_3_,puStack_8._0_1_);
  FUN_004040a0(0);
  uStack_10 = 3;
  if (pcVar8 != (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar7 = pcVar8;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(pcVar8,~uVar3 - 1);
  }
  FUN_0040cc00(local_28,0,0xffffffff);
  uStack_10 = 0xffffffff;
  FUN_004040a0(1);
  if (*(int *)(iVar2 + 0x20) != 0) {
    piVar5[0x90] = *(int *)(iVar2 + 0x20);
  }
  if (*(int *)(iVar2 + 0x18) != 0) {
    *(undefined1 *)((int)piVar5 + 0xaa) = 1;
  }
  FUN_00502350(1);
  ExceptionList = pvStack_18;
  return piVar5;
}

