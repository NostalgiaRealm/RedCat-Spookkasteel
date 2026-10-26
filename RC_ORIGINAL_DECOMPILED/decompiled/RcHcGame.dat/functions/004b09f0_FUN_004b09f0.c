/*
 * FUN_004b09f0 at 004b09f0
 * undefined FUN_004b09f0(void)
 * Address ranges: 004b09f0-004b0fac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004b09f0(int *param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  code *pcVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  char *pcVar10;
  int local_38 [3];
  undefined1 local_2c [4];
  undefined1 *local_28;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e73f;
  pvStack_c = ExceptionList;
  local_38[1] = 0;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_00696748,0x99);
  puVar5 = param_2;
  local_4 = 1;
  local_2c[0] = *param_2;
  FUN_004040a0(0);
  FUN_0040cc00(puVar5,0,0xffffffff);
  local_4._0_1_ = 2;
  cVar2 = FUN_004b23e0(local_2c);
  if (cVar2 == '\0') {
    uVar3 = FUN_005ae390(local_1c,s_Times_New_Roman_00696a80);
    local_4._0_1_ = 3;
    FUN_0040cc00(uVar3,0,0xffffffff);
    local_4._0_1_ = 2;
    FUN_004040a0(1);
    puVar8 = &DAT_0064a3b4;
    if (local_28 != (undefined1 *)0x0) {
      puVar8 = local_28;
    }
    puVar4 = *(undefined1 **)(puVar5 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    uVar3 = FUN_005ae390(local_1c,s_CAdamFont__CreateAlways_____font_00696a40,puVar4,puVar8);
    local_4._0_1_ = 4;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_00696748,0xa2,uVar3);
    local_4._0_1_ = 2;
    FUN_004040a0(1);
    cVar2 = FUN_004b23e0(local_2c);
    if (cVar2 == '\0') {
      puVar8 = local_28;
      if (local_28 == (undefined1 *)0x0) {
        puVar8 = &DAT_0064a3b4;
      }
      puVar5 = *(undefined1 **)(puVar5 + 4);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0064a3b4;
      }
      uVar3 = FUN_005ae390(local_1c,s_Font___s__does_not_exist_and_nei_00696a10,puVar5,puVar8);
      local_4._0_1_ = 5;
      pcVar6 = (code *)FUN_005a07f0(s_CAdamFont__FontExists__fontName___006969ec,
                                    s_D__Work_RCHorror_AdamSource_Adam_00696748,0xa6,uVar3);
      (*pcVar6)();
      local_4._0_1_ = 2;
      FUN_004040a0(1);
    }
  }
  FUN_004b0600(local_38,local_2c,param_3,param_4,param_5);
  local_4._0_1_ = 6;
  uVar1 = (undefined1)local_4;
  local_4._0_1_ = 6;
  if (local_38[0] == 0) {
    if (local_28 == (undefined1 *)0x0) {
      local_28 = &DAT_0064a3b4;
    }
    uVar3 = FUN_005ae390(local_1c,s_Could_not_create_font___s___006969d0,local_28);
    local_4._0_1_ = 7;
    pcVar6 = (code *)FUN_005a07f0(s_font_IsNotNull____006969bc,
                                  s_D__Work_RCHorror_AdamSource_Adam_00696748,0xac,uVar3);
    (*pcVar6)();
    local_4._0_1_ = 6;
    FUN_004040a0(1);
    uVar1 = (undefined1)local_4;
    if (local_38[0] == 0) {
      local_1c[0] = param_2._0_1_;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
      local_4._0_1_ = 8;
      pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar6)();
      local_4._0_1_ = 6;
      FUN_004040a0(1);
      uVar1 = (undefined1)local_4;
    }
  }
  local_4._0_1_ = uVar1;
  FUN_004b0330(0x20,0x7e);
  FUN_00518f30();
  iVar7 = FUN_004337e0();
  if (iVar7 == 0) {
    if (local_38[0] == 0) {
      local_1c[0] = param_2._0_1_;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
      local_4._0_1_ = 9;
      pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar6)();
      local_4._0_1_ = 6;
      FUN_004040a0(1);
    }
    FUN_004b0330(0xf8,0xf8);
    if (local_38[0] == 0) {
      local_1c[0] = param_2._0_1_;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
      local_4._0_1_ = 10;
      pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar6)();
      local_4._0_1_ = 6;
      FUN_004040a0(1);
    }
    FUN_004b0330(0xdf,0xdf);
    if (local_38[0] == 0) {
      FUN_00409810(&DAT_006b3f70,&param_2);
      local_4._0_1_ = 0xb;
      pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar6)();
      local_4._0_1_ = 6;
      FUN_004040a0(1);
    }
    FUN_004b0330(0xe9,0xe9);
    if (local_38[0] == 0) {
      FUN_00409810(&DAT_006b3f70,&param_2);
      local_4._0_1_ = 0xc;
      pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar6)();
      local_4._0_1_ = 6;
      FUN_004040a0(1);
    }
    FUN_004b0330(0xf6,0xf6);
    if (local_38[0] == 0) {
      FUN_00409810(&DAT_006b3f70,&param_2);
      local_4._0_1_ = 0xd;
      pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar6)();
      local_4._0_1_ = 6;
      FUN_004040a0(1);
    }
    FUN_004b0330(0xe4,0xe4);
    if (local_38[0] == 0) {
      FUN_00409810(&DAT_006b3f70,&param_2);
      local_4._0_1_ = 0xe;
      pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar6)();
      local_4._0_1_ = 6;
      FUN_004040a0(1);
    }
    FUN_004b0330(0xfc,0xfc);
    if (local_38[0] == 0) {
      FUN_00409810(&DAT_006b3f70,&param_2);
      local_4._0_1_ = 0xf;
      pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar6)();
      local_4._0_1_ = 6;
      FUN_004040a0(1);
    }
    FUN_004b0330(0xc4,0xc4);
  }
  *param_1 = local_38[0];
  FUN_005844b0();
  local_38[1] = 1;
  local_4._0_1_ = 2;
  FUN_0057d310();
  local_4._0_1_ = 1;
  FUN_004040a0(1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return param_1;
}

