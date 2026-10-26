/*
 * FUN_10001e10 at 10001e10
 * undefined FUN_10001e10(void)
 * Address ranges: 10001e10-10001e71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10001e10(undefined4 *param_1)

{
  HDC hdc;
  int iVar1;
  
  hdc = GetDC((HWND)*param_1);
  if (hdc == (HDC)0x0) {
    return 0;
  }
  iVar1 = SetStretchBltMode(hdc,3);
  if (iVar1 == 0) {
    return 0;
  }
  StretchDIBits(hdc,0,0,param_1[4],param_1[5],0,0,param_1[4],param_1[5],(void *)param_1[0xc],
                (BITMAPINFO *)param_1[10],0,0xcc0020);
  ReleaseDC((HWND)*param_1,hdc);
  return 1;
}

