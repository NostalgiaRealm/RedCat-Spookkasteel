/*
 * FUN_005545a0 at 005545a0
 * undefined FUN_005545a0(void)
 * Address ranges: 005545a0-005545e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * __thiscall FUN_005545a0(undefined1 *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = 0;
  *(int *)(param_1 + 0x1c) = param_2;
  if (param_2 != 0) {
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  }
  FUN_005b3070();
  FUN_005b3070();
  if ((param_2 != 0) &&
     (iVar1 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar1, iVar1 == 0)) {
    FUN_005abfc0(0);
  }
  return param_1;
}

