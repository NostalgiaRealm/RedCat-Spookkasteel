/*
 * FUN_0040be4c at 0040be4c
 * LPCSTR __cdecl FUN_0040be4c(LPCSTR param_1, int param_2)
 * Address ranges: 0040be4c-0040be6a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPCSTR __cdecl FUN_0040be4c(LPCSTR param_1,int param_2)

{
  while( true ) {
    if (*param_1 == '\0') {
      return (LPCSTR)0x0;
    }
    if (*param_1 == param_2) break;
    param_1 = CharNextA(param_1);
  }
  return param_1;
}

