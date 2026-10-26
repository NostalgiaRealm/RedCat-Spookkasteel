/*
 * FUN_004c88a8 at 004c88a8
 * undefined __register FUN_004c88a8(int * param_1, int * param_2)
 * Address ranges: 004c88a8-004c88da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004c88a8(int *param_1,int *param_2)

{
  FUN_004c70b4(param_1[0x4d],param_2);
  *(undefined1 *)(param_1 + 0x51) = 1;
  (**(code **)(*param_1 + 0x74))();
  return;
}

