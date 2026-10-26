/*
 * FUN_004e9970 at 004e9970
 * undefined __register FUN_004e9970(int * param_1, int * param_2)
 * Address ranges: 004e9970-004e99b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e9250 slot 5 for TBooleanProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e9250 slot 5 for
   TBooleanProp. Original bytes unchanged; names and types still inferred. */

void FUN_004e9970(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x6c))();
  if (cVar1 == '\0') {
    iVar2 = FUN_004e9a44((int)param_1);
    FUN_00403e04(param_2,*(undefined4 **)(iVar2 + 0x34));
  }
  else {
    iVar2 = FUN_004e9a44((int)param_1);
    FUN_00403e04(param_2,*(undefined4 **)(iVar2 + 0x30));
  }
  return;
}

