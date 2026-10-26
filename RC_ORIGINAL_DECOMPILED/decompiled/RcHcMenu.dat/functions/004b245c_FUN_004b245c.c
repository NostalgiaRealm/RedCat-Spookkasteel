/*
 * FUN_004b245c at 004b245c
 * undefined __register FUN_004b245c(int * param_1, int * param_2)
 * Address ranges: 004b245c-004b248d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4b19f0 slot 5 for TDateProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4b19f0 slot 5 for
   TDateProp. Original bytes unchanged; names and types still inferred. */

void FUN_004b245c(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 *extraout_ECX;
  
  (**(code **)(*param_1 + 0x6c))();
  iVar1 = FUN_004b2490((int)param_1);
  FUN_0040bd44(*(byte **)(iVar1 + 0x30),param_2,extraout_ECX);
  return;
}

