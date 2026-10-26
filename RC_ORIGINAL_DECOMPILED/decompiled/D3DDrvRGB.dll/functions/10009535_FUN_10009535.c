/*
 * FUN_10009535 at 10009535
 * undefined __stdcall FUN_10009535(void)
 * Address ranges: 10009535-1000955d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10009535(void)

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
  FUN_100094f7();
  return;
}

