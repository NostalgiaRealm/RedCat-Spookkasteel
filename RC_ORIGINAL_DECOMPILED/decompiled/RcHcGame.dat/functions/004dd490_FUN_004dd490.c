/*
 * FUN_004dd490 at 004dd490
 * undefined FUN_004dd490(void)
 * Address ranges: 004dd490-004dd640
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004dd490(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  int local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632168;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar3 = (int *)FUN_004042e0(&local_20);
  local_4 = 0;
  if (*piVar3 == 0) {
    local_1c[0] = (undefined1)param_2;
    uVar5 = 0xffffffff;
    local_18 = 0;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    local_14 = 0;
    local_10 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4._0_1_ = 1;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    if (local_18 != 0) {
      cVar2 = *(char *)(local_18 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar2 + -1;
      }
    }
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
  }
  FUN_004f3fd0();
  local_4 = 0xffffffff;
  if ((local_20 != 0) &&
     (iVar6 = *(int *)(local_20 + 0x14) + -1, *(int *)(local_20 + 0x14) = iVar6, iVar6 == 0)) {
    FUN_005abfc0(0);
  }
  puVar1 = (undefined4 *)(param_1 + 0x228);
  cVar2 = FUN_0059b1f0();
  if (cVar2 != '\0') {
    uVar8 = 0xffffffff;
    FUN_0059df90(*puVar1);
    FUN_00598580(uVar8);
    FUN_0059b200();
  }
  uVar8 = FUN_0059c810(&param_2,param_2,0x42c80000,0);
  local_4 = 2;
  FUN_0059b1d0(uVar8);
  local_4 = 0xffffffff;
  FUN_005630e0();
  cVar2 = FUN_0059b1f0();
  if (cVar2 != '\0') {
    FUN_0059df90(*puVar1);
    iVar6 = FUN_00598570();
    if (0 < iVar6) {
      FUN_0059b200();
    }
  }
  cVar2 = FUN_0059b1f0();
  if (cVar2 != '\0') {
    uVar8 = 1;
    FUN_0059df90(*puVar1);
    FUN_00598580(uVar8);
  }
  ExceptionList = pvStack_c;
  return;
}

