/*
 * FUN_005c7f30 at 005c7f30
 * undefined FUN_005c7f30(void)
 * Address ranges: 005c7f30-005c7f45
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005c7f30(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 8) = param_2;
  return 1;
}

