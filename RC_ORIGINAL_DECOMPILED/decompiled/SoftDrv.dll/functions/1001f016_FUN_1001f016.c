/*
 * FUN_1001f016 at 1001f016
 * undefined FUN_1001f016(void)
 * Address ranges: 1001f016-1001f061
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1001f016(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((*(byte *)(param_1 + 0xc) & 0x83) != 0) {
    uVar2 = FUN_1001e23f(param_1);
    FUN_1001f586(param_1);
    iVar1 = FUN_1001f4a6(*(undefined4 *)(param_1 + 0x10));
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_10018dc8(*(int *)(param_1 + 0x1c));
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return uVar2;
}

