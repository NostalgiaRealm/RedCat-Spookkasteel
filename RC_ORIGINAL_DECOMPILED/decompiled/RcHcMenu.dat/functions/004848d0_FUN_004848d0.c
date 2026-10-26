/*
 * FUN_004848d0 at 004848d0
 * undefined __register FUN_004848d0(int * param_1, int param_2)
 * Address ranges: 004848d0-0048492c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 103 for TBDEDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 103 for
   TBDEDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_004848d0(int *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  FUN_00473b1c(param_1);
  if ((char)param_1[0x77] == '\x01') {
    iVar2 = (**(code **)(*param_1 + 0x150))();
    if (param_2 != iVar2) {
      (**(code **)(*param_1 + 0xfc))();
      iVar2 = param_1[0x5a];
      sVar1 = thunk_FUN_004799dc(iVar2);
      if (sVar1 == 0) {
        (**(code **)(*param_1 + 0x244))(param_1,2,*param_1,iVar2,param_2);
        (**(code **)(*param_1 + 0xd8))();
      }
    }
  }
  return;
}

