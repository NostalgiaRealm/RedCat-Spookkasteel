/*
 * FUN_00504e80 at 00504e80
 * undefined __register FUN_00504e80(int * param_1, VARIANTARG * param_2)
 * Address ranges: 00504e80-00504ea1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x504a1c slot 10 for TIndexedLookupProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x504a1c slot 10 for
   TIndexedLookupProp. Original bytes unchanged; names and types still inferred. */

void FUN_00504e80(int *param_1,VARIANTARG *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x70))();
  FUN_004053dc(param_2,uVar1);
  return;
}

