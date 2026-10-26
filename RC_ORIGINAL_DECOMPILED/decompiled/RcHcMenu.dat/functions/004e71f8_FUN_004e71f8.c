/*
 * FUN_004e71f8 at 004e71f8
 * int __register FUN_004e71f8(undefined4 * param_1)
 * Address ranges: 004e71f8-004e71f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated native virtual-method table 0x4e70e4 slot 2 for TFloatPropDesc. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated native virtual-method table 0x4e70e4
   slot 2 for TFloatPropDesc. Original bytes unchanged; names and types still inferred. */

int FUN_004e71f8(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0048b528(param_1);
  iVar2 = FUN_00403224(piVar1,(int)&PTR_FUN_004e70e4);
  *(undefined4 *)(iVar2 + 0x48) = param_1[0x12];
  return iVar2;
}

