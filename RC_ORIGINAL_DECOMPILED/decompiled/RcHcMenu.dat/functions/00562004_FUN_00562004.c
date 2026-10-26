/*
 * FUN_00562004 at 00562004
 * undefined __register FUN_00562004(int * param_1, byte param_2, int param_3)
 * Address ranges: 00562004-005622fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00562004(int *param_1,byte param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  HWND pHVar10;
  HWND pHVar11;
  HDC hDC;
  int *piVar12;
  tagRECT *lprc;
  int *piVar13;
  tagRECT tStack_48;
  int aiStack_30 [4];
  int aiStack_20 [4];
  
  if ((*(char *)((int)param_1 + 0x291) == '\0') || (param_2 != *(byte *)((int)param_1 + 0x292))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  piVar1 = (int *)param_1[0x7c];
  FUN_0041c434((int *)piVar1[5],'\0');
  FUN_0041c318((int *)piVar1[5],0x8000000f);
  FUN_0041c034((int *)piVar1[4],0x80000006);
  FUN_0041c140((int *)piVar1[4],1);
  FUN_0041cb34(piVar1,param_3,0,param_1[0xf],param_1[0xa9] + param_3);
  if (bVar3) {
    FUN_0041c034((int *)piVar1[4],0x80000010);
    FUN_0041cad0(piVar1,param_3 + 1,param_1[0xf] + -2);
    FUN_0041ca70(piVar1,param_3 + 1,1);
    FUN_0041ca70(piVar1,param_1[0xa9] + param_3 + -1,1);
  }
  else {
    FUN_0041c034((int *)piVar1[4],0x80000014);
    FUN_0041cad0(piVar1,param_3 + 1,param_1[0xf] + -2);
    FUN_0041ca70(piVar1,param_3 + 1,1);
    FUN_0041ca70(piVar1,param_1[0xa9] + param_3 + -1,1);
    FUN_0041c034((int *)piVar1[4],0x80000010);
    FUN_0041cad0(piVar1,param_3 + 2,param_1[0xf] + -2);
    FUN_0041ca70(piVar1,param_1[0xa9] + param_3 + -2,param_1[0xf] + -2);
    FUN_0041ca70(piVar1,param_1[0xa9] + param_3 + -2,1);
  }
  cVar4 = (**(code **)(*param_1 + 0x4c))();
  if ((cVar4 == '\0') && ((*(byte *)(param_1 + 8) & 0x10) == 0)) {
    iVar5 = 1;
  }
  else if (((char)param_1[0xc1] == '\0') || ((*(byte *)(param_1 + 8) & 0x10) != 0)) {
    if (*(char *)((int)param_1 + (uint)param_2 * 0x10 + 0x1f9) == '\0') {
      iVar5 = 1;
    }
    else {
      iVar5 = 0;
      if (*(char *)((int)param_1 + (uint)param_2 * 0x10 + 0x1fa) != '\0') {
        iVar5 = 2;
      }
    }
  }
  else if (*(char *)((int)param_1 + (uint)param_2 * 0x10 + 0x1fb) == '\0') {
    iVar5 = 1;
  }
  else {
    iVar5 = 0;
    if (*(char *)((int)param_1 + (uint)param_2 * 0x10 + 0x1fa) != '\0') {
      iVar5 = 2;
    }
  }
  piVar2 = (int *)param_1[(uint)param_2 * 4 + iVar5 + 0x7f];
  uVar6 = (**(code **)(*piVar2 + 0x2c))();
  iVar5 = (int)uVar6 >> 1;
  if (iVar5 < 0) {
    iVar5 = iVar5 + (uint)((uVar6 & 1) != 0);
  }
  tStack_48.left = param_1[0xa9] >> 1;
  if (tStack_48.left < 0) {
    tStack_48.left = tStack_48.left + (uint)((param_1[0xa9] & 1U) != 0);
  }
  tStack_48.left = tStack_48.left - iVar5;
  uVar6 = (**(code **)(*piVar2 + 0x20))();
  iVar5 = (int)uVar6 >> 1;
  if (iVar5 < 0) {
    iVar5 = iVar5 + (uint)((uVar6 & 1) != 0);
  }
  tStack_48.top = param_1[0xf] >> 1;
  if (tStack_48.top < 0) {
    tStack_48.top = tStack_48.top + (uint)((param_1[0xf] & 1U) != 0);
  }
  tStack_48.top = tStack_48.top - iVar5;
  if (bVar3) {
    tStack_48.left = tStack_48.left + 1;
    tStack_48.top = tStack_48.top + 1;
  }
  uVar7 = (**(code **)(*piVar2 + 0x20))();
  piVar13 = aiStack_30;
  uVar8 = (**(code **)(*piVar2 + 0x2c))();
  FUN_00411624(0,0,uVar8,piVar13,uVar7);
  piVar13 = aiStack_30;
  uVar6 = 0x8080;
  iVar5 = (**(code **)(*piVar2 + 0x20))();
  piVar12 = aiStack_20;
  iVar9 = (**(code **)(*piVar2 + 0x2c))();
  FUN_00411640(tStack_48.left + param_3,tStack_48.top,iVar9,piVar12,iVar5);
  FUN_0041c588(piVar1,aiStack_20,piVar2,uVar6,piVar13);
  pHVar10 = (HWND)FUN_00438988(param_1);
  pHVar11 = GetFocus();
  if ((pHVar10 == pHVar11) && ((char)uVar6 == (char)param_1[0xb2])) {
    FUN_00411640(param_3,0,param_1[0xa9],&tStack_48.left,param_1[0xf]);
    cVar4 = (char)(uVar6 >> 8);
    InflateRect(&tStack_48,-3,-3);
    if (cVar4 != '\0') {
      OffsetRect(&tStack_48,1,1);
    }
    lprc = &tStack_48;
    hDC = (HDC)FUN_0041cf6c((int *)param_1[0x7c]);
    DrawFocusRect(hDC,lprc);
  }
  return;
}

