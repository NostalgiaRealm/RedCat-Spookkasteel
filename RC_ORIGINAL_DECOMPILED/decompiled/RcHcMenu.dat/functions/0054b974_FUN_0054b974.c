/*
 * FUN_0054b974 at 0054b974
 * undefined __register FUN_0054b974(int param_1)
 * Address ranges: 0054b974-0054b9b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054b974(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  int local_8;
  
  puStack_10 = (undefined1 *)0x54b985;
  local_8 = param_1;
  FUN_004041e4(param_1);
  puStack_14 = &LAB_0054b9b9;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_c = FUN_0054b894(DAT_00571f78,local_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0054b9c0;
  puStack_14 = (undefined1 *)0x54b9b8;
  FUN_00403db0(&local_8);
  return;
}

