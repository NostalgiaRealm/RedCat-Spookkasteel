/*
 * FUN_10002560 at 10002560
 * undefined FUN_10002560(void)
 * Address ranges: 10002560-10002582
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10002560(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined4 *)(param_1 + 0x30);
  *param_3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 4) = 1;
  return 1;
}

