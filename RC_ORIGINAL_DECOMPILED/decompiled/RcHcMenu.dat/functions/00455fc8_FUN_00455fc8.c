/*
 * FUN_00455fc8 at 00455fc8
 * undefined __register FUN_00455fc8(int * param_1)
 * Address ranges: 00455fc8-00456120
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4544a8 slot 33 for TSplitter. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4544a8 slot 33 for
   TSplitter. Original bytes unchanged; names and types still inferred. */

void FUN_00455fc8(int *param_1)

{
  int *piVar1;
  COLORREF CVar2;
  HBRUSH pHVar3;
  HDC pHVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  tagRECT *lprc;
  tagRECT *lprc_00;
  HBRUSH pHVar7;
  tagRECT tStack_28;
  RECT RStack_18;
  
  (**(code **)(*param_1 + 0x40))(param_1,&tStack_28);
  FUN_0041c318(*(int **)(param_1[0x48] + 0x14),param_1[0x18]);
  lprc = &tStack_28;
  lprc_00 = &tStack_28;
  (**(code **)(*param_1 + 0x40))(param_1,&RStack_18);
  FUN_0041c9f8((int *)param_1[0x48],&RStack_18);
  if (*(char *)((int)param_1 + 0x12d) != '\0') {
    if ((byte)(*(char *)((int)param_1 + 0x4b) - 3U) < 2) {
      InflateRect(&tStack_28,-1,2);
    }
    else {
      InflateRect(&tStack_28,2,-1);
    }
    OffsetRect(&tStack_28,1,1);
    CVar2 = FUN_0041b688(0x80000014);
    pHVar3 = CreateSolidBrush(CVar2);
    pHVar7 = pHVar3;
    pHVar4 = (HDC)FUN_0041cf6c((int *)param_1[0x48]);
    FrameRect(pHVar4,lprc,pHVar7);
    DeleteObject(pHVar3);
    OffsetRect(&tStack_28,-2,-2);
    CVar2 = FUN_0041b688(0x80000010);
    pHVar3 = CreateSolidBrush(CVar2);
    pHVar7 = pHVar3;
    pHVar4 = (HDC)FUN_0041cf6c((int *)param_1[0x48]);
    FrameRect(pHVar4,lprc_00,pHVar7);
    DeleteObject(pHVar3);
  }
  if ((*(byte *)(param_1 + 8) & 0x10) != 0) {
    piVar1 = (int *)param_1[0x48];
    FUN_0041c110((int *)piVar1[4],2);
    FUN_0041c0f4((int *)piVar1[4],CONCAT31((int3)((uint)extraout_EDX >> 8),0xe),extraout_ECX);
    FUN_0041c034((int *)piVar1[4],0xffd8ce);
    FUN_0041c434((int *)piVar1[5],'\x01');
    iVar5 = FUN_00432178(param_1);
    iVar6 = FUN_004321bc(param_1);
    FUN_0041cb34(piVar1,0,0,iVar6,iVar5);
  }
  if (*(short *)((int)param_1 + 0x182) != 0) {
    (*(code *)param_1[0x60])(param_1[0x61],param_1);
  }
  return;
}

