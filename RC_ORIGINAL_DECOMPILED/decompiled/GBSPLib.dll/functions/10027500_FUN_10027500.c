/*
 * FUN_10027500 at 10027500
 * undefined FUN_10027500(void)
 * Address ranges: 10027500-100275c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10027500(int param_1,int param_2,int param_3,int *param_4,int *param_5,int *param_6)

{
  *param_4 = param_2 * 0x2591 + param_1 * 0x1322 + 0x2000 + param_3 * 0x74b >> 0xe;
  *param_5 = ((param_3 + 1) * 0x2000 + param_2 * -0x1533 + param_1 * -0xacc >> 0xe) + 0x7f;
  *param_6 = (param_2 * 0x1acb + param_1 * -0x2000 + 0x2000 + param_3 * 0x534 >> 0xe) + 0x7f;
  return;
}

