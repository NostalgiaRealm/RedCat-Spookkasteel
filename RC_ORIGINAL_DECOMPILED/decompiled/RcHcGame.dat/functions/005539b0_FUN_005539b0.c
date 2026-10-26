/*
 * FUN_005539b0 at 005539b0
 * undefined FUN_005539b0(void)
 * Address ranges: 005539b0-005539d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 FUN_005539b0(void)

{
  _MEMORYSTATUS local_20;
  
  GlobalMemoryStatus(&local_20);
  return (float10)(local_20.dwTotalPhys >> 0x14);
}

