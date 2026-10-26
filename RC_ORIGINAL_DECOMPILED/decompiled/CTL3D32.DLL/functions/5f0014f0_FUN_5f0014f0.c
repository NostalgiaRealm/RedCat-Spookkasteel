/*
 * FUN_5f0014f0 at 5f0014f0
 * undefined __cdecl FUN_5f0014f0(HWND param_1, HDC param_2)
 * Address ranges: 5f0014f0-5f001525
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_5f0014f0(HWND param_1,HDC param_2)

{
  tagRECT local_10;
  
  GetClientRect(param_1,&local_10);
  IntersectClipRect(param_2,local_10.left,local_10.top,local_10.right,local_10.bottom);
  return;
}

