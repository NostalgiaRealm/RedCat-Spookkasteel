/*
 * FUN_005b62f0 at 005b62f0
 * undefined FUN_005b62f0(void)
 * Address ranges: 005b62f0-005b631d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005b62f0(int param_1)

{
  if (**(int **)(param_1 + 0xbc4) != 0) {
    FUN_005b6250(param_1,**(int **)(param_1 + 0xbc4));
    **(undefined4 **)(param_1 + 0xbc4) = 0;
  }
  return 1;
}

