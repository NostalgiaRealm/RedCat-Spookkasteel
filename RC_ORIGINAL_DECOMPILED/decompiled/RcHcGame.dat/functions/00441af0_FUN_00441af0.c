/*
 * FUN_00441af0 at 00441af0
 * undefined FUN_00441af0(void)
 * Address ranges: 00441af0-00441ce2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00441af0(int param_1)

{
  char cVar1;
  void *pvVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_2c [4];
  int local_28 [4];
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00624de3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar2 = operator_new(0x358);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_004417d0(*(undefined4 *)(param_1 + 0x18));
  }
  uVar5 = 0xffffffff;
  local_4 = 0xffffffff;
  if (piVar3 == (int *)0x0) {
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_28[0] = 0;
    local_2c[0] = (undefined1)param_1;
    local_28[1] = 0;
    local_28[2] = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4 = 1;
    pcVar4 = (code *)FUN_005a07f0(s_item____0_006909d0,s_D__Work_RCHorror_RCSource_RcItem_00690cf4,
                                  0x2d,local_2c);
    (*pcVar4)();
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
  (**(code **)(*piVar3 + 0x74))(param_1,param_1 + 4,param_1 + 8);
  pcVar7 = *(char **)(param_1 + 0xc);
  FUN_004040a0(0);
  uStack_10 = 2;
  if (pcVar7 == (char *)0x0) {
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    pcVar7 = &DAT_006b3f70;
  }
  else {
    uVar5 = 0xffffffff;
    pcVar6 = pcVar7;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
  }
  FUN_004040f0(pcVar7,~uVar5 - 1);
  FUN_00503ae0(&stack0xffffffc8);
  uStack_10 = 0xffffffff;
  FUN_004040a0(1);
  pcVar7 = *(char **)(param_1 + 0x10);
  local_28[0] = CONCAT31(local_28[0]._1_3_,puStack_8._0_1_);
  FUN_004040a0(0);
  uStack_10 = 3;
  if (pcVar7 != (char *)0x0) {
    uVar5 = 0xffffffff;
    pcVar6 = pcVar7;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(pcVar7,~uVar5 - 1);
  }
  FUN_0040cc00(local_28,0,0xffffffff);
  uStack_10 = 0xffffffff;
  FUN_004040a0(1);
  if (*(int *)(param_1 + 0x1c) != 0) {
    piVar3[0x90] = *(int *)(param_1 + 0x1c);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined1 *)((int)piVar3 + 0xaa) = 1;
  }
  FUN_00502350(1);
  ExceptionList = pvStack_18;
  return piVar3;
}

