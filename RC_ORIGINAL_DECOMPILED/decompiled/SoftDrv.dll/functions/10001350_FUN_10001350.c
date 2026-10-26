/*
 * FUN_10001350 at 10001350
 * undefined FUN_10001350(void)
 * Address ranges: 10001350-1000137d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10001350(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_1 = 0;
  }
  if ((HMODULE)param_1[1] != (HMODULE)0x0) {
    FreeLibrary((HMODULE)param_1[1]);
    param_1[1] = 0;
  }
  return;
}

