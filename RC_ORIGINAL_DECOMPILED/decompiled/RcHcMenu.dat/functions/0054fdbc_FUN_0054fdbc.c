/*
 * FUN_0054fdbc at 0054fdbc
 * undefined __register FUN_0054fdbc(int param_1)
 * Address ranges: 0054fdbc-0054fe3e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054fdbc(int param_1)

{
  int iVar1;
  int *piVar2;
  byte local_14;
  uint local_10;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 8);
  local_10 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    local_10 = thunk_FUN_00402874(local_10);
  }
  if (-1 < (int)local_10) {
    do {
      piVar2 = (int *)FUN_00412384(*(undefined4 **)(param_1 + 0x1c),local_10);
      (**(code **)(*(int *)piVar2[1] + 0x24))();
      if ((local_14 & 1) == 0) {
        FUN_00412224(*(int **)(param_1 + 0x1c),local_10);
        if (*(int **)(param_1 + 4) == piVar2) {
          FUN_005500a0(param_1,0);
        }
        FUN_00403094(piVar2);
      }
      local_10 = local_10 - 1;
    } while (local_10 != 0xffffffff);
  }
  return;
}

