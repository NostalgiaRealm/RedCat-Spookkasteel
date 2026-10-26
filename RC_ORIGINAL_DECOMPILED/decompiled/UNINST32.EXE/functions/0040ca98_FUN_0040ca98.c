/*
 * FUN_0040ca98 at 0040ca98
 * undefined __cdecl FUN_0040ca98(uint param_1)
 * Address ranges: 0040ca98-0040cafe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0040ca98(uint param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  DAT_004134e8 = param_1;
  puVar1 = &DAT_00413138;
  do {
    if (param_1 == *puVar1) {
      _DAT_004134e4 = *(undefined4 *)(iVar2 * 8 + 0x41313c);
      return;
    }
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)puVar1 < 0x4132a0);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    _DAT_004134e4 = 0xd;
    return;
  }
  if ((param_1 < 0xbc) || (_DAT_004134e4 = 8, 0xca < param_1)) {
    _DAT_004134e4 = 0x16;
  }
  return;
}

