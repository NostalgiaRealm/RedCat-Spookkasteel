/*
 * FUN_1000edc0 at 1000edc0
 * undefined FUN_1000edc0(void)
 * Address ranges: 1000edc0-1000ee7a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1000edc0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    return true;
  }
  iVar3 = param_1[0xd];
  while( true ) {
    if (iVar3 == 0) {
      param_1[0xd] = 0;
      if (*param_1 == -1) {
        return true;
      }
      iVar3 = FUN_1000edc0(param_1[4]);
      if (iVar3 != 0) {
        iVar3 = FUN_1000edc0(param_1[5]);
        return iVar3 != 0;
      }
      return false;
    }
    if (*(int **)(iVar3 + 4) == param_1) {
      iVar1 = 0;
    }
    else {
      if (*(int **)(iVar3 + 8) != param_1) {
        (*DAT_1014e358)(s_FreePortals_r__Portal_does_not_l_100390b8);
        return false;
      }
      iVar1 = 1;
    }
    iVar1 = *(int *)(iVar3 + 0xc + iVar1 * 4);
    iVar2 = FUN_1000ecf0(iVar3,*(int **)(iVar3 + 4));
    if (iVar2 == 0) break;
    iVar2 = FUN_1000ecf0(iVar3,*(undefined4 *)(iVar3 + 8));
    if (iVar2 == 0) {
      return false;
    }
    iVar2 = FUN_1000ed80(iVar3);
    iVar3 = iVar1;
    if (iVar2 == 0) {
      return false;
    }
  }
  return false;
}

