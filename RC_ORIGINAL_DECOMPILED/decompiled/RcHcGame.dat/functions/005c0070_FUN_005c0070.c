/*
 * FUN_005c0070 at 005c0070
 * undefined FUN_005c0070(void)
 * Address ranges: 005c0070-005c0107
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LONG __fastcall FUN_005c0070(LPCSTR param_1,LPCSTR param_2)

{
  char cVar1;
  HWND pHVar2;
  HDC hdc;
  HFONT h;
  HGDIOBJ h_00;
  uint uVar3;
  LPCSTR pCVar4;
  tagSIZE local_8;
  
  pHVar2 = GetDesktopWindow();
  hdc = GetDC(pHVar2);
  h = CreateFontA(-(int)*(short *)(param_1 + 0x40),0,0,0,(int)*(short *)(param_1 + 0x42),0,0,0,0,7,0
                  ,0,0,param_1);
  h_00 = SelectObject(hdc,h);
  uVar3 = 0xffffffff;
  pCVar4 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pCVar4;
    pCVar4 = pCVar4 + 1;
  } while (cVar1 != '\0');
  GetTextExtentPoint32A(hdc,param_2,~uVar3 - 1,&local_8);
  SelectObject(hdc,h_00);
  DeleteObject(h);
  pHVar2 = GetDesktopWindow();
  ReleaseDC(pHVar2,hdc);
  return local_8.cy;
}

