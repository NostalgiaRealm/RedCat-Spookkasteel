/*
 * FUN_00407bc0 at 00407bc0
 * undefined FUN_00407bc0(void)
 * Address ranges: 00407bc0-00407bfe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00407bc0(void)

{
  char cVar1;
  
  FUN_00423700();
  cVar1 = FUN_004a0bc0();
  if (cVar1 == '\0') {
    FUN_00423700();
    cVar1 = FUN_004a0d00();
    if (cVar1 == '\0') {
      FUN_00407db0();
      return;
    }
  }
  FUN_00407dc0();
  return;
}

