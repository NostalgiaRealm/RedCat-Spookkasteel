/*
 * FUN_100259c0 at 100259c0
 * undefined FUN_100259c0(void)
 * Address ranges: 100259c0-10025a05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100259c0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_10024f00();
  if (2 < iVar1) {
    iVar2 = FUN_10024cc0(0x38d1b717);
    if (iVar2 != 0) {
      uVar3 = 2;
    }
  }
  if (3 < iVar1) {
    iVar1 = FUN_10025a10(0x38d1b717);
    if (iVar1 != 0) {
      uVar3 = uVar3 | 1;
    }
  }
  return uVar3;
}

