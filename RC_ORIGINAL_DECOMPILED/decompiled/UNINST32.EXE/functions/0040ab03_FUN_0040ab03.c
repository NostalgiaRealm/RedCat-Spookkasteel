/*
 * FUN_0040ab03 at 0040ab03
 * undefined4 __stdcall FUN_0040ab03(HWND param_1, WPARAM param_2)
 * Address ranges: 0040ab03-0040ab9c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0040ab03(HWND param_1,WPARAM param_2)

{
  HWND hWnd;
  tagRECT local_24;
  tagPOINT local_14;
  tagPOINT local_c;
  
  GetWindowRect(param_1,&local_24);
  hWnd = GetParent(param_1);
  local_c.x = local_24.left;
  local_c.y = local_24.top;
  ScreenToClient(hWnd,&local_c);
  local_14.x = local_24.right;
  local_14.y = local_24.bottom;
  ScreenToClient(hWnd,&local_14);
  local_c.x = local_c.x + local_c.x / 6;
  local_14.x = local_14.x + local_14.x / 6;
  MoveWindow(param_1,local_c.x,local_c.y,local_14.x - local_c.x,local_14.y - local_c.y,0);
  SendMessageA(param_1,0x30,param_2,0);
  return 1;
}

