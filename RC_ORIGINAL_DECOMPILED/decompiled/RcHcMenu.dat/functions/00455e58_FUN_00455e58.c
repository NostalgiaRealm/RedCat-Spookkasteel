/*
 * FUN_00455e58 at 00455e58
 * undefined __register FUN_00455e58(int param_1)
 * Address ranges: 00455e58-00455e9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00455e58(int param_1)

{
  HWND hWnd;
  HDC hDC;
  
  if (*(HGDIOBJ *)(param_1 + 0x164) != (HGDIOBJ)0x0) {
    SelectObject(*(HDC *)(param_1 + 0x140),*(HGDIOBJ *)(param_1 + 0x164));
  }
  hDC = *(HDC *)(param_1 + 0x140);
  hWnd = (HWND)FUN_00438988(*(int **)(param_1 + 0x24));
  ReleaseDC(hWnd,hDC);
  if (*(int **)(param_1 + 0x130) != (int *)0x0) {
    FUN_00403094(*(int **)(param_1 + 0x130));
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  return;
}

