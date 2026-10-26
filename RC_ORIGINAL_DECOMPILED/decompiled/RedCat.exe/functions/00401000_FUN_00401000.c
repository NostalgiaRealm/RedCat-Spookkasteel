/*
 * FUN_00401000 at 00401000
 * undefined __cdecl FUN_00401000(LPCSTR param_1, LPCSTR param_2)
 * Address ranges: 00401000-00401017
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_00401000(LPCSTR param_1,LPCSTR param_2)

{
  GetPrivateProfileIntA(param_1,param_2,0,(LPCSTR)&DAT_00407e30);
  return;
}

