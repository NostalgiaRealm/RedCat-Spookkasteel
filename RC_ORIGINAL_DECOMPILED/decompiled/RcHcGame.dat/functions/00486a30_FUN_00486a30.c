/*
 * FUN_00486a30 at 00486a30
 * undefined FUN_00486a30(void)
 * Address ranges: 00486a30-00486d1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00486a30(int param_1)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 local_2c [4];
  undefined4 *puStack_28;
  uint uStack_24;
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00629e20;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00536050(local_1c);
  local_4 = 0;
  if (DAT_006c8de0 == 0) {
    FUN_0055b280();
  }
  if (*(int *)(param_1 + 0xac) != 0) {
    if (*(int *)(param_1 + 0xac) == 0) {
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
    FUN_004b1150(param_1 + 0xe4,*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0xbc),
                 0x437f0000,0x437f0000,0x437f0000,0x437f0000);
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
    if (*(int *)(param_1 + 0xa8) == 0) {
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
    FUN_004b1150(param_1 + 0x104,*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 0xcc),
                 0x437f0000,0x437f0000,0x437f0000,0x437f0000);
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    if (*(int *)(param_1 + 0xb0) == 0) {
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
        puVar7 = puStack_28;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        *(undefined1 *)((int)puStack_28 + uVar3) = 0;
        uStack_24 = uVar3;
      }
      local_4._0_1_ = 3;
      pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_2c);
      (*pcVar2)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    FUN_004b1150(param_1 + 0xf4,*(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xdc),
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

