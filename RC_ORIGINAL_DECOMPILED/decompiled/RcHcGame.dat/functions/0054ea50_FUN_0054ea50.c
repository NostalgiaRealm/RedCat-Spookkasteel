/*
 * FUN_0054ea50 at 0054ea50
 * undefined FUN_0054ea50(void)
 * Address ranges: 0054ea50-0054ed74
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0054eb0e) */
/* WARNING: Removing unreachable block (ram,0x0054eb1d) */

int * __thiscall
FUN_0054ea50(int param_1,int *param_2,undefined4 param_3,undefined4 *param_4,int param_5,
            undefined1 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  char *pcVar5;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063da8f;
  pvStack_c = ExceptionList;
  local_20 = 0;
  local_30 = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  cVar1 = FUN_00553640();
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x8c) != '\0')) {
    local_24 = param_7;
    local_28 = param_8;
    local_2c = param_9;
    FUN_0054e750(param_4,&local_24,&local_28,&local_2c);
    piVar2 = (int *)FUN_0054ed80(&param_5,param_3,param_5,local_24,local_28,local_2c);
    if (*piVar2 != 0) {
      local_4._0_1_ = 2;
      local_30 = *piVar2;
      FUN_005844b0();
    }
    local_4._0_1_ = 1;
    if (param_5 != 0) {
      FUN_004098d0();
    }
    if (local_30 != 0) {
      *(undefined4 *)(local_30 + 0x2c) = param_7;
      if (local_30 == 0) {
        local_1c[0] = param_6;
        FUN_004040a0(0);
        uVar4 = 0xffffffff;
        pcVar5 = &DAT_006b3f70;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
        local_4._0_1_ = 4;
        pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_1c);
        (*pcVar3)();
        local_4._0_1_ = 1;
        FUN_004040a0(1);
      }
      *(undefined4 *)(local_30 + 0x30) = param_8;
      if (local_30 == 0) {
        FUN_00409810(&DAT_006b3f70,&param_7);
        local_4._0_1_ = 5;
        pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_1c);
        (*pcVar3)();
        local_4._0_1_ = 1;
        FUN_004040a0(1);
      }
      *(undefined4 *)(local_30 + 0x34) = param_9;
      if (local_30 == 0) {
        FUN_00409810(&DAT_006b3f70,&param_7);
        local_4._0_1_ = 6;
        pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_1c);
        (*pcVar3)();
        local_4._0_1_ = 1;
        FUN_004040a0(1);
      }
      *(undefined1 *)(local_30 + 0x39) = 1;
      if (local_30 == 0) {
        FUN_00409810(&DAT_006b3f70,&param_7);
        local_4._0_1_ = 7;
        pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_1c);
        (*pcVar3)();
        local_4._0_1_ = 1;
        FUN_004040a0(1);
      }
      *(undefined1 *)(local_30 + 0x48) = param_6;
      if (local_30 == 0) {
        FUN_00409810(&DAT_006b3f70,&param_6);
        local_4._0_1_ = 8;
        pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_1c);
        (*pcVar3)();
        local_4._0_1_ = 1;
        FUN_004040a0(1);
      }
      *(undefined4 *)(local_30 + 0x3c) = *param_4;
      *(undefined4 *)(local_30 + 0x40) = param_4[1];
      *(undefined4 *)(local_30 + 0x44) = param_4[2];
    }
  }
  *param_2 = local_30;
  FUN_005844b0();
  local_20 = 1;
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_30 != 0) {
    FUN_004098d0();
  }
  ExceptionList = pvStack_c;
  return param_2;
}

