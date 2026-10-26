/*
 * FUN_00543134 at 00543134
 * undefined __register FUN_00543134(int param_1)
 * Address ranges: 00543134-00543178
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00543134(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_10;
  undefined1 local_9;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_10 = 0;
  puStack_18 = &LAB_00543179;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_8 = param_1;
  FUN_005418bc(param_1,&local_10);
  local_9 = local_10 == 0;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00543180;
  puStack_18 = (undefined1 *)0x543178;
  FUN_00403db0(&local_10);
  return;
}

