/*
 * FUN_005c1dc0 at 005c1dc0
 * undefined FUN_005c1dc0(void)
 * Address ranges: 005c1dc0-005c1de7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_005c1dc0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0xc4) == 0) {
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xbc);
    *(undefined4 *)(param_1 + 0xbc) = param_2;
  }
  return 1;
}

