/*
 * FUN_00420c10 at 00420c10
 * undefined FUN_00420c10(void)
 * Address ranges: 00420c10-00420e83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00420c10(int param_1,int param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006221a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_3 != 0) {
    ExceptionList = &pvStack_c;
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
  }
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  FUN_00449760(&param_2);
  local_4._0_1_ = 1;
  FUN_004a86e0();
  if (param_3 == 0) {
    FUN_004969a0();
    FUN_0042d270();
  }
  else {
    if (*(char *)(param_1 + 0x30c) != '\0') {
      FUN_004969a0();
      FUN_0042d130();
    }
    if (*(char *)(param_1 + 0x30d) != '\0') {
      iVar5 = *(int *)(param_1 + 0x310);
      if (iVar5 != 0) {
        *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 1;
        local_4._0_1_ = 1;
        FUN_00421430();
        cVar2 = FUN_004fbca0();
        if (cVar2 == '\0') {
          if (*(int *)(param_1 + 0x310) != 0) {
            piVar1 = (int *)(*(int *)(param_1 + 0x310) + 0x14);
            *piVar1 = *piVar1 + 1;
          }
          local_4._0_1_ = 1;
          FUN_00421430();
          FUN_004fb310();
        }
      }
      if (*(int *)(param_1 + 0x310) == 0) {
        FUN_004040a0();
        iVar5 = -1;
        pcVar6 = &DAT_006b3f70;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0();
        local_4._0_1_ = 5;
        pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638);
        (*pcVar3)();
        local_4._0_1_ = 1;
        FUN_004040a0();
      }
      if (*(int *)(param_1 + 0x114) == 0) {
        FUN_004040a0();
        iVar5 = -1;
        pcVar6 = &DAT_006b3f70;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0();
        local_4._0_1_ = 6;
        pcVar3 = (code *)FUN_005a07f0(s_m_Actor____0_0068e768,s___AdamSource_AdamActor_h_0068e778);
        (*pcVar3)();
        local_4._0_1_ = 1;
        FUN_004040a0();
      }
      uVar7 = *(undefined4 *)(param_1 + 0x314);
      uVar4 = FUN_0050aa70(uVar7);
      FUN_005b5520(uVar4,uVar7);
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (param_2 != 0) {
    iVar5 = *(int *)(param_2 + 0x14) + -1;
    *(int *)(param_2 + 0x14) = iVar5;
    if (iVar5 == 0) {
      FUN_005abfc0();
    }
    param_2 = 0;
  }
  local_4 = 0xffffffff;
  if ((param_3 != 0) &&
     (iVar5 = *(int *)(param_3 + 0x14) + -1, *(int *)(param_3 + 0x14) = iVar5, iVar5 == 0)) {
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return;
}

