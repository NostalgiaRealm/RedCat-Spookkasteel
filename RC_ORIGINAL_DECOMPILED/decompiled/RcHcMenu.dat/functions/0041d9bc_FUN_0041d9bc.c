/*
 * FUN_0041d9bc at 0041d9bc
 * int __register FUN_0041d9bc(int param_1)
 * Address ranges: 0041d9bc-0041da41;0041da49-0041da50
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0041d9bc(int param_1)

{
  HDC hdc;
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  
  if (DAT_00573650 != (HPALETTE)0x0) {
    hdc = GetDC((HWND)0x0);
    uVar2 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffe4;
    iVar1 = GetDeviceCaps(hdc,0x68);
    if (0xf < iVar1) {
      GetPaletteEntries(DAT_00573650,0,8,(LPPALETTEENTRY)(param_1 + 4));
      GetPaletteEntries(DAT_00573650,8,8,
                        (LPPALETTEENTRY)(param_1 + -0x1c + (uint)*(ushort *)(param_1 + 2) * 4));
    }
    *in_FS_OFFSET = uVar2;
    iVar1 = ReleaseDC((HWND)0x0,hdc);
    return iVar1;
  }
  return param_1 & 0xffffff00;
}

