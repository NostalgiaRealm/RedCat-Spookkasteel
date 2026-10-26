/*
 * FUN_0040d758 at 0040d758
 * undefined __register FUN_0040d758(void)
 * Address ranges: 0040d758-0040d7ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d758(void)

{
  BOOL BVar1;
  _OSVERSIONINFOA local_94;
  
  local_94.dwOSVersionInfoSize = 0x94;
  BVar1 = GetVersionExA(&local_94);
  if (BVar1 != 0) {
    DAT_0056f124 = local_94.dwPlatformId;
    DAT_0056f128 = local_94.dwMajorVersion;
    DAT_0056f12c = local_94.dwMinorVersion;
    _DAT_0056f130 = local_94.dwBuildNumber;
    FUN_00403fe0((int *)&DAT_0056f134,local_94.szCSDVersion,0x80);
  }
  return;
}

