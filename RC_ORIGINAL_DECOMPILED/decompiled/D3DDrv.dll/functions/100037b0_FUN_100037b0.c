/*
 * FUN_100037b0 at 100037b0
 * undefined4 __cdecl FUN_100037b0(HWND param_1)
 * Address ranges: 100037b0-100037e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_100037b0(HWND param_1)

{
  tagPOINT local_8;
  
  local_8.y = 0;
  local_8.x = 0;
  ClientToScreen(param_1,&local_8);
  DAT_1002708c = local_8.y;
  DAT_10027088 = local_8.x;
  return 1;
}

