/*
 * FUN_00435d04 at 00435d04
 * undefined __register FUN_00435d04(int * param_1)
 * Address ranges: 00435d04-00435d99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00435d04(int *param_1)

{
  HWND hWndInsertAfter;
  int iVar1;
  int iVar2;
  int iVar3;
  int cy;
  UINT uFlags;
  
  if (param_1[0x53] == 0) {
    (**(code **)(*param_1 + 0x98))();
    SetPropA((HWND)param_1[0x53],(LPCSTR)(uint)DAT_0057375a,param_1);
    SetPropA((HWND)param_1[0x53],(LPCSTR)(uint)DAT_00573758,param_1);
    if (param_1[9] != 0) {
      uFlags = 0x13;
      cy = 0;
      iVar3 = 0;
      iVar2 = 0;
      iVar1 = 0;
      hWndInsertAfter = (HWND)FUN_00435cbc(param_1[9],(int)param_1);
      SetWindowPos((HWND)param_1[0x53],hWndInsertAfter,iVar1,iVar2,iVar3,cy,uFlags);
    }
    iVar1 = FUN_0043579c((int)param_1);
    if (-1 < iVar1 + -1) {
      iVar2 = 0;
      do {
        iVar3 = FUN_00435760((int)param_1,iVar2);
        FUN_00431e58(iVar3);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

