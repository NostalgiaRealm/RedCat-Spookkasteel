/*
 * FUN_10001a10 at 10001a10
 * undefined __cdecl FUN_10001a10(int param_1)
 * Address ranges: 10001a10-10001a33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10001a10(int param_1)

{
  if (DAT_10016ad4 != param_1) {
    (**(code **)(*DAT_100274c8 + 0x58))(DAT_100274c8,0x1b,param_1);
    DAT_10016ad4 = param_1;
  }
  return;
}

