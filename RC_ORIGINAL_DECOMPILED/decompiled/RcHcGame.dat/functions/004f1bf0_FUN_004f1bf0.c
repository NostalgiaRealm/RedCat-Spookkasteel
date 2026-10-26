/*
 * FUN_004f1bf0 at 004f1bf0
 * undefined FUN_004f1bf0(void)
 * Address ranges: 004f1bf0-004f1ef5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004f1bf0(int param_1,int param_2)

{
  undefined3 uVar1;
  undefined1 uVar2;
  char cVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  char local_3a;
  undefined1 uStack_39;
  int local_38;
  int local_34 [2];
  undefined1 local_2c [4];
  undefined4 *puStack_28;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006342d0;
  pvStack_c = ExceptionList;
  local_34[0] = 0;
  local_4._1_3_ = 0;
  uVar1 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  local_38 = param_1;
  if (param_2 == 0) {
    local_2c[0] = 0;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar3 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4._0_1_ = 2;
    pcVar4 = (code *)FUN_005a07f0(s_a_SubLevel____0_0069c4d8,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069c43c,0x2f,local_2c);
    (*pcVar4)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
    uVar1 = local_4._1_3_;
  }
  local_4._1_3_ = uVar1;
  local_34[1] = 0;
  local_4._0_1_ = 3;
  uVar2 = (undefined1)local_4;
  local_4._0_1_ = 3;
  if (param_2 == 0) {
    FUN_00409810(&DAT_006b3f70,&local_3a);
    local_4._0_1_ = 4;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar4)();
    local_4._0_1_ = 3;
    FUN_004040a0(1);
    uVar2 = (undefined1)local_4;
  }
  local_4._0_1_ = uVar2;
  piVar5 = (int *)FUN_004f20b0(local_34,param_2 + 0x1c);
  local_4._0_1_ = 5;
  if (*piVar5 != 0) {
    local_2c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar3 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar3 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar3 = FUN_00401940(uVar7,1);
    if (cVar3 != '\0') {
      puVar9 = (undefined4 *)&DAT_006b3f70;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puStack_28 = *puVar9;
        puVar9 = puVar9 + 1;
        puStack_28 = puStack_28 + 1;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puStack_28 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puStack_28 = (undefined4 *)((int)puStack_28 + 1);
      }
      FUN_00404190(uVar7);
      param_1 = local_38;
    }
    local_4._0_1_ = 6;
    pcVar4 = (code *)FUN_005a07f0(s_FindSubLevelByName__a_SubLevel_>_0069c4a8,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069c43c,0x30,local_2c);
    (*pcVar4)();
    local_4._0_1_ = 5;
    FUN_004040a0(1);
  }
  local_4._0_1_ = 3;
  if (local_34[0] != 0) {
    FUN_004098d0();
  }
  local_4._0_1_ = 0;
  uVar2 = (undefined1)local_4;
  local_4._0_1_ = 0;
  if (param_2 == 0) {
    local_2c[0] = 0;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar3 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4._0_1_ = 7;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_2c);
    (*pcVar4)();
    local_4._0_1_ = 0;
    FUN_004040a0(1);
    uVar2 = (undefined1)local_4;
  }
  local_4._0_1_ = uVar2;
  iVar6 = param_2 + 0x1c;
  if (*(char *)(param_1 + 0x44) != '\0') {
    FUN_00409810(&DAT_006b3f70,&uStack_39);
    local_4._0_1_ = 8;
    pcVar4 = (code *)FUN_005a07f0(s__GetIsLocked___00695180,s___AdamSource_DaviSortedList_h_00690798
                                  ,0x49,local_1c);
    (*pcVar4)();
    local_4._0_1_ = 0;
    FUN_004040a0(1);
  }
  iVar6 = FUN_004f2620(iVar6,&local_3a);
  if (local_3a != '\0') {
    FUN_00409810(&DAT_006b3f70,&uStack_39);
    local_4._0_1_ = 9;
    pcVar4 = (code *)FUN_005a07f0(s___exist_00695178,s___AdamSource_DaviSortedList_h_00690798,0x4b,
                                  local_1c);
    (*pcVar4)();
    local_4._0_1_ = 0;
    FUN_004040a0(1);
  }
  FUN_004fdb90(*(int *)(param_1 + 0x30) + iVar6 * 4,&param_2);
  local_4 = 0xffffffff;
  if (param_2 != 0) {
    FUN_004098d0();
  }
  ExceptionList = pvStack_c;
  return;
}

