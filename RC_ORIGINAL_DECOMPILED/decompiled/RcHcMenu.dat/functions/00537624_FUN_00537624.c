/*
 * FUN_00537624 at 00537624
 * undefined __register FUN_00537624(int * param_1)
 * Address ranges: 00537624-00537665
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x536a28 slot 47 for TOAGridHeader. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x536a28 slot 47 for
   TOAGridHeader. Original bytes unchanged; names and types still inferred. */

void FUN_00537624(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_0051f0e0(param_1);
  piVar1 = (int *)FUN_005374a4(param_1);
  piVar1 = (int *)FUN_00538fbc(piVar1);
  FUN_005379b0(piVar1);
  iVar2 = FUN_005374a4(param_1);
  if (*(char *)(iVar2 + 0x2d8) != '\0') {
    piVar1 = (int *)FUN_005374a4(param_1);
    FUN_0053a034(piVar1);
  }
  return;
}

