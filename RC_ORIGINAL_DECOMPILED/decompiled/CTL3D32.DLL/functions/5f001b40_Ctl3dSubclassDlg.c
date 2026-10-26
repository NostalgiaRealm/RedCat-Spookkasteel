/*
 * Ctl3dSubclassDlg at 5f001b40
 * undefined4 __stdcall Ctl3dSubclassDlg(HWND param_1, ushort param_2)
 * Address ranges: 5f001b40-5f001b91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 Ctl3dSubclassDlg(HWND param_1,ushort param_2)

{
  HWND hWnd;
  
                    /* 0x1b40  2  Ctl3dSubclassDlg */
  if (DAT_5f005240 == 0) {
    return 0;
  }
  for (hWnd = GetWindow(param_1,5); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
    FUN_5f002e40(hWnd,param_2,0,0);
  }
  return 1;
}

