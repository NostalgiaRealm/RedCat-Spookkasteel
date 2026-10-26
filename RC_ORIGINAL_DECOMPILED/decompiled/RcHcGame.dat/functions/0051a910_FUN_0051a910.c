/*
 * FUN_0051a910 at 0051a910
 * undefined FUN_0051a910(void)
 * Address ranges: 0051a910-0051ab1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051a910(int param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined1 *puStack_48;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined1 auStack_2c [4];
  undefined4 *puStack_28;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00638730;
  pvStack_c = ExceptionList;
  local_4 = 0;
  iVar2 = DAT_006c8de0;
  ExceptionList = &pvStack_c;
  if (DAT_006c8de0 == 0) {
    puStack_48 = (undefined1 *)0x51a941;
    ExceptionList = &pvStack_c;
    iVar2 = FUN_0055b280();
  }
  if (*(int *)(iVar2 + 0xd8) == 0) {
    puStack_48 = (undefined1 *)0x0;
    local_1c[0] = (undefined1)param_1;
    FUN_004040a0();
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    puStack_48 = (undefined1 *)(~uVar4 - 1);
    FUN_004040f0(&DAT_006b3f70);
    puStack_48 = local_1c;
    local_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188)
    ;
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    puStack_48 = (undefined1 *)0x1;
    FUN_004040a0();
  }
  puStack_48 = (undefined1 *)0x51a9b8;
  puStack_48 = (undefined1 *)FUN_0051a410();
  FUN_0050d730(&puStack_34);
  local_4._0_1_ = 2;
  if (puStack_34 == (undefined1 *)0x0) {
    puStack_48 = (undefined1 *)0x0;
    auStack_2c[0] = (undefined1)param_1;
    FUN_004040a0();
    uVar4 = 0xffffffff;
    puStack_48 = (undefined1 *)0x1;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    puVar5 = (undefined1 *)(~uVar4 - 1);
    cVar1 = FUN_00401940(puVar5);
    if (cVar1 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      for (uVar4 = (uint)puVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puStack_28 = *puVar6;
        puVar6 = puVar6 + 1;
        puStack_28 = puStack_28 + 1;
      }
      for (uVar4 = (uint)puVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puStack_28 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puStack_28 = (undefined4 *)((int)puStack_28 + 1);
      }
      puStack_48 = puVar5;
      FUN_00404190();
    }
    puStack_48 = auStack_2c;
    local_4._0_1_ = 3;
    pcVar3 = (code *)FUN_005a07f0(s_bitmap_IsNotNull___0069ccd4,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069f3ec,0x9f);
    (*pcVar3)();
    local_4._0_1_ = 2;
    puStack_48 = (undefined1 *)0x1;
    FUN_004040a0();
  }
  puStack_30 = (undefined1 *)&puStack_48;
  puStack_48 = puStack_34;
  if (puStack_34 != (undefined1 *)0x0) {
    *(int *)(puStack_34 + 0x14) = *(int *)(puStack_34 + 0x14) + 1;
  }
  local_4._0_1_ = 2;
  FUN_00421430();
  cVar1 = FUN_004fbca0();
  if (cVar1 == '\0') {
    puStack_48 = puStack_34;
    if (puStack_34 != (undefined1 *)0x0) {
      *(int *)(puStack_34 + 0x14) = *(int *)(puStack_34 + 0x14) + 1;
    }
    local_4._0_1_ = 2;
    puStack_30 = (undefined1 *)&puStack_48;
    FUN_00421430();
    FUN_004fb310();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (puStack_34 != (undefined1 *)0x0) {
    iVar2 = *(int *)(puStack_34 + 0x14);
    *(int *)(puStack_34 + 0x14) = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      puStack_48 = (undefined1 *)0x0;
      FUN_005abfc0();
    }
    puStack_34 = (undefined1 *)0x0;
  }
  local_4 = 0xffffffff;
  if ((param_1 != 0) &&
     (iVar2 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar2, iVar2 == 0)) {
    puStack_48 = (undefined1 *)0x0;
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return;
}

