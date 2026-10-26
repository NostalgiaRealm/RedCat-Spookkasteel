/*
 * FUN_00404427 at 00404427
 * undefined __cdecl FUN_00404427(uint param_1)
 * Address ranges: 00404427-0040448d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00404427(uint param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  _DAT_00407f68 = param_1;
  puVar1 = &DAT_00407938;
  do {
    if (param_1 == *puVar1) {
      DAT_00407f64 = *(undefined4 *)(iVar2 * 8 + 0x40793c);
      return;
    }
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)puVar1 < 0x407aa0);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    DAT_00407f64 = 0xd;
    return;
  }
  if ((param_1 < 0xbc) || (DAT_00407f64 = 8, 0xca < param_1)) {
    DAT_00407f64 = 0x16;
  }
  return;
}

