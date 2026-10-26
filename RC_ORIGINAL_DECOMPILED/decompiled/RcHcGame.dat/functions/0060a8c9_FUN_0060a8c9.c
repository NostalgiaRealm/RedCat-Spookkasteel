/*
 * FUN_0060a8c9 at 0060a8c9
 * undefined FUN_0060a8c9(void)
 * Address ranges: 0060a8c9-0060a9c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0060a8c9(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint local_10;
  int *local_c;
  uint local_8;
  
  local_8 = 0;
  piVar4 = *(int **)(*(int *)(param_2 + 0x10) + 0xc);
  if (*(int *)(*(int *)(param_2 + 0x10) + 8) != 0) {
    do {
      piVar1 = (int *)*piVar4;
      if (((*piVar1 == param_5) ||
          (iVar3 = _strcmp((char *)(*piVar1 + 8),(char *)(param_5 + 8)), iVar3 == 0)) &&
         (local_10 = 0, local_c = piVar4, piVar1[1] != 0)) {
        do {
          local_c = local_c + 1;
          piVar2 = (int *)*local_c;
          iVar3 = *piVar2;
          if (((iVar3 == param_3) ||
              (iVar3 = _strcmp((char *)(iVar3 + 8),(char *)(param_3 + 8)), iVar3 == 0)) &&
             (iVar3 = FUN_0060aafa(param_1,piVar2 + 2), iVar3 == param_4)) {
            return piVar1;
          }
          local_10 = local_10 + 1;
        } while (local_10 < (uint)piVar1[1]);
      }
      local_8 = local_8 + 1;
      piVar4 = piVar4 + 1;
    } while (local_8 < *(uint *)(*(int *)(param_2 + 0x10) + 8));
  }
  local_8 = 0;
  piVar4 = *(int **)(*(int *)(param_2 + 0x10) + 0xc);
  if (*(int *)(*(int *)(param_2 + 0x10) + 8) != 0) {
    do {
      piVar1 = (int *)*piVar4;
      if (((*piVar1 == param_5) ||
          (iVar3 = _strcmp((char *)(*piVar1 + 8),(char *)(param_5 + 8)), iVar3 == 0)) &&
         ((*(byte *)(piVar1 + 5) & 3) == 0)) {
        return piVar1;
      }
      local_8 = local_8 + 1;
      piVar4 = piVar4 + 1;
    } while (local_8 < *(uint *)(*(int *)(param_2 + 0x10) + 8));
  }
  return (int *)0x0;
}

