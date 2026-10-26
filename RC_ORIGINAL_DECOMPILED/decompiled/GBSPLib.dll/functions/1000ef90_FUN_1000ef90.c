/*
 * FUN_1000ef90 at 1000ef90
 * undefined FUN_1000ef90(void)
 * Address ranges: 1000ef90-1000efb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1000ef90(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = 0;
    do {
      uVar1 = 1 << ((byte)iVar2 & 0x1f) & param_1 & 0x417;
      if (uVar1 != 0) {
        return uVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x20);
  }
  return 0;
}

