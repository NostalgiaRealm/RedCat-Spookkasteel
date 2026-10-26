/*
 * FUN_0048bf7c at 0048bf7c
 * undefined4 __register FUN_0048bf7c(int * param_1, int * param_2)
 * Address ranges: 0048bf7c-0048bfae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48b6c0 slot 7 for TIntegerProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48b6c0 slot 7 for
   TIntegerProp. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_0048bf7c(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_00403224(param_2,(int)&PTR_FUN_0048b6c0);
  uVar2 = (**(code **)(*piVar1 + 0x70))();
  uVar2 = (**(code **)(*param_1 + 0x74))(param_1,uVar2);
  return uVar2;
}

