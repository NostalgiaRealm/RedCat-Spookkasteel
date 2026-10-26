/*
 * entry at 100191e0
 * undefined entry(void)
 * Address ranges: 100191e0-1001927c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_10025c94;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10019228;
    if ((DAT_1020fd7c != (code *)0x0) &&
       (iVar2 = (*DAT_1020fd7c)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10019107(param_1,param_2,param_3);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10019228:
  iVar2 = FUN_1001beb6(param_1,param_2,param_3);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10019107(param_1,0,param_3);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10019107(param_1,param_2,param_3);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_1020fd7c != (code *)0x0) {
      iVar2 = (*DAT_1020fd7c)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}

