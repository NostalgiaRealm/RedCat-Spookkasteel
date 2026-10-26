/*
 * FUN_00405c08 at 00405c08
 * undefined4 __register FUN_00405c08(short * param_1)
 * Address ranges: 00405c08-00405c28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00405c08(short *param_1)

{
  if ((*param_1 != 0) && (((*param_1 != 9 && (*param_1 != 0xd)) || (*(int *)(param_1 + 4) != 0)))) {
    return 0;
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

