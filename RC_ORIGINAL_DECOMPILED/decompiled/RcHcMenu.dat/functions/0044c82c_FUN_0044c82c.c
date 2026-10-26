/*
 * FUN_0044c82c at 0044c82c
 * undefined __register FUN_0044c82c(int * param_1)
 * Address ranges: 0044c82c-0044c85a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044c82c(int *param_1)

{
  FUN_0044c7b0(0xb001,(int *)param_1[0x82],param_1);
  if (*(short *)((int)param_1 + 0x28a) != 0) {
    (*(code *)param_1[0xa2])(param_1[0xa3],param_1);
  }
  return;
}

