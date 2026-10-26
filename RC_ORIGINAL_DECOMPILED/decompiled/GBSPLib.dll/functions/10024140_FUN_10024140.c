/*
 * FUN_10024140 at 10024140
 * undefined FUN_10024140(void)
 * Address ranges: 10024140-100241ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10024140(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 local_c;
  
  iVar1 = FUN_10014ac0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_10014a40(0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_100241f0(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_10014ac0();
  FUN_10014a40(2);
  iVar1 = FUN_10014a20(8);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_10014a40(2);
  *param_3 = param_2 - local_c;
  return 1;
}

