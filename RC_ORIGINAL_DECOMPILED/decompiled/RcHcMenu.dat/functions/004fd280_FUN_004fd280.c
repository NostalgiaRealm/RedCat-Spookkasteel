/*
 * FUN_004fd280 at 004fd280
 * undefined __register FUN_004fd280(int param_1, char param_2)
 * Address ranges: 004fd280-004fd2b8;004fd2d7-004fd348
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004fd280(int param_1,char param_2)

{
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 uStack_2c;
  undefined *puStack_28;
  undefined1 *puStack_24;
  
  puStack_24 = &stack0xfffffffc;
  puStack_28 = &DAT_004fd2b9;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  FUN_0040ab80(*(undefined **)(param_1 + 0x250));
  *in_FS_OFFSET = uStack_2c;
  if ((param_2 == '\0') || (*(int *)(param_1 + 0x250) != 0)) {
    if (*(char *)(param_1 + 0x270) == '\0') {
      *(double *)(param_1 + 0x260) = (double)in_ST0;
      *(undefined1 *)(param_1 + 0x270) = 1;
    }
    else {
      *(double *)(param_1 + 0x268) = (double)in_ST0;
      *(undefined1 *)(param_1 + 0x271) = 1;
    }
  }
  puStack_24 = (undefined1 *)0x4fd342;
  FUN_00403db0((int *)(param_1 + 0x250));
  return;
}

