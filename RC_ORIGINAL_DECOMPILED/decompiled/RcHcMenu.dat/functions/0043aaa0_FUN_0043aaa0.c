/*
 * FUN_0043aaa0 at 0043aaa0
 * undefined __register FUN_0043aaa0(int * param_1, char param_2)
 * Address ranges: 0043aaa0-0043aaeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42f7d4 slot -1 for TDockTree. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42f7d4 slot -1 for
   TDockTree. Original bytes unchanged; names and types still inferred. */

void FUN_0043aaa0(int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  byte extraout_DL;
  
  piVar2 = FUN_00403434(param_1,param_2);
  if (piVar2[0xc] != 0) {
    iVar1 = piVar2[5];
    *(int *)(iVar1 + 0x28) = piVar2[0xc];
    *(int *)(iVar1 + 0x2c) = piVar2[0xd];
  }
  FUN_0043bac4((int)piVar2,(int *)piVar2[0x19],extraout_ECX);
  FUN_00403094((int *)piVar2[4]);
  FUN_00403084(piVar2,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar2);
  }
  return;
}

