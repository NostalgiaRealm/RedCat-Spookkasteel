/*
 * FUN_005530c0 at 005530c0
 * undefined __register FUN_005530c0(int param_1)
 * Address ranges: 005530c0-0055319e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x552ac8 slot published:FormShow for TGameMenuScreen. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x552ac8 slot
   published:FormShow for TGameMenuScreen. Original bytes unchanged; names and types still inferred.
    */

void FUN_005530c0(int param_1)

{
  FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
  FUN_00432744(*(int *)(param_1 + 0x2d8),*(uint **)(PTR_DAT_00572404 + 0xa0));
  FUN_00432744(*(int *)(param_1 + 0x2e4),*(uint **)(PTR_DAT_00572404 + 0x9c));
  FUN_00432744(*(int *)(param_1 + 0x2e0),*(uint **)(PTR_DAT_00572404 + 0xb8));
  FUN_00432744(*(int *)(param_1 + 0x2dc),*(uint **)(PTR_DAT_00572404 + 0xbc));
  if (*(char *)(*(int *)(param_1 + 0x2e0) + 0x47) == '\0') {
    if (*(char *)(*(int *)(param_1 + 0x2dc) + 0x47) == '\0') {
      (**(code **)(**(int **)(param_1 + 0x2e4) + 0xb4))();
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x2dc) + 0xb4))();
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x2e0) + 0xb4))();
  }
  return;
}

