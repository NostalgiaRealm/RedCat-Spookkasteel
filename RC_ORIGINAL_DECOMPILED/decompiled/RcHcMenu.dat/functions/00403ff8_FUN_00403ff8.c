/*
 * FUN_00403ff8 at 00403ff8
 * undefined __register FUN_00403ff8(int * param_1, LPCWSTR param_2)
 * Address ranges: 00403ff8-00404007
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00403ff8(int *param_1,LPCWSTR param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (LPCWSTR)0x0) {
    uVar1 = *(uint *)(param_2 + -2) >> 1;
  }
  FUN_00403ec8(param_1,param_2,uVar1);
  return;
}

