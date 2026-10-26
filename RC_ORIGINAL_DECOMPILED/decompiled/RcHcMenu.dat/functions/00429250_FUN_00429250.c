/*
 * FUN_00429250 at 00429250
 * undefined __register FUN_00429250(int * param_1, char param_2)
 * Address ranges: 00429250-00429263
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00429250(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x4b]) {
    *(char *)(param_1 + 0x4b) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

