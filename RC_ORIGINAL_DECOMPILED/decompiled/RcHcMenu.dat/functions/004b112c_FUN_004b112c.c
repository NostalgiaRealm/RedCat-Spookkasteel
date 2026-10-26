/*
 * FUN_004b112c at 004b112c
 * undefined __register FUN_004b112c(int param_1, int * param_2)
 * Address ranges: 004b112c-004b117f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b112c(int param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_14;
  undefined4 local_10;
  int *local_c;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_14 = 0;
  puStack_1c = &LAB_004b1180;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_c = param_2;
  local_8 = param_1;
  FUN_004b0d64(param_1,param_2,&local_14);
  local_10 = (**(code **)(**(int **)(local_8 + 4) + 0x50))(*(int **)(local_8 + 4),local_14);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004b1187;
  puStack_1c = (undefined1 *)0x4b117f;
  FUN_00403db0(&local_14);
  return;
}

