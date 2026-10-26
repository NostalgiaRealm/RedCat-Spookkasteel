/*
 * FUN_004f8430 at 004f8430
 * undefined __register FUN_004f8430(int * param_1, char param_2)
 * Address ranges: 004f8430-004f8461
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f8430(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0xf5]) {
    *(char *)(param_1 + 0xf5) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

