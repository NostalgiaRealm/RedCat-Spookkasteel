/*
 * FUN_10030345 at 10030345
 * undefined FUN_10030345(void)
 * Address ranges: 10030345-1003036d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10030345(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_1052a880;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_1052a760 = 0;
  DAT_1052a77c = 0;
  DAT_1052a984 = 0;
  DAT_1052a770 = 0;
  DAT_1052a774 = 0;
  DAT_1052a778 = 0;
  return;
}

