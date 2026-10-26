/*
 * FUN_005394e4 at 005394e4
 * undefined __register FUN_005394e4(undefined4 param_1, int param_2)
 * Address ranges: 005394e4-0053951a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005394e4(undefined4 param_1,int param_2)

{
  if (*(int *)(param_2 + 0x68) != 0) {
    FUN_00539690(param_1,param_2);
  }
  FUN_00403094(*(int **)(param_2 + 0x68));
  *(undefined4 *)(param_2 + 0x68) = 0;
  return;
}

