/*
 * FUN_005e7360 at 005e7360
 * undefined FUN_005e7360(void)
 * Address ranges: 005e7360-005e7374
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_005e7360(int *param_1)

{
  if (*param_1 == 0) {
    DAT_0070fc04 = DAT_0070fc04 + 1;
    *param_1 = DAT_0070fc04;
  }
  return *param_1;
}

