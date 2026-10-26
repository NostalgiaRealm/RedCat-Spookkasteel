/*
 * FUN_1001db30 at 1001db30
 * undefined FUN_1001db30(void)
 * Address ranges: 1001db30-1001db58
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001db30(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_1020eb00;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_1020e9e8 = 0;
  _DAT_1020e9fc = 0;
  DAT_1020ec04 = 0;
  DAT_1020e9f0 = 0;
  DAT_1020e9f4 = 0;
  DAT_1020e9f8 = 0;
  return;
}

