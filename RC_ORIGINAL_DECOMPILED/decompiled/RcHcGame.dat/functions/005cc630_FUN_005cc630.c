/*
 * FUN_005cc630 at 005cc630
 * undefined FUN_005cc630(void)
 * Address ranges: 005cc630-005cc697
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005cc630(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (param_1[2] != 0) {
    iVar5 = param_1[4];
    while (puVar4 = param_1, iVar5 != 0) {
      iVar2 = *(int *)(iVar5 + 0x14);
      FUN_005cc530(iVar5);
      iVar5 = iVar2;
    }
    while (puVar4 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)*puVar4;
      piVar1 = puVar4 + 3;
      puVar4 = puVar3;
      if (*piVar1 != 0) {
        FUN_005cc230(*piVar1);
      }
    }
  }
  while (param_1 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)*param_1;
    FUN_005cf400(param_1);
    _DAT_007203c0 = 0;
    param_1 = puVar4;
  }
  return;
}

