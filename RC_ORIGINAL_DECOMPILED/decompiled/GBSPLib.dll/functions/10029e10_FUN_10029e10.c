/*
 * FUN_10029e10 at 10029e10
 * undefined FUN_10029e10(void)
 * Address ranges: 10029e10-10029eb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10029e10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = 0;
  FUN_1002e819(2);
  iVar3 = 0;
  if (0 < DAT_1052bae0) {
    do {
      iVar1 = *(int *)(DAT_1052aac4 + iVar3 * 4);
      if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0xc) & 0x83) != 0)) {
        FUN_10029bfd(iVar3,iVar1);
        iVar1 = *(int *)(DAT_1052aac4 + iVar3 * 4);
        if ((*(uint *)(iVar1 + 0xc) & 0x83) != 0) {
          if (param_1 == 1) {
            iVar1 = FUN_10029d7d(iVar1);
            if (iVar1 != -1) {
              iVar2 = iVar2 + 1;
            }
          }
          else if ((param_1 == 0) && ((*(uint *)(iVar1 + 0xc) & 2) != 0)) {
            iVar1 = FUN_10029d7d(iVar1);
            if (iVar1 == -1) {
              iVar4 = -1;
            }
          }
        }
        FUN_10029c4f(iVar3,*(undefined4 *)(DAT_1052aac4 + iVar3 * 4));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_1052bae0);
  }
  FUN_1002e87a(2);
  if (param_1 != 1) {
    iVar2 = iVar4;
  }
  return iVar2;
}

