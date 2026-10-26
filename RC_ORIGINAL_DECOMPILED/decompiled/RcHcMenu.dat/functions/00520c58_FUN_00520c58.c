/*
 * FUN_00520c58 at 00520c58
 * undefined __register FUN_00520c58(int param_1, int * param_2)
 * Address ranges: 00520c58-00520c94
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00520c58(int param_1,int *param_2)

{
  if (*(char *)(param_1 + 0x20c) == '\0') {
    FUN_00403e04(param_2,*(undefined4 **)(param_1 + 0x230));
  }
  else {
    FUN_00403e04(param_2,*(undefined4 **)(param_1 + 8));
  }
  return;
}

