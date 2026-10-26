/*
 * FUN_00594df0 at 00594df0
 * undefined FUN_00594df0(void)
 * Address ranges: 00594df0-00594fd8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_00594df0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00643b90;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (param_1 == 0) {
    ExceptionList = &pvStack_c;
    FUN_004040a0();
    iVar3 = -1;
    pcVar4 = &DAT_006b3f70;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70);
    local_4._0_1_ = 1;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
    (*pcVar2)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0();
  }
  if (*(int *)(param_1 + 0x5c) == 0) {
    FUN_004040a0();
    iVar3 = -1;
    pcVar4 = &DAT_006b3f70;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70);
    local_4._0_1_ = 2;
    pcVar2 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8,
                                  0x144);
    (*pcVar2)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0();
  }
  cVar1 = FUN_00594ab0(*(undefined4 *)(param_1 + 0x5c),param_2);
  if (cVar1 == '\0') {
    local_4 = 0xffffffff;
    if (param_1 != 0) {
      iVar3 = *(int *)(param_1 + 0x14) + -1;
      *(int *)(param_1 + 0x14) = iVar3;
      if (iVar3 == 0) {
        FUN_005abfc0();
      }
    }
    ExceptionList = pvStack_c;
    return false;
  }
  if (param_1 != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  FUN_005545a0();
  local_4._0_1_ = 3;
  cVar1 = FUN_00554ab0(param_2,param_3,0);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00554630();
  local_4 = 0xffffffff;
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + 0x14) + -1;
    *(int *)(param_1 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0();
    }
  }
  ExceptionList = pvStack_c;
  return cVar1 == '\0';
}

