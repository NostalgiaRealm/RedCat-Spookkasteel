/*
 * FUN_0040a393 at 0040a393
 * undefined __stdcall FUN_0040a393(void)
 * Address ranges: 0040a393-0040a3fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040a393(void)

{
  _OSVERSIONINFOA local_98;
  
  local_98.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_98);
  DAT_004136b0 = (local_98.dwPlatformId != 2) + 1;
  if (3 < local_98.dwMajorVersion) {
    DAT_004136ec = 1;
  }
  DAT_0041373c = LoadLibraryA(s_SHELL32_DLL_00412750);
  if (DAT_0041373c != (HMODULE)0x0) {
    DAT_00413b8c = GetProcAddress(DAT_0041373c,s_SHChangeNotify_00412740);
  }
  return;
}

