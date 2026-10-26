/*
 * FUN_004678e0 at 004678e0
 * int __register FUN_004678e0(int * param_1)
 * Address ranges: 004678e0-004678fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004678e0(int *param_1)

{
  int *piVar1;
  
  if (param_1[4] == 0) {
    piVar1 = FUN_00467d68((int *)&PTR_FUN_00462204,'\x01',param_1);
    param_1[4] = (int)piVar1;
  }
  return param_1[4];
}

