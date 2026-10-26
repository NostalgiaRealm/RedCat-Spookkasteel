/*
 * FUN_100019f0 at 100019f0
 * undefined FUN_100019f0(void)
 * Address ranges: 100019f0-10001a25
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_100019f0(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  if (param_1 == (int *)0x0) {
    return (int *)0x0;
  }
  do {
    piVar1 = (int *)*param_1;
    if (param_1 == param_2) {
      FUN_10001790(param_1);
    }
    else {
      *param_1 = (int)piVar2;
      piVar2 = param_1;
    }
    param_1 = piVar1;
  } while (piVar1 != (int *)0x0);
  return piVar2;
}

