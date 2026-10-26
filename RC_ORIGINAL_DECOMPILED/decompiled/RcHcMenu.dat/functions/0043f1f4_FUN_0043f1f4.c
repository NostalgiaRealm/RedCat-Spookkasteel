/*
 * FUN_0043f1f4 at 0043f1f4
 * undefined __register FUN_0043f1f4(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0043f1f4-0043f20d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043f1f4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((char)param_2 != (char)param_1[0xd]) {
    *(char *)(param_1 + 0xd) = (char)param_2;
    FUN_00403270(param_1,param_2,param_3);
  }
  return;
}

