/*
 * FUN_00401464 at 00401464
 * WORD __register FUN_00401464(void)
 * Address ranges: 00401464-00401485
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

WORD FUN_00401464(void)

{
  WORD WVar1;
  _STARTUPINFOA _Stack_48;
  
  GetStartupInfoA(&_Stack_48);
  WVar1 = 10;
  if (((byte)_Stack_48.dwFlags & 1) != 0) {
    WVar1 = _Stack_48.wShowWindow;
  }
  return WVar1;
}

