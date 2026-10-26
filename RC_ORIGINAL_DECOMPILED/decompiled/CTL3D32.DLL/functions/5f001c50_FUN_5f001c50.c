/*
 * FUN_5f001c50 at 5f001c50
 * undefined4 __stdcall FUN_5f001c50(HWND param_1, ushort param_2)
 * Address ranges: 5f001c50-5f001cc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_5f001c50(HWND param_1,ushort param_2)

{
  HWND hWnd;
  HWND hWnd_00;
  
  if (DAT_5f005240 != 0) {
    for (hWnd = GetWindow(param_1,5); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
      FUN_5f001ba0(hWnd,param_2,0);
      for (hWnd_00 = GetWindow(hWnd,5); hWnd_00 != (HWND)0x0; hWnd_00 = GetWindow(hWnd_00,2)) {
        FUN_5f001ba0(hWnd_00,param_2,hWnd);
      }
    }
    return 1;
  }
  return 0;
}

