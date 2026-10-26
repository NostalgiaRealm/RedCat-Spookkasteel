/*
 * FUN_00532af8 at 00532af8
 * undefined __register FUN_00532af8(int * param_1, int * param_2)
 * Address ranges: 00532af8-00532b30
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00532af8(int *param_1,int *param_2)

{
  FUN_004ef3a0(param_1,param_2);
  param_2[1] = param_2[1] | 0x800000;
  param_2[2] = 0x88;
  param_2[9] = 0x800;
  return;
}

