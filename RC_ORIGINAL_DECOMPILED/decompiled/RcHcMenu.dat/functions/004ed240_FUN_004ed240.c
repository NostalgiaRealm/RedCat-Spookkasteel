/*
 * FUN_004ed240 at 004ed240
 * undefined __register FUN_004ed240(int * param_1)
 * Address ranges: 004ed240-004ed296;004ed2e4-004ed2f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ed240(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  undefined4 local_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_124 = &stack0xfffffffc;
  puStack_130 = &stack0xfffffffc;
  local_14 = 0;
  puStack_128 = &LAB_004ed2fa;
  local_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_12c;
  local_10 = 0;
  puStack_134 = &LAB_004ed297;
  uStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_138;
  local_8 = param_1;
  local_10 = FUN_004ebb88((int *)&LAB_004ea3e8,'\x01',param_1);
  *in_FS_OFFSET = uStack_138;
  *in_FS_OFFSET = local_12c;
  puStack_124 = &LAB_004ed301;
  puStack_128 = (undefined1 *)0x4ed2f9;
  local_c = local_10;
  FUN_00403db0(&local_14);
  return;
}

