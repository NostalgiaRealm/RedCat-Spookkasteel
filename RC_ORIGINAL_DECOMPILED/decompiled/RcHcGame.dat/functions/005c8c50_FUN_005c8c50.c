/*
 * FUN_005c8c50 at 005c8c50
 * undefined FUN_005c8c50(void)
 * Address ranges: 005c8c50-005c8ca2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c8c50(int param_1)

{
  int *piVar1;
  
  if (param_1 != 0) {
    FUN_005c8cb0(param_1);
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    if (DAT_006cc490 != (int *)0x0) {
      (**(code **)(*DAT_006cc490 + 8))(DAT_006cc490);
    }
    if (DAT_006cc49c != (HMODULE)0x0) {
      FreeLibrary(DAT_006cc49c);
    }
    FUN_005cf400(param_1);
    _DAT_007203c0 = 0;
  }
  return;
}

