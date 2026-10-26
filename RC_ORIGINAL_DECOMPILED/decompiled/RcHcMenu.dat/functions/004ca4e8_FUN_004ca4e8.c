/*
 * FUN_004ca4e8 at 004ca4e8
 * uint __register FUN_004ca4e8(int * param_1, int * param_2, int param_3)
 * Address ranges: 004ca4e8-004ca510
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_004ca4e8(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = FUN_004ca4a8(param_1);
  FUN_0043e910(param_1,uVar1,param_2,param_3);
  param_1[0x1f] = param_1[0x1f] + 1;
  return uVar1;
}

