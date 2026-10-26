/*
 * FUN_10007d75 at 10007d75
 * undefined __cdecl FUN_10007d75(uint param_1)
 * Address ranges: 10007d75-10007de7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10007d75(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_10007df1();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_10010d70;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_10007de8();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x10010d74);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x10010ed8);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_10007de8();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_10007de8();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_10007de8();
  *pDVar1 = 0x16;
  return;
}

