/*
 * FUN_0046e8c4 at 0046e8c4
 * undefined __register FUN_0046e8c4(int * param_1, char param_2)
 * Address ranges: 0046e8c4-0046e8d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046e8c4(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x17)) {
    *(char *)((int)param_1 + 0x17) = param_2;
    (**(code **)(*param_1 + 0x20))();
  }
  return;
}

