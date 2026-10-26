/*
 * FUN_004c8d50 at 004c8d50
 * undefined __register FUN_004c8d50(int * param_1, undefined4 param_2)
 * Address ranges: 004c8d50-004c8d78
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004c8d50(int *param_1,undefined4 param_2)

{
  (**(code **)(*(int *)param_1[0x4b] + 8))((int *)param_1[0x4b],param_2);
  (**(code **)(*param_1 + 0x74))();
  return;
}

