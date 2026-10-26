/*
 * FUN_0041f730 at 0041f730
 * int __register FUN_0041f730(int param_1)
 * Address ranges: 0041f730-0041f790
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41ab68 slot 11 for TMetafile. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41ab68 slot 11 for
   TMetafile. Original bytes unchanged; names and types still inferred. */

int FUN_0041f730(int param_1)

{
  int iVar1;
  int local_20;
  int local_18;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_0041f7e8(param_1);
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(short *)(iVar1 + 0x18) == 0) {
    if (*(HENHMETAFILE *)(iVar1 + 8) == (HENHMETAFILE)0x0) {
      iVar1 = *(int *)(iVar1 + 0x1c);
    }
    else {
      GetEnhMetaFileHeader(*(HENHMETAFILE *)(iVar1 + 8),100,(LPENHMETAHEADER)&stack0xffffff98);
      iVar1 = MulDiv(*(int *)(iVar1 + 0xc),local_20,local_18 * 100);
    }
  }
  else {
    iVar1 = MulDiv(*(int *)(iVar1 + 0xc),DAT_00573658,0x9ec);
  }
  return iVar1;
}

