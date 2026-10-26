/*
 * FUN_00503670 at 00503670
 * undefined __register FUN_00503670(int * param_1, int param_2)
 * Address ranges: 00503670-00503691
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00503670(int *param_1,int param_2)

{
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 1;
  return;
}

