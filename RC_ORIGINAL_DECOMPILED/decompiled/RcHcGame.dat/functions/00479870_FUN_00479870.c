/*
 * FUN_00479870 at 00479870
 * undefined FUN_00479870(void)
 * Address ranges: 00479870-00479a03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00479870(void)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  int local_30;
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00628b28;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar2 = (int *)FUN_004042e0(&local_30);
  local_4 = 0;
  if (*piVar2 == 0) {
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_2c);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  if (*(int *)(*piVar2 + 0x5c) == 0) {
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4._0_1_ = 2;
    pcVar3 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8,
                                  0x144,local_1c);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  local_4 = 0xffffffff;
  if (local_30 != 0) {
    iVar7 = *(int *)(local_30 + 0x14) + -1;
    *(int *)(local_30 + 0x14) = iVar7;
    if (iVar7 == 0) {
      FUN_005abfc0(0);
    }
    local_30 = 0;
  }
  FUN_0047a7b0();
  iVar7 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar7 = FUN_004bc480();
  }
  iVar5 = *(int *)(iVar7 + 0x4e8);
  if (iVar5 == -0x80000000) {
    puVar4 = *(undefined1 **)(iVar7 + 0x49c);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    iVar5 = FUN_0060af10(puVar4);
    *(int *)(iVar7 + 0x4e8) = iVar5;
  }
  if (iVar5 == 0) {
    FUN_0047ab60();
    FUN_0047b160();
  }
  ExceptionList = pvStack_c;
  return;
}

