/*
 * FUN_00556a60 at 00556a60
 * undefined FUN_00556a60(void)
 * Address ranges: 00556a60-00556e20
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00556a60(int param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  float10 fVar8;
  undefined1 uStack_21;
  int local_20;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063e7b8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  local_20 = param_1;
  if (param_2 == 0) {
    local_1c[0] = (undefined1)param_2;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar3 - 1);
    local_4._0_1_ = 1;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar2)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  if (param_2 == 0) {
    local_1c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar3 - 1);
    local_4._0_1_ = 2;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar2)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  puVar5 = (undefined4 *)(param_2 + 0x1b0);
  puVar6 = (undefined4 *)(local_20 + 0x1b0);
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  if (param_2 == 0) {
    FUN_00409810(&DAT_006b3f70,&uStack_21);
    local_4._0_1_ = 3;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar2)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  puVar5 = (undefined4 *)(param_2 + 0x1e0);
  puVar6 = (undefined4 *)(local_20 + 0x1e0);
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  if (param_2 == 0) {
    FUN_00409810(&DAT_006b3f70,&uStack_21);
    local_4._0_1_ = 4;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar2)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  *(undefined4 *)(local_20 + 0x210) = *(undefined4 *)(param_2 + 0x210);
  *(undefined4 *)(local_20 + 0x214) = *(undefined4 *)(param_2 + 0x214);
  *(undefined4 *)(local_20 + 0x218) = *(undefined4 *)(param_2 + 0x218);
  FUN_005569b0();
  if (param_2 == 0) {
    FUN_00409810(&DAT_006b3f70,&uStack_21);
    local_4._0_1_ = 5;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar2)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  fVar8 = (float10)FUN_004a72c0();
  FUN_00556050((float)fVar8);
  if (param_2 == 0) {
    FUN_00409810(&DAT_006b3f70,&uStack_21);
    local_4._0_1_ = 6;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar2)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  fVar8 = (float10)FUN_004a72c0();
  FUN_00555f60((float)fVar8);
  if (param_2 == 0) {
    FUN_00409810(&DAT_006b3f70,&uStack_21);
    local_4._0_1_ = 7;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar2)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  fVar8 = (float10)FUN_004a72c0();
  FUN_00556220((float)fVar8);
  if (param_2 == 0) {
    local_1c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar3 - 1);
    local_4._0_1_ = 8;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar2)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  local_20 = CONCAT31(local_20._1_3_,*(undefined1 *)(param_2 + 0x1ac));
  FUN_00556400(local_20);
  local_4 = 0xffffffff;
  if ((param_2 != 0) &&
     (iVar4 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar4, iVar4 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return;
}

