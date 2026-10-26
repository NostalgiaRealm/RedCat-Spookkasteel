/*
 * FUN_00433d7c at 00433d7c
 * undefined __register FUN_00433d7c(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 00433d7c-00433db1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00433d7c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  if (*(short *)(param_1 + 0xca) != 0) {
    (**(code **)(param_1 + 200))
              (*(undefined4 *)(param_1 + 0xcc),param_1,param_2,param_4,param_5,param_3);
  }
  return;
}

