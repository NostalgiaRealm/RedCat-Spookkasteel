/*
 * FUN_0040a6db at 0040a6db
 * bool __cdecl FUN_0040a6db(LPCSTR param_1, DWORD param_2)
 * Address ranges: 0040a6db-0040a6fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __cdecl FUN_0040a6db(LPCSTR param_1,DWORD param_2)

{
  BOOL BVar1;
  
  if (param_2 == 0) {
    param_2 = 0x80;
  }
  BVar1 = SetFileAttributesA(param_1,param_2);
  return (bool)('\x01' - (BVar1 != 0));
}

