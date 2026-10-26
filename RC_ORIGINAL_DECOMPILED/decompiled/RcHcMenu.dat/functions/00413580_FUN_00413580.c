/*
 * FUN_00413580 at 00413580
 * undefined __register FUN_00413580(int * param_1)
 * Address ranges: 00413580-00413596
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00413580(int *param_1)

{
  if (param_1[1] == 0) {
    (**(code **)(*param_1 + 0x30))(param_1,1);
  }
  param_1[1] = param_1[1] + 1;
  return;
}

