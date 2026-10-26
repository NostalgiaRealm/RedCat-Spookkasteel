/*
 * FUN_00486724 at 00486724
 * undefined4 __register FUN_00486724(int * param_1, int param_2, undefined4 param_3, byte param_4)
 * Address ranges: 00486724-00486773
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 142 for TBDEDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 142 for
   TBDEDataSet. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_00486724(int *param_1,int param_2,undefined4 param_3,byte param_4)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0xfc))();
  uVar1 = FUN_004863a0(param_1,param_2,param_3,1,param_4);
  if ((char)uVar1 != '\0') {
    (**(code **)(*param_1 + 0x244))(param_1,3);
    (**(code **)(*param_1 + 0xd8))();
  }
  return uVar1;
}

