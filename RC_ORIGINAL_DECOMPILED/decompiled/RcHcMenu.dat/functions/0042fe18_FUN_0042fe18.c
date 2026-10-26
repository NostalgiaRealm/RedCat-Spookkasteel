/*
 * FUN_0042fe18 at 0042fe18
 * HWND __register FUN_0042fe18(void)
 * Address ranges: 0042fe18-0042fe2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

HWND FUN_0042fe18(void)

{
  HWND hWnd;
  
  hWnd = FUN_00448574();
  SetCapture(hWnd);
  return hWnd;
}

