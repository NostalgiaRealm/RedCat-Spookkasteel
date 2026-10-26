/*
 * FUN_100252e0 at 100252e0
 * undefined FUN_100252e0(void)
 * Address ranges: 100252e0-10025315
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100252e0(void)

{
  int iVar1;
  
  iVar1 = FUN_10024f00();
  if (0 < iVar1) {
    FUN_10024ee0();
    iVar1 = iVar1 + -1;
    if (0 < iVar1) {
      do {
        FUN_10025220();
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

