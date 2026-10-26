/*
 * FUN_004b427c at 004b427c
 * undefined __register FUN_004b427c(int * param_1)
 * Address ranges: 004b427c-004b42c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b427c(int *param_1)

{
  if (param_1[0xf] != 0) {
    FUN_004b4034(param_1,param_1[0xf]);
    FUN_0048ed90((int *)param_1[10],*(int **)(param_1[0xf] + 0x14));
    FUN_0048ed90((int *)param_1[10],*(int **)(param_1[0xf] + 0x10));
  }
  return;
}

