/*
 * FUN_004c2324 at 004c2324
 * undefined __register FUN_004c2324(int param_1)
 * Address ranges: 004c2324-004c237a;004c23c8-004c23dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004c2324(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  undefined4 local_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  int local_14;
  int *local_10;
  int *local_c;
  int local_8;
  
  puStack_124 = &stack0xfffffffc;
  puStack_130 = &stack0xfffffffc;
  local_14 = 0;
  puStack_128 = &LAB_004c23de;
  local_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_12c;
  local_10 = (int *)0x0;
  puStack_134 = &LAB_004c237b;
  uStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_138;
  local_8 = param_1;
  local_10 = FUN_004bf6e4((int *)&PTR_FUN_004bcbdc,'\x01',param_1);
  *in_FS_OFFSET = uStack_138;
  *in_FS_OFFSET = local_12c;
  puStack_124 = &LAB_004c23e5;
  puStack_128 = (undefined1 *)0x4c23dd;
  local_c = local_10;
  FUN_00403db0(&local_14);
  return;
}

