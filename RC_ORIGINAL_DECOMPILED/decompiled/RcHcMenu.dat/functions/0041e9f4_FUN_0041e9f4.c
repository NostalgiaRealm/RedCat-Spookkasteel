/*
 * FUN_0041e9f4 at 0041e9f4
 * undefined __register FUN_0041e9f4(int * param_1, char param_2)
 * Address ranges: 0041e9f4-0041ea3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated native virtual-method table 0x41e89c slot -1 for TFileFormatsList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated native virtual-method table 0x41e89c
   slot -1 for TFileFormatsList. Original bytes unchanged; names and types still inferred. */

void FUN_0041e9f4(int *param_1,char param_2)

{
  int *piVar1;
  VARIANTARG *pVVar2;
  byte extraout_DL;
  int iVar3;
  int iVar4;
  
  piVar1 = FUN_00403434(param_1,param_2);
  iVar3 = piVar1[2];
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      pVVar2 = (VARIANTARG *)FUN_00412384(piVar1,iVar4);
      FUN_00404c88(pVVar2,"\x0e\vTFileFormat\x10");
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_004121b8(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

