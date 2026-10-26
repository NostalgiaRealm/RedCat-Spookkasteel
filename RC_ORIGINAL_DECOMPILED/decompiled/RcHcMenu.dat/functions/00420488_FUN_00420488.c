/*
 * FUN_00420488 at 00420488
 * undefined __register FUN_00420488(int * param_1)
 * Address ranges: 00420488-004204a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00420488(int *param_1)

{
  if ((param_1 != (int *)0x0) && (param_1[1] = param_1[1] + -1, param_1[1] == 0)) {
    (**(code **)*param_1)();
    FUN_00403094(param_1);
  }
  return;
}

