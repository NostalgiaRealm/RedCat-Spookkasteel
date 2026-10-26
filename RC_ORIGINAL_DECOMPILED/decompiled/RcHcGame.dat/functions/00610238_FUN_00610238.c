/*
 * FUN_00610238 at 00610238
 * undefined FUN_00610238(void)
 * Address ranges: 00610238-00610260
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00610238(void)

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
  FUN_006101fa();
  return;
}

