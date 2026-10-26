/*
 * FUN_0040a9ec at 0040a9ec
 * undefined __cdecl FUN_0040a9ec(HWND param_1)
 * Address ranges: 0040a9ec-0040ab02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_0040a9ec(HWND param_1)

{
  HANDLE h;
  int iVar1;
  HDC hdc;
  int nDenominator;
  LOGFONTA local_50;
  tagRECT local_14;
  
  GetWindowRect(param_1,&local_14);
  local_14.left = local_14.left + local_14.left / 6;
  local_14.right = local_14.right + local_14.right / 6;
  MoveWindow(param_1,local_14.left,local_14.top,local_14.right - local_14.left,
             local_14.bottom - local_14.top,0);
  if ((DAT_004136ec != 0) && (DAT_00413ab8 != (code *)0x0)) {
    (*DAT_00413ab8)(param_1,0x38);
  }
  if (DAT_00413b08 == (HFONT)0x0) {
    DAT_00413b08 = (HFONT)0x0;
    h = (HANDLE)SendMessageA(param_1,0x31,0,0);
    if ((h != (HANDLE)0x0) && (iVar1 = GetObjectA(h,0x3c,&local_50), iVar1 != 0)) {
      local_50.lfWeight = 300;
      local_50.lfCharSet = DAT_004136e4;
      hdc = GetDC(param_1);
      nDenominator = 0x48;
      iVar1 = GetDeviceCaps(hdc,0x5a);
      local_50.lfHeight = MulDiv((uint)DAT_00413740,iVar1,nDenominator);
      local_50.lfHeight = -local_50.lfHeight;
      ReleaseDC(param_1,hdc);
      if (DAT_0041369c != (LPCSTR)0x0) {
        lstrcpyA(local_50.lfFaceName,DAT_0041369c);
      }
      DAT_00413b08 = CreateFontIndirectA(&local_50);
    }
    if (DAT_00413b08 == (HFONT)0x0) {
      return;
    }
  }
  EnumChildWindows(param_1,FUN_0040ab03,(LPARAM)DAT_00413b08);
  return;
}

