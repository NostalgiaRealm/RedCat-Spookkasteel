/*
 * FUN_0040e3c8 at 0040e3c8
 * undefined __register FUN_0040e3c8(int * param_1, char param_2)
 * Address ranges: 0040e3c8-0040e405
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x409540 slot -1 for TMultiReadExclusiveWriteSynchronizer. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x409540 slot -1 for
   TMultiReadExclusiveWriteSynchronizer. Original bytes unchanged; names and types still inferred.
    */

void FUN_0040e3c8(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_0040e444((int)piVar1);
  FUN_00403084(piVar1,extraout_DL & 0xfc);
  CloseHandle((HANDLE)piVar1[7]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(piVar1 + 1));
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

