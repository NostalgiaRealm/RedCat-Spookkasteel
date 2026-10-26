/*
 * FUN_004a825c at 004a825c
 * undefined __register FUN_004a825c(int param_1, int param_2)
 * Address ranges: 004a825c-004a82e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a825c(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined *puStack_30;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  local_14 = 0;
  puStack_18 = (undefined1 *)0x4a8278;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4(param_2);
  puStack_1c = &LAB_004a82e6;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  if (local_8 != 0) {
    puStack_18 = &stack0xfffffffc;
    FUN_00409c08(local_8,8,&local_14);
    puStack_30 = &DAT_004a8308;
    FUN_004040f0(&local_10,4);
    FUN_00403d94(local_10);
  }
  *in_FS_OFFSET = puStack_30;
  FUN_00403dd4(&local_14,3);
  return;
}

