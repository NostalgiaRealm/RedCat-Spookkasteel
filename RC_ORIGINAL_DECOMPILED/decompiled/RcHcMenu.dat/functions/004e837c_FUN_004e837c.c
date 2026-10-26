/*
 * FUN_004e837c at 004e837c
 * undefined __register FUN_004e837c(int param_1, int * param_2)
 * Address ranges: 004e837c-004e83b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e837c(int param_1,int *param_2)

{
  if (*(char *)(param_1 + 0x54) == '\0') {
    FUN_00403e04(param_2,*(undefined4 **)(param_1 + 0x50));
  }
  else {
    FUN_00403e04(param_2,*(undefined4 **)PTR_DAT_00572450);
  }
  return;
}

