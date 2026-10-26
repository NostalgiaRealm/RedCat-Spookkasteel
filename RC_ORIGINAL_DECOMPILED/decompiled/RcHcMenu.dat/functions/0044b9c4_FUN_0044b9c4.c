/*
 * FUN_0044b9c4 at 0044b9c4
 * undefined __register FUN_0044b9c4(int * param_1, byte param_2)
 * Address ranges: 0044b9c4-0044ba02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044b9c4(int *param_1,byte param_2)

{
  HWND hWnd;
  int nCmdShow;
  
  if (((param_2 != *(byte *)((int)param_1 + 0x213)) &&
      (*(byte *)((int)param_1 + 0x213) = param_2, (*(byte *)(param_1 + 8) & 0x10) == 0)) &&
     ((char)param_1[0x5a] != '\0')) {
    nCmdShow = *(int *)(&DAT_0056fa64 + (uint)param_2 * 4);
    hWnd = (HWND)FUN_00438988(param_1);
    ShowWindow(hWnd,nCmdShow);
  }
  return;
}

