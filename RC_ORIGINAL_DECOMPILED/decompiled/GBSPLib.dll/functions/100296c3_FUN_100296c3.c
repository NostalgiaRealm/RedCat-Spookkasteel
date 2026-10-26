/*
 * FUN_100296c3 at 100296c3
 * undefined FUN_100296c3(void)
 * Address ranges: 100296c3-100296eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100296c3(void)

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
  FUN_10029685();
  return;
}

