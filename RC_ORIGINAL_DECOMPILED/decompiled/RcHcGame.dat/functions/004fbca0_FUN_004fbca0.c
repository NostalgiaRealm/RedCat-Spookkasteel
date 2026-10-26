/*
 * FUN_004fbca0 at 004fbca0
 * undefined FUN_004fbca0(void)
 * Address ranges: 004fbca0-004fbe68
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_004fbca0(int param_1)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 uStack_36;
  undefined1 local_35;
  int iStack_34;
  int local_30;
  undefined1 local_2c [4];
  undefined4 *local_28;
  uint local_24;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00635408;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (param_1 == 0) {
    local_2c[0] = 0;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar2 = FUN_00401940(uVar6,1);
    if (cVar2 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      puVar11 = local_28;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar11 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      *(undefined1 *)((int)local_28 + uVar6) = 0;
      local_24 = uVar6;
    }
    local_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_2c);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  if (*(int *)(param_1 + 0x44) == 0) {
    FUN_00409810(&DAT_006b3f70,&local_35);
    local_4._0_1_ = 2;
    pcVar3 = (code *)FUN_005a07f0(s_m_Func_0069522c,s___AdamSource_DaviSortedList_h_00690798,0xb9,
                                  local_1c);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  iVar4 = FUN_0044e4c0();
  if (iVar4 == 0) {
    uStack_36 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x40);
    iStack_34 = 0;
    iVar4 = FUN_0044e4c0();
    iVar4 = iVar4 + -1;
    local_30 = local_30 + 0x1c;
    uStack_36 = 0;
    do {
      iVar9 = (iVar4 + iStack_34) / 2;
      iVar5 = (**(code **)(param_1 + 0x44))(local_30,*(int *)(param_1 + 0x34) + iVar9 * 4);
      if (iVar5 == 1) {
        uStack_36 = 1;
        break;
      }
      if (iVar5 == (-(uint)(iVar1 != 0) & 0xfffffffe) + 2) {
        iStack_34 = iVar9 + 1;
      }
      else {
        iVar4 = iVar9 + -1;
      }
    } while (iStack_34 <= iVar4);
  }
  local_4 = 0xffffffff;
  if (param_1 != 0) {
    iVar4 = *(int *)(param_1 + 0x14) + -1;
    *(int *)(param_1 + 0x14) = iVar4;
    if (iVar4 == 0) {
      FUN_005abfc0(0);
    }
  }
  ExceptionList = pvStack_c;
  return uStack_36;
}

