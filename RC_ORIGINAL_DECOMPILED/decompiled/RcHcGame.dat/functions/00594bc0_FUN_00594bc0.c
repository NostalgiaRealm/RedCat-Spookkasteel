/*
 * FUN_00594bc0 at 00594bc0
 * undefined FUN_00594bc0(void)
 * Address ranges: 00594bc0-00594de2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_00594bc0(int param_1,undefined1 *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char cVar3;
  code *pcVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  bool bVar10;
  undefined1 *puStack_a8;
  undefined4 *puStack_a4;
  undefined4 local_8c [6];
  undefined1 local_74 [24];
  undefined1 *puStack_5c;
  undefined1 auStack_38 [44];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00643b63;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (param_1 == 0) {
    puStack_a4 = (undefined4 *)0x0;
    puStack_a8 = (undefined1 *)0x594c08;
    ExceptionList = &pvStack_c;
    FUN_004040a0();
    uVar6 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar3 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar3 != '\0');
    puStack_a4 = (undefined4 *)(~uVar6 - 1);
    puStack_a8 = &DAT_006b3f70;
    FUN_004040f0();
    puStack_a4 = (undefined4 *)local_74;
    local_4._0_1_ = 1;
    puStack_a8 = (undefined1 *)0xb6;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    puStack_a4 = (undefined4 *)0x1;
    puStack_a8 = (undefined1 *)0x594c5f;
    FUN_004040a0();
  }
  puVar5 = (undefined4 *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x5c) == 0) {
    puStack_a4 = (undefined4 *)0x0;
    puStack_a8 = (undefined1 *)0x594c83;
    FUN_004040a0();
    uVar6 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar3 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar3 != '\0');
    puStack_a4 = (undefined4 *)(~uVar6 - 1);
    puStack_a8 = &DAT_006b3f70;
    FUN_004040f0();
    puStack_a4 = local_8c;
    local_4._0_1_ = 2;
    puStack_a8 = (undefined1 *)0x144;
    pcVar4 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    puStack_a4 = (undefined4 *)0x1;
    puStack_a8 = (undefined1 *)0x594cda;
    FUN_004040a0();
  }
  uVar2 = param_3;
  puVar1 = param_2;
  puStack_a4 = (undefined4 *)param_3;
  puStack_a8 = param_2;
  cVar3 = FUN_00594ab0(*puVar5);
  if (cVar3 == '\0') {
    local_4 = 0xffffffff;
    if ((param_1 != 0) &&
       (iVar7 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar7, iVar7 == 0)) {
      puStack_a4 = (undefined4 *)0x0;
      puStack_a8 = (undefined1 *)0x594d27;
      FUN_005abfc0();
    }
    bVar10 = false;
  }
  else {
    puStack_a4 = (undefined4 *)local_74;
    puStack_a8 = (undefined1 *)0x594d38;
    puVar5 = (undefined4 *)FUN_00594b00();
    puVar9 = local_8c;
    for (puStack_a8 = (undefined1 *)0x6; puStack_a8 != (undefined1 *)0x0;
        puStack_a8 = puStack_a8 + -1) {
      *puVar9 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar9 = puVar9 + 1;
    }
    puStack_a4 = local_8c;
    puStack_5c = (undefined1 *)&puStack_a8;
    FUN_00449760(&param_1);
    FUN_005545f0();
    puStack_a4 = (undefined4 *)auStack_38;
    puStack_a8 = (undefined1 *)0x2;
    local_4._0_1_ = 3;
    cVar3 = FUN_00554ab0(puVar1,uVar2);
    bVar10 = cVar3 == '\0';
    local_4 = (uint)local_4._1_3_ << 8;
    puStack_a4 = (undefined4 *)0x594d9a;
    FUN_00554630();
    local_4 = 0xffffffff;
    if ((param_1 != 0) &&
       (iVar7 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar7, iVar7 == 0)) {
      puStack_a4 = (undefined4 *)0x0;
      puStack_a8 = (undefined1 *)0x594dc8;
      FUN_005abfc0();
    }
  }
  ExceptionList = pvStack_c;
  return bVar10;
}

