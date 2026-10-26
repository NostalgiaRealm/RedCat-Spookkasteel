/*
 * FUN_0040bed4 at 0040bed4
 * undefined4 __register FUN_0040bed4(int param_1)
 * Address ranges: 0040bed4-0040bf1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0040bed4(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 1;
  while( true ) {
    iVar2 = FUN_00404030(param_1);
    if (iVar2 < iVar3) {
      return 0;
    }
    bVar1 = *(byte *)(param_1 + -1 + iVar3) & 0xdf;
    if (bVar1 == 0x44) {
      return 1;
    }
    if (bVar1 == 0x45) {
      return 2;
    }
    if (bVar1 == 0x4d) break;
    if (bVar1 == 0x59) {
      return 2;
    }
    iVar3 = iVar3 + 1;
  }
  return 0;
}

