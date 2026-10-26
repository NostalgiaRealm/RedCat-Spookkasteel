/*
 * FUN_00455aa0 at 00455aa0
 * undefined __register FUN_00455aa0(int * param_1, undefined1 param_2)
 * Address ranges: 00455aa0-00455ab8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00455aa0(int *param_1,undefined1 param_2)

{
  *(undefined1 *)((int)param_1 + 0x1fa) = param_2;
  FUN_0043532c(param_1);
  (**(code **)(*param_1 + 0x74))();
  return;
}

