/*
 * FUN_0060a86f at 0060a86f
 * undefined FUN_0060a86f(void)
 * Address ranges: 0060a86f-0060a8c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0060a86f(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint local_8;
  
  local_8 = 0;
  piVar3 = *(int **)(*(int *)(param_2 + 0x10) + 0xc);
  if (*(int *)(*(int *)(param_2 + 0x10) + 8) != 0) {
    do {
      piVar1 = (int *)*piVar3;
      if (((*piVar1 == param_5) ||
          (iVar2 = _strcmp((char *)(*piVar1 + 8),(char *)(param_5 + 8)), iVar2 == 0)) &&
         ((*(byte *)(piVar1 + 5) & 1) == 0)) {
        return piVar1;
      }
      local_8 = local_8 + 1;
      piVar3 = piVar3 + 1;
    } while (local_8 < *(uint *)(*(int *)(param_2 + 0x10) + 8));
  }
  return (int *)0x0;
}

