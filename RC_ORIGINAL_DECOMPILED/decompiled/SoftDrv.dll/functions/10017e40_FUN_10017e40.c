/*
 * FUN_10017e40 at 10017e40
 * undefined FUN_10017e40(void)
 * Address ranges: 10017e40-10018195
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10017e40(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int *piVar14;
  int local_144 [25];
  int iStack_e0;
  undefined4 local_d8 [27];
  undefined4 local_6c [27];
  
  fVar1 = *(float *)(param_4 + 4);
  fVar2 = *(float *)(param_4 + 0x28);
  param_1 = param_1 * 0xc;
  DAT_1020e4e0 = *(uint *)(&DAT_100217ec + param_1);
  fVar3 = *(float *)(param_4 + 0x4c);
  if ((DAT_1020e4e0 & 1) == 0) {
    iVar4 = FUN_100181a0(0x3f800000,0x3f800000);
    if (iVar4 == 0) {
      return;
    }
  }
  else {
    iVar4 = *(int *)(param_2 + 8) >> ((byte)param_3 & 0x1f);
    iVar8 = *(int *)(param_2 + 4) >> ((byte)param_3 & 0x1f);
    iVar5 = FUN_100181a0((float)iVar8,(float)iVar4);
    if (iVar5 == 0) {
      return;
    }
    iVar5 = 1;
    _DAT_1020e64c = 1;
    if (2 < iVar8) {
      do {
        iVar5 = iVar5 + 1;
        _DAT_1020e64c = iVar5;
      } while (1 << ((byte)iVar5 & 0x1f) < iVar8);
    }
    if ((DAT_1020e4e0 & 8) != 0) {
      _DAT_1020e89c = 0;
    }
    _DAT_1020e654 = iVar8 + -1;
    _DAT_1020e658 = iVar4 + -1;
    _DAT_1020e648 = param_3;
    _DAT_1020e640 = *(undefined4 *)(param_2 + 0x18 + param_3 * 4);
    if (*(int *)(param_2 + 0x58) != 0) {
      _DAT_1020e644 = *(undefined4 *)(*(int *)(param_2 + 0x58) + 0x18);
    }
  }
  if ((DAT_1020e4e0 & 0x100) != 0) {
    _DAT_1020e690 = *(int *)(DAT_1020e688 + 0x18) - *(int *)(DAT_1020e68c + 0x18);
  }
  _DAT_10026000 = FUN_10016130();
  _DAT_1020e4a4 = __ftol();
  _DAT_1020e4bc = 0x10 - _DAT_1020e4a4;
  if (fVar2 <= fVar1) {
    if (fVar3 < fVar2) {
      uVar7 = 0;
      uVar9 = 2;
      uVar12 = 1;
      iVar4 = 0;
      goto LAB_10018048;
    }
    uVar9 = 1;
    if (fVar1 < fVar3) {
      uVar12 = 0;
      uVar7 = 2;
      iVar4 = 0;
      goto LAB_10018048;
    }
    uVar12 = 2;
    uVar7 = 0;
  }
  else if (fVar1 <= fVar3) {
    if (fVar3 <= fVar2) {
      uVar9 = 0;
      uVar12 = 2;
      uVar7 = 1;
      iVar4 = 0;
      goto LAB_10018048;
    }
    uVar9 = 0;
    uVar12 = 1;
    uVar7 = 2;
  }
  else {
    uVar9 = 2;
    uVar12 = 0;
    uVar7 = 1;
  }
  iVar4 = 1;
LAB_10018048:
  FUN_10018830(param_4,uVar9,uVar7,iVar4);
  FUN_10018830(param_4,uVar9,uVar12,iVar4 == 0);
  FUN_10018830(param_4,uVar12,uVar7,iVar4 == 0);
  iVar5 = 0x1b;
  if (iVar4 == 0) {
    puVar10 = local_d8;
    puVar13 = &DAT_1020e564;
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar13 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
    }
    puVar10 = local_6c;
  }
  else {
    puVar10 = local_6c;
    puVar13 = &DAT_1020e564;
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar13 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
    }
    puVar10 = local_d8;
  }
  puVar13 = &DAT_1020e5d0;
  for (iVar5 = 0x1b; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar13 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar13 = puVar13 + 1;
  }
  iVar5 = *(int *)(DAT_1020e68c + 4);
  iVar8 = *(int *)(DAT_1020e68c + 0x18);
  _DAT_1020e56c = iVar8 + (DAT_1020e5c8 * iVar5 + DAT_1020e564) * 2;
  _DAT_1020e570 = (DAT_1020e568 + iVar5) * 2;
  (**(code **)(&DAT_100217f0 + param_1))();
  iVar6 = 0x1b;
  if (iVar4 == 0) {
    piVar11 = local_144;
    piVar14 = &DAT_1020e564;
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar14 = *piVar11;
      piVar11 = piVar11 + 1;
      piVar14 = piVar14 + 1;
    }
    _DAT_1020e56c = iVar8 + (iStack_e0 * iVar5 + local_144[0]) * 2;
    _DAT_1020e570 = (DAT_1020e568 + iVar5) * 2;
  }
  else {
    piVar11 = local_144;
    piVar14 = &DAT_1020e5d0;
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar14 = *piVar11;
      piVar11 = piVar11 + 1;
      piVar14 = piVar14 + 1;
    }
  }
  (**(code **)(&DAT_100217f0 + param_1))();
  return;
}

