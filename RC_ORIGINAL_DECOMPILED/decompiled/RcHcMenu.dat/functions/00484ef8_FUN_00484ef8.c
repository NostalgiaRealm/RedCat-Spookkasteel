/*
 * FUN_00484ef8 at 00484ef8
 * bool __register FUN_00484ef8(int * param_1)
 * Address ranges: 00484ef8-00484f77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 139 for TBDEDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 139 for
   TBDEDataSet. Original bytes unchanged; names and types still inferred. */

bool FUN_00484ef8(int *param_1)

{
  int iVar1;
  bool bVar2;
  short sVar3;
  uint uVar4;
  bool bVar5;
  int local_10;
  
  if (param_1[0x1c] < 1) {
    bVar2 = FUN_0048493c(param_1,&local_10);
    bVar5 = false;
    if (bVar2) {
      iVar1 = param_1[0x5a];
      uVar4 = thunk_FUN_00479a35(iVar1);
      FUN_0047fe48(uVar4);
      bVar5 = iVar1 == 0;
    }
  }
  else {
    iVar1 = param_1[0x5a];
    sVar3 = thunk_FUN_00479a35(iVar1);
    if ((sVar3 == 0) && (iVar1 == 0)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
  }
  return bVar5;
}

