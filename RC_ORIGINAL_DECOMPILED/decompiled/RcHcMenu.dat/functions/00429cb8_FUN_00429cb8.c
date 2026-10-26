/*
 * FUN_00429cb8 at 00429cb8
 * undefined __register FUN_00429cb8(int * param_1)
 * Address ranges: 00429cb8-00429cdc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00429cb8(int *param_1)

{
  FUN_00437f88(param_1);
  if (((*(byte *)((int)param_1 + 0x41) & 2) != 0) &&
     (((*(byte *)(param_1 + 8) & 0x10) == 0 || ((*(byte *)(param_1 + 8) & 1) == 0)))) {
    FUN_00429b40(param_1);
  }
  return;
}

