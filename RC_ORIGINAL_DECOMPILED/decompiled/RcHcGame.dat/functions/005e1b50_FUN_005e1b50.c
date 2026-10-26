/*
 * FUN_005e1b50 at 005e1b50
 * undefined FUN_005e1b50(void)
 * Address ranges: 005e1b50-005e1b63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005e1b50(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffe | param_2;
  return;
}

