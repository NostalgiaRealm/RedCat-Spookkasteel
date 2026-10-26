/*
 * FUN_0040ed8e at 0040ed8e
 * undefined __stdcall FUN_0040ed8e(void)
 * Address ranges: 0040ed8e-0040edb6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ed8e(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00413cc0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_00413ba0 = 0;
  _DAT_00413bbc = 0;
  DAT_00413dc4 = 0;
  DAT_00413bb0 = 0;
  DAT_00413bb4 = 0;
  DAT_00413bb8 = 0;
  return;
}

