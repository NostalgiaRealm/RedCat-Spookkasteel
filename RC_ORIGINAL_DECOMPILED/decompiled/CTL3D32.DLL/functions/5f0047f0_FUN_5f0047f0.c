/*
 * FUN_5f0047f0 at 5f0047f0
 * HBITMAP __stdcall FUN_5f0047f0(HMODULE param_1, LPCWSTR param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint param_8)
 * Address ranges: 5f0047f0-5f00495b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

HBITMAP FUN_5f0047f0(HMODULE param_1,LPCWSTR param_2,uint param_3,uint param_4,uint param_5,
                    uint param_6,uint param_7,uint param_8)

{
  HRSRC hResInfo;
  DWORD dwBytes;
  DWORD *pDVar1;
  BITMAPINFOHEADER *pbmi;
  HDC hdc;
  HBITMAP pHVar2;
  uint uVar3;
  BITMAPINFOHEADER *pBVar4;
  
  hResInfo = FindResourceW(param_1,param_2,(LPCWSTR)0x2);
  if (hResInfo == (HRSRC)0x0) {
    return (HBITMAP)0x0;
  }
  dwBytes = SizeofResource(param_1,hResInfo);
  pDVar1 = LoadResource(param_1,hResInfo);
  if (pDVar1 == (DWORD *)0x0) {
    return (HBITMAP)0x0;
  }
  pbmi = GlobalAlloc(0x40,dwBytes);
  if (pbmi == (BITMAPINFOHEADER *)0x0) {
    return (HBITMAP)0x0;
  }
  pBVar4 = pbmi;
  for (uVar3 = dwBytes >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    pBVar4->biSize = *pDVar1;
    pDVar1 = pDVar1 + 1;
    pBVar4 = (BITMAPINFOHEADER *)&pBVar4->biWidth;
  }
  for (uVar3 = dwBytes & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)&pBVar4->biSize = (char)*pDVar1;
    pDVar1 = (DWORD *)((int)pDVar1 + 1);
    pBVar4 = (BITMAPINFOHEADER *)((int)&pBVar4->biSize + 1);
  }
  pbmi[1].biSize = (param_3 >> 8 & 0xff) << 8 | (param_3 & 0xff) << 0x10 | param_3 >> 0x10 & 0xff;
  pbmi[1].biYPelsPerMeter =
       (param_5 >> 8 & 0xff) << 8 | (param_5 & 0xff) << 0x10 | param_5 >> 0x10 & 0xff;
  pbmi[1].biClrUsed = (param_4 >> 8 & 0xff) << 8 | (param_4 & 0xff) << 0x10 | param_4 >> 0x10 & 0xff
  ;
  pbmi[2].biSizeImage =
       (param_6 >> 8 & 0xff) << 8 | (param_6 & 0xff) << 0x10 | param_6 >> 0x10 & 0xff;
  pbmi[2].biWidth = (param_7 >> 8 & 0xff) << 8 | param_7 >> 0x10 & 0xff | (param_7 & 0xff) << 0x10;
  pbmi[2].biSize = (param_8 >> 8 & 0xff) << 8 | param_8 >> 0x10 & 0xff | (param_8 & 0xff) << 0x10;
  hdc = GetDC((HWND)0x0);
  pHVar2 = CreateDIBitmap(hdc,pbmi,4,&pbmi[2].biXPelsPerMeter,(BITMAPINFO *)pbmi,0);
  ReleaseDC((HWND)0x0,hdc);
  GlobalFree(pbmi);
  return pHVar2;
}

