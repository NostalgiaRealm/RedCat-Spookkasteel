/*
 * FUN_00455abc at 00455abc
 * undefined __register FUN_00455abc(int * param_1, int param_2)
 * Address ranges: 00455abc-00455ad4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00455abc(int *param_1,int param_2)

{
  param_1[0x7f] = param_2;
  FUN_0043532c(param_1);
  (**(code **)(*param_1 + 0x74))();
  return;
}

