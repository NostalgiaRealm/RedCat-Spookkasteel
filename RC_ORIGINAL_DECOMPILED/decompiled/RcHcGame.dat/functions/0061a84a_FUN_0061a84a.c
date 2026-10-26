/*
 * FUN_0061a84a at 0061a84a
 * undefined FUN_0061a84a(void)
 * Address ranges: 0061a84a-0061a89f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0061a84a(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_007101b4);
  DAT_007101b0 = (uint)(sVar1 == 3);
  if (sVar1 == 3) {
    DAT_007101ac = 2;
  }
  else {
    DAT_007101ac = FUN_0061ac70(DAT_007101b4);
  }
  EnumSystemLocalesA(FUN_0061a8a0,1);
  if ((DAT_007101bc & 4) == 0) {
    DAT_007101bc = 0;
  }
  return;
}

