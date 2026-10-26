/*
 * FUN_1001e2a4 at 1001e2a4
 * undefined FUN_1001e2a4(void)
 * Address ranges: 1001e2a4-1001e347
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1001e2a4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = 0;
  FUN_1001a434(2);
  iVar3 = 0;
  if (0 < DAT_1020fc20) {
    do {
      iVar1 = *(int *)(DAT_1020ec08 + iVar3 * 4);
      if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0xc) & 0x83) != 0)) {
        FUN_1001cba8(iVar3,iVar1);
        iVar1 = *(int *)(DAT_1020ec08 + iVar3 * 4);
        if ((*(uint *)(iVar1 + 0xc) & 0x83) != 0) {
          if (param_1 == 1) {
            iVar1 = FUN_1001e211(iVar1);
            if (iVar1 != -1) {
              iVar2 = iVar2 + 1;
            }
          }
          else if ((param_1 == 0) && ((*(uint *)(iVar1 + 0xc) & 2) != 0)) {
            iVar1 = FUN_1001e211(iVar1);
            if (iVar1 == -1) {
              iVar4 = -1;
            }
          }
        }
        FUN_1001cbfa(iVar3,*(undefined4 *)(DAT_1020ec08 + iVar3 * 4));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_1020fc20);
  }
  FUN_1001a495(2);
  if (param_1 != 1) {
    iVar2 = iVar4;
  }
  return iVar2;
}

