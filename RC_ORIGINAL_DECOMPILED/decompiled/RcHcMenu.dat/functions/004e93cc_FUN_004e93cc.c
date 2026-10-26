/*
 * FUN_004e93cc at 004e93cc
 * undefined __register FUN_004e93cc(int * param_1, VARIANTARG * param_2)
 * Address ranges: 004e93cc-004e93ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e9250 slot 10 for TBooleanProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e9250 slot 10 for
   TBooleanProp. Original bytes unchanged; names and types still inferred. */

void FUN_004e93cc(int *param_1,VARIANTARG *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x6c))();
  FUN_004053f4(param_2,cVar1);
  return;
}

