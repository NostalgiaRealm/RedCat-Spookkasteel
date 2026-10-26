/*
 * FUN_0043cabc at 0043cabc
 * undefined __register FUN_0043cabc(int * param_1, char param_2)
 * Address ranges: 0043cabc-0043cae9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42f858 slot -1 for TMouse. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42f858 slot -1 for TMouse.
   Original bytes unchanged; names and types still inferred. */

void FUN_0043cabc(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_0043cb78(piVar1,(HWND)0x0);
  FUN_00403084(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

