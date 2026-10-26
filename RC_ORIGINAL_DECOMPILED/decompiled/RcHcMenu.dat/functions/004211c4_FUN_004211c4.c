/*
 * FUN_004211c4 at 004211c4
 * undefined __register FUN_004211c4(int * param_1, int * param_2, int * param_3)
 * Address ranges: 004211c4-00421395;0042139d-00421400
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41acd8 slot 5 for TBitmap. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41acd8 slot 5 for TBitmap.
   Original bytes unchanged; names and types still inferred. */

void FUN_004211c4(int *param_1,int *param_2,int *param_3)

{
  HPALETTE hPal;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  HDC pHVar6;
  HGDIOBJ h;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar8;
  int ySrc;
  int iVar9;
  DWORD rop;
  tagPOINT local_18;
  char local_d;
  HPALETTE local_c;
  int *local_8;
  
  iVar9 = param_1[8];
  local_8 = param_2;
  FUN_0041d040(param_2,0xf);
  FUN_00421798((int)param_1);
  local_c = (HPALETTE)0x0;
  local_d = 0;
  hPal = *(HPALETTE *)(iVar9 + 0x10);
  if (hPal != (HPALETTE)0x0) {
    local_c = SelectPalette((HDC)local_8[1],hPal,-1);
    RealizePalette((HDC)local_8[1]);
  }
  local_d = hPal != (HPALETTE)0x0;
  iVar3 = GetDeviceCaps((HDC)local_8[1],0xc);
  iVar4 = GetDeviceCaps((HDC)local_8[1],0xe);
  if ((iVar3 * iVar4 < 9) &&
     (iVar3 * iVar4 < (int)((uint)*(ushort *)(iVar9 + 0x2a) * (uint)*(ushort *)(iVar9 + 0x28)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    GetBrushOrgEx((HDC)local_8[1],&local_18);
    SetStretchBltMode((HDC)local_8[1],4);
    SetBrushOrgEx((HDC)local_8[1],local_18.x,local_18.y,&local_18);
  }
  else {
    uVar8 = FUN_00421544((int)param_1);
    if ((char)uVar8 == '\0') {
      iVar3 = 3;
      pHVar6 = (HDC)FUN_0041cf6c(local_8);
      SetStretchBltMode(pHVar6,iVar3);
    }
  }
  uVar8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffc8;
  cVar2 = (**(code **)(*param_1 + 0x28))();
  if (cVar2 != '\0') {
    FUN_00421738(param_1);
  }
  piVar5 = (int *)FUN_00421490(param_1);
  FUN_0041d040(piVar5,0xf);
  cVar2 = (**(code **)(*param_1 + 0x28))();
  if (cVar2 != '\0') {
    *in_FS_OFFSET = &stack0xffffffbc;
    pHVar6 = CreateCompatibleDC((HDC)0x0);
    pHVar6 = (HDC)FUN_0041d364((int)pHVar6);
    h = SelectObject(pHVar6,*(HGDIOBJ *)(iVar9 + 0xc));
    iVar3 = param_3[2] - *param_3;
    iVar4 = param_3[3] - param_3[1];
    iVar7 = FUN_00421490(param_1);
    uVar8 = 0;
    FUN_0041d508((HDC)local_8[1],*param_3,param_3[1],0,0,pHVar6,*(int *)(iVar9 + 0x20),
                 *(int *)(iVar9 + 0x1c),0,0,*(HDC *)(iVar7 + 4),iVar4,iVar3);
    *in_FS_OFFSET = uVar8;
    if (h != (HGDIOBJ)0x0) {
      SelectObject(pHVar6,h);
    }
    if (pHVar6 != (HDC)0x0) {
      DeleteDC(pHVar6);
    }
    return;
  }
  rop = local_8[8];
  iVar3 = *(int *)(iVar9 + 0x20);
  iVar9 = *(int *)(iVar9 + 0x1c);
  ySrc = 0;
  iVar7 = 0;
  iVar4 = FUN_00421490(param_1);
  StretchBlt((HDC)local_8[1],*param_3,param_3[1],param_3[2] - *param_3,param_3[3] - param_3[1],
             *(HDC *)(iVar4 + 4),iVar7,ySrc,iVar9,iVar3,rop);
  *in_FS_OFFSET = uVar8;
  if (local_d != '\0') {
    SelectPalette((HDC)local_8[1],local_c,-1);
  }
  return;
}

