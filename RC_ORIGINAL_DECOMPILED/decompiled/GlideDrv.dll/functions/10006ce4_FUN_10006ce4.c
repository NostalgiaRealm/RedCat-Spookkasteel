/*
 * FUN_10006ce4 at 10006ce4
 * undefined __stdcall FUN_10006ce4(void)
 * Address ranges: 10006ce4-10006d0c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10006ce4(void)

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
  FUN_10006ca6();
  return;
}

