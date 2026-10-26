/*
 * FUN_0059df90 at 0059df90
 * undefined FUN_0059df90(void)
 * Address ranges: 0059df90-0059e1a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_0059df90(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00644a50;
  pvStack_c = ExceptionList;
  local_4 = 0;
  iVar7 = *(int *)(*(int *)(param_1 + 0x18) + 4);
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(*(int *)(param_1 + 0x18) + 8) - iVar7 >> 2;
  }
  ExceptionList = &pvStack_c;
  iVar3 = FUN_0059b1e0();
  if (iVar7 <= iVar3) {
    local_1c[0] = param_2;
    uVar6 = 0xffffffff;
    local_18 = 0;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    local_14 = 0;
    local_10 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4._0_1_ = 1;
    pcVar4 = (code *)FUN_005a07f0(s_a_Index<m_WayPoints_>Count___006a7574,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a72cc,0x244,local_1c);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    if (local_18 != 0) {
      cVar2 = *(char *)(local_18 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar2 + -1;
      }
    }
  }
  cVar2 = FUN_0059b1f0();
  if (cVar2 == '\0') {
    FUN_005afe30(s_Trying_to_get_invalid_way_point_f_006a7544);
  }
  cVar2 = FUN_0059b1f0();
  if (cVar2 == '\0') {
    uVar6 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    local_1c[0] = param_2;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4._0_1_ = 2;
    pcVar4 = (code *)FUN_005a07f0(s_a_Index_IsValid___006a7530,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a72cc,0x24b,local_1c);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    if (local_18 != 0) {
      cVar2 = *(char *)(local_18 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar2 + -1;
      }
    }
  }
  iVar3 = FUN_0059b1e0();
  iVar7 = *(int *)(param_1 + 0x18);
  if (-1 < iVar3) {
    iVar5 = FUN_0044e4c0();
    if (iVar3 < iVar5) goto LAB_0059e179;
  }
  local_1c[0] = param_2;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar8 = &DAT_006b3f70;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
  local_4._0_1_ = 3;
  pcVar4 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                s___AdamSource_DaviList_h_0068f458,0x8b,local_1c);
  (*pcVar4)();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004040a0(1);
LAB_0059e179:
  local_4 = 0xffffffff;
  uVar1 = *(undefined4 *)(*(int *)(iVar7 + 4) + iVar3 * 4);
  FUN_005630e0();
  ExceptionList = pvStack_c;
  return uVar1;
}

