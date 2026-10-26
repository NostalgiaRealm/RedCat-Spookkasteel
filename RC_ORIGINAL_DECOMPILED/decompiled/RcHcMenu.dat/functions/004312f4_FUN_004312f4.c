/*
 * FUN_004312f4 at 004312f4
 * undefined __register FUN_004312f4(void)
 * Address ranges: 004312f4-00431369;00431371-00431391
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004312f4(void)

{
  int iVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_10;
  undefined4 *local_c;
  int local_8;
  
  puStack_14 = (undefined1 *)0x431304;
  local_c = (undefined4 *)FUN_00412824(DAT_0057378c);
  puStack_18 = &LAB_00431392;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  iVar1 = local_c[2] + -1;
  if (-1 < local_c[2] + -1) {
    do {
      local_8 = iVar1;
      puStack_20 = (undefined1 *)0x43132f;
      local_10 = (int *)FUN_00412384(local_c,local_8);
      puStack_20 = (undefined1 *)0x43133a;
      cVar2 = FUN_0041cde4((int)local_10);
      if (cVar2 != '\0') {
        puStack_24 = &LAB_0043136a;
        uStack_28 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_28;
        puStack_20 = &stack0xfffffffc;
        FUN_00431474(local_10);
        *in_FS_OFFSET = uStack_28;
        puStack_20 = (undefined1 *)0x431371;
        puStack_24 = (undefined1 *)0x431369;
        FUN_0041ce40((int)local_10);
        return;
      }
      local_8 = local_8 + -1;
      iVar1 = local_8;
    } while (local_8 != -1);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00431399;
  puStack_18 = (undefined1 *)0x431391;
  FUN_00412888(DAT_0057378c);
  return;
}

