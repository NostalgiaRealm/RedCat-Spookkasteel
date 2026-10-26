/*
 * FUN_00538940 at 00538940
 * undefined FUN_00538940(void)
 * Address ranges: 00538940-00538c27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_00538940(int param_1,float *param_2,undefined4 *param_3,int param_4,char **param_5,uint param_6,
            undefined4 param_7,char *param_8,char *param_9,uint param_10,undefined4 param_11,
            char *param_12,undefined4 param_13,int param_14)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  float10 fVar7;
  char *pcStack_5c;
  undefined4 uStack_58;
  uint local_54;
  undefined1 *local_50;
  char *local_4c;
  char *local_48;
  undefined8 local_44;
  char *local_3c;
  char *local_38;
  char *local_34;
  undefined1 local_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063bbd8;
  pvStack_c = ExceptionList;
  local_34 = (char *)(param_1 + 0x44);
  local_38 = local_1c;
  uVar2 = *param_3;
  local_4 = 1;
  local_3c = (char *)0x538981;
  ExceptionList = &pvStack_c;
  FUN_0053dc30();
  local_34 = (char *)param_14;
  if (param_14 != 0) {
    *(int *)(param_14 + 0x14) = *(int *)(param_14 + 0x14) + 1;
  }
  local_4._0_1_ = 3;
  local_44 = (double)CONCAT44(param_11,param_10);
  local_3c = param_12;
  local_38 = (char *)param_13;
  local_54 = param_6;
  local_50 = (undefined1 *)param_7;
  local_4c = param_8;
  local_48 = param_9;
  uStack_58 = param_5;
  param_5 = &pcStack_5c;
  pcStack_5c = param_8;
  FUN_00449760(&param_4);
  local_4._0_1_ = 2;
  FUN_00537c10(param_2,param_3);
  if (0.46875 < *param_2) {
    local_34 = *(char **)(param_1 + 0x34);
    if (local_34 == (undefined1 *)0x0) {
      local_34 = &DAT_0064a3b4;
    }
    local_38 = (char *)0x3fde0000;
    local_3c = (char *)0x0;
    local_4c = (char *)&param_10;
    local_44 = (double)*param_2;
    local_48 = s_x_____3f__>_keyXPos_____3f____>_T_006a0e54;
    local_50 = (undefined1 *)0x538a46;
    local_34 = (char *)FUN_005ae390();
    local_38 = (char *)0xbb;
    local_3c = s_D__Work_RCHorror_AdamSource_Adam_006a0d5c;
    local_4._0_1_ = 4;
    local_44._4_4_ = s_x<_keyXPos_006a0e48;
    local_44._0_4_ = 0x538a63;
    pcVar3 = (code *)FUN_005a07f0();
    local_44 = (double)CONCAT44(local_44._4_4_,0x538a65);
    (*pcVar3)();
    local_4._0_1_ = 2;
    local_34 = (char *)0x1;
    local_38 = (char *)0x538a77;
    FUN_004040a0();
  }
  if (param_4 == 0) {
    local_34 = (char *)0x0;
    param_10 = param_10 & 0xffffff00;
    local_38 = (char *)0x538a93;
    FUN_004040a0();
    uVar4 = 0xffffffff;
    pcVar5 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    local_34 = (char *)(~uVar4 - 1);
    local_38 = &DAT_006b3f70;
    local_3c = (char *)0x538ab1;
    FUN_004040f0();
    local_34 = (char *)&param_10;
    local_4._0_1_ = 5;
    local_38 = (char *)0xb6;
    local_3c = s___AdamSource_DaviRC_h_0068d638;
    local_44._4_4_ = s_m_Pointer_0068d62c;
    local_44._0_4_ = 0x538acf;
    pcVar3 = (code *)FUN_005a07f0();
    local_44 = (double)CONCAT44(local_44._4_4_,0x538ad1);
    (*pcVar3)();
    local_4._0_1_ = 2;
    local_34 = (char *)0x1;
    local_38 = (char *)0x538ae3;
    FUN_004040a0();
  }
  local_34 = (char *)0x0;
  local_44 = (double)CONCAT44(param_7,param_6);
  local_3c = param_8;
  local_50 = local_1c;
  local_38 = param_9;
  local_4c = (char *)0x3ef00000;
  local_54 = 0x538b1c;
  local_48 = (char *)uVar2;
  FUN_004b15c0();
  if (param_4 == 0) {
    local_34 = (char *)0x0;
    param_6 = param_6 & 0xffffff00;
    local_38 = (char *)0x538b34;
    FUN_004040a0();
    uVar4 = 0xffffffff;
    pcVar5 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    local_34 = (char *)(~uVar4 - 1);
    local_38 = &DAT_006b3f70;
    local_3c = (char *)0x538b52;
    FUN_004040f0();
    local_34 = (char *)&param_6;
    local_4._0_1_ = 6;
    local_38 = (char *)0xb6;
    local_3c = s___AdamSource_DaviRC_h_0068d638;
    local_44._4_4_ = s_m_Pointer_0068d62c;
    local_44._0_4_ = 0x538b70;
    pcVar3 = (code *)FUN_005a07f0();
    local_44 = (double)CONCAT44(local_44._4_4_,0x538b72);
    (*pcVar3)();
    local_4._0_1_ = 2;
    local_34 = (char *)0x1;
    local_38 = (char *)0x538b84;
    FUN_004040a0();
  }
  local_34 = local_1c;
  local_38 = (char *)0x538b92;
  fVar7 = (float10)FUN_004b21b0();
  *param_2 = (float)(fVar7 + (float10)0.46875);
  if (iStack_18 != 0) {
    local_34 = (char *)(iStack_18 + -1);
    cVar1 = *(char *)(iStack_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      local_38 = (char *)0x538bbd;
      FUN_005fe5f0();
    }
    else {
      *local_34 = cVar1 + -1;
    }
  }
  iStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  if (param_4 != 0) {
    iVar6 = *(int *)(param_4 + 0x14) + -1;
    *(int *)(param_4 + 0x14) = iVar6;
    if (iVar6 == 0) {
      local_34 = (char *)0x0;
      local_38 = (char *)0x538bf0;
      FUN_005abfc0();
    }
    param_4 = 0;
  }
  local_4 = 0xffffffff;
  if ((param_14 != 0) &&
     (iVar6 = *(int *)(param_14 + 0x14) + -1, *(int *)(param_14 + 0x14) = iVar6, iVar6 == 0)) {
    local_34 = (char *)0x0;
    local_38 = (char *)0x538c13;
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return;
}

