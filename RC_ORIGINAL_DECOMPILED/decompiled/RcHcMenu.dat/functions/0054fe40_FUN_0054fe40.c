/*
 * FUN_0054fe40 at 0054fe40
 * undefined __register FUN_0054fe40(int param_1)
 * Address ranges: 0054fe40-0054fead
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054fe40(int param_1)

{
  int iVar1;
  int *piVar2;
  uint local_10;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 8);
  local_10 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    local_10 = thunk_FUN_00402874(local_10);
  }
  if (-1 < (int)local_10) {
    do {
      piVar2 = (int *)FUN_00412384(*(undefined4 **)(param_1 + 0x1c),local_10);
      (**(code **)(*(int *)piVar2[1] + 0x48))();
      FUN_00412224(*(int **)(param_1 + 0x1c),local_10);
      FUN_00403094(piVar2);
      local_10 = local_10 - 1;
    } while (local_10 != 0xffffffff);
  }
  FUN_005500a0(param_1,0);
  return;
}

