/*
 * FUN_10007a20 at 10007a20
 * undefined __cdecl FUN_10007a20(int * param_1)
 * Address ranges: 10007a20-10007a4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10007a20(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

