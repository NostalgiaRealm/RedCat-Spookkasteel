/*
 * FUN_00451e3c at 00451e3c
 * undefined __register FUN_00451e3c(int param_1)
 * Address ranges: 00451e3c-00451e76
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00451e3c(int param_1)

{
  bool bVar1;
  HWND pHVar2;
  BOOL BVar3;
  int nCmdShow;
  
  if (*(int *)(param_1 + 0x74) != 0) {
    bVar1 = FUN_00438c84(*(int *)(param_1 + 0x74));
    if (bVar1) {
      pHVar2 = (HWND)FUN_00438988(*(int **)(param_1 + 0x74));
      BVar3 = IsWindowVisible(pHVar2);
      if (BVar3 != 0) {
        nCmdShow = 0;
        pHVar2 = (HWND)FUN_00438988(*(int **)(param_1 + 0x74));
        ShowWindow(pHVar2,nCmdShow);
      }
    }
  }
  return;
}

