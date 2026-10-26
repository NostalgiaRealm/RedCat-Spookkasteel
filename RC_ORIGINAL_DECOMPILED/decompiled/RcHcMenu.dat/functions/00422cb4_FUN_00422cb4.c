/*
 * FUN_00422cb4 at 00422cb4
 * undefined __register FUN_00422cb4(void)
 * Address ranges: 00422cb4-00422ce8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00422cb4(void)

{
  HDC hdc;
  
  hdc = GetDC((HWND)0x0);
  DAT_00573658 = GetDeviceCaps(hdc,0x5a);
  ReleaseDC((HWND)0x0,hdc);
  DAT_00573650 = FUN_0041d8a4((undefined4 *)&DAT_0056f658);
  return;
}

