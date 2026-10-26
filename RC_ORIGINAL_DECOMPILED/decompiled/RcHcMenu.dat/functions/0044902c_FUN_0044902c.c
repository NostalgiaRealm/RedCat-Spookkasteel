/*
 * FUN_0044902c at 0044902c
 * undefined __register FUN_0044902c(int param_1, int param_2)
 * Address ranges: 0044902c-004490ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044902c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x20) & 2) == 0) {
    iVar3 = *(int *)(param_1 + 0x14);
    if ((param_2 <= iVar3) && (iVar3 = param_2, param_2 < 0)) {
      iVar3 = 0;
    }
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar3 != iVar1) {
      *(int *)(param_1 + 0xc) = iVar3;
      if (*(char *)(param_1 + 0x18) == '\0') {
        FUN_00438580(*(int **)(param_1 + 4),iVar1 - iVar3,0);
      }
      else {
        FUN_00438580(*(int **)(param_1 + 4),0,iVar1 - iVar3);
      }
      if ((((*(byte *)(*(int **)(param_1 + 4) + 8) & 0x10) != 0) &&
          (piVar2 = FUN_0044879c(*(int **)(param_1 + 4)), piVar2 != (int *)0x0)) &&
         (piVar2[0x8e] != 0)) {
        (**(code **)(*(int *)piVar2[0x8e] + 0xc))();
      }
    }
    FUN_00438988(*(int **)(param_1 + 4));
    iVar3 = (**(code **)PTR_DAT_005722b8)();
    if (iVar3 != *(int *)(param_1 + 0xc)) {
      FUN_00438988(*(int **)(param_1 + 4));
      (**(code **)PTR_DAT_005725d0)();
    }
  }
  else {
    *(int *)(param_1 + 0xc) = param_2;
  }
  return;
}

