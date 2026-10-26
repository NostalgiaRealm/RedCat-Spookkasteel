/*
 * FUN_004f9b0c at 004f9b0c
 * undefined __register FUN_004f9b0c(int * param_1, int param_2)
 * Address ranges: 004f9b0c-004f9b42
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f9b0c(int *param_1,int param_2)

{
  param_1[0x89] = param_2;
  FUN_004f9a64(param_1);
  (**(code **)(*param_1 + 0xd4))();
  FUN_004297c4(param_1);
  return;
}

