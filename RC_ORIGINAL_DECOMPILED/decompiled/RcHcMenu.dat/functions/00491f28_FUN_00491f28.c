/*
 * FUN_00491f28 at 00491f28
 * undefined __register FUN_00491f28(int param_1, int * param_2)
 * Address ranges: 00491f28-00491f88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00491f28(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = FUN_0045da14(*(int *)(param_1 + 0x2c));
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_14 = uVar2 + 1;
    local_10 = 0;
    do {
      iVar1 = FUN_00496dfc(*(int **)(param_1 + 0x2c),local_10);
      if ((*(byte *)(iVar1 + 0x44) & 2) == 0) {
        FUN_004972bc(param_2,local_10);
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}

