/*
 * FUN_10009ad3 at 10009ad3
 * undefined __stdcall FUN_10009ad3(void)
 * Address ranges: 10009ad3-10009afb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009ad3(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_101f5860;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_101f5730 = 0;
  _DAT_101f574c = 0;
  DAT_101f5964 = 0;
  DAT_101f5740 = 0;
  DAT_101f5744 = 0;
  DAT_101f5748 = 0;
  return;
}

