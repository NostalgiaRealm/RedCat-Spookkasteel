/*
 * FUN_00455a84 at 00455a84
 * undefined __register FUN_00455a84(int * param_1, undefined1 param_2)
 * Address ranges: 00455a84-00455a9c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00455a84(int *param_1,undefined1 param_2)

{
  *(undefined1 *)((int)param_1 + 0x1f9) = param_2;
  FUN_0043532c(param_1);
  (**(code **)(*param_1 + 0x74))();
  return;
}

