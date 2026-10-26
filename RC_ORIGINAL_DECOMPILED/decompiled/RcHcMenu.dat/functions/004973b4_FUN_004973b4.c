/*
 * FUN_004973b4 at 004973b4
 * undefined __register FUN_004973b4(void)
 * Address ranges: 004973b4-004973e2;00497407-0049740b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004973b4(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  puStack_18 = &DAT_004973e3;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00403094(DAT_00571598);
  DAT_00571598 = (int *)0x0;
  *in_FS_OFFSET = uStack_1c;
  return;
}

