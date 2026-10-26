/*
 * FUN_004c93a0 at 004c93a0
 * undefined __register FUN_004c93a0(int * param_1, char param_2)
 * Address ranges: 004c93a0-004c93d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4c6350 slot 47 for TDaviButton. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4c6350 slot 47 for
   TDaviButton. Original bytes unchanged; names and types still inferred. */

void FUN_004c93a0(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x219)) {
    *(char *)((int)param_1 + 0x219) = param_2;
    FUN_00432c38(param_1);
  }
  return;
}

