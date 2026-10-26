/*
 * FUN_0041fc64 at 0041fc64
 * undefined __register FUN_0041fc64(int * param_1, int param_2)
 * Address ranges: 0041fc64-0041fcd4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41ab68 slot 16 for TMetafile. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41ab68 slot 16 for
   TMetafile. Original bytes unchanged; names and types still inferred. */

void FUN_0041fc64(int *param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int local_24;
  int local_1c;
  
  if (param_1[8] == 0) {
    FUN_0041f7e8((int)param_1);
  }
  iVar1 = param_1[8];
  if (*(short *)(iVar1 + 0x18) == 0) {
    if (*(HENHMETAFILE *)(iVar1 + 8) == (HENHMETAFILE)0x0) {
      *(int *)(iVar1 + 0x1c) = param_2;
    }
    else {
      GetEnhMetaFileHeader(*(HENHMETAFILE *)(iVar1 + 8),100,(LPENHMETAHEADER)&stack0xffffff94);
      iVar1 = MulDiv(param_2,local_1c * 100,local_24);
      FUN_0041fc24(param_1,iVar1,extraout_ECX);
    }
  }
  else {
    iVar1 = MulDiv(param_2,0x9ec,DAT_00573658);
    FUN_0041fc24(param_1,iVar1,extraout_ECX_00);
  }
  return;
}

