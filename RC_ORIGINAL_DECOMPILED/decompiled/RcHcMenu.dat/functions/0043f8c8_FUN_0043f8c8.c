/*
 * FUN_0043f8c8 at 0043f8c8
 * undefined __register FUN_0043f8c8(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0043f8c8-0043f8e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043f8c8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if (0 < param_1[0x14]) {
    param_1[0x14] = param_1[0x14] + -1;
  }
  if ((char)param_1[0x13] != '\0') {
    *(undefined1 *)(param_1 + 0x13) = 0;
    FUN_00403270(param_1,param_2,param_3);
  }
  return;
}

