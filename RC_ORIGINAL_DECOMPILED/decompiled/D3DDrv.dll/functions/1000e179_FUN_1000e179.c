/*
 * FUN_1000e179 at 1000e179
 * undefined __stdcall FUN_1000e179(void)
 * Address ranges: 1000e179-1000e1a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e179(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_101c3ba0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_101c3a80 = 0;
  _DAT_101c3a9c = 0;
  DAT_101c3ca4 = 0;
  DAT_101c3a90 = 0;
  DAT_101c3a94 = 0;
  DAT_101c3a98 = 0;
  return;
}

