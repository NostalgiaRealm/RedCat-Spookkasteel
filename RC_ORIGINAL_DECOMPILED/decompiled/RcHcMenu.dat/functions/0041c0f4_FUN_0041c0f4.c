/*
 * FUN_0041c0f4 at 0041c0f4
 * undefined __register FUN_0041c0f4(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0041c0f4-0041c107
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041c0f4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((char)param_2 != (char)param_1[6]) {
    *(char *)(param_1 + 6) = (char)param_2;
    FUN_00403270(param_1,param_2,param_3);
  }
  return;
}

