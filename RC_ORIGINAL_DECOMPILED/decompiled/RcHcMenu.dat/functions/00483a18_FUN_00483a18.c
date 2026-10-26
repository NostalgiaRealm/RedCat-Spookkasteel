/*
 * FUN_00483a18 at 00483a18
 * undefined __register FUN_00483a18(int * param_1, undefined4 * param_2, undefined1 param_3)
 * Address ranges: 00483a18-00483a3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00483a18(int *param_1,undefined4 *param_2,undefined1 param_3)

{
  FUN_00482c54(param_1);
  FUN_00403e04(param_1 + 0x23,param_2);
  *(undefined1 *)((int)param_1 + 0x65) = param_3;
  return;
}

