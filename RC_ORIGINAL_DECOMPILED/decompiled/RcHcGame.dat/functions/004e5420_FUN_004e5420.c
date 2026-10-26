/*
 * FUN_004e5420 at 004e5420
 * undefined FUN_004e5420(void)
 * Address ranges: 004e5420-004e5625
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004e5420(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632baa;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069a4f4,0x30);
  local_4 = 0;
  pvVar3 = operator_new(0x100);
  local_4._0_1_ = 1;
  if (pvVar3 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    uVar4 = FUN_005033f0(local_1c,*(undefined4 *)(param_1 + 0xc),s_World_0069a4ec);
    local_4 = CONCAT31(local_4._1_3_,2);
    iVar5 = FUN_004e5290(uVar4);
  }
  local_4 = 0;
  if ((pvVar3 != (void *)0x0) && (local_18 != 0)) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  if (iVar5 == 0) {
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    uVar8 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    local_2c[0] = (undefined1)param_1;
    FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
    local_4._0_1_ = 4;
    pcVar6 = (code *)FUN_005a07f0(s_result____0_0068f6c8,s_D__Work_RCHorror_AdamSource_Adam_0069a4f4
                                  ,0x35,local_2c);
    (*pcVar6)();
    local_4 = (uint)local_4._1_3_ << 8;
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
  pcVar10 = *(char **)(param_1 + 0xc);
  local_2c[0] = (undefined1)param_1;
  FUN_004040a0(0);
  local_4._0_1_ = 5;
  if (pcVar10 == (char *)0x0) {
    uVar8 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    pcVar10 = &DAT_006b3f70;
  }
  else {
    uVar8 = 0xffffffff;
    pcVar9 = pcVar10;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
  }
  FUN_004040f0(pcVar10,~uVar8 - 1);
  FUN_00503ae0(local_2c);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004040a0(1);
  *(int *)(iVar5 + 0xfc) = param_1;
  FUN_00502350(0);
  *(undefined1 *)(iVar5 + 0xa9) = 0;
  if ((*(char **)(param_1 + 0x24) == (char *)0x0) ||
     (iVar7 = __strcmpi(*(char **)(param_1 + 0x24),&DAT_006b3f70), iVar7 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(iVar5 + 0xf8) = uVar2;
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return iVar5;
}

