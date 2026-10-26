/*
 * FUN_00402ab8 at 00402ab8
 * undefined __register FUN_00402ab8(void)
 * Address ranges: 00402ab8-00402af2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402ab8(void)

{
  _SYSTEMTIME local_1c;
  
  GetSystemTime(&local_1c);
  _DAT_00573044 =
       (CONCAT22((short)((uint)local_1c.wHour * 0x3c >> 0x10),
                 (short)((uint)local_1c.wHour * 0x3c) + local_1c.wMinute) * 0x3c +
       (uint)local_1c.wSecond) * 1000 + (uint)local_1c.wMilliseconds;
  return;
}

