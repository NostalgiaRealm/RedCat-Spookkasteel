/*
 * FUN_004a7300 at 004a7300
 * undefined FUN_004a7300(void)
 * Address ranges: 004a7300-004a7324
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a7300(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
    }
    param_1 = param_1 + 1;
  }
  return;
}

