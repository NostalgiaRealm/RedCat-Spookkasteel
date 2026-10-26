/*
 * FUN_5f001340 at 5f001340
 * undefined __cdecl FUN_5f001340(HDC param_1, int * param_2, ushort param_3, ushort param_4, ushort param_5)
 * Address ranges: 5f001340-5f001471
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_5f001340(HDC param_1,int *param_2,ushort param_3,ushort param_4,ushort param_5)

{
  COLORREF color;
  RECT local_10;
  
  color = SetBkColor(param_1,*(COLORREF *)(&DAT_5f005264 + (uint)param_3 * 4));
  local_10.left = *param_2;
  local_10.top = param_2[1];
  local_10.right = param_2[2];
  local_10.bottom = local_10.top + 1;
  if ((param_5 & 2) != 0) {
    ExtTextOutW(param_1,0,0,2,&local_10,(LPCWSTR)0x0,0,(INT *)0x0);
  }
  local_10.bottom = param_2[3];
  local_10.right = local_10.left + 1;
  if ((param_5 & 1) != 0) {
    ExtTextOutW(param_1,0,0,2,&local_10,(LPCWSTR)0x0,0,(INT *)0x0);
  }
  if (param_4 != param_3) {
    SetBkColor(param_1,*(COLORREF *)(&DAT_5f005264 + (uint)param_4 * 4));
  }
  local_10.right = param_2[2];
  local_10.left = local_10.right + -1;
  if ((param_5 & 4) != 0) {
    ExtTextOutW(param_1,0,0,2,&local_10,(LPCWSTR)0x0,0,(INT *)0x0);
  }
  if ((param_5 & 8) != 0) {
    local_10.left = *param_2;
    local_10.top = local_10.bottom + -1;
    if ((param_5 & 0x1000) != 0) {
      local_10.right = local_10.right + -2;
    }
    ExtTextOutW(param_1,0,0,2,&local_10,(LPCWSTR)0x0,0,(INT *)0x0);
  }
  SetBkColor(param_1,color);
  return;
}

