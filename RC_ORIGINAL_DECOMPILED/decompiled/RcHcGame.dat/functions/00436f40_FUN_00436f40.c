/*
 * FUN_00436f40 at 00436f40
 * undefined FUN_00436f40(void)
 * Address ranges: 00436f40-00436f55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00436f40(int param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < 0x10)) {
    *(int *)(param_1 + 0x34c) = param_2;
  }
  return;
}

