/*
 * FUN_10007820 at 10007820
 * undefined __cdecl FUN_10007820(int * param_1)
 * Address ranges: 10007820-1000783f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10007820(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

