/*
 * FUN_00542de4 at 00542de4
 * undefined __register FUN_00542de4(int * param_1)
 * Address ranges: 00542de4-00542e3d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00542de4(int *param_1)

{
  if (param_1[0x8c] != 0) {
    FUN_00541a50(param_1,(int *)param_1[0x8c]);
    FUN_004efd24((int)param_1);
    FUN_00432800(param_1[0x9f]);
    *(undefined1 *)(param_1 + 0xa6) = 0;
    (**(code **)(*(int *)param_1[0x9f] + 0xd4))();
  }
  return;
}

