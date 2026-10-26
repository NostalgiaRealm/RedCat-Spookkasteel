/*
 * FUN_0042fcbc at 0042fcbc
 * HWND __register FUN_0042fcbc(void)
 * Address ranges: 0042fcbc-0042fce1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

HWND FUN_0042fcbc(void)

{
  HWND hWnd;
  HWND pHVar1;
  HWND pHVar2;
  int in_stack_00000004;
  
  pHVar2 = (HWND)FUN_00438988(*(int **)(in_stack_00000004 + -4));
  pHVar1 = pHVar2;
  while (hWnd = pHVar2, hWnd != (HWND)0x0) {
    pHVar2 = GetParent(hWnd);
    pHVar1 = hWnd;
  }
  return pHVar1;
}

