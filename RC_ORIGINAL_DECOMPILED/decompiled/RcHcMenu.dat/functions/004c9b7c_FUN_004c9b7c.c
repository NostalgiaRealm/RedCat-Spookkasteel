/*
 * FUN_004c9b7c at 004c9b7c
 * undefined __register FUN_004c9b7c(int * param_1, char param_2)
 * Address ranges: 004c9b7c-004c9bad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004c9b7c(int *param_1,char param_2)

{
  if (*(char *)((int)param_1 + 0x209) != param_2) {
    *(char *)((int)param_1 + 0x209) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

