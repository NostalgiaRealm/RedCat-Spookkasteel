/*
 * FUN_004aa768 at 004aa768
 * int __register FUN_004aa768(int * param_1)
 * Address ranges: 004aa768-004aa7a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004aa768(int *param_1)

{
  int iVar1;
  
  if (param_1[0x80] == 0) {
    iVar1 = FUN_004aaa5c((int *)&PTR_FUN_004aa478,'\x01',param_1);
    param_1[0x80] = iVar1;
  }
  return param_1[0x80];
}

