/*
 * FUN_00483b78 at 00483b78
 * undefined __register FUN_00483b78(int * param_1, char param_2)
 * Address ranges: 00483b78-00483b8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00483b78(int *param_1,char param_2)

{
  if (((param_2 != *(char *)((int)param_1 + 0x61)) &&
      (*(char *)((int)param_1 + 0x61) = param_2, param_2 == '\0')) && (param_1[0x1b] == 0)) {
    FUN_00467184(param_1);
  }
  return;
}

