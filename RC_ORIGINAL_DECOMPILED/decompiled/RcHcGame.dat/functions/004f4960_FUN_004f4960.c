/*
 * FUN_004f4960 at 004f4960
 * undefined FUN_004f4960(void)
 * Address ranges: 004f4960-004f4b38
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_004f4960(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  char *pcVar13;
  bool bVar14;
  bool bVar15;
  undefined1 local_35;
  int iStack_34;
  int local_30;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634910;
  pvStack_c = ExceptionList;
  uVar7 = 0xffffffff;
  pcVar13 = &DAT_006b3f70;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar1 != '\0');
  uVar2 = *(uint *)(param_2 + 8);
  uVar8 = ~uVar7 - 1;
  uVar7 = uVar2;
  if (uVar8 <= uVar2) {
    uVar7 = uVar8;
  }
  bVar14 = false;
  iVar9 = 0;
  bVar15 = true;
  pbVar10 = *(byte **)(param_2 + 4);
  pbVar12 = &DAT_006b3f70;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    bVar14 = *pbVar10 < *pbVar12;
    bVar15 = *pbVar10 == *pbVar12;
    pbVar10 = pbVar10 + 1;
    pbVar12 = pbVar12 + 1;
  } while (bVar15);
  if (!bVar15) {
    iVar9 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
  }
  ExceptionList = &pvStack_c;
  local_30 = param_1;
  if (((iVar9 == 0) && (ExceptionList = &pvStack_c, uVar8 <= uVar2)) &&
     (ExceptionList = &pvStack_c, uVar2 == uVar8)) {
    local_2c[0] = (undefined1)param_2;
    uVar7 = 0xffffffff;
    local_28 = 0;
    pcVar13 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 != '\0');
    local_24 = 0;
    local_20 = 0;
    ExceptionList = &pvStack_c;
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4 = 0;
    pcVar4 = (code *)FUN_005a07f0(s_a_Name_compare________0_0069c7f8,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x178,local_2c);
    (*pcVar4)();
    local_4 = 0xffffffff;
    if (local_28 != 0) {
      cVar1 = *(char *)(local_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_28 + -1));
      }
      else {
        *(char *)(local_28 + -1) = cVar1 + -1;
      }
    }
  }
  iVar9 = local_30;
  if (*(int *)(local_30 + 0x4c) == 0) {
    FUN_00409810(&DAT_006b3f70,&local_35);
    local_4 = 1;
    pcVar4 = (code *)FUN_005a07f0(s_m_Func_0069522c,s___AdamSource_DaviSortedList_h_00690798,0xb9,
                                  local_1c);
    (*pcVar4)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if ((*(int *)(iVar9 + 0x3c) != 0) &&
     ((*(int *)(iVar9 + 0x40) - *(int *)(iVar9 + 0x3c) & 0xfffffffcU) != 0)) {
    iVar3 = *(int *)(iVar9 + 0x48);
    iStack_34 = 0;
    iVar5 = FUN_0044e4c0();
    iVar5 = iVar5 + -1;
    do {
      iVar11 = (iStack_34 + iVar5) / 2;
      iVar6 = (**(code **)(iVar9 + 0x4c))(param_2,*(int *)(iVar9 + 0x3c) + iVar11 * 4);
      if (iVar6 == 1) {
        ExceptionList = pvStack_c;
        return *(undefined4 *)(*(int *)(local_30 + 0x3c) + iVar11 * 4);
      }
      if (iVar6 == (-(uint)(iVar3 != 0) & 0xfffffffe) + 2) {
        iStack_34 = iVar11 + 1;
      }
      else {
        iVar5 = iVar11 + -1;
      }
    } while (iStack_34 <= iVar5);
  }
  ExceptionList = pvStack_c;
  return 0;
}

