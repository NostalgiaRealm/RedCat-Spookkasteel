/*
 * FUN_0051adcc at 0051adcc
 * undefined __register FUN_0051adcc(int param_1, undefined4 param_2)
 * Address ranges: 0051adcc-0051ae4e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051adcc(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_14;
  undefined4 local_c;
  
  iVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x2e0) + 0x1f0) + 0x14))();
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_14 = uVar3 + 1;
    local_c = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x2e0) + 0x1f0);
      iVar2 = *piVar1;
      iVar2 = (**(code **)(iVar2 + 0x18))(piVar1,local_c,iVar2,param_2);
      if (*(char *)(iVar2 + 8) != '\0') {
        FUN_005196fc(*(int **)(param_1 + 0x2e0),local_c,'\x02');
      }
      local_c = local_c + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  FUN_0051a114(param_1);
  return;
}

