/*
 * FUN_1001e660 at 1001e660
 * undefined FUN_1001e660(void)
 * Address ranges: 1001e660-1001e6e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1001e660(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    do {
      if (*param_1 < piVar1[4]) {
        param_1[1] = (int)piVar1;
        return 1;
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)0x0);
  }
  piVar1 = (int *)FUN_100142d0(0x14);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  param_2 = *param_1 * param_2;
  piVar1[3] = param_2;
  piVar1[4] = param_2;
  iVar2 = FUN_100142d0(param_2);
  piVar1[1] = iVar2;
  if (iVar2 == 0) {
    FUN_10014360(piVar1);
    _DAT_1003fde8 = 0;
    return 0;
  }
  piVar1[2] = iVar2;
  *piVar1 = param_1[2];
  param_1[2] = (int)piVar1;
  param_1[1] = (int)piVar1;
  return 1;
}

