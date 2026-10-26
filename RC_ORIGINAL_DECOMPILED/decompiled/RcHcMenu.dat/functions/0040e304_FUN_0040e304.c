/*
 * FUN_0040e304 at 0040e304
 * undefined __register FUN_0040e304(void)
 * Address ranges: 0040e304-0040e339
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040e304(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("kernel32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_0056f190 = GetProcAddress(hModule,"GetDiskFreeSpaceExA");
  }
  if (DAT_0056f190 == (FARPROC)0x0) {
    DAT_0056f190 = (FARPROC)&LAB_0040a094;
  }
  return;
}

