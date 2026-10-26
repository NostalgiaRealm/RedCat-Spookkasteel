/*
 * FUN_0040b0d8 at 0040b0d8
 * undefined __register FUN_0040b0d8(void)
 * Address ranges: 0040b0d8-0040b103
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040b0d8(void)

{
  LPSYSTEMTIME lpSystemTime;
  _SYSTEMTIME local_10;
  
  lpSystemTime = &local_10;
  GetLocalTime(lpSystemTime);
  FUN_0040aed8(CONCAT22((short)((uint)lpSystemTime >> 0x10),local_10.wYear),local_10.wMonth,
               local_10.wDay);
  return;
}

