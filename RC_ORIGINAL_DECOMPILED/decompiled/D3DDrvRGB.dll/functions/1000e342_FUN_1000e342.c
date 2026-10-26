/*
 * FUN_1000e342 at 1000e342
 * undefined __cdecl FUN_1000e342(uint param_1)
 * Address ranges: 1000e342-1000e3b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1000e342(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_1000e3be();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_10019400;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_1000e3b5();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x10019404);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x10019568);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_1000e3b5();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_1000e3b5();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_1000e3b5();
  *pDVar1 = 0x16;
  return;
}

