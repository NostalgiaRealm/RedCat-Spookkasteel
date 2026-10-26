/*
 * FUN_100054a0 at 100054a0
 * ushort __cdecl FUN_100054a0(int param_1)
 * Address ranges: 100054a0-100054b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ushort __cdecl FUN_100054a0(int param_1)

{
  ushort uVar1;
  
  uVar1 = GetAsyncKeyState(param_1);
  return uVar1 >> 0xf;
}

