/*
 * FUN_005cc530 at 005cc530
 * undefined FUN_005cc530(void)
 * Address ranges: 005cc530-005cc583
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005cc530(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[3];
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0xc);
    FUN_005cc4a0(iVar2);
    iVar2 = iVar1;
  }
  if (*param_1 != 0) {
    FUN_005cf400(*param_1);
    *param_1 = 0;
    _DAT_007203c0 = 0;
  }
  FUN_005cf400(param_1);
  _DAT_007203c0 = 0;
  return;
}

