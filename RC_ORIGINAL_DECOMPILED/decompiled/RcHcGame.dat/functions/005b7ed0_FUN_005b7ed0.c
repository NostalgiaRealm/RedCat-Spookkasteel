/*
 * FUN_005b7ed0 at 005b7ed0
 * undefined FUN_005b7ed0(void)
 * Address ranges: 005b7ed0-005b7f7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005b7ed0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(&DAT_00747b48 + DAT_00722f24 * 4) + -1;
  if (-1 < iVar3) {
    do {
      iVar2 = *(int *)(&DAT_00722910 + DAT_00722f24 * 4) + iVar3;
      if ((&DAT_00720840)[iVar2 * 8] == '\0') {
        *(int *)(param_1 + 0x3368c) = *(int *)(param_1 + 0x3368c) + 1;
        iVar1 = FUN_005b7e20(8);
        if (iVar1 != 0) {
          FUN_005b93b0(param_2,*(undefined4 *)(&DAT_00720844 + iVar2 * 8));
        }
      }
      else if ((&DAT_00720840)[iVar2 * 8] == '\x01') {
        FUN_005b60f0(param_1,*(undefined4 *)(&DAT_00720844 + iVar2 * 8));
      }
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    *(undefined4 *)(&DAT_00747b48 + DAT_00722f24 * 4) = 0;
    return 1;
  }
  *(undefined4 *)(&DAT_00747b48 + DAT_00722f24 * 4) = 0;
  return 1;
}

