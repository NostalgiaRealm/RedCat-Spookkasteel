/*
 * FUN_004845c4 at 004845c4
 * undefined __register FUN_004845c4(int * param_1, int param_2)
 * Address ranges: 004845c4-004845e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 37 for TBDEDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 37 for
   TBDEDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_004845c4(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x1bc))();
  FUN_00402cfc((undefined4 *)(param_2 + (uVar1 & 0xffff)),param_1[0x17],0);
  return;
}

