/*
 * FUN_005b7e30 at 005b7e30
 * undefined FUN_005b7e30(void)
 * Address ranges: 005b7e30-005b7e4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005b7e30(uint param_1)

{
  if ((param_1 & DAT_006cc414) != 0) {
    DAT_006cc414 = DAT_006cc414 & ~param_1;
    return;
  }
  DAT_006cc414 = DAT_006cc414 | param_1;
  return;
}

