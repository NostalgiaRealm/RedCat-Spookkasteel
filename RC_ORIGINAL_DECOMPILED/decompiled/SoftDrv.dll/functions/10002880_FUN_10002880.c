/*
 * FUN_10002880 at 10002880
 * undefined FUN_10002880(void)
 * Address ranges: 10002880-10002907
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_10002880(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = _malloc(0xc);
  if (piVar1 != (int *)0x0) {
    piVar1[1] = 0;
    *piVar1 = param_2;
    piVar1[2] = 0;
    if (param_2 == 0) {
      iVar2 = FUN_10001ee0(param_1,param_3,param_4,param_5,param_6);
      piVar1[1] = iVar2;
    }
    else {
      iVar2 = FUN_10001670(param_1,param_3,param_4,param_5,param_6);
      piVar1[2] = iVar2;
    }
    if (iVar2 != 0) {
      return piVar1;
    }
    FUN_10018dc8(piVar1);
  }
  return (int *)0x0;
}

