/*
 * FUN_00489600 at 00489600
 * undefined FUN_00489600(void)
 * Address ranges: 00489600-004899a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00489600(int param_1)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined1 local_2c [4];
  undefined4 *puStack_28;
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062a488;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00536050(local_1c);
  local_4 = 0;
  if (DAT_006c8de0 == 0) {
    FUN_0055b280();
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    if (*(int *)(param_1 + 0x80) == 0) {
      FUN_004040a0(0);
      uVar3 = 0xffffffff;
      pcVar6 = &DAT_006b3f70;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar3 - 1);
      local_4._0_1_ = 1;
      pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_2c);
      (*pcVar2)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    FUN_004b1150(param_1 + 0x94,*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x8c),
                 0x437f0000,0x437f0000,0x437f0000,0x437f0000);
  }
  if (*(int *)(param_1 + 0xa4) != 0) {
    if (*(int *)(param_1 + 0xa4) == 0) {
      FUN_004040a0(0);
      uVar3 = 0xffffffff;
      pcVar6 = &DAT_006b3f70;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar3 - 1);
      local_4._0_1_ = 2;
      pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_2c);
      (*pcVar2)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    FUN_004b1150(param_1 + 0xb8,*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0),
                 0x437f0000,0x437f0000,0x437f0000,0x437f0000);
  }
  if (*(int *)(param_1 + 200) != 0) {
    if (*(int *)(param_1 + 200) == 0) {
      FUN_004040a0(0);
      uVar3 = 0xffffffff;
      pcVar6 = &DAT_006b3f70;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar3 - 1);
      local_4._0_1_ = 3;
      pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_2c);
      (*pcVar2)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    FUN_004b1150(param_1 + 0xdc,*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xd4),
                 0x437f0000,0x437f0000,0x437f0000,0x437f0000);
  }
  if (*(int *)(param_1 + 0xec) != 0) {
    if (*(int *)(param_1 + 0xec) == 0) {
      FUN_004040a0(0);
      uVar3 = 0xffffffff;
      pcVar6 = &DAT_006b3f70;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3 - 1;
      cVar1 = FUN_00401940(uVar3,1);
      if (cVar1 != '\0') {
        puVar5 = (undefined4 *)&DAT_006b3f70;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puStack_28 = *puVar5;
          puVar5 = puVar5 + 1;
          puStack_28 = puStack_28 + 1;
        }
        for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puStack_28 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puStack_28 = (undefined4 *)((int)puStack_28 + 1);
        }
        FUN_00404190(uVar3);
      }
      local_4._0_1_ = 4;
      pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_2c);
      (*pcVar2)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    FUN_004b1150(param_1 + 0x100,*(undefined4 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf8),
                 0x437f0000,0x437f0000,0x437f0000,0x437f0000);
  }
  if (iStack_18 != 0) {
    cVar1 = *(char *)(iStack_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_18 + -1) = cVar1 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_005fe5f0(iStack_18 + -1);
  }
  ExceptionList = pvStack_c;
  return;
}

