/*
 * FUN_004dded0 at 004dded0
 * undefined FUN_004dded0(void)
 * Address ranges: 004dded0-004de10a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_004dded0(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  char *pcVar13;
  bool bVar14;
  bool bVar15;
  undefined1 local_41;
  int iStack_40;
  undefined1 auStack_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632248;
  pvStack_c = ExceptionList;
  uVar6 = 0xffffffff;
  pcVar13 = &DAT_006b3f70;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar1 != '\0');
  uVar2 = *(uint *)(param_2 + 8);
  uVar7 = ~uVar6 - 1;
  uVar6 = uVar2;
  if (uVar7 <= uVar2) {
    uVar6 = uVar7;
  }
  bVar14 = false;
  iVar8 = 0;
  bVar15 = true;
  pbVar10 = *(byte **)(param_2 + 4);
  pbVar12 = &DAT_006b3f70;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    bVar14 = *pbVar10 < *pbVar12;
    bVar15 = *pbVar10 == *pbVar12;
    pbVar10 = pbVar10 + 1;
    pbVar12 = pbVar12 + 1;
  } while (bVar15);
  if (!bVar15) {
    iVar8 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
  }
  iVar11 = 0;
  ExceptionList = &pvStack_c;
  if (((iVar8 == 0) && (ExceptionList = &pvStack_c, uVar7 <= uVar2)) &&
     (ExceptionList = &pvStack_c, uVar2 == uVar7)) {
    ExceptionList = &pvStack_c;
    uVar3 = FUN_005ae390(local_1c,s_CAdamGameProperties__GiveKeyItem_00699f68);
    local_4 = 0;
    pcVar4 = (code *)FUN_005a07f0(s__a_KeyItemName________00699f14,
                                  s_D__Work_RCHorror_AdamSource_Adam_00699f2c,0x26,uVar3);
    (*pcVar4)();
    local_4 = 0xffffffff;
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
      }
    }
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    FUN_00409810(&DAT_006b3f70,&local_41);
    local_4 = 1;
    pcVar4 = (code *)FUN_005a07f0(s_m_Func_0069522c,s___AdamSource_DaviSortedList_h_00690798,0xb9,
                                  local_2c);
    (*pcVar4)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar8 = FUN_00442d80();
  if (iVar8 != 0) {
    iStack_40 = 0;
    iVar9 = (-(uint)(*(int *)(param_1 + 0x2c) != 0) & 0xfffffffe) + 2;
    iVar8 = FUN_00442d80();
    iVar8 = iVar8 + -1;
    do {
      iVar11 = (iStack_40 + iVar8) / 2;
      iVar5 = (**(code **)(param_1 + 0x30))(param_2,iVar11 * 0x10 + *(int *)(param_1 + 0x20));
      if (iVar5 == 1) {
        bVar14 = true;
        goto LAB_004de0eb;
      }
      if (iVar5 == iVar9) {
        iStack_40 = iVar11 + 1;
      }
      else {
        iVar8 = iVar11 + -1;
      }
    } while (iStack_40 <= iVar8);
    if (iVar5 == iVar9) {
      iVar11 = iVar11 + 1;
    }
  }
  bVar14 = false;
  if (*(char *)(param_1 + 0x34) != '\0') {
    auStack_3c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar13 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4 = 2;
    pcVar4 = (code *)FUN_005a07f0(s__GetIsLocked___00695180,s___AdamSource_DaviSortedList_h_00690798
                                  ,0x59,auStack_3c);
    (*pcVar4)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  FUN_00444d70(iVar11 * 0x10 + *(int *)(param_1 + 0x20),1,param_2);
LAB_004de0eb:
  ExceptionList = pvStack_c;
  return !bVar14;
}

