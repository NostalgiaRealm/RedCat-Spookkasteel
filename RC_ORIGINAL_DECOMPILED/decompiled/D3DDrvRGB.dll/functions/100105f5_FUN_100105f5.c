/*
 * FUN_100105f5 at 100105f5
 * undefined __stdcall FUN_100105f5(void)
 * Address ranges: 100105f5-1001061d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100105f5(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_100ec5e0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_100ec4c0 = 0;
  _DAT_100ec4dc = 0;
  DAT_100ec6e4 = 0;
  DAT_100ec4d0 = 0;
  DAT_100ec4d4 = 0;
  DAT_100ec4d8 = 0;
  return;
}

