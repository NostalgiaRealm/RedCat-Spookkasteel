/*
 * FUN_00403a4c at 00403a4c
 * undefined __register FUN_00403a4c(void)
 * Address ranges: 00403a4c-00403a70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00403a4c(void)

{
  int *piVar1;
  int *in_FS_OFFSET;
  
  piVar1 = (int *)*in_FS_OFFSET;
  if (DAT_005734a8 == piVar1) {
    *in_FS_OFFSET = *DAT_005734a8;
    return;
  }
  while( true ) {
    if (piVar1 == (int *)0xffffffff) {
      return;
    }
    if ((int *)*piVar1 == DAT_005734a8) break;
    piVar1 = (int *)*piVar1;
  }
  *piVar1 = *DAT_005734a8;
  return;
}

