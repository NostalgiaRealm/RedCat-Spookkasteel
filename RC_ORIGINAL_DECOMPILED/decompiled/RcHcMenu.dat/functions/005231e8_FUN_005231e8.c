/*
 * FUN_005231e8 at 005231e8
 * undefined __register FUN_005231e8(int * param_1, int param_2)
 * Address ranges: 005231e8-00523209
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005231e8(int *param_1,int param_2)

{
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 1;
  return;
}

