/*
 * FUN_00435d9c at 00435d9c
 * undefined __register FUN_00435d9c(int * param_1)
 * Address ranges: 00435d9c-00435de2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00435d9c(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[0x53] != 0) {
    if ((param_1[0x60] != 0) && (iVar2 = *(int *)(param_1[0x60] + 8), -1 < iVar2 + -1)) {
      iVar3 = 0;
      do {
        piVar1 = (int *)FUN_00412384((undefined4 *)param_1[0x60],iVar3);
        FUN_00435d9c(piVar1);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    (**(code **)(*param_1 + 0xa0))();
  }
  return;
}

