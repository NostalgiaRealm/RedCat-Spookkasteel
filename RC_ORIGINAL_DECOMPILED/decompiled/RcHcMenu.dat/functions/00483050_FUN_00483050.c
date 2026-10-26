/*
 * FUN_00483050 at 00483050
 * undefined __register FUN_00483050(int * param_1)
 * Address ranges: 00483050-0048306a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47d7a0 slot 3 for TDatabase. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47d7a0 slot 3 for
   TDatabase. Original bytes unchanged; names and types still inferred. */

void FUN_00483050(int *param_1)

{
  FUN_00467100(param_1);
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    FUN_00482d18(param_1,'\0');
  }
  return;
}

