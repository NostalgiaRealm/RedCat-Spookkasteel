/*
 * FUN_00574c60 at 00574c60
 * undefined FUN_00574c60(void)
 * Address ranges: 00574c60-00574f7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00574c60(int param_1,int param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 *local_38;
  undefined1 local_21;
  undefined1 *local_20;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006415b0;
  pvStack_c = ExceptionList;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  if (param_2 != 0) {
    local_20 = (undefined1 *)0x0;
    local_38 = (undefined1 *)0x574ca1;
    ExceptionList = &pvStack_c;
    FUN_005844b0();
    local_4._0_1_ = 2;
    if (*(undefined1 **)(param_1 + 0x17c) != local_20) {
      if (*(undefined1 **)(param_1 + 0x17c) != (undefined1 *)0x0) {
        local_38 = (undefined1 *)0x574cc3;
        FUN_004098d0();
      }
      *(undefined1 **)(param_1 + 0x17c) = local_20;
      local_38 = (undefined1 *)0x574cd0;
      FUN_005844b0();
    }
    local_4._0_1_ = 1;
    local_38 = (undefined1 *)0x574cde;
    FUN_0057d310();
    if (*(int *)(param_1 + 0x23c) != 0) {
      if (*(int *)(param_1 + 0x23c) == 0) {
        local_38 = &local_21;
        FUN_00409810(&DAT_006b3f70);
        local_38 = local_1c;
        local_4._0_1_ = 3;
        pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
        (*pcVar3)();
        local_4._0_1_ = 1;
        local_38 = (undefined1 *)0x1;
        FUN_004040a0();
      }
      local_38 = (undefined1 *)0x574d43;
      FUN_00553130();
      local_20 = (undefined1 *)0x0;
      local_38 = (undefined1 *)0x574d50;
      FUN_005844b0();
      puVar1 = *(undefined1 **)(param_1 + 0x23c);
      local_4._0_1_ = 4;
      if (puVar1 != local_20) {
        if (puVar1 != (undefined1 *)0x0) {
          local_38 = (undefined1 *)0x574d68;
          FUN_004098d0();
        }
        *(undefined1 **)(param_1 + 0x23c) = local_20;
        local_38 = (undefined1 *)0x574d75;
        FUN_005844b0();
      }
      local_4._0_1_ = 1;
      local_38 = (undefined1 *)0x574d83;
      FUN_0057d310();
    }
    if (*(int *)(param_1 + 0x240) != 0) {
      if (*(int *)(param_1 + 0x240) == 0) {
        local_38 = &local_21;
        FUN_00409810(&DAT_006b3f70);
        local_38 = local_1c;
        local_4._0_1_ = 5;
        pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
        (*pcVar3)();
        local_4._0_1_ = 1;
        local_38 = (undefined1 *)0x1;
        FUN_004040a0();
      }
      local_38 = (undefined1 *)0x574de8;
      FUN_00553130();
      local_20 = (undefined1 *)0x0;
      local_38 = (undefined1 *)0x574df5;
      FUN_005844b0();
      puVar1 = *(undefined1 **)(param_1 + 0x240);
      local_4._0_1_ = 6;
      if (puVar1 != local_20) {
        if (puVar1 != (undefined1 *)0x0) {
          local_38 = (undefined1 *)0x574e0d;
          FUN_004098d0();
        }
        *(undefined1 **)(param_1 + 0x240) = local_20;
        local_38 = (undefined1 *)0x574e1a;
        FUN_005844b0();
      }
      local_4._0_1_ = 1;
      local_38 = (undefined1 *)0x574e28;
      FUN_0057d310();
    }
  }
  if (param_3 != (undefined1 *)0x0) {
    local_20 = (undefined1 *)&local_38;
    local_38 = param_3;
    if (param_3 != (undefined1 *)0x0) {
      *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    }
    FUN_00575dd0();
    local_38 = *(undefined1 **)(param_1 + 0x17c);
    if (local_38 != (undefined1 *)0x0) {
      local_20 = (undefined1 *)&local_38;
      *(int *)(local_38 + 0x14) = *(int *)(local_38 + 0x14) + 1;
      local_4._0_1_ = 1;
      FUN_00421430();
      cVar2 = FUN_004fbca0();
      if (cVar2 == '\0') {
        local_38 = *(undefined1 **)(param_1 + 0x17c);
        if (local_38 != (undefined1 *)0x0) {
          *(int *)(local_38 + 0x14) = *(int *)(local_38 + 0x14) + 1;
        }
        local_4._0_1_ = 1;
        local_20 = (undefined1 *)&local_38;
        FUN_00421430();
        cVar2 = FUN_004fb310();
        if (cVar2 == '\0') {
          local_38 = (undefined1 *)0x0;
          local_1c[0] = param_3._0_1_;
          FUN_004040a0();
          uVar4 = 0xffffffff;
          pcVar5 = &DAT_006b3f70;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar2 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar2 != '\0');
          local_38 = (undefined1 *)(~uVar4 - 1);
          FUN_004040f0(&DAT_006b3f70);
          local_38 = local_1c;
          local_4._0_1_ = 9;
          pcVar3 = (code *)FUN_005a07f0(s_result_00691bc0,
                                        s_D__Work_RCHorror_AdamSource_Adam_006a4908,0x128);
          (*pcVar3)();
          local_4._0_1_ = 1;
          local_38 = (undefined1 *)0x1;
          FUN_004040a0();
        }
      }
    }
    local_20 = (undefined1 *)&local_38;
    local_38 = param_3;
    if (param_3 != (undefined1 *)0x0) {
      *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    }
    FUN_00575970();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (param_2 != 0) {
    local_38 = (undefined1 *)0x574f52;
    FUN_004098d0();
  }
  local_4 = 0xffffffff;
  if (param_3 != (undefined1 *)0x0) {
    local_38 = (undefined1 *)0x574f67;
    FUN_004098d0();
  }
  ExceptionList = pvStack_c;
  return;
}

