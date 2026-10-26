/*
 * FUN_004f0000 at 004f0000
 * undefined __register FUN_004f0000(int * param_1)
 * Address ranges: 004f0000-004f001c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f0000(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0xcc))();
  (**(code **)(*piVar1 + 0xb0))();
  return;
}

