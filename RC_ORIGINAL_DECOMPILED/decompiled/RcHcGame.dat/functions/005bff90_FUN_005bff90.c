/*
 * FUN_005bff90 at 005bff90
 * undefined FUN_005bff90(void)
 * Address ranges: 005bff90-005c006b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_005bff90(LPCSTR param_1,LPCSTR param_2)

{
  char cVar1;
  HWND pHVar2;
  HDC hdc;
  HFONT h;
  HGDIOBJ h_00;
  uint uVar3;
  int iVar4;
  int iVar5;
  LPCSTR pCVar6;
  tagSIZE local_8;
  
  if (*(int *)(param_1 + 0x44) == 0) {
    pHVar2 = GetDesktopWindow();
    hdc = GetDC(pHVar2);
    h = CreateFontA(-(int)*(short *)(param_1 + 0x40),0,0,0,(int)*(short *)(param_1 + 0x42),0,0,0,0,7
                    ,0,0,0,param_1);
    h_00 = SelectObject(hdc,h);
    uVar3 = 0xffffffff;
    pCVar6 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pCVar6;
      pCVar6 = pCVar6 + 1;
    } while (cVar1 != '\0');
    GetTextExtentPoint32A(hdc,param_2,~uVar3 - 1,&local_8);
    SelectObject(hdc,h_00);
    DeleteObject(h);
    pHVar2 = GetDesktopWindow();
    ReleaseDC(pHVar2,hdc);
    return local_8.cx;
  }
  uVar3 = 0xffffffff;
  iVar5 = 0;
  iVar4 = 0;
  pCVar6 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pCVar6;
    pCVar6 = pCVar6 + 1;
  } while (cVar1 != '\0');
  if (0 < (int)(~uVar3 - 1)) {
    do {
      uVar3 = 0xffffffff;
      iVar5 = iVar5 + *(int *)(param_1 + (uint)(byte)param_2[iVar4] * 0x20 + 100);
      iVar4 = iVar4 + 1;
      pCVar6 = param_2;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pCVar6;
        pCVar6 = pCVar6 + 1;
      } while (cVar1 != '\0');
    } while (iVar4 < (int)(~uVar3 - 1));
  }
  return iVar5;
}

