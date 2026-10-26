/*
 * FUN_0046bdf8 at 0046bdf8
 * int __register FUN_0046bdf8(int * param_1)
 * Address ranges: 0046bdf8-0046be08
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x464134 slot 28 for TDateTimeField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x464134 slot 28 for
   TDateTimeField. Original bytes unchanged; names and types still inferred. */

int FUN_0046bdf8(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x68))();
  return iVar1 * 2 + 2;
}

