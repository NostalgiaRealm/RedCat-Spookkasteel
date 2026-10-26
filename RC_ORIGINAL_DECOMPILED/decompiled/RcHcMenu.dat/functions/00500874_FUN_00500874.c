/*
 * FUN_00500874 at 00500874
 * undefined __register FUN_00500874(int * param_1, byte param_2)
 * Address ranges: 00500874-0050089f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00500874(int *param_1,byte param_2)

{
  FUN_004c89b8((int *)param_1[0x88],param_2);
  (**(code **)(*param_1 + 0xe0))();
  return;
}

