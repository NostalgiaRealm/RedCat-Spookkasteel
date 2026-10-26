/*
 * FUN_005c1b80 at 005c1b80
 * undefined FUN_005c1b80(void)
 * Address ranges: 005c1b80-005c1bd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005c1b80(uint *param_1)

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
  iVar1 = FUN_005c16f0(uVar2 & 0xffff);
  if (iVar1 == 0) {
    return 0;
  }
  *param_1 = uVar2;
  return 1;
}

