/*
 * FUN_004b0344 at 004b0344
 * undefined __register FUN_004b0344(undefined4 param_1, int * param_2)
 * Address ranges: 004b0344-004b03a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b0344(undefined4 param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_10;
  int *local_c;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_10 = 0;
  puStack_18 = &LAB_004b03a3;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_c = param_2;
  local_8 = param_1;
  FUN_00409bd8(param_1,&local_10);
  FUN_004040f0(local_c,4);
  *in_FS_OFFSET = &DAT_004b03d8;
  FUN_00403db0(&local_10);
  return;
}

