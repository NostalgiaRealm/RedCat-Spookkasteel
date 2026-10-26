/*
 * FUN_004fec0c at 004fec0c
 * undefined __register FUN_004fec0c(int * param_1, char param_2)
 * Address ranges: 004fec0c-004fec3d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004fec0c(int *param_1,char param_2)

{
  if (*(char *)((int)param_1 + 0x215) != param_2) {
    *(char *)((int)param_1 + 0x215) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

