/*
 * FUN_00431144 at 00431144
 * HANDLE __register FUN_00431144(POINT * param_1)
 * Address ranges: 00431144-00431175
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

HANDLE FUN_00431144(POINT *param_1)

{
  HWND hWnd;
  HANDLE pvVar1;
  
  hWnd = WindowFromPoint(*param_1);
  pvVar1 = (HANDLE)0x0;
  while ((hWnd != (HWND)0x0 && (pvVar1 = FUN_0042f92c(hWnd), pvVar1 == (HANDLE)0x0))) {
    hWnd = GetParent(hWnd);
  }
  return pvVar1;
}

