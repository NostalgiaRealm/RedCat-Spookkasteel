/*
 * FUN_004aff0c at 004aff0c
 * undefined __register FUN_004aff0c(int param_1)
 * Address ranges: 004aff0c-004aff72
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4af7a4 slot 29 for TCustomTransparentControl. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4af7a4 slot 29 for
   TCustomTransparentControl. Original bytes unchanged; names and types still inferred. */

void FUN_004aff0c(int param_1)

{
  bool bVar1;
  HWND hWnd;
  RECT *lpRect;
  BOOL bErase;
  RECT local_18;
  int local_8;
  
  local_8 = param_1;
  if (*(int *)(param_1 + 0x24) != 0) {
    bVar1 = FUN_00438c84(*(int *)(param_1 + 0x24));
    if (bVar1) {
      bVar1 = FUN_004afeec(local_8);
      if ((!bVar1) && (*(char *)(local_8 + 0x1f8) != '\0')) {
        FUN_0043211c(local_8,&local_18.left);
        bErase = -1;
        lpRect = &local_18;
        hWnd = (HWND)FUN_00438988(*(int **)(local_8 + 0x24));
        InvalidateRect(hWnd,lpRect,bErase);
      }
    }
  }
  FUN_004387fc(local_8);
  return;
}

