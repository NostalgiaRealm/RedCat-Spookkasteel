/*
 * FUN_005192dc at 005192dc
 * undefined __register FUN_005192dc(int * param_1, int * param_2)
 * Address ranges: 005192dc-005192f1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x518800 slot 36 for TCheckListBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x518800 slot 36 for
   TCheckListBox. Original bytes unchanged; names and types still inferred. */

void FUN_005192dc(int *param_1,int *param_2)

{
  FUN_0042ca38(param_1,param_2);
  if ((*(byte *)(param_2 + 1) & 0x30) == 0) {
    param_2[1] = param_2[1] | 0x10;
  }
  return;
}

