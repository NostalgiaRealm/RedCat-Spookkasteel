/*
 * FUN_00502bdc at 00502bdc
 * int __register FUN_00502bdc(int * param_1)
 * Address ranges: 00502bdc-00502c07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00502bdc(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x82];
  FUN_00503518(param_1);
  (**(code **)(*param_1 + 0x74))();
  return iVar1;
}

