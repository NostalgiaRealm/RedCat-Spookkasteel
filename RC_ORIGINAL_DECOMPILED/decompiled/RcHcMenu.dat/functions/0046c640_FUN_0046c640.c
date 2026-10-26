/*
 * FUN_0046c640 at 0046c640
 * int __register FUN_0046c640(int param_1)
 * Address ranges: 0046c640-0046c653
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x464978 slot 28 for TBCDField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x464978 slot 28 for
   TBCDField. Original bytes unchanged; names and types still inferred. */

int FUN_0046c640(int param_1)

{
  int iVar1;
  
  if (0 < *(int *)(param_1 + 0xf0)) {
    return *(int *)(param_1 + 0xf0) + 1;
  }
  iVar1 = FUN_004692dc();
  return iVar1;
}

