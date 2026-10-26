/*
 * entry at 1002887f
 * undefined entry(void)
 * Address ranges: 1002887f-1002891b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_1052a3d8;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_100288c7;
    if ((DAT_1052bae8 != (code *)0x0) &&
       (iVar2 = (*DAT_1052bae8)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_100287a6(param_1,param_2,param_3);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_100288c7:
  iVar2 = FUN_1002ef71(param_1,param_2,param_3);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_100287a6(param_1,0,param_3);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_100287a6(param_1,param_2,param_3);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_1052bae8 != (code *)0x0) {
      iVar2 = (*DAT_1052bae8)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}

