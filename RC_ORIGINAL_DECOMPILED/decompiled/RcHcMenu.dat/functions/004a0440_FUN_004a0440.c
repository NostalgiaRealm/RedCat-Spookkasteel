/*
 * FUN_004a0440 at 004a0440
 * undefined __register FUN_004a0440(int * param_1, char param_2)
 * Address ranges: 004a0440-004a0474
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49f730 slot 32 for TDaviAnimation. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49f730 slot 32 for
   TDaviAnimation. Original bytes unchanged; names and types still inferred. */

void FUN_004a0440(int *param_1,char param_2)

{
  if ((*(char *)((int)param_1 + 0x3d) != param_2) &&
     (*(char *)((int)param_1 + 0x3d) = param_2, *(char *)((int)param_1 + 0x3d) != '\0')) {
    (**(code **)(*param_1 + 0x60))();
  }
  return;
}

