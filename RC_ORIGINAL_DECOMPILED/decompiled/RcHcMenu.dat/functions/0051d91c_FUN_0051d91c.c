/*
 * FUN_0051d91c at 0051d91c
 * undefined __register FUN_0051d91c(int * param_1, int param_2)
 * Address ranges: 0051d91c-0051d9e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051d91c(int *param_1,int param_2)

{
  HRGN pHVar1;
  uint uVar2;
  HWND hWnd;
  int iVar3;
  int extraout_EDX;
  int iVar4;
  int extraout_EDX_00;
  BOOL bRedraw;
  
  DeleteObject((HGDIOBJ)param_1[0x7f]);
  pHVar1 = CreateRectRgn(0,0,0,0);
  param_1[0x7f] = (int)pHVar1;
  OffsetRgn((HRGN)param_1[0x80],0,param_2);
  CombineRgn((HRGN)param_1[0x7f],(HRGN)param_1[0x7e],(HRGN)param_1[0x80],2);
  uVar2 = -param_2;
  if (SBORROW4(0,param_2)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  OffsetRgn((HRGN)param_1[0x80],0,uVar2);
  bRedraw = -1;
  pHVar1 = (HRGN)param_1[0x7f];
  hWnd = (HWND)FUN_00438988(param_1);
  uVar2 = SetWindowRgn(hWnd,pHVar1,bRedraw);
  iVar3 = (int)((longlong)DAT_00571ee0 * 2);
  if ((longlong)iVar3 != (longlong)DAT_00571ee0 * 2) {
    uVar2 = thunk_FUN_00402874(uVar2);
    iVar3 = extraout_EDX;
  }
  iVar4 = iVar3 + param_2;
  if (SCARRY4(iVar3,param_2)) {
    thunk_FUN_00402874(uVar2);
    iVar4 = extraout_EDX_00;
  }
  FUN_00431f98(param_1,iVar4);
  return;
}

