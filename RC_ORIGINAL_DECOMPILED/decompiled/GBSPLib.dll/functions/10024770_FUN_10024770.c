/*
 * FUN_10024770 at 10024770
 * undefined FUN_10024770(void)
 * Address ranges: 10024770-10024783
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10024770(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffe | param_2;
  return;
}

