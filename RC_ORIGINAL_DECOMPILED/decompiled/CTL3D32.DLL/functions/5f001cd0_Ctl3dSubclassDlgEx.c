/*
 * Ctl3dSubclassDlgEx at 5f001cd0
 * undefined4 __stdcall Ctl3dSubclassDlgEx(HWND param_1, ushort param_2)
 * Address ranges: 5f001cd0-5f001d32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 Ctl3dSubclassDlgEx(HWND param_1,ushort param_2)

{
  HWND hWnd;
  
                    /* 0x1cd0  21  Ctl3dSubclassDlgEx */
  if (DAT_5f005240 == 0) {
    return 0;
  }
  for (hWnd = GetWindow(param_1,5); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
    FUN_5f002e40(hWnd,param_2,0,0);
  }
  FUN_5f001070(param_1,0x5f0026f0);
  return 1;
}

