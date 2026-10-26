/*
 * FUN_005009a8 at 005009a8
 * undefined __register FUN_005009a8(int * param_1, undefined4 param_2)
 * Address ranges: 005009a8-005009ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005009a8(int *param_1,undefined4 param_2)

{
  FUN_00429c84(param_1,param_2);
  FUN_004c8be4((int *)param_1[0x88],*(byte *)(param_1 + 0x4e) ^ 1);
  *(undefined1 *)(param_1[0x88] + 0x14c) = 0;
  return;
}

