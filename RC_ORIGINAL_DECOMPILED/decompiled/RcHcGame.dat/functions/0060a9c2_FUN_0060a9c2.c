/*
 * FUN_0060a9c2 at 0060a9c2
 * undefined FUN_0060a9c2(void)
 * Address ranges: 0060a9c2-0060aaf9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0060a9c2(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *local_14;
  uint local_10;
  int *local_c;
  uint local_8;
  
  local_14 = (int *)0x0;
  local_8 = 0;
  piVar6 = *(int **)(*(int *)(param_2 + 0x10) + 0xc);
  if (*(int *)(*(int *)(param_2 + 0x10) + 8) != 0) {
    do {
      piVar1 = (int *)*piVar6;
      if (((*piVar1 == param_5) ||
          (iVar4 = _strcmp((char *)(*piVar1 + 8),(char *)(param_5 + 8)), iVar4 == 0)) &&
         (local_10 = 0, local_c = piVar6, piVar1[1] != 0)) {
        do {
          local_c = local_c + 1;
          piVar2 = (int *)*local_c;
          iVar4 = *piVar2;
          piVar3 = local_14;
          if (((iVar4 == param_3) ||
              (iVar4 = _strcmp((char *)(iVar4 + 8),(char *)(param_3 + 8)), iVar4 == 0)) &&
             ((iVar4 = FUN_0060aafa(param_1,piVar2 + 2), iVar4 == param_4 &&
              (piVar3 = piVar1, local_14 != (int *)0x0)))) {
            iVar4 = FUN_0060aafa(param_1,piVar1 + 2);
            iVar5 = FUN_0060aafa(param_1,local_14 + 2);
            if (iVar5 != iVar4) {
              return (int *)0x0;
            }
          }
          local_14 = piVar3;
          local_10 = local_10 + 1;
        } while (local_10 < (uint)piVar1[1]);
      }
      local_8 = local_8 + 1;
      piVar6 = piVar6 + 1;
    } while (local_8 < *(uint *)(*(int *)(param_2 + 0x10) + 8));
    if (local_14 != (int *)0x0) {
      return local_14;
    }
  }
  local_8 = 0;
  piVar6 = *(int **)(*(int *)(param_2 + 0x10) + 0xc);
  if (*(int *)(*(int *)(param_2 + 0x10) + 8) != 0) {
    do {
      piVar1 = (int *)*piVar6;
      if (((*piVar1 == param_5) ||
          (iVar4 = _strcmp((char *)(*piVar1 + 8),(char *)(param_5 + 8)), iVar4 == 0)) &&
         ((*(byte *)(piVar1 + 5) & 3) == 0)) {
        return piVar1;
      }
      local_8 = local_8 + 1;
      piVar6 = piVar6 + 1;
    } while (local_8 < *(uint *)(*(int *)(param_2 + 0x10) + 8));
  }
  return (int *)0x0;
}

