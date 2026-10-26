/*
 * FUN_004483e0 at 004483e0
 * undefined1 __register FUN_004483e0(void)
 * Address ranges: 004483e0-00448409
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_004483e0(void)

{
  DWORD dwThreadId;
  code *lpfn;
  HWND *lParam;
  HWND local_8;
  undefined1 local_4;
  
  local_8 = GetActiveWindow();
  lParam = &local_8;
  local_4 = 0;
  lpfn = FUN_004483c0;
  dwThreadId = GetCurrentThreadId();
  EnumThreadWindows(dwThreadId,lpfn,(LPARAM)lParam);
  return local_4;
}

