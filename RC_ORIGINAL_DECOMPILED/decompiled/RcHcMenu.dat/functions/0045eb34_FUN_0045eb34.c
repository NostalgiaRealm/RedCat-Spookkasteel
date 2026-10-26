/*
 * FUN_0045eb34 at 0045eb34
 * undefined __register FUN_0045eb34(void)
 * Address ranges: 0045eb34-0045eba6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045eb34(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("ole32.dll");
  if (hModule != (HMODULE)0x0) {
    _DAT_005704f8 = GetProcAddress(hModule,"CoCreateInstanceEx");
    DAT_005704fc = GetProcAddress(hModule,"CoInitializeEx");
    _DAT_00570500 = GetProcAddress(hModule,"CoAddRefServerProcess");
    _DAT_00570504 = GetProcAddress(hModule,"CoReleaseServerProcess");
    _DAT_00570508 = GetProcAddress(hModule,"CoResumeClassObjects");
    _DAT_0057050c = GetProcAddress(hModule,"CoSuspendClassObjects");
  }
  return;
}

