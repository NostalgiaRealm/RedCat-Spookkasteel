/*
 * FUN_00480340 at 00480340
 * undefined __register FUN_00480340(int * param_1, char param_2)
 * Address ranges: 00480340-00480385
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47d42c slot -1 for TSessionList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47d42c slot -1 for
   TSessionList. Original bytes unchanged; names and types still inferred. */

void FUN_00480340(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_004803e0((int)piVar1);
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00573958);
  FUN_00403094((int *)piVar1[2]);
  FUN_00403094((int *)piVar1[1]);
  FUN_00403084(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

