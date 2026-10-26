/*
 * FUN_004034ad at 004034ad
 * undefined __stdcall FUN_004034ad(void)
 * Address ranges: 004034ad-004034d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004034ad(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00408240;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_00408128 = 0;
  DAT_0040813c = 0;
  DAT_00408344 = 0;
  DAT_00408130 = 0;
  DAT_00408134 = 0;
  DAT_00408138 = 0;
  return;
}

