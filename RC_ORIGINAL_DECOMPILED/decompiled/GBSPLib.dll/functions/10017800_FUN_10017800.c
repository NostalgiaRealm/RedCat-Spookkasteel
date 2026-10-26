/*
 * FUN_10017800 at 10017800
 * undefined FUN_10017800(void)
 * Address ranges: 10017800-10017853
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10017800(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  if ((uVar2 & 0x40000) != 0) {
    uVar2 = uVar2 | 2;
  }
  if ((uVar2 & 0x20000) != 0) {
    uVar2 = uVar2 ^ 0x20000;
  }
  if (((uVar2 & 0x40000) != 0) && ((uVar2 & 0xc) != 0)) {
    return 0;
  }
  iVar1 = FUN_10017460(uVar2 & 0xffff);
  if (iVar1 == 0) {
    return 0;
  }
  *param_1 = uVar2;
  return 1;
}

