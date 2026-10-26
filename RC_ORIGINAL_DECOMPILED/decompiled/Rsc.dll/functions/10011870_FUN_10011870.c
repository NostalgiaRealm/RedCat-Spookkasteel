/*
 * FUN_10011870 at 10011870
 * undefined4 __stdcall FUN_10011870(void)
 * Address ranges: 10011870-100118bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10011870(void)

{
  BOOL BVar1;
  undefined4 local_9c;
  _OSVERSIONINFOA local_98;
  
  local_98.dwOSVersionInfoSize = 0x94;
  BVar1 = GetVersionExA(&local_98);
  if ((BVar1 == 0) || (local_98.dwPlatformId != 2)) {
    local_9c = 0;
  }
  else {
    local_9c = 1;
  }
  return local_9c;
}

