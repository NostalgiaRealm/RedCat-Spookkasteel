/*
 * FUN_0040be03 at 0040be03
 * undefined __cdecl FUN_0040be03(LPCSTR param_1)
 * Address ranges: 0040be03-0040be4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_0040be03(LPCSTR param_1)

{
  char cVar1;
  LPCSTR lpsz;
  
  lpsz = FUN_0040be4c(param_1,0x5c);
  if (lpsz != (LPCSTR)0x0) {
    while (cVar1 = *lpsz, cVar1 != '\0') {
      do {
        if (cVar1 == '\\') break;
        lpsz = CharNextA(lpsz);
        cVar1 = *lpsz;
      } while (cVar1 != '\0');
      if (*lpsz == '\\') {
        *lpsz = '\0';
        CreateDirectoryA(param_1,(LPSECURITY_ATTRIBUTES)0x0);
        *lpsz = '\\';
        lpsz = lpsz + 1;
      }
    }
  }
  return;
}

