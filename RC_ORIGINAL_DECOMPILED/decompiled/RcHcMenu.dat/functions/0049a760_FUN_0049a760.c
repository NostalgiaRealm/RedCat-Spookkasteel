/*
 * FUN_0049a760 at 0049a760
 * undefined __register FUN_0049a760(int * param_1, int * param_2, int * param_3)
 * Address ranges: 0049a760-0049a90c;0049a914-0049aa0a;0049aa3b-0049aa3e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049a760(int *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  HPALETTE hPal;
  HDC pHVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  HDC hdcDest;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  void *pvVar14;
  int iVar15;
  BITMAPINFO *pBVar16;
  UINT UVar17;
  DWORD DVar18;
  undefined4 uVar19;
  BOOL bForceBkgd;
  
  if (param_1[0x1f] < 1) {
    return;
  }
  iVar2 = FUN_0049adec((int)param_1);
  if (0 < iVar2) {
    bForceBkgd = 0;
    hPal = (HPALETTE)(**(code **)(*param_1 + 0x24))();
    pHVar3 = (HDC)FUN_0041cf6c(param_2);
    SelectPalette(pHVar3,hPal,bForceBkgd);
    pHVar3 = (HDC)FUN_0041cf6c(param_2);
    RealizePalette(pHVar3);
  }
  *in_FS_OFFSET = &stack0xffffffd8;
  iVar2 = 3;
  pHVar3 = (HDC)FUN_0041cf6c(param_2);
  iVar2 = SetStretchBltMode(pHVar3,iVar2);
  uVar19 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffcc;
  GdiFlush();
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 == '\0') {
    if (*(char *)(param_1[9] + 0x42c) == '\0') {
      DVar18 = param_2[8];
      iVar13 = param_1[0x10];
      iVar5 = param_1[0x23];
      iVar15 = 0;
      iVar12 = 0;
      pHVar3 = *(HDC *)(param_1[9] + 0x420);
      iVar10 = param_3[3] - param_3[1];
      iVar11 = param_3[2] - *param_3;
      iVar6 = param_3[1];
      iVar9 = *param_3;
      hdcDest = (HDC)FUN_0041cf6c(param_2);
      StretchBlt(hdcDest,iVar9,iVar6,iVar11,iVar10,pHVar3,iVar12,iVar15,iVar5,iVar13,DVar18);
    }
    else {
      DVar18 = param_2[8];
      UVar17 = 0;
      pBVar16 = *(BITMAPINFO **)(param_1[9] + 0xc);
      pvVar14 = *(void **)(param_1[9] + 0x440);
      iVar13 = param_1[0x10];
      iVar5 = param_1[0x23];
      iVar15 = 0;
      iVar12 = 0;
      iVar10 = param_3[3] - param_3[1];
      iVar11 = param_3[2] - *param_3;
      iVar6 = param_3[1];
      iVar9 = *param_3;
      pHVar3 = (HDC)FUN_0041cf6c(param_2);
      StretchDIBits(pHVar3,iVar9,iVar6,iVar11,iVar10,iVar12,iVar15,iVar5,iVar13,pvVar14,pBVar16,
                    UVar17,DVar18);
    }
    *in_FS_OFFSET = uVar19;
    pHVar3 = (HDC)FUN_0041cf6c(param_2);
    SetStretchBltMode(pHVar3,iVar2);
    return;
  }
  piVar4 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',extraout_ECX);
  uVar19 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffc0;
  (**(code **)(*piVar4 + 0x40))(piVar4,param_1[0x23]);
  (**(code **)(*piVar4 + 0x34))(piVar4,param_1[0x10]);
  (**(code **)(*piVar4 + 0x40))(piVar4,param_3[2] - *param_3);
  (**(code **)(*piVar4 + 0x34))(piVar4,param_3[3] - param_3[1]);
  DVar18 = 0xcc0020;
  UVar17 = 0;
  pBVar16 = *(BITMAPINFO **)(param_1[9] + 0xc);
  pvVar14 = *(void **)(param_1[9] + 0x440);
  iVar2 = param_1[0x10];
  iVar13 = param_1[0x23];
  iVar12 = 0;
  iVar11 = 0;
  iVar5 = (**(code **)(*piVar4 + 0x20))();
  iVar6 = (**(code **)(*piVar4 + 0x2c))();
  iVar10 = 0;
  iVar9 = 0;
  piVar7 = (int *)FUN_00421490(piVar4);
  pHVar3 = (HDC)FUN_0041cf6c(piVar7);
  StretchDIBits(pHVar3,iVar9,iVar10,iVar6,iVar5,iVar11,iVar12,iVar13,iVar2,pvVar14,pBVar16,UVar17,
                DVar18);
  (**(code **)(*piVar4 + 0x3c))(piVar4,1);
  uVar8 = FUN_0049af2c((int)param_1);
  FUN_004223a8(piVar4,uVar8);
  FUN_004223f8(piVar4,(char)param_1[0x22]);
  FUN_0041cbcc(param_2,param_3,piVar4);
  *in_FS_OFFSET = uVar19;
  FUN_00403094(piVar4);
  return;
}

