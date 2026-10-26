/*
 * FUN_004e799c at 004e799c
 * undefined4 __register FUN_004e799c(int * param_1, int * param_2)
 * Address ranges: 004e799c-004e79d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e715c slot 7 for TFloatProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e715c slot 7 for
   TFloatProp. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_004e799c(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_00403224(param_2,(int)&PTR_FUN_004e715c);
  (**(code **)(*piVar1 + 0x70))();
  uVar2 = (**(code **)(*param_1 + 0x74))();
  return uVar2;
}

