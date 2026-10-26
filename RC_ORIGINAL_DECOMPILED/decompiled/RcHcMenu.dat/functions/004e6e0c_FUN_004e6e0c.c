/*
 * FUN_004e6e0c at 004e6e0c
 * undefined __register FUN_004e6e0c(void)
 * Address ranges: 004e6e0c-004e6e86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e6e0c(void)

{
  if (DAT_00574638 == (HMODULE)0x0) {
    DAT_00574638 = (HMODULE)FUN_0040e4c4("olepro32.dll",0x8000);
    if (DAT_00574638 != (HMODULE)0x0) {
      _DAT_0057463c = GetProcAddress(DAT_00574638,"OleCreatePropertyFrame");
      _DAT_00574640 = GetProcAddress(DAT_00574638,"OleCreateFontIndirect");
      _DAT_00574644 = GetProcAddress(DAT_00574638,"OleCreatePictureIndirect");
      DAT_00574648 = GetProcAddress(DAT_00574638,"OleLoadPicture");
    }
  }
  return;
}

