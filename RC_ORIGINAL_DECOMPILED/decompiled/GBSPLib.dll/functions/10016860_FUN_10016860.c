/*
 * FUN_10016860 at 10016860
 * undefined FUN_10016860(void)
 * Address ranges: 10016860-10016896
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10016860(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_2 < 1) {
    return 1;
  }
  do {
    iVar1 = FUN_10016ab0(*param_1);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return uVar2;
}

