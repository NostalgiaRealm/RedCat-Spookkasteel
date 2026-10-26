/*
 * FUN_00496a00 at 00496a00
 * bool __register FUN_00496a00(int param_1)
 * Address ranges: 00496a00-00496a1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x474160 slot 19 for TGenericContainerProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x474160 slot 19 for
   TGenericContainerProp. Original bytes unchanged; names and types still inferred. */

bool FUN_00496a00(int param_1)

{
  return (*(byte *)(param_1 + 0x30) & 2) != 0;
}

