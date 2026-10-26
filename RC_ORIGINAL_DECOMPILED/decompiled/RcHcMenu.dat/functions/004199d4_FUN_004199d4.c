/*
 * FUN_004199d4 at 004199d4
 * undefined __register FUN_004199d4(int * param_1, char param_2)
 * Address ranges: 004199d4-00419a0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x411144 slot -1 for TStreamAdapter. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x411144 slot -1 for
   TStreamAdapter. Original bytes unchanged; names and types still inferred. */

void FUN_004199d4(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  if ((char)piVar1[4] == '\x01') {
    FUN_00403094((int *)piVar1[3]);
    piVar1[3] = 0;
  }
  FUN_00403084(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

