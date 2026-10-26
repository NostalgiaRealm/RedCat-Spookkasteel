/*
 * FUN_00554170 at 00554170
 * undefined FUN_00554170(void)
 * Address ranges: 00554170-005541a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_00554170(int *param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    *param_1 = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_005fe5f0(param_1);
  }
  return param_1;
}

