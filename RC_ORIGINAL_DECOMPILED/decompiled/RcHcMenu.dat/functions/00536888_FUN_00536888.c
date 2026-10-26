/*
 * FUN_00536888 at 00536888
 * int * __register FUN_00536888(int param_1, undefined4 * param_2, undefined4 param_3)
 * Address ranges: 00536888-00536906
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00536888(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_18;
  int local_14;
  
  piVar1 = FUN_005363e0(&PTR_FUN_005361dc,param_2,param_3);
  iVar2 = FUN_0045ba40(*(int *)(param_1 + 4));
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_18 = uVar3 + 1;
    local_14 = 0;
    do {
      iVar2 = (**(code **)**(undefined4 **)(param_1 + 4))(*(undefined4 **)(param_1 + 4),local_14);
      iVar2 = *(int *)(iVar2 + 4);
      iVar4 = FUN_00402fdc(param_2);
      if (iVar2 == iVar4) {
        iVar2 = (**(code **)**(undefined4 **)(param_1 + 4))(*(undefined4 **)(param_1 + 4),local_14);
        return *(int **)(iVar2 + 8);
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  return piVar1;
}

