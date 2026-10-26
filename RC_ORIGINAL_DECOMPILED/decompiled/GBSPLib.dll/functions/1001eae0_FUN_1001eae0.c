/*
 * FUN_1001eae0 at 1001eae0
 * undefined FUN_1001eae0(void)
 * Address ranges: 1001eae0-1001eb6d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1001eae0(int param_1,int param_2,int param_3,byte *param_4,int param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int local_4;
  
  local_4 = -1;
  iVar1 = 99999999;
  while (param_5 != 0) {
    param_5 = param_5 + -1;
    iVar2 = (param_2 - (uint)param_4[1]) * (param_2 - (uint)param_4[1]) +
            (param_3 - (uint)param_4[2]) * (param_3 - (uint)param_4[2]) +
            (param_1 - (uint)*param_4) * (param_1 - (uint)*param_4);
    param_4 = param_4 + 3;
    if (iVar2 < iVar1) {
      iVar1 = iVar2;
      local_4 = param_5;
    }
  }
  if (param_6 != (int *)0x0) {
    *param_6 = local_4;
  }
  return iVar1;
}

