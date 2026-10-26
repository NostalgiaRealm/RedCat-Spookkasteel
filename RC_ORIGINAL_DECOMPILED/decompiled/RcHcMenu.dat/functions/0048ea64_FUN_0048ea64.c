/*
 * FUN_0048ea64 at 0048ea64
 * undefined __register FUN_0048ea64(undefined4 param_1, int param_2, int * param_3)
 * Address ranges: 0048ea64-0048ea98
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048ea64(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  byte local_110 [256];
  int *local_10;
  int local_c;
  undefined4 local_8;
  
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  iVar1 = (**(code **)(param_2 + 0x3c))();
  FUN_00402fe0(iVar1,local_110);
  FUN_00403fd4(local_10,local_110);
  return;
}

