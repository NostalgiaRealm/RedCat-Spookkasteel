/*
 * FUN_100046ca at 100046ca
 * int __cdecl FUN_100046ca(int param_1)
 * Address ranges: 100046ca-1000476d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_100046ca(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  FUN_10006171(2);
  iVar4 = 0;
  if (0 < DAT_101f6ac0) {
    do {
      iVar2 = *(int *)(DAT_101f5ab8 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_100044b7(iVar4,iVar2);
        piVar1 = *(int **)(DAT_101f5ab8 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_10004637(piVar1);
            if (iVar2 != -1) {
              iVar3 = iVar3 + 1;
            }
          }
          else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
            iVar2 = FUN_10004637(piVar1);
            if (iVar2 == -1) {
              iVar5 = -1;
            }
          }
        }
        FUN_10004509(iVar4,*(int *)(DAT_101f5ab8 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_101f6ac0);
  }
  FUN_100061d2(2);
  if (param_1 != 1) {
    iVar3 = iVar5;
  }
  return iVar3;
}

