/*
 * FUN_1001b175 at 1001b175
 * undefined FUN_1001b175(void)
 * Address ranges: 1001b175-1001b19d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001b175(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  FUN_1001b137();
  return;
}

