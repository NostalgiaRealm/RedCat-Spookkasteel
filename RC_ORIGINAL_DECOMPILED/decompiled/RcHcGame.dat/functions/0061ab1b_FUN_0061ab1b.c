/*
 * FUN_0061ab1b at 0061ab1b
 * undefined FUN_0061ab1b(void)
 * Address ranges: 0061ab1b-0061ab50
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0061ab1b(void)

{
  BOOL BVar1;
  _OSVERSIONINFOA local_98;
  
  local_98.dwOSVersionInfoSize = 0x94;
  BVar1 = GetVersionExA(&local_98);
  if ((BVar1 != 0) && (local_98.dwPlatformId == 2)) {
    return 1;
  }
  return 0;
}

