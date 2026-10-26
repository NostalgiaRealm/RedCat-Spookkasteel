/*
 * FUN_00469574 at 00469574
 * bool __register FUN_00469574(int param_1, uint param_2)
 * Address ranges: 00469574-00469584
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x462a70 slot 50 for TField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x462a70 slot 50 for TField.
   Original bytes unchanged; names and types still inferred. */

bool FUN_00469574(int param_1,uint param_2)

{
  return (*(byte *)(param_1 + 0x90 + ((int)(param_2 & 0xff) >> 3)) >> (param_2 & 7) & 1) != 0;
}

