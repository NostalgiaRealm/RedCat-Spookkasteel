/*
 * FUN_10001a40 at 10001a40
 * undefined __cdecl FUN_10001a40(int param_1)
 * Address ranges: 10001a40-10001a63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10001a40(int param_1)

{
  if (DAT_10019f8c != param_1) {
    (**(code **)(*DAT_1001bcd0 + 0x50))(DAT_1001bcd0,0x1b,param_1);
    DAT_10019f8c = param_1;
  }
  return;
}

