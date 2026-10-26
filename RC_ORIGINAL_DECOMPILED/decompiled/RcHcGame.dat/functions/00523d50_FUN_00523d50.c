/*
 * FUN_00523d50 at 00523d50
 * undefined FUN_00523d50(void)
 * Address ranges: 00523d50-00527c19
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00523d50(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined4 *local_40;
  undefined1 local_3c [4];
  char *local_38;
  undefined1 local_2c [4];
  char *local_28;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006398d3;
  local_c = ExceptionList;
  iVar3 = *(int *)(param_1 + 0xb0);
  ExceptionList = &local_c;
  if (iVar3 != 0) {
    ExceptionList = &local_c;
    FUN_005e6a30();
    FUN_005fe5f0(iVar3);
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  puVar2 = operator_new(0x14);
  local_4 = 0;
  local_40 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    FUN_005e6a10();
  }
  *(undefined4 **)(param_1 + 0xb0) = puVar2;
  local_4 = 0xffffffff;
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_AddCode_006921c8,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 1;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_AddCode_006921c8;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_AddCode_006921c8,~uVar7 - 1);
  local_4 = 2;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CadamScriptGameObject_0069fe88,~uVar7 - 1);
  local_4._0_1_ = 3;
  FUN_005e3c00(local_2c,local_3c,FUN_00505470);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,
                         s_AddDefaultCommand_0069e18c,s_CadamScriptGameObject_0069fe88);
    local_4 = 4;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_AddDefaultCommand_0069e18c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_AddDefaultCommand_0069e18c,~uVar7 - 1);
  local_2c[0] = local_43;
  local_4 = 5;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CadamScriptGameObject_0069fe88,~uVar7 - 1);
  local_4._0_1_ = 6;
  FUN_005e3c00(local_2c,local_3c,FUN_005055c0);
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_AddFrequency_0069e1a0,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 7;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_AddFrequency_0069e1a0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_AddFrequency_0069e1a0,~uVar7 - 1);
  local_4 = 8;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CadamScriptGameObject_0069fe88,~uVar7 - 1);
  local_4._0_1_ = 9;
  FUN_005e3c00(local_2c,local_3c,FUN_00505710);
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,
                         s_AddMissionCommand_0069e1b0,s_CadamScriptGameObject_0069fe88);
    local_4 = 10;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_AddMissionCommand_0069e1b0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_AddMissionCommand_0069e1b0,~uVar7 - 1);
  local_4 = 0xb;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CadamScriptGameObject_0069fe88,~uVar7 - 1);
  local_4._0_1_ = 0xc;
  FUN_005e3c00(local_2c,local_3c,FUN_00505860);
  local_4 = CONCAT31(local_4._1_3_,0xb);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_close_00698f34,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0xd;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_close_00698f34;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_close_00698f34,~uVar7 - 1);
  local_2c[0] = local_43;
  local_4 = 0xe;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CadamScriptGameObject_0069fe88,~uVar7 - 1);
  local_4._0_1_ = 0xf;
  FUN_005e3c00(local_2c,local_3c,FUN_005059b0);
  local_4 = CONCAT31(local_4._1_3_,0xe);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_destroy_0069da44,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x10;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_destroy_0069da44;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_destroy_0069da44,~uVar7 - 1);
  local_4 = 0x11;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CadamScriptGameObject_0069fe88,~uVar7 - 1);
  local_4._0_1_ = 0x12;
  FUN_005e3c00(local_2c,local_3c,FUN_00505b00);
  local_4 = CONCAT31(local_4._1_3_,0x11);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_disable_0068f0dc,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x13;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_disable_0068f0dc;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_disable_0068f0dc,~uVar7 - 1);
  local_4 = 0x14;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CadamScriptGameObject_0069fe88,~uVar7 - 1);
  local_4._0_1_ = 0x15;
  FUN_005e3c00(local_2c,local_3c,FUN_00505c50);
  local_4 = CONCAT31(local_4._1_3_,0x14);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_DisableShadow_00695020,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x16;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_DisableShadow_00695020;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_DisableShadow_00695020,~uVar7 - 1);
  local_2c[0] = local_43;
  local_4 = 0x17;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CadamScriptGameObject_0069fe88,~uVar7 - 1);
  local_4._0_1_ = 0x18;
  FUN_005e3c00(local_2c,local_3c,FUN_00505da0);
  local_4 = CONCAT31(local_4._1_3_,0x17);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,&DAT_00695eec,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x19;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = (char *)&DAT_00695eec;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_00695eec,~uVar7 - 1);
  local_4 = 0x1a;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CadamScriptGameObject_0069fe88,~uVar7 - 1);
  local_4._0_1_ = 0x1b;
  FUN_005e3c00(local_2c,local_3c,FUN_00505ef0);
  local_4 = CONCAT31(local_4._1_3_,0x1a);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_enable_0068f0e4,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x1c;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_enable_0068f0e4;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_enable_0068f0e4,~uVar7 - 1);
  local_4 = 0x1d;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CadamScriptGameObject_0069fe88,~uVar7 - 1);
  local_4._0_1_ = 0x1e;
  FUN_005e3c00(local_2c,local_3c,FUN_00506040);
  local_4 = CONCAT31(local_4._1_3_,0x1d);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_EnableShadow_00695030,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x1f;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_EnableShadow_00695030;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_EnableShadow_00695030,~uVar7 - 1);
  local_2c[0] = local_43;
  local_4 = 0x20;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CadamScriptGameObject_0069fe88,~uVar7 - 1);
  local_4._0_1_ = 0x21;
  FUN_005e3c00(local_2c,local_3c,FUN_00506190);
  local_4 = CONCAT31(local_4._1_3_,0x20);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,&DAT_00693338,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x22;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = (char *)&DAT_00693338;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_00693338,~uVar7 - 1);
  local_4 = 0x23;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CadamScriptGameObject_0069fe88,~uVar7 - 1);
  local_4._0_1_ = 0x24;
  FUN_005e3c00(local_2c,local_3c,FUN_005062e0);
  local_4 = CONCAT31(local_4._1_3_,0x23);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_GetOne_0069e1c4,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x25;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_GetOne_0069e1c4;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_GetOne_0069e1c4,~uVar7 - 1);
  local_4 = 0x26;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CadamScriptGameObject_0069fe88,~uVar7 - 1);
  local_4._0_1_ = 0x27;
  FUN_005e3c00(local_2c,local_3c,FUN_00506430);
  local_4 = CONCAT31(local_4._1_3_,0x26);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,&DAT_0069da3c,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x28;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = (char *)&DAT_0069da3c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_0069da3c,~uVar7 - 1);
  local_2c[0] = local_43;
  local_4 = 0x29;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CadamScriptGameObject_0069fe88,~uVar7 - 1);
  local_4._0_1_ = 0x2a;
  FUN_005e3c00(local_2c,local_3c,FUN_00506580);
  local_4 = CONCAT31(local_4._1_3_,0x29);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,&DAT_00698f44,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x2b;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = (char *)&DAT_00698f44;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_00698f44,~uVar7 - 1);
  local_4 = 0x2c;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CadamScriptGameObject_0069fe88,~uVar7 - 1);
  local_4._0_1_ = 0x2d;
  FUN_005e3c00(local_2c,local_3c,FUN_005066d0);
  local_4 = CONCAT31(local_4._1_3_,0x2c);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_MoveTo_006995a0,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x2e;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_MoveTo_006995a0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_MoveTo_006995a0,~uVar7 - 1);
  local_4 = 0x2f;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CadamScriptGameObject_0069fe88,~uVar7 - 1);
  local_4._0_1_ = 0x30;
  FUN_005e3c00(local_2c,local_3c,FUN_00506820);
  local_4 = CONCAT31(local_4._1_3_,0x2f);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_SetTo_006994e0,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x31;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_SetTo_006994e0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_SetTo_006994e0,~uVar7 - 1);
  local_2c[0] = local_43;
  local_4 = 0x32;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CadamScriptGameObject_0069fe88,~uVar7 - 1);
  local_4._0_1_ = 0x33;
  FUN_005e3c00(local_2c,local_3c,FUN_00506970);
  local_4 = CONCAT31(local_4._1_3_,0x32);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,
                         s_MultiplyMotionSpeed_00694fbc,s_CadamScriptGameObject_0069fe88);
    local_4 = 0x34;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_MultiplyMotionSpeed_00694fbc;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_MultiplyMotionSpeed_00694fbc,~uVar7 - 1);
  local_4 = 0x35;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CadamScriptGameObject_0069fe88,~uVar7 - 1);
  local_4._0_1_ = 0x36;
  FUN_005e3c00(local_2c,local_3c,FUN_00506ac0);
  local_4 = CONCAT31(local_4._1_3_,0x35);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_MultiplyVolume_0069e1cc
                         ,s_CadamScriptGameObject_0069fe88);
    local_4 = 0x37;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_MultiplyVolume_0069e1cc;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_MultiplyVolume_0069e1cc,~uVar7 - 1);
  local_4 = 0x38;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CadamScriptGameObject_0069fe88,~uVar7 - 1);
  local_4._0_1_ = 0x39;
  FUN_005e3c00(local_2c,local_3c,FUN_00506c10);
  local_4 = CONCAT31(local_4._1_3_,0x38);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,&DAT_00698f3c,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x3a;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = (char *)&DAT_00698f3c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_00698f3c,~uVar7 - 1);
  local_2c[0] = local_43;
  local_4 = 0x3b;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CadamScriptGameObject_0069fe88,~uVar7 - 1);
  local_4._0_1_ = 0x3c;
  FUN_005e3c00(local_2c,local_3c,FUN_00506d60);
  local_4 = CONCAT31(local_4._1_3_,0x3b);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_PlayAction_0068f9dc,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x3d;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_PlayAction_0068f9dc;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_PlayAction_0068f9dc,~uVar7 - 1);
  local_4 = 0x3e;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CadamScriptGameObject_0069fe88,~uVar7 - 1);
  local_4._0_1_ = 0x3f;
  FUN_005e3c00(local_2c,local_3c,FUN_00506eb0);
  local_4 = CONCAT31(local_4._1_3_,0x3e);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_PlayAmbient_0068f9d0,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x40;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_PlayAmbient_0068f9d0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_PlayAmbient_0068f9d0,~uVar7 - 1);
  local_4 = 0x41;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CadamScriptGameObject_0069fe88,~uVar7 - 1);
  local_4._0_1_ = 0x42;
  FUN_005e3c00(local_2c,local_3c,FUN_00507000);
  local_4 = CONCAT31(local_4._1_3_,0x41);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_PlayCareful_0069e1dc,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x43;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_PlayCareful_0069e1dc;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_PlayCareful_0069e1dc,~uVar7 - 1);
  local_2c[0] = local_43;
  local_4 = 0x44;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CadamScriptGameObject_0069fe88,~uVar7 - 1);
  local_4._0_1_ = 0x45;
  FUN_005e3c00(local_2c,local_3c,FUN_00507150);
  local_4 = CONCAT31(local_4._1_3_,0x44);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_PlayEerie_0069e1e8,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x46;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_PlayEerie_0069e1e8;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_PlayEerie_0069e1e8,~uVar7 - 1);
  local_4 = 0x47;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CadamScriptGameObject_0069fe88,~uVar7 - 1);
  local_4._0_1_ = 0x48;
  FUN_005e3c00(local_2c,local_3c,FUN_005072a0);
  local_4 = CONCAT31(local_4._1_3_,0x47);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_PlayShock_0069e1f4,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x49;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_PlayShock_0069e1f4;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_PlayShock_0069e1f4,~uVar7 - 1);
  local_4 = 0x4a;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CadamScriptGameObject_0069fe88,~uVar7 - 1);
  local_4._0_1_ = 0x4b;
  FUN_005e3c00(local_2c,local_3c,FUN_005073f0);
  local_4 = CONCAT31(local_4._1_3_,0x4a);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,
                         s_PlayShockAction_0069e200,s_CadamScriptGameObject_0069fe88);
    local_4 = 0x4c;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_PlayShockAction_0069e200;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_PlayShockAction_0069e200,~uVar7 - 1);
  local_2c[0] = local_43;
  local_4 = 0x4d;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CadamScriptGameObject_0069fe88,~uVar7 - 1);
  local_4._0_1_ = 0x4e;
  FUN_005e3c00(local_2c,local_3c,FUN_00507540);
  local_4 = CONCAT31(local_4._1_3_,0x4d);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_PlaySpecial_0068f9e8,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x4f;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_PlaySpecial_0068f9e8;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_PlaySpecial_0068f9e8,~uVar7 - 1);
  local_4 = 0x50;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CadamScriptGameObject_0069fe88,~uVar7 - 1);
  local_4._0_1_ = 0x51;
  FUN_005e3c00(local_2c,local_3c,FUN_00507690);
  local_4 = CONCAT31(local_4._1_3_,0x50);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_PlayVictory_0069e210,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x52;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_PlayVictory_0069e210;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_PlayVictory_0069e210,~uVar7 - 1);
  local_4 = 0x53;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CadamScriptGameObject_0069fe88,~uVar7 - 1);
  local_4._0_1_ = 0x54;
  FUN_005e3c00(local_2c,local_3c,FUN_005077e0);
  local_4 = CONCAT31(local_4._1_3_,0x53);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,
                         s_PlayVictoryAmbient_0069e21c,s_CadamScriptGameObject_0069fe88);
    local_4 = 0x55;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_PlayVictoryAmbient_0069e21c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_PlayVictoryAmbient_0069e21c,~uVar7 - 1);
  local_2c[0] = local_43;
  local_4 = 0x56;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CadamScriptGameObject_0069fe88,~uVar7 - 1);
  local_4._0_1_ = 0x57;
  FUN_005e3c00(local_2c,local_3c,FUN_00507930);
  local_4 = CONCAT31(local_4._1_3_,0x56);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,
                         s_PlayVictoryCareful_0069e230,s_CadamScriptGameObject_0069fe88);
    local_4 = 0x58;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_PlayVictoryCareful_0069e230;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_PlayVictoryCareful_0069e230,~uVar7 - 1);
  local_4 = 0x59;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CadamScriptGameObject_0069fe88,~uVar7 - 1);
  local_4._0_1_ = 0x5a;
  FUN_005e3c00(local_2c,local_3c,FUN_00507a80);
  local_4 = CONCAT31(local_4._1_3_,0x59);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,
                         s_PlayVictoryEerie_0069e244,s_CadamScriptGameObject_0069fe88);
    local_4 = 0x5b;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_PlayVictoryEerie_0069e244;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_PlayVictoryEerie_0069e244,~uVar7 - 1);
  local_4 = 0x5c;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CadamScriptGameObject_0069fe88,~uVar7 - 1);
  local_4._0_1_ = 0x5d;
  FUN_005e3c00(local_2c,local_3c,FUN_00507bd0);
  local_4 = CONCAT31(local_4._1_3_,0x5c);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,
                         s_PlayVictoryNone_0069e258,s_CadamScriptGameObject_0069fe88);
    local_4 = 0x5e;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_PlayVictoryNone_0069e258;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_PlayVictoryNone_0069e258,~uVar7 - 1);
  local_2c[0] = local_43;
  local_4 = 0x5f;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CadamScriptGameObject_0069fe88,~uVar7 - 1);
  local_4._0_1_ = 0x60;
  FUN_005e3c00(local_2c,local_3c,FUN_00507d20);
  local_4 = CONCAT31(local_4._1_3_,0x5f);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,
                         s_RemoveAllPlanetoids_0069e268,s_CadamScriptGameObject_0069fe88);
    local_4 = 0x61;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_RemoveAllPlanetoids_0069e268;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_RemoveAllPlanetoids_0069e268,~uVar7 - 1);
  local_4 = 0x62;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CadamScriptGameObject_0069fe88,~uVar7 - 1);
  local_4._0_1_ = 99;
  FUN_005e3c00(local_2c,local_3c,FUN_00507e70);
  local_4 = CONCAT31(local_4._1_3_,0x62);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,
                         s_RemovePlanetoid_0069e27c,s_CadamScriptGameObject_0069fe88);
    local_4 = 100;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_RemovePlanetoid_0069e27c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_40 = (undefined4 *)(~uVar7 - 1);
  cVar1 = FUN_00401940(local_40,1);
  if (cVar1 != '\0') {
    pcVar8 = s_RemovePlanetoid_0069e27c;
    pcVar9 = local_28;
    for (uVar7 = (uint)local_40 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = (uint)local_40 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(local_40);
  }
  local_4 = 0x65;
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_40 = (undefined4 *)(~uVar7 - 1);
  cVar1 = FUN_00401940(local_40,1);
  if (cVar1 != '\0') {
    pcVar8 = s_CadamScriptGameObject_0069fe88;
    pcVar9 = local_38;
    for (uVar7 = (uint)local_40 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = (uint)local_40 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(local_40);
  }
  local_4._0_1_ = 0x66;
  FUN_005e3c00(local_3c,local_2c,FUN_00507fc0);
  local_4 = CONCAT31(local_4._1_3_,0x65);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_ResetCode_00692218,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x67;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_ResetCode_00692218;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_40 = (undefined4 *)(~uVar7 - 1);
  cVar1 = FUN_00401940(local_40,1);
  if (cVar1 != '\0') {
    pcVar8 = s_ResetCode_00692218;
    pcVar9 = local_38;
    for (uVar7 = (uint)local_40 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = (uint)local_40 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(local_40);
  }
  local_4 = 0x68;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_40 = (undefined4 *)(~uVar7 - 1);
  cVar1 = FUN_00401940(local_40,1);
  if (cVar1 != '\0') {
    pcVar8 = s_CadamScriptGameObject_0069fe88;
    pcVar9 = local_28;
    for (uVar7 = (uint)local_40 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = (uint)local_40 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(local_40);
  }
  local_4._0_1_ = 0x69;
  FUN_005e3c00(local_2c,local_3c,FUN_00508110);
  local_4 = CONCAT31(local_4._1_3_,0x68);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_Reset_00699314,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x6a;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_Reset_00699314;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_40 = (undefined4 *)(~uVar7 - 1);
  cVar1 = FUN_00401940(local_40,1);
  if (cVar1 != '\0') {
    pcVar8 = s_Reset_00699314;
    pcVar9 = local_38;
    for (uVar7 = (uint)local_40 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = (uint)local_40 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(local_40);
  }
  local_4 = 0x6b;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_40 = (undefined4 *)(~uVar7 - 1);
  cVar1 = FUN_00401940(local_40,1);
  if (cVar1 != '\0') {
    pcVar8 = s_CadamScriptGameObject_0069fe88;
    pcVar9 = local_28;
    for (uVar7 = (uint)local_40 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = (uint)local_40 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(local_40);
  }
  local_4._0_1_ = 0x6c;
  FUN_005e3c00(local_2c,local_3c,FUN_00508260);
  local_4 = CONCAT31(local_4._1_3_,0x6b);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_RotateX_00694f7c,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x6d;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_RotateX_00694f7c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_40 = (undefined4 *)(~uVar7 - 1);
  cVar1 = FUN_00401940(local_40,1);
  if (cVar1 != '\0') {
    pcVar8 = s_RotateX_00694f7c;
    pcVar9 = local_38;
    for (uVar7 = (uint)local_40 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = (uint)local_40 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(local_40);
  }
  local_4 = 0x6e;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_40 = (undefined4 *)(~uVar7 - 1);
  cVar1 = FUN_00401940(local_40,1);
  if (cVar1 != '\0') {
    pcVar8 = s_CadamScriptGameObject_0069fe88;
    pcVar9 = local_28;
    for (uVar7 = (uint)local_40 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = (uint)local_40 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(local_40);
  }
  local_4._0_1_ = 0x6f;
  FUN_005e3c00(local_2c,local_3c,FUN_005083b0);
  local_4 = CONCAT31(local_4._1_3_,0x6e);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_RotateY_00694f74,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x70;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_RotateY_00694f74;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_40 = (undefined4 *)(~uVar7 - 1);
  cVar1 = FUN_00401940(local_40,1);
  if (cVar1 != '\0') {
    pcVar8 = s_RotateY_00694f74;
    pcVar9 = local_38;
    for (uVar7 = (uint)local_40 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = (uint)local_40 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(local_40);
  }
  local_4 = 0x71;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_40 = (undefined4 *)(~uVar7 - 1);
  cVar1 = FUN_00401940(local_40,1);
  if (cVar1 != '\0') {
    pcVar8 = s_CadamScriptGameObject_0069fe88;
    pcVar9 = local_28;
    for (uVar7 = (uint)local_40 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = (uint)local_40 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(local_40);
  }
  local_4._0_1_ = 0x72;
  FUN_005e3c00(local_2c,local_3c,FUN_00508500);
  local_4 = CONCAT31(local_4._1_3_,0x71);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_RotateZ_00694f6c,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x73;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_RotateZ_00694f6c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_40 = (undefined4 *)(~uVar7 - 1);
  cVar1 = FUN_00401940(local_40,1);
  if (cVar1 != '\0') {
    pcVar8 = s_RotateZ_00694f6c;
    pcVar9 = local_38;
    for (uVar7 = (uint)local_40 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = (uint)local_40 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(local_40);
  }
  local_4 = 0x74;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_40 = (undefined4 *)(~uVar7 - 1);
  cVar1 = FUN_00401940(local_40,1);
  if (cVar1 != '\0') {
    pcVar8 = s_CadamScriptGameObject_0069fe88;
    pcVar9 = local_28;
    for (uVar7 = (uint)local_40 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = (uint)local_40 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(local_40);
  }
  local_4._0_1_ = 0x75;
  FUN_005e3c00(local_2c,local_3c,FUN_00508650);
  local_4 = CONCAT31(local_4._1_3_,0x74);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,
                         s_SetFollowDaviName_0069e28c,s_CadamScriptGameObject_0069fe88);
    local_4 = 0x76;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_SetFollowDaviName_0069e28c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_40 = (undefined4 *)(~uVar7 - 1);
  cVar1 = FUN_00401940(local_40,1);
  if (cVar1 != '\0') {
    pcVar8 = s_SetFollowDaviName_0069e28c;
    pcVar9 = local_38;
    for (uVar7 = (uint)local_40 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = (uint)local_40 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(local_40);
  }
  local_4 = 0x77;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_40 = (undefined4 *)(~uVar7 - 1);
  cVar1 = FUN_00401940(local_40,1);
  if (cVar1 != '\0') {
    pcVar8 = s_CadamScriptGameObject_0069fe88;
    pcVar9 = local_28;
    for (uVar7 = (uint)local_40 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = (uint)local_40 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(local_40);
  }
  local_4._0_1_ = 0x78;
  FUN_005e3c00(local_2c,local_3c,FUN_005087a0);
  local_4 = CONCAT31(local_4._1_3_,0x77);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,
                         s_SetFollowOffset_0069e2a0,s_CadamScriptGameObject_0069fe88);
    local_4 = 0x79;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_SetFollowOffset_0069e2a0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_40 = (undefined4 *)(~uVar7 - 1);
  cVar1 = FUN_00401940(local_40,1);
  if (cVar1 != '\0') {
    pcVar8 = s_SetFollowOffset_0069e2a0;
    pcVar9 = local_38;
    for (uVar7 = (uint)local_40 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = (uint)local_40 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(local_40);
  }
  local_4 = 0x7a;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_40 = (undefined4 *)(~uVar7 - 1);
  cVar1 = FUN_00401940(local_40,1);
  if (cVar1 != '\0') {
    pcVar8 = s_CadamScriptGameObject_0069fe88;
    pcVar9 = local_28;
    for (uVar7 = (uint)local_40 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = (uint)local_40 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(local_40);
  }
  local_4._0_1_ = 0x7b;
  FUN_005e3c00(local_2c,local_3c,FUN_005088f0);
  local_4 = CONCAT31(local_4._1_3_,0x7a);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  iVar5 = FUN_00515db0();
  iVar3 = *(int *)(iVar5 + 100);
  if (iVar3 == -0x80000000) {
    puVar6 = *(undefined1 **)(iVar5 + 0x18);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    iVar3 = FUN_0060af10(puVar6);
    *(int *)(iVar5 + 100) = iVar3;
  }
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_SetFriction_0069e2b0,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x7c;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_SetFriction_0069e2b0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_40 = (undefined4 *)(~uVar7 - 1);
  cVar1 = FUN_00401940(local_40,1);
  if (cVar1 != '\0') {
    pcVar8 = s_SetFriction_0069e2b0;
    pcVar9 = local_38;
    for (uVar7 = (uint)local_40 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = (uint)local_40 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(local_40);
  }
  local_4 = 0x7d;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_40 = (undefined4 *)(~uVar7 - 1);
  cVar1 = FUN_00401940(local_40,1);
  if (cVar1 != '\0') {
    pcVar8 = s_CadamScriptGameObject_0069fe88;
    pcVar9 = local_28;
    for (uVar7 = (uint)local_40 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = (uint)local_40 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(local_40);
  }
  local_4._0_1_ = 0x7e;
  FUN_005e3c00(local_2c,local_3c,FUN_00508a40);
  local_4 = CONCAT31(local_4._1_3_,0x7d);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  iVar5 = FUN_00515db0();
  iVar3 = *(int *)(iVar5 + 100);
  if (iVar3 == -0x80000000) {
    puVar6 = *(undefined1 **)(iVar5 + 0x18);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    iVar3 = FUN_0060af10(puVar6);
    *(int *)(iVar5 + 100) = iVar3;
  }
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_SetMotionSpeed_00695010
                         ,s_CadamScriptGameObject_0069fe88);
    local_4 = 0x7f;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_SetMotionSpeed_00695010;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_40 = (undefined4 *)(~uVar7 - 1);
  cVar1 = FUN_00401940(local_40,1);
  if (cVar1 != '\0') {
    pcVar8 = s_SetMotionSpeed_00695010;
    pcVar9 = local_38;
    for (uVar7 = (uint)local_40 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = (uint)local_40 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(local_40);
  }
  local_4 = 0x80;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_40 = (undefined4 *)(~uVar7 - 1);
  cVar1 = FUN_00401940(local_40,1);
  if (cVar1 != '\0') {
    pcVar8 = s_CadamScriptGameObject_0069fe88;
    pcVar9 = local_28;
    for (uVar7 = (uint)local_40 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = (uint)local_40 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(local_40);
  }
  local_4._0_1_ = 0x81;
  FUN_005e3c00(local_2c,local_3c,FUN_00508b90);
  local_4 = CONCAT31(local_4._1_3_,0x80);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  iVar5 = FUN_00515db0();
  iVar3 = *(int *)(iVar5 + 100);
  if (iVar3 == -0x80000000) {
    puVar6 = *(undefined1 **)(iVar5 + 0x18);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    iVar3 = FUN_0060af10(puVar6);
    *(int *)(iVar5 + 100) = iVar3;
  }
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_SetRadius_0069a3c4,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x82;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_SetRadius_0069a3c4;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_40 = (undefined4 *)(~uVar7 - 1);
  cVar1 = FUN_00401940(local_40,1);
  if (cVar1 != '\0') {
    pcVar8 = s_SetRadius_0069a3c4;
    pcVar9 = local_38;
    for (uVar7 = (uint)local_40 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = (uint)local_40 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(local_40);
  }
  local_4 = 0x83;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_40 = (undefined4 *)(~uVar7 - 1);
  cVar1 = FUN_00401940(local_40,1);
  if (cVar1 != '\0') {
    pcVar8 = s_CadamScriptGameObject_0069fe88;
    pcVar9 = local_28;
    for (uVar7 = (uint)local_40 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = (uint)local_40 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(local_40);
  }
  local_4._0_1_ = 0x84;
  FUN_005e3c00(local_2c,local_3c,FUN_00508ce0);
  local_4 = CONCAT31(local_4._1_3_,0x83);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  iVar5 = FUN_00515db0();
  iVar3 = *(int *)(iVar5 + 100);
  if (iVar3 == -0x80000000) {
    puVar6 = *(undefined1 **)(iVar5 + 0x18);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    iVar3 = FUN_0060af10(puVar6);
    *(int *)(iVar5 + 100) = iVar3;
  }
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_SetRadiusTime_0069a418,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x85;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_SetRadiusTime_0069a418;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_40 = (undefined4 *)(~uVar7 - 1);
  cVar1 = FUN_00401940(local_40,1);
  if (cVar1 != '\0') {
    pcVar8 = s_SetRadiusTime_0069a418;
    pcVar9 = local_38;
    for (uVar7 = (uint)local_40 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = (uint)local_40 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(local_40);
  }
  local_4 = 0x86;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_40 = (undefined4 *)(~uVar7 - 1);
  cVar1 = FUN_00401940(local_40,1);
  if (cVar1 != '\0') {
    pcVar8 = s_CadamScriptGameObject_0069fe88;
    pcVar9 = local_28;
    for (uVar7 = (uint)local_40 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = (uint)local_40 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(local_40);
  }
  local_4._0_1_ = 0x87;
  FUN_005e3c00(local_2c,local_3c,FUN_00508e30);
  local_4 = CONCAT31(local_4._1_3_,0x86);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  iVar5 = FUN_00515db0();
  iVar3 = *(int *)(iVar5 + 100);
  if (iVar3 == -0x80000000) {
    puVar6 = *(undefined1 **)(iVar5 + 0x18);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    iVar3 = FUN_0060af10(puVar6);
    *(int *)(iVar5 + 100) = iVar3;
  }
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,&DAT_00692e98,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x88;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = (char *)&DAT_00692e98;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_40 = (undefined4 *)(~uVar7 - 1);
  cVar1 = FUN_00401940(local_40,1);
  if (cVar1 != '\0') {
    pcVar8 = (char *)&DAT_00692e98;
    pcVar9 = local_38;
    for (uVar7 = (uint)local_40 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = (uint)local_40 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(local_40);
  }
  local_4 = 0x89;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_40 = (undefined4 *)(~uVar7 - 1);
  cVar1 = FUN_00401940(local_40,1);
  if (cVar1 != '\0') {
    pcVar8 = s_CadamScriptGameObject_0069fe88;
    pcVar9 = local_28;
    for (uVar7 = (uint)local_40 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = (uint)local_40 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(local_40);
  }
  local_4._0_1_ = 0x8a;
  FUN_005e3c00(local_2c,local_3c,FUN_00508f80);
  local_4 = CONCAT31(local_4._1_3_,0x89);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  iVar5 = FUN_00515db0();
  iVar3 = *(int *)(iVar5 + 100);
  if (iVar3 == -0x80000000) {
    puVar6 = *(undefined1 **)(iVar5 + 0x18);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    iVar3 = FUN_0060af10(puVar6);
    *(int *)(iVar5 + 100) = iVar3;
  }
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_StartMission_0069e2bc,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x8b;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_StartMission_0069e2bc;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_40 = (undefined4 *)(~uVar7 - 1);
  cVar1 = FUN_00401940(local_40,1);
  if (cVar1 != '\0') {
    pcVar8 = s_StartMission_0069e2bc;
    pcVar9 = local_38;
    for (uVar7 = (uint)local_40 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = (uint)local_40 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(local_40);
  }
  local_4 = 0x8c;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_40 = (undefined4 *)(~uVar7 - 1);
  cVar1 = FUN_00401940(local_40,1);
  if (cVar1 != '\0') {
    pcVar8 = s_CadamScriptGameObject_0069fe88;
    pcVar9 = local_28;
    for (uVar7 = (uint)local_40 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = (uint)local_40 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(local_40);
  }
  local_4._0_1_ = 0x8d;
  FUN_005e3c00(local_2c,local_3c,FUN_005090d0);
  local_4 = CONCAT31(local_4._1_3_,0x8c);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  iVar5 = FUN_00515db0();
  iVar3 = *(int *)(iVar5 + 100);
  if (iVar3 == -0x80000000) {
    puVar6 = *(undefined1 **)(iVar5 + 0x18);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    iVar3 = FUN_0060af10(puVar6);
    *(int *)(iVar5 + 100) = iVar3;
  }
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_StopPlaying_0069e2cc,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x8e;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_3c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_StopPlaying_0069e2cc;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_40 = (undefined4 *)(~uVar7 - 1);
  cVar1 = FUN_00401940(local_40,1);
  if (cVar1 != '\0') {
    pcVar8 = s_StopPlaying_0069e2cc;
    for (uVar7 = (uint)local_40 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)local_38 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      local_38 = local_38 + 4;
    }
    for (uVar7 = (uint)local_40 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *local_38 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      local_38 = local_38 + 1;
    }
    FUN_00404190(local_40);
  }
  local_4 = 0x8f;
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_CadamScriptGameObject_0069fe88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_40 = (undefined4 *)(~uVar7 - 1);
  cVar1 = FUN_00401940(local_40,1);
  if (cVar1 != '\0') {
    pcVar8 = s_CadamScriptGameObject_0069fe88;
    pcVar9 = local_28;
    for (uVar7 = (uint)local_40 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = (uint)local_40 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(local_40);
  }
  local_4._0_1_ = 0x90;
  FUN_005e3c00(local_2c,local_3c,FUN_00509220);
  local_4 = CONCAT31(local_4._1_3_,0x8f);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  iVar5 = FUN_00515db0();
  iVar3 = *(int *)(iVar5 + 100);
  if (iVar3 == -0x80000000) {
    puVar6 = *(undefined1 **)(iVar5 + 0x18);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    iVar3 = FUN_0060af10(puVar6);
    *(int *)(iVar5 + 100) = iVar3;
  }
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_switch_00698d1c,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x91;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_2c[0] = local_43;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_switch_00698d1c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_40 = (undefined4 *)(~uVar7 - 1);
  cVar1 = FUN_00401940(local_40,1);
  if (cVar1 != '\0') {
    pcVar8 = s_switch_00698d1c;
    for (uVar7 = (uint)local_40 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)local_28 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      local_28 = local_28 + 4;
    }
    for (uVar7 = (uint)local_40 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *local_28 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      local_28 = local_28 + 1;
    }
    FUN_00404190(local_40);
  }
  local_4 = 0x92;
  local_3c[0] = local_43;
  FUN_004040a0(0);
  FUN_00536ef0(s_CadamScriptGameObject_0069fe88);
  local_4._0_1_ = 0x93;
  FUN_005e3c00(local_3c,local_2c,FUN_00509370);
  local_4 = CONCAT31(local_4._1_3_,0x92);
  FUN_00542570();
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00515db0();
  cVar1 = FUN_004a7130();
  if (cVar1 != '\0') {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_SwitchOff_00698d04,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x94;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_00542570();
  }
  FUN_00409810(s_SwitchOff_00698d04,&local_43);
  local_4 = 0x95;
  FUN_00409810(s_CadamScriptGameObject_0069fe88,&local_42);
  local_4._0_1_ = 0x96;
  FUN_005e3c00(local_2c,local_3c,FUN_005094c0);
  local_4 = CONCAT31(local_4._1_3_,0x95);
  FUN_00542570();
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00515db0();
  cVar1 = FUN_004a7130();
  if (cVar1 != '\0') {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,&DAT_00698d10,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x97;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_00542570();
  }
  FUN_00409810(&DAT_00698d10,&local_42);
  local_4 = 0x98;
  FUN_00409810(s_CadamScriptGameObject_0069fe88,&local_43);
  local_4._0_1_ = 0x99;
  FUN_005e3c00(local_2c,local_3c,FUN_00509610);
  local_4 = CONCAT31(local_4._1_3_,0x98);
  FUN_00542570();
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00515db0();
  cVar1 = FUN_004a7130();
  if (cVar1 != '\0') {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_trigger_00692168,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x9a;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_00542570();
  }
  FUN_00409810(s_trigger_00692168,&local_42);
  local_4 = 0x9b;
  FUN_00409810(s_CadamScriptGameObject_0069fe88,&local_43);
  local_4._0_1_ = 0x9c;
  FUN_005e3c00(local_2c,local_3c,FUN_00509760);
  local_4 = CONCAT31(local_4._1_3_,0x9b);
  FUN_00542570();
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00515db0();
  cVar1 = FUN_004a7130();
  if (cVar1 != '\0') {
    uVar4 = FUN_005ae390(local_2c,s_Declare_method___s___class__s_0069fe68,s_Unlock_00698f4c,
                         s_CadamScriptGameObject_0069fe88);
    local_4 = 0x9d;
    FUN_005aff00(uVar4);
    local_4 = 0xffffffff;
    FUN_00542570();
  }
  FUN_00409810(s_Unlock_00698f4c,&local_42);
  local_4 = 0x9e;
  FUN_00409810(s_CadamScriptGameObject_0069fe88,&local_43);
  local_4._0_1_ = 0x9f;
  FUN_005e3c00(local_2c,local_3c,FUN_005098b0);
  local_4 = CONCAT31(local_4._1_3_,0x9e);
  FUN_00542570();
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00409810(s_CommunicatorEnable_0069fe54,&local_42);
  local_4 = 0xa0;
  FUN_005e3180(local_2c,FUN_0056b9d0);
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00409810(s_CommunicatorSay_0069fe44,&local_42);
  local_4 = 0xa1;
  FUN_005e3180(local_2c,FUN_0056bcf0);
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00409810(&DAT_0069fe40,&local_42);
  local_4 = 0xa2;
  FUN_005e3180(local_2c,FUN_0056bfe0);
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00409810(s_DebugMessage_0069fe30,&local_42);
  local_4 = 0xa3;
  FUN_005e3180(local_2c,FUN_0056c220);
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00409810(s_PlayerVisible_0069fe20,&local_42);
  local_4 = 0xa4;
  FUN_005e3180(local_2c,FUN_0056c3a0);
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00409810(s_LoadCommPortrait_0069fe0c,&local_42);
  local_4 = 0xa5;
  FUN_005e3180(local_2c,FUN_0056c610);
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00409810(s_LoadCommSounds_0069fdfc,&local_42);
  local_4 = 0xa6;
  FUN_005e3180(local_2c,FUN_0056c8a0);
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00409810(s_SetCommPortraitAnim_0069fde8,&local_42);
  local_4 = 0xa7;
  FUN_005e3180(local_2c,FUN_0056cbd0);
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00409810(s_KillPlayer_0069fddc,&local_42);
  local_4 = 0xa8;
  FUN_005e3180(local_2c,FUN_0056d910);
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00409810(s_StartCutScene_0069fdcc,&local_42);
  local_4 = 0xa9;
  FUN_005e3180(local_2c,FUN_00569ed0);
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00409810(s_StopCutScene_0069fdbc,&local_42);
  local_4 = 0xaa;
  FUN_005e3180(local_2c,FUN_0056a0c0);
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00409810(s_CutSceneSay_0069fdb0,&local_42);
  local_4 = 0xab;
  FUN_005e3180(local_2c,FUN_0056a2b0);
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00409810(s_RcHide_0069fda8,&local_42);
  local_4 = 0xac;
  FUN_005e3180(local_2c,FUN_0056a4a0);
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00409810(s_RcShow_0069fda0,&local_42);
  local_4 = 0xad;
  FUN_005e3180(local_2c,FUN_0056a5e0);
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00409810(s_RcShowAtSpawnPoint_0069fd8c,&local_42);
  local_4 = 0xae;
  FUN_005e3180(local_2c,FUN_0056a720);
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00409810(s_RcSetSavePoint_0069fd7c,&local_42);
  local_4 = 0xaf;
  FUN_005e3180(local_2c,FUN_0056aab0);
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00409810(s_RcHintMotion_0069fd6c,&local_42);
  local_4 = 0xb0;
  FUN_005e3180(local_2c,FUN_0056b510);
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00409810(s_PlayWavSound_0069fd5c,&local_42);
  local_4 = 0xb1;
  FUN_005e3180(local_2c,FUN_0056e6b0);
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00409810(s_RcHasAllPotions_0069fd4c,&local_42);
  local_4 = 0xb2;
  FUN_005e3180(local_2c,FUN_0056af10);
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00409810(s_RcEnableSkill_0069fd3c,&local_42);
  local_4 = 0xb3;
  FUN_005e3180(local_2c,FUN_0056b190);
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00409810(s_FreezeEnemies_0069fd2c,&local_42);
  local_4 = 0xb4;
  FUN_005e3180(local_2c,&LAB_0056b450);
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00409810(s_UnFreezeEnemies_0069fd1c,&local_42);
  local_4 = 0xb5;
  FUN_005e3180(local_2c,&LAB_0056b4b0);
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00409810(s_GetGameType_0069fd10,&local_42);
  local_4 = 0xb6;
  FUN_005e3180(local_2c,FUN_0056b7f0);
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00409810(s_AddMission_0069fd04,&local_42);
  local_4 = 0xb7;
  FUN_005e3180(local_2c,FUN_0056cea0);
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00409810(s_CompleteMission_0069fcf4,&local_42);
  local_4 = 0xb8;
  FUN_005e3180(local_2c,FUN_0056d260);
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00409810(s_ShowMission_0069fce8,&local_42);
  local_4 = 0xb9;
  FUN_005e3180(local_2c,FUN_0056d4f0);
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00409810(s_ShowMissions_0069fcd8,&local_42);
  local_4 = 0xba;
  FUN_005e3180(local_2c,FUN_0056d780);
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00409810(s_PlayerHasKeyItem_0069fcc4,&local_42);
  local_4 = 0xbb;
  FUN_005e3180(local_2c,FUN_0056daf0);
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00409810(s_GivePlayerKeyItem_0069fcb0,&local_42);
  local_4 = 0xbc;
  FUN_005e3180(local_2c,FUN_0056dd60);
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00409810(s_RespawnPlayer_0069e2d8,&local_42);
  local_4 = 0xbd;
  FUN_005e3180(local_2c,FUN_0056dfc0);
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00409810(s_EnableWeapons_0069fca0,&local_42);
  local_4 = 0xbe;
  FUN_005e3180(local_2c,FUN_0056e250);
  local_4 = 0xffffffff;
  FUN_00542570();
  FUN_00409810(s_LooseAllWeapons_0069fc90,&local_41);
  local_4 = 0xbf;
  FUN_005e3180(local_1c,FUN_0056e520);
  local_4 = 0xffffffff;
  FUN_00542570();
  ExceptionList = local_c;
  return;
}

