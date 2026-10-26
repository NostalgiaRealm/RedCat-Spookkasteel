/*
 * FUN_00420cb4 at 00420cb4
 * HPALETTE __register FUN_00420cb4(HPALETTE param_1)
 * Address ranges: 00420cb4-00420d14
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

HPALETTE FUN_00420cb4(HPALETTE param_1)

{
  int iVar1;
  HPALETTE pHVar2;
  UINT local_410;
  LOGPALETTE local_40c [128];
  
  pHVar2 = (HPALETTE)0x0;
  if (param_1 != (HPALETTE)0x0) {
    local_410 = 0;
    iVar1 = GetObjectA(param_1,4,&local_410);
    if ((iVar1 != 0) && (local_410 != 0)) {
      local_40c[0].palVersion = 0x300;
      local_40c[0].palNumEntries = (WORD)local_410;
      GetPaletteEntries(param_1,0,local_410,local_40c[0].palPalEntry);
      pHVar2 = CreatePalette(local_40c);
    }
  }
  return pHVar2;
}

