/*
 * FUN_00521ab8 at 00521ab8
 * undefined __register FUN_00521ab8(int * param_1)
 * Address ranges: 00521ab8-00521b10
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00521ab8(int *param_1)

{
  FUN_00435a24(param_1);
  (**(code **)(*(int *)param_1[0xa1] + 0x60))((int *)param_1[0xa1],param_1);
  (**(code **)(*(int *)param_1[0x9f] + 0x60))((int *)param_1[0x9f],param_1[0xa1]);
  (**(code **)(*(int *)param_1[0x9d] + 0x60))((int *)param_1[0x9d],param_1);
  FUN_0051e92c((int *)param_1[0x9f]);
  return;
}

