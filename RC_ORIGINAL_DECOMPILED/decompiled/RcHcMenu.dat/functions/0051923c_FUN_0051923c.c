/*
 * FUN_0051923c at 0051923c
 * undefined __register FUN_0051923c(int * param_1)
 * Address ranges: 0051923c-00519265
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051923c(int *param_1)

{
  FUN_0042cb38(param_1);
  if ((int *)param_1[0x92] != (int *)0x0) {
    FUN_00403094((int *)param_1[0x92]);
    param_1[0x92] = 0;
  }
  FUN_00519314((int)param_1);
  return;
}

