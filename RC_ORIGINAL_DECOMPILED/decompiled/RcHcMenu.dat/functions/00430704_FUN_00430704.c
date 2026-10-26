/*
 * FUN_00430704 at 00430704
 * HWND __register FUN_00430704(POINT * param_1)
 * Address ranges: 00430704-0043072f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

HWND FUN_00430704(POINT *param_1)

{
  HWND hWnd;
  undefined4 uVar1;
  
  hWnd = WindowFromPoint(*param_1);
  while ((hWnd != (HWND)0x0 && (uVar1 = FUN_004306e0(hWnd), (char)uVar1 == '\0'))) {
    hWnd = GetParent(hWnd);
  }
  return hWnd;
}

