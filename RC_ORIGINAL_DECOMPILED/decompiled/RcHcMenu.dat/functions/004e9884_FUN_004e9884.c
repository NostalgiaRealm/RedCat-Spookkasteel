/*
 * FUN_004e9884 at 004e9884
 * undefined4 __register FUN_004e9884(int * param_1, int * param_2)
 * Address ranges: 004e9884-004e98b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e9250 slot 7 for TBooleanProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e9250 slot 7 for
   TBooleanProp. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_004e9884(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_00403224(param_2,(int)&LAB_004e9250);
  uVar2 = (**(code **)(*piVar1 + 0x6c))();
  uVar2 = (**(code **)(*param_1 + 0x70))(param_1,uVar2);
  return uVar2;
}

