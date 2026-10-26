/*
 * FUN_0040b30c at 0040b30c
 * CHAR __stdcall FUN_0040b30c(void)
 * Address ranges: 0040b30c-0040b32e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

CHAR FUN_0040b30c(void)

{
  CHAR local_104 [256];
  
  GetTempPathA(0x100,local_104);
  return local_104[0];
}

