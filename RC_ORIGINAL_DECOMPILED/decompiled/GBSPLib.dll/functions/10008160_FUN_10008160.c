/*
 * FUN_10008160 at 10008160
 * undefined FUN_10008160(void)
 * Address ranges: 10008160-1000818f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10008160(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_1014e30c) {
    iVar1 = 0;
    do {
      FUN_10008130(iVar1 + DAT_1014e2f8);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xc;
    } while (iVar2 < DAT_1014e30c);
  }
  return;
}

