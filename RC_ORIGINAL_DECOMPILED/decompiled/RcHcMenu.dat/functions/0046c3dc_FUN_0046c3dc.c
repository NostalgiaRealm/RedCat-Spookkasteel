/*
 * FUN_0046c3dc at 0046c3dc
 * int __register FUN_0046c3dc(int * param_1)
 * Address ranges: 0046c3dc-0046c3ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x464828 slot 26 for TVarBytesField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x464828 slot 26 for
   TVarBytesField. Original bytes unchanged; names and types still inferred. */

int FUN_0046c3dc(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x80))();
  return iVar1 + 2;
}

