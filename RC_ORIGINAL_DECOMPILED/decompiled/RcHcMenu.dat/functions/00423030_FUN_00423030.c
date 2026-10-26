/*
 * FUN_00423030 at 00423030
 * undefined __register FUN_00423030(int param_1)
 * Address ranges: 00423030-0042307a;00423099-004230a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00423030(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int local_8;
  
  local_10 = *(undefined4 **)(param_1 + 4);
  if (local_10 == (undefined4 *)0x0) {
    return;
  }
  puStack_14 = (undefined *)0x42304c;
  local_c = local_10;
  local_8 = param_1;
  FUN_00422e64(param_1);
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  *(undefined4 *)(local_8 + 4) = *local_10;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &DAT_00423082;
  uStack_18 = 0x42307a;
  FUN_00422e70(local_8);
  return;
}

