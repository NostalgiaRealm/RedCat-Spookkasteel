/*
 * FUN_0040b104 at 0040b104
 * undefined __register FUN_0040b104(void)
 * Address ranges: 0040b104-0040b152
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040b104(void)

{
  LPSYSTEMTIME lpSystemTime;
  float10 in_ST0;
  _SYSTEMTIME local_18;
  double dStack_8;
  
  lpSystemTime = &local_18;
  GetLocalTime(lpSystemTime);
  FUN_0040aed8(CONCAT22((short)((uint)lpSystemTime >> 0x10),local_18.wYear),local_18.wMonth,
               local_18.wDay);
  dStack_8 = (double)in_ST0;
  FUN_0040ad00(local_18.wHour,local_18.wMinute,local_18.wSecond,local_18.wMilliseconds);
  return;
}

