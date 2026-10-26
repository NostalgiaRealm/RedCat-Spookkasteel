/*
 * FUN_10008bd9 at 10008bd9
 * int __cdecl FUN_10008bd9(int param_1)
 * Address ranges: 10008bd9-10008c7c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_10008bd9(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  FUN_1000a15a(2);
  iVar4 = 0;
  if (0 < DAT_101c4e00) {
    do {
      iVar2 = *(int *)(DAT_101c3df0 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_100089c6(iVar4,iVar2);
        piVar1 = *(int **)(DAT_101c3df0 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_10008b46(piVar1);
            if (iVar2 != -1) {
              iVar3 = iVar3 + 1;
            }
          }
          else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
            iVar2 = FUN_10008b46(piVar1);
            if (iVar2 == -1) {
              iVar5 = -1;
            }
          }
        }
        FUN_10008a18(iVar4,*(int *)(DAT_101c3df0 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_101c4e00);
  }
  FUN_1000a1bb(2);
  if (param_1 != 1) {
    iVar3 = iVar5;
  }
  return iVar3;
}

