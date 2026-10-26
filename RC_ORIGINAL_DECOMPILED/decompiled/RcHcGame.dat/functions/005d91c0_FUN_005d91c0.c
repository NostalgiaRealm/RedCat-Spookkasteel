/*
 * FUN_005d91c0 at 005d91c0
 * undefined FUN_005d91c0(void)
 * Address ranges: 005d91c0-005d9329
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005d91c0(uint param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_4 + 4) +
                  (((int)param_3 >> 7 & 1U) +
                  (((int)param_2 >> 7 & 1U) + ((int)param_1 >> 7 & 1U) * 2) * 2) * 4);
  if (((((iVar1 != 0) &&
        (iVar1 = *(int *)(iVar1 + (((int)param_3 >> 6 & 1U) +
                                  (((int)param_2 >> 6 & 1U) + ((int)param_1 >> 6 & 1U) * 2) * 2) * 4
                         ), iVar1 != 0)) &&
       (iVar1 = *(int *)(iVar1 + (((int)param_3 >> 5 & 1U) +
                                 (((int)param_2 >> 5 & 1U) + ((int)param_1 >> 5 & 1U) * 2) * 2) * 4)
       , iVar1 != 0)) &&
      ((iVar1 = *(int *)(iVar1 + (((int)param_3 >> 4 & 1U) +
                                 (((int)param_2 >> 4 & 1U) + ((int)param_1 >> 4 & 1U) * 2) * 2) * 4)
       , iVar1 != 0 &&
       (iVar1 = *(int *)(iVar1 + (((int)param_3 >> 3 & 1U) +
                                 (((int)param_2 >> 3 & 1U) + ((int)param_1 >> 3 & 1U) * 2) * 2) * 4)
       , iVar1 != 0)))) &&
     ((iVar1 = *(int *)(iVar1 + (((int)param_3 >> 2 & 1U) +
                                (((int)param_2 >> 2 & 1U) + ((int)param_1 >> 2 & 1U) * 2) * 2) * 4),
      iVar1 != 0 &&
      ((iVar1 = *(int *)(iVar1 + (((int)param_3 >> 1 & 1U) +
                                 (((int)param_2 >> 1 & 1U) + ((int)param_1 >> 1 & 1U) * 2) * 2) * 4)
       , iVar1 != 0 &&
       (iVar1 = *(int *)(iVar1 + ((param_3 & 1) + ((param_2 & 1) + (param_1 & 1) * 2) * 2) * 4),
       iVar1 != 0)))))) {
    return iVar1 + -1;
  }
  iVar1 = FUN_005d90e0(param_1,param_2,param_3,param_4);
  return iVar1;
}

