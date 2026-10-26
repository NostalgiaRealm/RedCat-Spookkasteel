/*
 * FUN_00422cec at 00422cec
 * BYTE __register FUN_00422cec(void)
 * Address ranges: 00422cec-00422d2e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

BYTE FUN_00422cec(void)

{
  HDC hdc;
  HGDIOBJ pvVar1;
  BOOL BVar2;
  BYTE BVar3;
  tagTEXTMETRICA tStack_40;
  
  BVar3 = '\x01';
  hdc = GetDC((HWND)0x0);
  if (hdc != (HDC)0x0) {
    pvVar1 = SelectObject(hdc,DAT_00573664);
    if (pvVar1 != (HGDIOBJ)0x0) {
      BVar2 = GetTextMetricsA(hdc,&tStack_40);
      if (BVar2 != 0) {
        BVar3 = tStack_40.tmCharSet;
      }
    }
    ReleaseDC((HWND)0x0,hdc);
  }
  return BVar3;
}

