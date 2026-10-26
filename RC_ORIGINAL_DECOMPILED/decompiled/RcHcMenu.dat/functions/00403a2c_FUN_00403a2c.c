/*
 * FUN_00403a2c at 00403a2c
 * undefined __register FUN_00403a2c(void)
 * Address ranges: 00403a2c-00403a49
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00403a2c(void)

{
  int iVar1;
  int unaff_EBP;
  int *in_FS_OFFSET;
  
  DAT_005734a8 = (int *)(unaff_EBP + -0xc);
  iVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)DAT_005734a8;
  *DAT_005734a8 = iVar1;
  *(undefined1 **)(unaff_EBP + -8) = &LAB_00403990;
  *(int *)(unaff_EBP + -4) = unaff_EBP;
  return;
}

