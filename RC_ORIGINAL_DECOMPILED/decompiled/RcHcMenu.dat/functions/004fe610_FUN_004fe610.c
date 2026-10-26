/*
 * FUN_004fe610 at 004fe610
 * undefined __register FUN_004fe610(int * param_1)
 * Address ranges: 004fe610-004fe693
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004fe610(int *param_1)

{
  bool bVar1;
  HWND pHVar2;
  UINT UVar3;
  WPARAM WVar4;
  RECT *pRVar5;
  LPARAM lParam;
  BOOL bErase;
  RECT local_18;
  int *local_8;
  
  local_8 = param_1;
  bVar1 = FUN_00438c84((int)param_1);
  if (bVar1) {
    pRVar5 = &local_18;
    WVar4 = 0;
    UVar3 = 0xb2;
    pHVar2 = (HWND)FUN_00438988(local_8);
    SendMessageA(pHVar2,UVar3,WVar4,(LPARAM)pRVar5);
    (**(code **)(*local_8 + 0xd4))(local_8,&local_18);
    pRVar5 = &local_18;
    WVar4 = 0;
    UVar3 = 0xb4;
    pHVar2 = (HWND)FUN_00438988(local_8);
    SendMessageA(pHVar2,UVar3,WVar4,(LPARAM)pRVar5);
    lParam = 0;
    WVar4 = 0;
    UVar3 = 0xb7;
    pHVar2 = (HWND)FUN_00438988(local_8);
    SendMessageA(pHVar2,UVar3,WVar4,lParam);
    bErase = 0;
    pRVar5 = &local_18;
    pHVar2 = (HWND)FUN_00438988(local_8);
    InvalidateRect(pHVar2,pRVar5,bErase);
  }
  return;
}

