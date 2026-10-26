/*
 * FUN_00414728 at 00414728
 * undefined __register FUN_00414728(int * param_1, char param_2)
 * Address ranges: 00414728-00414743
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00414728(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[6]) {
    if (param_2 != '\0') {
      (**(code **)(*param_1 + 0x7c))();
    }
    *(char *)(param_1 + 6) = param_2;
  }
  return;
}

