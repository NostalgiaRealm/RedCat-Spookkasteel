/*
 * FUN_00500b2c at 00500b2c
 * undefined __register FUN_00500b2c(int * param_1, uint param_2)
 * Address ranges: 00500b2c-00500b89
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00500b2c(int *param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_004fe75c((int)param_1,param_2);
  bVar1 = FUN_00438c84((int)param_1);
  if ((bVar1) && (param_1[0x88] != 0)) {
    iVar2 = FUN_00432178(param_1);
    uVar3 = iVar2 - *(int *)(param_1[0x88] + 0x38);
    if (SBORROW4(iVar2,*(int *)(param_1[0x88] + 0x38))) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    uVar4 = uVar3 - 2;
    if (SBORROW4(uVar3,2)) {
      uVar4 = thunk_FUN_00402874(uVar4);
    }
    *(uint *)(param_2 + 8) = uVar4;
  }
  return;
}

