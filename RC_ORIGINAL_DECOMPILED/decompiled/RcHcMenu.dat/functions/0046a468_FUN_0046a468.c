/*
 * FUN_0046a468 at 0046a468
 * int __register FUN_0046a468(int * param_1)
 * Address ranges: 0046a468-0046a477
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x463020 slot 26 for TStringField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x463020 slot 26 for
   TStringField. Original bytes unchanged; names and types still inferred. */

int FUN_0046a468(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x80))();
  return iVar1 + 1;
}

