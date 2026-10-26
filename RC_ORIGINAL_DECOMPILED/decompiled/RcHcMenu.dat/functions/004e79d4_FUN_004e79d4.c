/*
 * FUN_004e79d4 at 004e79d4
 * undefined4 __register FUN_004e79d4(int * param_1, int * param_2)
 * Address ranges: 004e79d4-004e7a1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e715c slot 8 for TFloatProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e715c slot 8 for
   TFloatProp. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_004e79d4(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  (**(code **)(*param_1 + 0x70))();
  piVar1 = (int *)FUN_00403224(param_2,(int)&PTR_FUN_004e715c);
  (**(code **)(*piVar1 + 0x70))();
  uVar2 = FUN_0045a4f4();
  return uVar2;
}

