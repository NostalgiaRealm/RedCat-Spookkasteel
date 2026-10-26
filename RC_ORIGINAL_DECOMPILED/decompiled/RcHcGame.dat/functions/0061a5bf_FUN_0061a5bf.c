/*
 * FUN_0061a5bf at 0061a5bf
 * undefined FUN_0061a5bf(void)
 * Address ranges: 0061a5bf-0061a645
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0061a5bf(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_007101b4);
  DAT_007101b0 = (uint)(sVar1 == 3);
  sVar1 = _strlen(DAT_007101b8);
  DAT_007101a8 = (uint)(sVar1 == 3);
  DAT_007101a4 = 0;
  if (DAT_007101b0 == 0) {
    DAT_007101ac = FUN_0061ac70(DAT_007101b4);
  }
  else {
    DAT_007101ac = 2;
  }
  EnumSystemLocalesA(FUN_0061a646,1);
  if ((((DAT_007101bc & 0x100) == 0) || ((DAT_007101bc & 0x200) == 0)) || ((DAT_007101bc & 7) == 0))
  {
    DAT_007101bc = 0;
  }
  return;
}

