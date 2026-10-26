/*
 * FUN_1000f000 at 1000f000
 * undefined FUN_1000f000(void)
 * Address ranges: 1000f000-1000f098
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1000f000(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if ((((*(byte *)(*(int *)(param_1 + 4) + 8) & 1) == 0) &&
      ((*(byte *)(*(int *)(param_1 + 8) + 8) & 1) == 0)) && (*(int *)(param_1 + 0x18) != 0)) {
    uVar1 = FUN_1000efc0(*(int *)(param_1 + 4));
    uVar2 = FUN_1000efc0(*(undefined4 *)(param_1 + 8));
    iVar3 = FUN_1000ef90(uVar2 ^ uVar1);
    if (iVar3 == 0) {
      return true;
    }
    if ((uVar1 & 0x28) != 0) {
      uVar1 = 0;
    }
    if ((uVar2 & 0x28) != 0) {
      uVar2 = 0;
    }
    if (((uVar2 | uVar1) & 1) == 0) {
      if ((uVar2 ^ uVar1) == 0) {
        return true;
      }
      iVar3 = FUN_1000ef90(uVar2 ^ uVar1);
      return iVar3 == 0;
    }
  }
  return false;
}

