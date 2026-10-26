/*
 * FUN_100124f0 at 100124f0
 * undefined FUN_100124f0(void)
 * Address ranges: 100124f0-10012556
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100124f0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = __ftol();
  iVar2 = iVar1 + 0x4000 >> 8;
  iVar1 = __ftol();
  iVar1 = iVar1 + 0x4000 >> 8;
  if ((((-1 < iVar2) && (iVar2 < 0x80)) && (-1 < iVar1)) && (iVar1 < 0x80)) {
    return iVar1 * 0x80 + iVar2;
  }
  (*DAT_1014e358)(s_HashVert__Vert_outside_valid_ran_10039f64);
  return -1;
}

