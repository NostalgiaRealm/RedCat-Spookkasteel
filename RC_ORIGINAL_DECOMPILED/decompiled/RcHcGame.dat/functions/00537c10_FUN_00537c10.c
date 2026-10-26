/*
 * FUN_00537c10 at 00537c10
 * undefined FUN_00537c10(void)
 * Address ranges: 00537c10-00537ecf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_00537c10(int param_1,float *param_2,float *param_3,int param_4,char param_5,undefined4 param_6,
            undefined4 *param_7,uint param_8,undefined4 param_9,undefined4 param_10,
            undefined4 *param_11,uint param_12,undefined4 param_13,int param_14)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  float10 fVar10;
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063bac0;
  pvStack_c = ExceptionList;
  local_18 = param_7;
  local_4 = 1;
  local_14 = param_8;
  local_10 = param_9;
  uVar6 = param_6;
  if (param_5 != '\0') {
    local_18 = param_11;
    local_14 = param_12;
    local_10 = param_13;
    uVar6 = param_10;
  }
  ExceptionList = &pvStack_c;
  if (param_4 == 0) {
    param_6 = CONCAT31(param_6._1_3_,param_5);
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    local_4._0_1_ = 2;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  &param_6);
    (*pcVar2)();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0(1);
  }
  param_1 = param_1 + 0x30;
  FUN_004b15c0(param_1,*param_2,*param_3,uVar6,local_18,local_14,local_10,0);
  param_5 = (char)param_1;
  param_6 = CONCAT31(param_6._1_3_,param_5);
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar9 = "y9jkl_|1!NJY";
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  cVar1 = FUN_00401940(uVar4,1);
  if (cVar1 != '\0') {
    puVar7 = &DAT_0064f6dc;
    puVar8 = param_7;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    *(undefined1 *)((int)param_7 + uVar4) = 0;
    param_8 = uVar4;
  }
  local_4._0_1_ = 3;
  if (param_4 == 0) {
    param_10 = CONCAT31(param_10._1_3_,param_5);
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    local_4._0_1_ = 4;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  &param_10);
    (*pcVar2)();
    local_4._0_1_ = 3;
    FUN_004040a0(1);
  }
  fVar10 = (float10)FUN_004b1fc0(&param_6);
  local_4._0_1_ = 1;
  *param_3 = (float)(fVar10 + (float10)*param_3);
  FUN_004040a0(1);
  if (param_4 == 0) {
    param_6 = CONCAT31(param_6._1_3_,param_5);
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    local_4._0_1_ = 5;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  &param_6);
    (*pcVar2)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  fVar10 = (float10)FUN_004b21b0(param_1);
  local_4 = (uint)local_4._1_3_ << 8;
  *param_2 = (float)(fVar10 + (float10)*param_2);
  if ((param_4 != 0) &&
     (iVar3 = *(int *)(param_4 + 0x14) + -1, *(int *)(param_4 + 0x14) = iVar3, iVar3 == 0)) {
    FUN_005abfc0(0);
  }
  local_4 = 0xffffffff;
  if ((param_14 != 0) &&
     (iVar3 = *(int *)(param_14 + 0x14) + -1, *(int *)(param_14 + 0x14) = iVar3, iVar3 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return;
}

