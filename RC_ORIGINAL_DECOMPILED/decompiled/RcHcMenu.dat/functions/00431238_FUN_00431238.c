/*
 * FUN_00431238 at 00431238
 * undefined __register FUN_00431238(void)
 * Address ranges: 00431238-004312aa;004312c8-004312e7;004312ef-004312f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00431238(void)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int *local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  puStack_18 = (undefined1 *)0x431248;
  local_c = (undefined4 *)FUN_00412824(DAT_0057378c);
  puStack_1c = &LAB_004312e8;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (-1 < local_c[2] + -1) {
    local_8 = 0;
    puStack_18 = &stack0xfffffffc;
    local_10 = local_c[2];
    do {
      puStack_24 = (undefined1 *)0x43127a;
      local_14 = (int *)FUN_00412384(local_c,local_8);
      puStack_24 = (undefined1 *)0x431285;
      cVar1 = FUN_0041cde4((int)local_14);
      if (cVar1 != '\0') {
        puStack_28 = &LAB_004312c1;
        uStack_2c = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_2c;
        puStack_24 = &stack0xfffffffc;
        FUN_00431474(local_14);
        FUN_004038cc();
        puStack_24 = (undefined1 *)0x4312a9;
        FUN_004038cc();
        return;
      }
      local_8 = local_8 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = (undefined1 *)0x4312ef;
  puStack_1c = (undefined1 *)0x4312e7;
  FUN_00412888(DAT_0057378c);
  return;
}

