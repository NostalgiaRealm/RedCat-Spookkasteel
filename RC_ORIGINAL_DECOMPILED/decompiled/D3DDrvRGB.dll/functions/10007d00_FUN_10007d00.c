/*
 * FUN_10007d00 at 10007d00
 * ushort __cdecl FUN_10007d00(int param_1)
 * Address ranges: 10007d00-10007d11
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ushort __cdecl FUN_10007d00(int param_1)

{
  ushort uVar1;
  
  uVar1 = GetAsyncKeyState(param_1);
  return uVar1 >> 0xf;
}

