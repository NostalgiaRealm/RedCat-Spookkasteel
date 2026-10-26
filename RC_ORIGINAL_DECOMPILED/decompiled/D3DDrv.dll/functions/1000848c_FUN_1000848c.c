/*
 * FUN_1000848c at 1000848c
 * undefined __stdcall FUN_1000848c(void)
 * Address ranges: 1000848c-100084b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000848c(void)

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
  FUN_1000844e();
  return;
}

