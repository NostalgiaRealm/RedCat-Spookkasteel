/*
 * FUN_10016100 at 10016100
 * undefined FUN_10016100(void)
 * Address ranges: 10016100-1001613b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10016100(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  if ((param_1 <= DAT_1003a6d8) && (-1 < param_1)) {
    *param_2 = *(undefined4 *)(&DAT_1003a6e0 + param_1 * 0x108);
    *param_3 = &DAT_1003a6e4 + param_1 * 0x108;
    return 1;
  }
  return 0;
}

