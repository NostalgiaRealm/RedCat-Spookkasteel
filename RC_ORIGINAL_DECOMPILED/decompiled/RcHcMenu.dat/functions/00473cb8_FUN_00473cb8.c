/*
 * FUN_00473cb8 at 00473cb8
 * undefined __register FUN_00473cb8(int * param_1)
 * Address ranges: 00473cb8-00473ce9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 51 for TDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 51 for
   TDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_00473cb8(int *param_1)

{
  bool bVar1;
  
  if (*(short *)((int)param_1 + 0xaa) != 0) {
    (*(code *)param_1[0x2a])(param_1[0x2b],param_1);
  }
  bVar1 = FUN_004731cc((int)param_1);
  if (!bVar1) {
    (**(code **)(*param_1 + 0xd8))();
  }
  return;
}

