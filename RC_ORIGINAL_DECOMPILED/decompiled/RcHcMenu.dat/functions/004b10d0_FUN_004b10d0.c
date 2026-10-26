/*
 * FUN_004b10d0 at 004b10d0
 * undefined __register FUN_004b10d0(int param_1, int param_2)
 * Address ranges: 004b10d0-004b112a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b10d0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 local_10;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x14))();
  local_10 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    local_10 = thunk_FUN_00402874(local_10);
  }
  if (-1 < (int)local_10) {
    do {
      piVar2 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x18))(*(int **)(param_1 + 4),local_10)
      ;
      uVar3 = FUN_0040320c(piVar2,param_2);
      if ((char)uVar3 != '\0') {
        FUN_004b1238(param_1,local_10);
      }
      local_10 = local_10 - 1;
    } while (local_10 != 0xffffffff);
  }
  return;
}

