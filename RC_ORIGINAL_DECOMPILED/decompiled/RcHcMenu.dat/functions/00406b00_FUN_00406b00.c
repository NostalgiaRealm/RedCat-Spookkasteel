/*
 * FUN_00406b00 at 00406b00
 * undefined __register FUN_00406b00(int * param_1)
 * Address ranges: 00406b00-00406b0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00406b00(int *param_1)

{
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  return;
}

