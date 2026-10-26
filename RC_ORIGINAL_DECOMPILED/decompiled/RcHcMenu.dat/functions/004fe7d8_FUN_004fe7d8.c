/*
 * FUN_004fe7d8 at 004fe7d8
 * undefined __register FUN_004fe7d8(int * param_1, int param_2)
 * Address ranges: 004fe7d8-004fe7f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004fe7d8(int *param_1,int param_2)

{
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) & 0xfffffffb;
  return;
}

