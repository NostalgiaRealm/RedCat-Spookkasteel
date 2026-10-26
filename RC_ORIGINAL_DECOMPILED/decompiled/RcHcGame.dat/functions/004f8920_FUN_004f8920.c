/*
 * FUN_004f8920 at 004f8920
 * undefined FUN_004f8920(void)
 * Address ranges: 004f8920-004f8ccd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_004f8920(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  uint uVar6;
  undefined1 *puVar7;
  char *pcVar8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  int local_70;
  undefined1 local_6c [16];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  void *local_3c;
  undefined1 local_38 [4];
  undefined1 *local_34;
  undefined1 local_28 [19];
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00635000;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff34;
  ExceptionList = &local_10;
  local_70 = param_1;
  FUN_004040a0(0);
  local_4c[0] = local_15;
  local_8 = 0;
  FUN_004040a0(0);
  local_8._0_1_ = 1;
  local_6c[0] = local_15;
  FUN_004040a0(0);
  local_8._0_1_ = 2;
  local_5c[0] = local_15;
  FUN_004040a0(0);
  local_80[0] = local_15;
  local_8._0_1_ = 3;
  FUN_004040a0(0);
  local_8._0_1_ = 4;
  FUN_005b1140(param_1 + 0x3b4,local_4c,local_6c,local_5c,local_80);
  uVar6 = 0xffffffff;
  pcVar8 = &DAT_0069cf60;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_0069cf60,~uVar6 - 1);
  FUN_005b0ff0(local_38,local_4c,local_6c,local_5c,local_80);
  local_a0[0] = local_15;
  FUN_004040a0(0);
  local_8._0_1_ = 5;
  local_90[0] = local_15;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar8 = &DAT_0069cf58;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_0069cf58,~uVar6 - 1);
  local_8._0_1_ = 6;
  FUN_005b0ff0(local_a0,local_4c,local_6c,local_5c,local_90);
  FUN_00515db0();
  iVar2 = FUN_004337e0();
  if (iVar2 != 0) {
    puVar7 = *(undefined1 **)(param_1 + 0x3b8);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_0064a3b4;
    }
    puVar3 = local_34;
    if (local_34 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    uVar4 = FUN_005ae390(local_28,s_Attempt_to_load_script_from___s__0069cf30,puVar3,puVar7);
    local_8._0_1_ = 7;
    FUN_005aff00(uVar4);
    local_8._0_1_ = 6;
    FUN_004040a0(1);
  }
  puVar7 = local_34;
  if (local_34 == (undefined1 *)0x0) {
    puVar7 = &DAT_0064a3b4;
  }
  iVar2 = FUN_0061f646(puVar7,0);
  if (iVar2 == -1) {
    if (local_34 == (undefined1 *)0x0) {
      local_34 = &DAT_0064a3b4;
    }
    uVar4 = FUN_005ae390(local_28,s_Can_t_find_script_file___s__0069cf14,local_34);
    local_8._0_1_ = 8;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x537,uVar4);
    local_8._0_1_ = 6;
    FUN_004040a0(1);
    local_8._0_1_ = 5;
    FUN_004040a0(1);
    local_8._0_1_ = 4;
    FUN_004040a0(1);
    local_8._0_1_ = 3;
    FUN_004040a0(1);
    local_8._0_1_ = 2;
    FUN_004040a0(1);
    local_8._0_1_ = 1;
    FUN_004040a0(1);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004040a0(1);
    local_8 = 0xffffffff;
    uVar6 = FUN_004040a0(1);
    ExceptionList = local_10;
    return uVar6 & 0xffffff00;
  }
  if (*(int *)(param_1 + 0x41c) != 0) {
    local_28[0] = local_15;
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
    local_8._0_1_ = 9;
    pcVar5 = (code *)FUN_005a07f0(s_m_DSUnit__0_0069cf08,s_D__Work_RCHorror_AdamSource_Adam_0069c628
                                  ,0x53c,local_28);
    (*pcVar5)();
    local_8._0_1_ = 6;
    FUN_004040a0(1);
  }
  local_3c = operator_new(8);
  local_8._0_1_ = 10;
  if (local_3c == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_005e6120();
  }
  *(undefined4 *)(param_1 + 0x41c) = uVar4;
  local_8 = CONCAT31(local_8._1_3_,0xb);
  FUN_005e4250(local_a0);
  iVar2 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar2 = FUN_004bc480();
  }
  if (*(int *)(iVar2 + 0x3a4) == 0) {
    FUN_00409810(&DAT_006b3f70,&local_15);
    local_8._0_1_ = 0xc;
    pcVar5 = (code *)FUN_005a07f0();
    (*pcVar5)(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,local_28);
    local_8 = CONCAT31(local_8._1_3_,0xb);
    FUN_004040a0(1);
  }
  uVar4 = FUN_00535930();
  FUN_005e6130(local_38,uVar4);
  FUN_005e4460();
  uVar6 = FUN_004f8ee7();
  return uVar6;
}

