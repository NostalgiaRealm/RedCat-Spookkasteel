/*
 * FUN_0041363c at 0041363c
 * undefined __register FUN_0041363c(int * param_1)
 * Address ranges: 0041363c-0041364c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041363c(int *param_1)

{
  param_1[1] = param_1[1] + -1;
  if (param_1[1] == 0) {
    (**(code **)(*param_1 + 0x30))(param_1,0);
  }
  return;
}

