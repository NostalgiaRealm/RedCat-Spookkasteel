/*
 * FUN_100165b0 at 100165b0
 * undefined FUN_100165b0(void)
 * Address ranges: 100165b0-100165d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100165b0(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = &DAT_10026020;
  iVar2 = 20000;
  do {
    if (*piVar1 != 0) {
      FUN_100165e0(piVar1);
    }
    piVar1 = piVar1 + 0x19;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 1;
}

