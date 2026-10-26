/*
 * FUN_004c8be4 at 004c8be4
 * undefined __register FUN_004c8be4(int * param_1, char param_2)
 * Address ranges: 004c8be4-004c8c41
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004c8be4(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x133)) {
    *(char *)((int)param_1 + 0x133) = param_2;
    if (param_2 == '\0') {
      param_1[0x10] = param_1[0x10] | 0x40;
    }
    else {
      param_1[0x10] = param_1[0x10] & 0xffffffbf;
    }
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

