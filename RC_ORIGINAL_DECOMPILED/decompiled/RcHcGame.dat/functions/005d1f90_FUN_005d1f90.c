/*
 * FUN_005d1f90 at 005d1f90
 * undefined FUN_005d1f90(void)
 * Address ranges: 005d1f90-005d1fbd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005d1f90(int param_1)

{
  if (*(int *)(param_1 + 0x3b0) != 0) {
    FUN_005cf400(*(int *)(param_1 + 0x3b0));
    _DAT_007203c0 = 0;
    *(undefined4 *)(param_1 + 0x3b0) = 0;
  }
  return;
}

