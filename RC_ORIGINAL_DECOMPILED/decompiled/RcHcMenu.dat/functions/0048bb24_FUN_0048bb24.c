/*
 * FUN_0048bb24 at 0048bb24
 * undefined __register FUN_0048bb24(int * param_1, VARIANTARG * param_2)
 * Address ranges: 0048bb24-0048bb45
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48b6c0 slot 10 for TIntegerProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48b6c0 slot 10 for
   TIntegerProp. Original bytes unchanged; names and types still inferred. */

void FUN_0048bb24(int *param_1,VARIANTARG *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x70))();
  FUN_004053dc(param_2,uVar1);
  return;
}

