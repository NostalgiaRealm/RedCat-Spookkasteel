/*
 * FUN_00522a64 at 00522a64
 * undefined __register FUN_00522a64(int param_1, char param_2)
 * Address ranges: 00522a64-00522adf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x51bed8 slot 56 for TDaviCustomGrid2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x51bed8 slot 56 for
   TDaviCustomGrid2. Original bytes unchanged; names and types still inferred. */

void FUN_00522a64(int param_1,char param_2)

{
  bool bVar1;
  HWND hWnd;
  int *piVar2;
  int nBar;
  int nMinPos;
  int nMaxPos;
  BOOL bRedraw;
  
  if ((*(char *)(param_1 + 0x270) != param_2) &&
     (*(char *)(param_1 + 0x270) = param_2, param_2 != '\0')) {
    bVar1 = FUN_00438c84(*(int *)(param_1 + 0x274));
    if (bVar1) {
      bRedraw = -1;
      nMaxPos = 0;
      nMinPos = 0;
      nBar = 0;
      hWnd = (HWND)FUN_00438988(*(int **)(param_1 + 0x274));
      SetScrollRange(hWnd,nBar,nMinPos,nMaxPos,bRedraw);
    }
    piVar2 = (int *)FUN_00520c1c(param_1);
    FUN_0051e704(piVar2,0);
    piVar2 = (int *)FUN_00520c1c(param_1);
    FUN_0051eb30(piVar2,0);
  }
  return;
}

