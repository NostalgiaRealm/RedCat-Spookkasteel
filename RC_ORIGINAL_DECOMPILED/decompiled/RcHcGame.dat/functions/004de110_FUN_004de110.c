/*
 * FUN_004de110 at 004de110
 * undefined FUN_004de110(void)
 * Address ranges: 004de110-004de2c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_004de110(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
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
  undefined1 local_2c [16];
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632270;
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
  ExceptionList = &pvStack_c;
  if (((iVar8 == 0) && (ExceptionList = &pvStack_c, uVar7 <= uVar2)) &&
     (ExceptionList = &pvStack_c, uVar2 == uVar7)) {
    ExceptionList = &pvStack_c;
    uVar4 = FUN_005ae390(local_1c,s_CAdamGameProperties__HasKeyItem___00699fac);
    local_4 = 0;
    pcVar5 = (code *)FUN_005a07f0(s__a_KeyItemName________00699f14,
                                  s_D__Work_RCHorror_AdamSource_Adam_00699f2c,0x2f,uVar4);
    (*pcVar5)();
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
    local_2c[0] = (undefined1)param_2;
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
    local_4 = 1;
    pcVar5 = (code *)FUN_005a07f0(s_m_Func_0069522c,s___AdamSource_DaviSortedList_h_00690798,0xb9,
                                  local_2c);
    (*pcVar5)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  uVar6 = *(uint *)(param_1 + 0x20);
  if ((uVar6 != 0) && (iVar8 = (int)(*(int *)(param_1 + 0x24) - uVar6) >> 4, iVar8 != 0)) {
    iVar3 = *(int *)(param_1 + 0x2c);
    iVar9 = 0;
    iVar8 = iVar8 + -1;
    do {
      iVar11 = (iVar9 + iVar8) / 2;
      uVar6 = (**(code **)(param_1 + 0x30))(param_2,iVar11 * 0x10 + *(int *)(param_1 + 0x20));
      if (uVar6 == 1) {
        ExceptionList = pvStack_c;
        return 1;
      }
      if (uVar6 == (-(uint)(iVar3 != 0) & 0xfffffffe) + 2) {
        iVar9 = iVar11 + 1;
      }
      else {
        iVar8 = iVar11 + -1;
      }
    } while (iVar9 <= iVar8);
  }
  ExceptionList = pvStack_c;
  return uVar6 & 0xffffff00;
}

