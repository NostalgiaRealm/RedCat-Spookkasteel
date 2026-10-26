/*
 * FUN_0061a95d at 0061a95d
 * undefined FUN_0061a95d(void)
 * Address ranges: 0061a95d-0061a993
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0061a95d(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_007101b8);
  DAT_007101a8 = (uint)(sVar1 == 3);
  EnumSystemLocalesA(FUN_0061a994,1);
  if ((DAT_007101bc & 4) == 0) {
    DAT_007101bc = 0;
  }
  return;
}

