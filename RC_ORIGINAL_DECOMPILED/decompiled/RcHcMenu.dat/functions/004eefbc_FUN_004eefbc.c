/*
 * FUN_004eefbc at 004eefbc
 * undefined __register FUN_004eefbc(int * param_1, char param_2)
 * Address ranges: 004eefbc-004ef038
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ed570 slot -1 for TAppSplitQueryBookmark. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ed570 slot -1 for
   TAppSplitQueryBookmark. Original bytes unchanged; names and types still inferred. */

void FUN_004eefbc(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  (**(code **)(**(int **)(piVar1[1] + 0x14) + 0x18))(*(int **)(piVar1[1] + 0x14),piVar1);
  if ((char)piVar1[2] != '\x02') {
    piVar2 = (int *)FUN_004ed8b0((int *)piVar1[1],(char)piVar1[2]);
    FUN_004d6428(piVar2,piVar1 + 3);
  }
  FUN_00403094((int *)piVar1[3]);
  FUN_00403094((int *)piVar1[5]);
  FUN_0045b45c(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

