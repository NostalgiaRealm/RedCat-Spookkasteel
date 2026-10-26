/*
 * FUN_005d9850 at 005d9850
 * undefined FUN_005d9850(void)
 * Address ranges: 005d9850-005d98d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005d9850(int *param_1,int param_2)

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
  piVar1 = (int *)FUN_005cf370(0x14);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  param_2 = *param_1 * param_2;
  piVar1[3] = param_2;
  piVar1[4] = param_2;
  iVar2 = FUN_005cf370(param_2);
  piVar1[1] = iVar2;
  if (iVar2 == 0) {
    FUN_005cf400(piVar1);
    _DAT_007203c0 = 0;
    return 0;
  }
  piVar1[2] = iVar2;
  *piVar1 = param_1[2];
  param_1[2] = (int)piVar1;
  param_1[1] = (int)piVar1;
  return 1;
}

