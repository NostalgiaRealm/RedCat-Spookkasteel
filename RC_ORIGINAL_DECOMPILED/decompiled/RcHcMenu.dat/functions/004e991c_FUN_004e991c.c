/*
 * FUN_004e991c at 004e991c
 * undefined __register FUN_004e991c(int * param_1, undefined4 param_2, int * param_3)
 * Address ranges: 004e991c-004e9956
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e9250 slot 6 for TBooleanProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e9250 slot 6 for
   TBooleanProp. Original bytes unchanged; names and types still inferred. */

void FUN_004e991c(int *param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x6c))();
  if (cVar1 == '\0') {
    FUN_00403e04(param_3,(undefined4 *)&DAT_004e996c);
  }
  else {
    FUN_00403e04(param_3,(undefined4 *)&DAT_004e9960);
  }
  return;
}

