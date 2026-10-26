/*
 * FUN_004a4bf4 at 004a4bf4
 * undefined __register FUN_004a4bf4(int param_1, int param_2)
 * Address ranges: 004a4bf4-004a4c38
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a4bf4(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_c;
  int local_8;
  
  puStack_10 = (undefined1 *)0x4a4c08;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4(param_2);
  puStack_14 = &LAB_004a4c39;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_004a4324(local_8,0x4d,local_c);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004a4c40;
  puStack_14 = (undefined1 *)0x4a4c38;
  FUN_00403db0(&local_c);
  return;
}

