/*
 * FUN_0040bbac at 0040bbac
 * HBITMAP __cdecl FUN_0040bbac(uint param_1, undefined4 * param_2)
 * Address ranges: 0040bbac-0040bc45
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

HBITMAP __cdecl FUN_0040bbac(uint param_1,undefined4 *param_2)

{
  HRSRC hResInfo;
  HGLOBAL hResData;
  BITMAPINFOHEADER *pbmi;
  HDC hdc;
  HPALETTE hPal;
  HBITMAP pHVar1;
  
  pHVar1 = (HBITMAP)0x0;
  hResInfo = FindResourceA(DAT_00413a90,(LPCSTR)(param_1 & 0xffff),(LPCSTR)0x2);
  if (hResInfo != (HRSRC)0x0) {
    hResData = LoadResource(DAT_00413a90,hResInfo);
    pbmi = LockResource(hResData);
    hdc = GetDC((HWND)0x0);
    hPal = FUN_0040bc46((int)pbmi,(WORD *)&param_1);
    *param_2 = hPal;
    if (hPal != (HPALETTE)0x0) {
      SelectPalette(hdc,hPal,0);
      RealizePalette(hdc);
    }
    pHVar1 = CreateDIBitmap(hdc,pbmi,4,(void *)((int)&pbmi->biSize + pbmi->biSize + param_1 * 4),
                            (BITMAPINFO *)pbmi,0);
    ReleaseDC((HWND)0x0,hdc);
    FreeResource(hResData);
  }
  return pHVar1;
}

