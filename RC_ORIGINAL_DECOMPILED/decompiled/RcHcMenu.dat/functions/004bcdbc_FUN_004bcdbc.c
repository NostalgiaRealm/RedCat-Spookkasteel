/*
 * FUN_004bcdbc at 004bcdbc
 * undefined __register FUN_004bcdbc(void)
 * Address ranges: 004bcdbc-004bce02;004bce32-004bce4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004bcdbc(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_004bce50;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  if (DAT_005719f4 == 0) {
    puStack_2c = &LAB_004bce03;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    puStack_28 = &stack0xfffffffc;
    DAT_005719f4 = FUN_004bc87c();
    *in_FS_OFFSET = uStack_30;
  }
  local_8 = DAT_005719f4;
  *in_FS_OFFSET = local_24;
  puStack_1c = &LAB_004bce57;
  puStack_20 = (undefined1 *)0x4bce4f;
  FUN_00403db0(&local_c);
  return;
}

