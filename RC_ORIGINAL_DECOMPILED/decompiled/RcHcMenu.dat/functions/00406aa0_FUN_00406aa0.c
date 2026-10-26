/*
 * FUN_00406aa0 at 00406aa0
 * int * __register FUN_00406aa0(int * param_1)
 * Address ranges: 00406aa0-00406ab4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00406aa0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    (**(code **)(*piVar1 + 8))();
    param_1 = piVar1;
  }
  return param_1;
}

