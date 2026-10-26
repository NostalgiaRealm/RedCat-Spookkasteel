/*
 * FUN_004f8a84 at 004f8a84
 * undefined __register FUN_004f8a84(int * param_1, int param_2)
 * Address ranges: 004f8a84-004f8b59
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f8a84(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_18;
  uint local_14;
  
  FUN_004f8308(param_1[0x82],param_2);
  iVar1 = FUN_0041300c(*(int *)(param_1[0x80] + 0x1f0));
  if (iVar1 != param_2) {
    FUN_00412f38(*(int **)(param_1[0x80] + 0x1f0));
    uVar2 = param_2 - 1;
    if (SBORROW4(param_2,1)) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    if (-1 < (int)uVar2) {
      local_18 = uVar2 + 1;
      local_14 = 0;
      do {
        iVar1 = FUN_004f6c4c(*(int *)(param_1[0x80] + 0x1f0));
        iVar3 = FUN_00432178(param_1);
        FUN_004f8334((int *)param_1[0x82],local_14,iVar3 / param_2);
        FUN_004f6b78(iVar1,'\x01');
        iVar3 = FUN_004f8944((int)param_1,local_14);
        FUN_004f6bb0(iVar1,iVar3);
        local_14 = local_14 + 1;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
  }
  (**(code **)(*param_1 + 0xc0))();
  return;
}

