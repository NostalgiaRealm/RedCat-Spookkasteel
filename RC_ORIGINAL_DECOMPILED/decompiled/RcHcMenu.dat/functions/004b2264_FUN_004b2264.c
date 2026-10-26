/*
 * FUN_004b2264 at 004b2264
 * undefined4 __register FUN_004b2264(int * param_1, int * param_2)
 * Address ranges: 004b2264-004b229b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4b19f0 slot 7 for TDateProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4b19f0 slot 7 for
   TDateProp. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_004b2264(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_00403224(param_2,(int)&PTR_FUN_004b19f0);
  (**(code **)(*piVar1 + 0x6c))();
  uVar2 = (**(code **)(*param_1 + 0x70))();
  return uVar2;
}

