/*
 * FUN_00484728 at 00484728
 * bool __register FUN_00484728(int * param_1)
 * Address ranges: 00484728-00484775
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 135 for TBDEDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 135 for
   TBDEDataSet. Original bytes unchanged; names and types still inferred. */

bool FUN_00484728(int *param_1)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  
  bVar1 = FUN_004731cc((int)param_1);
  if (!bVar1) {
    uVar4 = FUN_004730d8((int)param_1);
    cVar2 = (**(code **)(*param_1 + 0x1b4))(param_1,uVar4);
    if (cVar2 == '\0') {
      FUN_00473130(param_1);
      sVar3 = thunk_FUN_00479c8e(param_1[0x5a]);
      return sVar3 == 0;
    }
  }
  return false;
}

