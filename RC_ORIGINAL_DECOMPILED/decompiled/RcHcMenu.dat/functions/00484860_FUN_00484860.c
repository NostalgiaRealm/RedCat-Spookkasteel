/*
 * FUN_00484860 at 00484860
 * int __register FUN_00484860(int * param_1)
 * Address ranges: 00484860-0048489e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 83 for TBDEDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 83 for
   TBDEDataSet. Original bytes unchanged; names and types still inferred. */

int FUN_00484860(int *param_1)

{
  short sVar1;
  int iStack_18;
  
  (**(code **)(*param_1 + 0x84))();
  sVar1 = thunk_FUN_004793dc(param_1[0x5a]);
  if (sVar1 != 0) {
    iStack_18 = param_1[0x5a];
    sVar1 = thunk_FUN_00479c82(iStack_18);
    if (sVar1 != 0) {
      iStack_18 = -1;
    }
  }
  return iStack_18;
}

