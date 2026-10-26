/*
 * FUN_004ee658 at 004ee658
 * undefined __register FUN_004ee658(uint param_1)
 * Address ranges: 004ee658-004ee6d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ee658(uint param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_004ee600(param_1);
  if ((*(char *)(param_1 + 0x35) != '\0') && (*(int *)(param_1 + 0x20) != 0)) {
    cVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 0x38))();
    if (cVar2 == '\0') {
      piVar3 = (int *)FUN_004ed794(param_1);
      FUN_004d516c(piVar3);
    }
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    cVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 0x38))();
    if (cVar2 == '\0') {
      piVar3 = (int *)FUN_004ed810(param_1);
      FUN_004d516c(piVar3);
    }
  }
  piVar3 = (int *)(param_1 + 0x2c);
  iVar1 = *piVar3;
  *piVar3 = *piVar3 + 1;
  if (SCARRY4(iVar1,1)) {
    thunk_FUN_00402874(param_1);
  }
  return;
}

