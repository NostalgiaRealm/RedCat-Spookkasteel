/*
 * FUN_004c54c4 at 004c54c4
 * undefined __register FUN_004c54c4(int param_1)
 * Address ranges: 004c54c4-004c5526
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004c54c4(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  (**(code **)(**(int **)(param_1 + 4) + 0x74))();
  uVar1 = FUN_0040320c(*(int **)(param_1 + 4),(int)&PTR_FUN_0042ebec);
  if ((char)uVar1 != '\0') {
    lParam = 0;
    wParam = 0;
    Msg = 0x85;
    piVar2 = (int *)FUN_00403224(*(int **)(param_1 + 4),(int)&PTR_FUN_0042ebec);
    hWnd = (HWND)FUN_00438988(piVar2);
    PostMessageA(hWnd,Msg,wParam,lParam);
  }
  FUN_00433700(*(int *)(param_1 + 4),0x1401,0,0);
  return;
}

