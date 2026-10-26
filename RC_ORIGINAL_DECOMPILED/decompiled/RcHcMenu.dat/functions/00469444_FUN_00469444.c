/*
 * FUN_00469444 at 00469444
 * uint __register FUN_00469444(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00469444-00469455
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_00469444(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_00469218(param_1,0,CONCAT31((int3)((uint)param_3 >> 8),1));
  return uVar1 ^ 1;
}

