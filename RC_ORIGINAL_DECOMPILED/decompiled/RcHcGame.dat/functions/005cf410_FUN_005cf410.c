/*
 * FUN_005cf410 at 005cf410
 * undefined FUN_005cf410(void)
 * Address ranges: 005cf410-005cf465
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005cf410(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = FUN_005cf3b0(param_2);
    return iVar1;
  }
  if (param_2 != 0) {
    do {
      iVar1 = FUN_0060e293(param_1,param_2);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = FUN_005cf3e0();
    } while (iVar1 != 0);
    return 0;
  }
  FUN_005cf400(param_1);
  _DAT_007203c0 = param_2;
  return 0;
}

