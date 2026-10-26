/*
 * FUN_005cc7d0 at 005cc7d0
 * undefined FUN_005cc7d0(void)
 * Address ranges: 005cc7d0-005cc7e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005cc7d0(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = param_2;
  return 1;
}

