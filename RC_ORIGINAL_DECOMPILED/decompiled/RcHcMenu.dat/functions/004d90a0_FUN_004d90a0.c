/*
 * FUN_004d90a0 at 004d90a0
 * undefined __register FUN_004d90a0(int * param_1, char param_2)
 * Address ranges: 004d90a0-004d90d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d90a0(int *param_1,char param_2)

{
  if ((char)param_1[0xb8] != param_2) {
    *(char *)(param_1 + 0xb8) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

