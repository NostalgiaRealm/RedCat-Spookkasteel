/*
 * FUN_00539a10 at 00539a10
 * undefined FUN_00539a10(void)
 * Address ranges: 00539a10-00539d7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_00539a10(int param_1,float *param_2,undefined4 *param_3,int param_4,undefined4 param_5,
            undefined4 *param_6,char *param_7,char *param_8,undefined4 param_9,uint param_10,
            char *param_11,char *param_12,undefined4 param_13,int param_14)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  char *pcVar11;
  float10 fVar12;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint local_5c;
  char *local_58;
  char *local_54;
  undefined4 local_50;
  uint local_4c;
  char *local_48;
  char *local_44;
  undefined1 *local_40;
  undefined4 *local_3c;
  undefined1 local_1c [4];
  undefined4 *local_18;
  int local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  uVar2 = param_9;
  pcVar7 = param_8;
  pcVar11 = param_7;
  uVar5 = (uint)param_6;
  puStack_8 = &LAB_0063bd10;
  pvStack_c = ExceptionList;
  uVar1 = *param_3;
  local_3c = (undefined4 *)param_14;
  ExceptionList = &pvStack_c;
  if (param_14 != 0) {
    ExceptionList = &pvStack_c;
    *(int *)(param_14 + 0x14) = *(int *)(param_14 + 0x14) + 1;
  }
  local_4c = param_10;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  local_48 = param_11;
  local_44 = param_12;
  local_40 = (undefined1 *)param_13;
  uStack_60 = param_5;
  uStack_64 = param_13;
  local_5c = (uint)param_6;
  local_58 = param_7;
  local_54 = param_8;
  local_50 = param_9;
  param_6 = &uStack_64;
  FUN_00449760(&param_4);
  local_4._0_1_ = 1;
  FUN_00537c10(param_2,param_3);
  param_6 = (undefined4 *)uVar5;
  param_7 = pcVar11;
  param_9 = uVar2;
  if ((char)param_5 != '\0') {
    param_6 = (undefined4 *)param_10;
    param_7 = param_11;
    param_9 = param_13;
    pcVar7 = param_12;
  }
  local_3c = (undefined4 *)0x0;
  local_1c[0] = (undefined1)param_4;
  local_40 = (undefined1 *)0x539b12;
  FUN_004040a0();
  uVar5 = 0xffffffff;
  local_3c = (undefined4 *)0x1;
  pcVar11 = &DAT_006a0f64;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar3 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar3 != '\0');
  uVar5 = ~uVar5 - 1;
  local_4 = CONCAT31(local_4._1_3_,3);
  local_44 = (char *)0x539b34;
  local_40 = (undefined1 *)uVar5;
  cVar3 = FUN_00401940();
  if (cVar3 != '\0') {
    puVar8 = (undefined4 *)&DAT_006a0f64;
    puVar10 = local_18;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    local_40 = (undefined1 *)0x539b5b;
    local_3c = (undefined4 *)uVar5;
    FUN_00404190();
  }
  local_44 = (char *)(*(int *)(param_1 + 0x5c) * 0x10 + *(int *)(param_1 + 0x50));
  local_3c = (undefined4 *)0xffffffff;
  local_40 = (undefined1 *)0x0;
  local_48 = (char *)0x539b7d;
  FUN_0045db40();
  uVar5 = 0xffffffff;
  pcVar11 = (char *)&DAT_006a0f60;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar3 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar3 != '\0');
  uVar5 = ~uVar5 - 1;
  if (-local_14 - 1U <= uVar5) {
    local_3c = (undefined4 *)0x539ba3;
    FUN_005fe5fb();
  }
  if (uVar5 != 0) {
    local_3c = (undefined4 *)0x0;
    iVar9 = local_14 + uVar5;
    local_44 = (char *)0x539bba;
    local_40 = (undefined1 *)iVar9;
    cVar3 = FUN_00401940();
    if (cVar3 != '\0') {
      puVar8 = &DAT_006a0f60;
      puVar10 = (undefined4 *)(local_14 + (int)local_18);
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      local_40 = (undefined1 *)0x539be8;
      local_3c = (undefined4 *)iVar9;
      FUN_00404190();
    }
  }
  if (param_4 == 0) {
    local_3c = (undefined4 *)0x0;
    param_10 = param_10 & 0xffffff00;
    local_40 = (undefined1 *)0x539c03;
    FUN_004040a0();
    uVar5 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar3 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar3 != '\0');
    local_3c = (undefined4 *)(~uVar5 - 1);
    local_40 = &DAT_006b3f70;
    local_44 = (char *)0x539c21;
    FUN_004040f0();
    local_3c = &param_10;
    local_4._0_1_ = 4;
    local_40 = (undefined1 *)0xb6;
    local_44 = s___AdamSource_DaviRC_h_0068d638;
    local_48 = s_m_Pointer_0068d62c;
    local_4c = 0x539c3f;
    pcVar4 = (code *)FUN_005a07f0();
    local_4c = 0x539c41;
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,3);
    local_3c = (undefined4 *)0x1;
    local_40 = (undefined1 *)0x539c54;
    FUN_004040a0();
  }
  local_3c = (undefined4 *)0x0;
  local_4c = (uint)param_6;
  local_48 = param_7;
  local_54 = (char *)0x3f19999a;
  local_40 = (undefined1 *)param_9;
  local_58 = local_1c;
  local_5c = 0x539c8a;
  local_50 = uVar1;
  local_44 = pcVar7;
  FUN_004b15c0();
  if (param_4 == 0) {
    local_3c = (undefined4 *)0x0;
    param_10 = param_10 & 0xffffff00;
    local_40 = (undefined1 *)0x539ca5;
    FUN_004040a0();
    uVar5 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar3 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar3 != '\0');
    local_3c = (undefined4 *)(~uVar5 - 1);
    local_40 = &DAT_006b3f70;
    local_44 = (char *)0x539cc3;
    FUN_004040f0();
    local_3c = &param_10;
    local_4._0_1_ = 5;
    local_40 = (undefined1 *)0xb6;
    local_44 = s___AdamSource_DaviRC_h_0068d638;
    local_48 = s_m_Pointer_0068d62c;
    local_4c = 0x539ce1;
    pcVar4 = (code *)FUN_005a07f0();
    local_4c = 0x539ce3;
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,3);
    local_3c = (undefined4 *)0x1;
    local_40 = (undefined1 *)0x539cf6;
    FUN_004040a0();
  }
  local_3c = (undefined4 *)local_1c;
  local_40 = (undefined1 *)0x539d04;
  fVar12 = (float10)FUN_004b21b0();
  local_3c = (undefined4 *)0x1;
  local_4._0_1_ = 1;
  *param_2 = (float)(fVar12 + (float10)*param_2);
  local_40 = (undefined1 *)0x539d1c;
  FUN_004040a0();
  local_4 = (uint)local_4._1_3_ << 8;
  if (param_4 != 0) {
    iVar9 = *(int *)(param_4 + 0x14) + -1;
    *(int *)(param_4 + 0x14) = iVar9;
    if (iVar9 == 0) {
      local_3c = (undefined4 *)0x0;
      local_40 = (undefined1 *)0x539d41;
      FUN_005abfc0();
    }
    param_4 = 0;
  }
  local_4 = 0xffffffff;
  if ((param_14 != 0) &&
     (iVar9 = *(int *)(param_14 + 0x14) + -1, *(int *)(param_14 + 0x14) = iVar9, iVar9 == 0)) {
    local_3c = (undefined4 *)0x0;
    local_40 = (undefined1 *)0x539d69;
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return;
}

