/*
 * FUN_00422e38 at 00422e38
 * undefined __register FUN_00422e38(int * param_1, char param_2)
 * Address ranges: 00422e38-00422e60
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x422df0 slot -1 for TPatternManager. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x422df0 slot -1 for
   TPatternManager. Original bytes unchanged; names and types still inferred. */

void FUN_00422e38(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00423030((int)piVar1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
  if ('\0' < extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

