/*
 * FUN_00509440 at 00509440
 * undefined __register FUN_00509440(int * param_1, undefined4 param_2, undefined4 param_3, int param_4, int param_5)
 * Address ranges: 00509440-005094bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00509440(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  if ((double)CONCAT44(param_5,param_4) != *(double *)(param_1 + 0x9c)) {
    param_1[0x9c] = param_4;
    param_1[0x9d] = param_5;
    FUN_0040b090((short *)(param_1 + 0x9b),(ushort *)((int)param_1 + 0x26a),
                 (short *)(param_1 + 0x9a),param_1[0x9c],param_1[0x9d]);
    *(short *)(param_1 + 0x21e) = (short)param_1[0x9b];
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

