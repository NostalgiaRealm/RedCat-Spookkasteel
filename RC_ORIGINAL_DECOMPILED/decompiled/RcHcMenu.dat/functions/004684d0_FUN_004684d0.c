/*
 * FUN_004684d0 at 004684d0
 * undefined __register FUN_004684d0(int param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 004684d0-00468560
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004684d0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_10;
  int local_c;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_00468561;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 8);
  local_8 = param_1;
  if (-1 < iVar2 + -1) {
    local_c = 0;
    do {
      iVar1 = FUN_00468730(local_8,local_c);
      FUN_00469390(iVar1,&local_10);
      (**(code **)(**(int **)(param_4 + -4) + 0x38))(*(int **)(param_4 + -4),local_10,iVar1);
      if ((byte)(*(char *)(iVar1 + 0x34) - 0x1aU) < 2) {
        FUN_004684d0(*(int *)(iVar1 + 0xd4),extraout_EDX,extraout_ECX,param_4);
      }
      local_c = local_c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00468568;
  puStack_24 = (undefined1 *)0x468560;
  FUN_00403db0(&local_10);
  return;
}

