/*
 * FUN_004249a0 at 004249a0
 * undefined FUN_004249a0(void)
 * Address ranges: 004249a0-00424b20
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_004249a0(int param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  int local_30;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00622738;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x18) == 0) {
    return 0;
  }
  uVar6 = 0xffffffff;
  pcVar7 = &DAT_0068f9c8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  ExceptionList = &local_c;
  FUN_004040f0(&DAT_0068f9c8,~uVar6 - 1);
  local_4 = 0;
  piVar2 = (int *)FUN_004042e0(&local_30);
  local_4._0_1_ = 1;
  if (*piVar2 == 0) {
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4._0_1_ = 2;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar3)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  iVar4 = FUN_004f4c30(local_2c);
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_30 != 0) {
    iVar8 = *(int *)(local_30 + 0x14) + -1;
    *(int *)(local_30 + 0x14) = iVar8;
    if (iVar8 == 0) {
      FUN_005abfc0(0);
    }
    local_30 = 0;
  }
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_28 + -1));
    }
    else {
      *(char *)(local_28 + -1) = cVar1 + -1;
    }
  }
  if (iVar4 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  uVar5 = FUN_0060a6f2(iVar4,0,&CAdamGO::RTTI_Type_Descriptor,
                       &CAdamEffectMusic::RTTI_Type_Descriptor,0);
  ExceptionList = local_c;
  return uVar5;
}

