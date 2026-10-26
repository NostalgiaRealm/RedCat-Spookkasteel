/*
 * FUN_0041fb74 at 0041fb74
 * undefined __register FUN_0041fb74(int * param_1, int param_2)
 * Address ranges: 0041fb74-0041fbe4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41ab68 slot 13 for TMetafile. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41ab68 slot 13 for
   TMetafile. Original bytes unchanged; names and types still inferred. */

void FUN_0041fb74(int *param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int local_20;
  int local_18;
  
  if (param_1[8] == 0) {
    FUN_0041f7e8((int)param_1);
  }
  iVar1 = param_1[8];
  if (*(short *)(iVar1 + 0x18) == 0) {
    if (*(HENHMETAFILE *)(iVar1 + 8) == (HENHMETAFILE)0x0) {
      *(int *)(iVar1 + 0x20) = param_2;
    }
    else {
      GetEnhMetaFileHeader(*(HENHMETAFILE *)(iVar1 + 8),100,(LPENHMETAHEADER)&stack0xffffff94);
      iVar1 = MulDiv(param_2,local_18 * 100,local_20);
      FUN_0041fbe8(param_1,iVar1,extraout_ECX);
    }
  }
  else {
    iVar1 = MulDiv(param_2,0x9ec,DAT_00573658);
    FUN_0041fbe8(param_1,iVar1,extraout_ECX_00);
  }
  return;
}

