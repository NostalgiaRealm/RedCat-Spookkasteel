/*
 * FUN_0041af64 at 0041af64
 * undefined __register FUN_0041af64(int * param_1, char param_2)
 * Address ranges: 0041af64-0041af85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41af00 slot -1 for TResourceManager. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41af00 slot -1 for
   TResourceManager. Original bytes unchanged; names and types still inferred. */

void FUN_0041af64(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  DeleteCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
  if ('\0' < extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

