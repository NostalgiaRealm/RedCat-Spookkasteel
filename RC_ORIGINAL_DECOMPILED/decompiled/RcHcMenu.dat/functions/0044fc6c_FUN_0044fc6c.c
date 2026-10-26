/*
 * FUN_0044fc6c at 0044fc6c
 * undefined __register FUN_0044fc6c(int param_1, int * param_2)
 * Address ranges: 0044fc6c-0044fc9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044fc6c(int param_1,int *param_2)

{
  while( true ) {
    if (param_1 == 0) {
      FUN_00403db0(param_2);
      return;
    }
    if (*(int *)(param_1 + 0x70) != 0) break;
    param_1 = *(int *)(param_1 + 0x24);
  }
  FUN_00403e04(param_2,*(undefined4 **)(param_1 + 0x70));
  return;
}

