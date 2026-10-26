/*
 * FUN_0046ebf0 at 0046ebf0
 * undefined __register FUN_0046ebf0(int * param_1, char param_2)
 * Address ranges: 0046ebf0-0046ec4a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x465e8c slot -1 for TDataSource. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x465e8c slot -1 for
   TDataSource. Original bytes unchanged; names and types still inferred. */

void FUN_0046ebf0(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  byte extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  piVar1[0xc] = 0;
  piVar1[0xd] = 0;
  FUN_0046ed00((int)piVar1,(int *)0x0);
  while (0 < (int)((undefined4 *)piVar1[10])[2]) {
    piVar2 = (int *)FUN_0041246c((undefined4 *)piVar1[10]);
    FUN_0046edb4((int)piVar1,piVar2);
  }
  FUN_00403094((int *)piVar1[10]);
  FUN_00418f4c(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

