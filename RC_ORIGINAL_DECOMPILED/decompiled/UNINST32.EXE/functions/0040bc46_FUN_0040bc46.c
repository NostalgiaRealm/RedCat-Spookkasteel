/*
 * FUN_0040bc46 at 0040bc46
 * HPALETTE __cdecl FUN_0040bc46(int param_1, WORD * param_2)
 * Address ranges: 0040bc46-0040bcef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

HPALETTE __cdecl FUN_0040bc46(int param_1,WORD *param_2)

{
  HGLOBAL hMem;
  LOGPALETTE *plpal;
  int iVar1;
  BYTE *pBVar2;
  BYTE *pBVar3;
  HPALETTE pHVar4;
  
  pHVar4 = (HPALETTE)0x0;
  if (*(ushort *)(param_1 + 0xe) < 9) {
    *(int *)param_2 = 1 << ((byte)*(ushort *)(param_1 + 0xe) & 0x1f);
  }
  else {
    param_2[0] = 0;
    param_2[1] = 0;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    *(int *)param_2 = *(int *)(param_1 + 0x20);
  }
  if (*(int *)param_2 != 0) {
    hMem = GlobalAlloc(0x42,*(int *)param_2 * 4 + 8);
    plpal = GlobalLock(hMem);
    plpal->palVersion = 0x300;
    plpal->palNumEntries = *param_2;
    iVar1 = 0;
    if (0 < *(int *)param_2) {
      pBVar2 = &plpal->palPalEntry[0].peGreen;
      pBVar3 = (BYTE *)(param_1 + 0x29);
      do {
        ((PALETTEENTRY *)(pBVar2 + -1))->peRed = pBVar3[1];
        *pBVar2 = *pBVar3;
        pBVar2[1] = pBVar3[-1];
        pBVar2[2] = '\0';
        iVar1 = iVar1 + 1;
        pBVar3 = pBVar3 + 4;
        pBVar2 = pBVar2 + 4;
      } while (iVar1 < *(int *)param_2);
    }
    pHVar4 = CreatePalette(plpal);
    GlobalUnlock(hMem);
    GlobalFree(hMem);
  }
  return pHVar4;
}

