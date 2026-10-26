/*
 * FUN_0040a933 at 0040a933
 * int __cdecl FUN_0040a933(LPCSTR param_1)
 * Address ranges: 0040a933-0040a948
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_0040a933(LPCSTR param_1)

{
  DWORD DVar1;
  
  DVar1 = GetFileAttributesA(param_1);
  return (DVar1 != 0xffffffff) - 1;
}

