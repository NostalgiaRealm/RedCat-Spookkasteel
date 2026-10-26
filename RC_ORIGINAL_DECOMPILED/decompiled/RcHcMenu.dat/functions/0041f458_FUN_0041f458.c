/*
 * FUN_0041f458 at 0041f458
 * undefined __register FUN_0041f458(int * param_1, char param_2)
 * Address ranges: 0041f458-0041f491
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41ab08 slot -1 for TMetafileImage. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41ab08 slot -1 for
   TMetafileImage. Original bytes unchanged; names and types still inferred. */

void FUN_0041f458(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  if ((HENHMETAFILE)piVar1[2] != (HENHMETAFILE)0x0) {
    DeleteEnhMetaFile((HENHMETAFILE)piVar1[2]);
  }
  FUN_0041aea0((HGDIOBJ)piVar1[5]);
  FUN_00403084(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

