/*
 * FUN_004739bc at 004739bc
 * undefined __register FUN_004739bc(int * param_1, int * param_2)
 * Address ranges: 004739bc-004739f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 71 for TDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 71 for
   TDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_004739bc(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0047394c(param_1);
  if ((char)uVar1 != '\0') {
    FUN_00404364(param_2,param_1[0x16]);
    uVar1 = FUN_004730d8((int)param_1);
    (**(code **)(*param_1 + 0x1b0))(param_1,uVar1,*param_2);
    return;
  }
  FUN_00403db0(param_2);
  return;
}

