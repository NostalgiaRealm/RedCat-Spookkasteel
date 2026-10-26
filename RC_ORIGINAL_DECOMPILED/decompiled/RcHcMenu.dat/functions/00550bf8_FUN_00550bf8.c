/*
 * FUN_00550bf8 at 00550bf8
 * undefined __register FUN_00550bf8(int param_1, int param_2, int * param_3)
 * Address ranges: 00550bf8-00550c74
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00550bf8(int param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int local_1c;
  int local_14;
  
  FUN_00403db0(param_3);
  iVar1 = FUN_0045ba40(*(int *)(param_1 + 4));
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_1c = uVar2 + 1;
    local_14 = 0;
    do {
      piVar3 = (int *)(**(code **)**(undefined4 **)(param_1 + 4))
                                (*(undefined4 **)(param_1 + 4),local_14);
      iVar1 = FUN_00403224(piVar3,(int)&DAT_005505b8);
      if (*(int *)(iVar1 + 4) == param_2) {
        FUN_00403e04(param_3,*(undefined4 **)(iVar1 + 8));
        return;
      }
      local_14 = local_14 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  return;
}

