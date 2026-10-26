/*
 * FUN_005052dc at 005052dc
 * undefined4 __register FUN_005052dc(int * param_1, int * param_2)
 * Address ranges: 005052dc-0050530e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x504a1c slot 7 for TIndexedLookupProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x504a1c slot 7 for
   TIndexedLookupProp. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_005052dc(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_00403224(param_2,(int)&PTR_FUN_00504a1c);
  uVar2 = (**(code **)(*piVar1 + 0x70))();
  uVar2 = (**(code **)(*param_1 + 0x74))(param_1,uVar2);
  return uVar2;
}

