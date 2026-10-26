/*
 * FUN_00476b74 at 00476b74
 * undefined __register FUN_00476b74(int param_1, int param_2, int param_3, undefined2 param_4)
 * Address ranges: 00476b74-00476b88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00476b74(int param_1,int param_2,int param_3,undefined2 param_4)

{
  *(undefined2 *)(param_2 + 0x12 + *(int *)(param_1 + 0x34) + param_3 * 2) = param_4;
  return;
}

