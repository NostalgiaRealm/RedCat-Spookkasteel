/*
 * FUN_10002f90 at 10002f90
 * undefined FUN_10002f90(void)
 * Address ranges: 10002f90-10003046
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10002f90(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_18;
  int local_14;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = 0;
  iVar1 = *(int *)((int)param_2 + 0x24);
  local_14 = 0;
  local_18 = 0;
  if (0 < *(int *)(iVar1 + 0x2c)) {
    param_2 = (undefined4 *)(iVar1 + 0x30);
    do {
      iVar4 = 0;
      piVar2 = (int *)*param_2;
      if (0 < *piVar2) {
        do {
          FUN_10014580(&local_c);
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 1;
        } while (iVar4 < *piVar2);
      }
      local_18 = local_18 + 1;
      param_2 = param_2 + 5;
      local_14 = iVar3;
    } while (local_18 < *(int *)(iVar1 + 0x2c));
  }
  FUN_10014530(1.0 / (float)local_14);
  *param_1 = local_c;
  param_1[1] = local_8;
  param_1[2] = local_4;
  return;
}

