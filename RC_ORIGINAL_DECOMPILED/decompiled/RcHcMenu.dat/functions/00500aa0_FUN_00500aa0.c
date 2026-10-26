/*
 * FUN_00500aa0 at 00500aa0
 * undefined __register FUN_00500aa0(int param_1)
 * Address ranges: 00500aa0-00500b29
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00500aa0(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int extraout_EDX;
  
  iVar1 = FUN_004c8888(*(int *)(param_1 + 0x220));
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_004c8888(*(int *)(param_1 + 0x220));
    iVar1 = (**(code **)(*piVar2 + 0x2c))();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_004c8888(*(int *)(param_1 + 0x220));
      iVar1 = (**(code **)(*piVar2 + 0x2c))();
      uVar3 = FUN_0050082c(param_1);
      uVar3 = iVar1 / (int)uVar3;
      iVar1 = uVar3 + 5;
      if (SCARRY4(uVar3,5)) {
        thunk_FUN_00402874(uVar3);
        iVar1 = extraout_EDX;
      }
      FUN_00431f78(*(int **)(param_1 + 0x220),iVar1);
      return;
    }
  }
  iVar1 = GetSystemMetrics(0x15);
  FUN_00431f78(*(int **)(param_1 + 0x220),iVar1);
  return;
}

