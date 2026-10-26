/*
 * FUN_0040b154 at 0040b154
 * WORD __register FUN_0040b154(void)
 * Address ranges: 0040b154-0040b164
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

WORD FUN_0040b154(void)

{
  _SYSTEMTIME local_10;
  
  GetLocalTime(&local_10);
  return local_10.wYear;
}

