/*
 * FUN_10011030 at 10011030
 * undefined __stdcall FUN_10011030(void)
 * Address ranges: 10011030-100110e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10011030(void)

{
  size_t sVar1;
  int local_8;
  
  sVar1 = _strlen(DAT_100316b4);
  DAT_100316b0 = (uint)(sVar1 == 3);
  sVar1 = _strlen(DAT_100316b8);
  DAT_100316a8 = (uint)(sVar1 == 3);
  DAT_100316a4 = 0;
  if (DAT_100316b0 == 0) {
    local_8 = _GetPrimaryLen(DAT_100316b4);
  }
  else {
    local_8 = 2;
  }
  DAT_100316ac = local_8;
  EnumSystemLocalesA(FUN_100110f0,1);
  if ((((DAT_100316bc & 0x100) == 0) || ((DAT_100316bc & 0x200) == 0)) || ((DAT_100316bc & 7) == 0))
  {
    DAT_100316bc = 0;
  }
  return;
}

