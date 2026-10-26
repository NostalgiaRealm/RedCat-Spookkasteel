/*
 * FUN_005071e4 at 005071e4
 * undefined __register FUN_005071e4(int param_1)
 * Address ranges: 005071e4-00507265
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005071e4(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 local_c;
  
  piVar1 = (int *)FUN_0050421c(param_1);
  iVar2 = (**(code **)(*piVar1 + 0x14))();
  local_c = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    local_c = thunk_FUN_00402874(local_c);
  }
  if (-1 < (int)local_c) {
    do {
      piVar1 = (int *)FUN_0050421c(param_1);
      iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,local_c);
      if (iVar2 != 0) {
        piVar1 = (int *)FUN_0050421c(param_1);
        piVar1 = (int *)(**(code **)(*piVar1 + 0x18))(piVar1,local_c);
        FUN_00403094(piVar1);
        piVar1 = (int *)FUN_0050421c(param_1);
        (**(code **)(*piVar1 + 0x24))(piVar1,local_c,0);
      }
      piVar1 = (int *)FUN_0050421c(param_1);
      (**(code **)(*piVar1 + 0x44))(piVar1,local_c);
      local_c = local_c - 1;
    } while (local_c != 0xffffffff);
  }
  return;
}

