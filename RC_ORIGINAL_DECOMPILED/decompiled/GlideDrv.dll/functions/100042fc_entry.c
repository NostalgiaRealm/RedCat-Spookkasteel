/*
 * entry at 100042fc
 * int __stdcall entry(undefined4 param_1, int param_2, undefined4 param_3)
 * Address ranges: 100042fc-10004398
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_100e3a68;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10004344;
    if ((DAT_101f6ac8 != (code *)0x0) &&
       (iVar2 = (*DAT_101f6ac8)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10004223(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10004344:
  iVar2 = FUN_10007a25();
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10004223(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10004223(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_101f6ac8 != (code *)0x0) {
      iVar2 = (*DAT_101f6ac8)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}

