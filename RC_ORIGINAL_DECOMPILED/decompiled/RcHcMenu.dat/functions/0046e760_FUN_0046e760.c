/*
 * FUN_0046e760 at 0046e760
 * undefined __register FUN_0046e760(int * param_1, char param_2)
 * Address ranges: 0046e760-0046e799
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x465ca4 slot -1 for TDataLink. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x465ca4 slot -1 for
   TDataLink. Original bytes unchanged; names and types still inferred. */

void FUN_0046e760(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  *(undefined1 *)((int)piVar1 + 0x15) = 0;
  *(undefined1 *)((int)piVar1 + 0x17) = 0;
  *(undefined1 *)((int)piVar1 + 0x19) = 0;
  FUN_0046e820(piVar1,0);
  FUN_00412a48(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

