/*
 * FUN_1000c352 at 1000c352
 * undefined __cdecl FUN_1000c352(uint param_1)
 * Address ranges: 1000c352-1000c3c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1000c352(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_1000c3ce();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_10015f30;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_1000c3c5();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x10015f34);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x10016098);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_1000c3c5();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_1000c3c5();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_1000c3c5();
  *pDVar1 = 0x16;
  return;
}

