/*
 * FUN_0044fcbc at 0044fcbc
 * undefined __register FUN_0044fcbc(void)
 * Address ranges: 0044fcbc-0044fcec;0044fd07-0044fd0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044fcbc(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  if (DAT_005737d4 != 0) {
    puStack_18 = &LAB_0044fced;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    FUN_00451e08(DAT_005737d4);
    *in_FS_OFFSET = uStack_1c;
  }
  return;
}

