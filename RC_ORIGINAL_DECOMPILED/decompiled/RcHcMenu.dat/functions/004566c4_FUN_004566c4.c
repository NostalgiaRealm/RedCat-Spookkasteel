/*
 * FUN_004566c4 at 004566c4
 * undefined __register FUN_004566c4(int * param_1, undefined1 param_2)
 * Address ranges: 004566c4-004566cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004566c4(int *param_1,undefined1 param_2)

{
  *(undefined1 *)((int)param_1 + 0x12d) = param_2;
  (**(code **)(*param_1 + 0x78))();
  return;
}

