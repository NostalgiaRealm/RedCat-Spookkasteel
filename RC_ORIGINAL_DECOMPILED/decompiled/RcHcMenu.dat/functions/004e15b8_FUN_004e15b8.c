/*
 * FUN_004e15b8 at 004e15b8
 * undefined __register FUN_004e15b8(int * param_1, char param_2)
 * Address ranges: 004e15b8-004e15e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e15b8(int *param_1,char param_2)

{
  if (*(char *)((int)param_1 + 0x2e9) != param_2) {
    *(char *)((int)param_1 + 0x2e9) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

