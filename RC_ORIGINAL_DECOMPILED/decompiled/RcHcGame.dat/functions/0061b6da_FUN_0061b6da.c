/*
 * FUN_0061b6da at 0061b6da
 * undefined FUN_0061b6da(void)
 * Address ranges: 0061b6da-0061b702
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0061b6da(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00747d80;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_00747c64 = 0;
  DAT_00747c7c = 0;
  DAT_00747e84 = 0;
  DAT_00747c70 = 0;
  DAT_00747c74 = 0;
  DAT_00747c78 = 0;
  return;
}

