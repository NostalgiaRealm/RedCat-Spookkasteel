/*
 * FUN_004cfd80 at 004cfd80
 * undefined4 __register FUN_004cfd80(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 004cfd80-004cfda5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004cfd80(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  FUN_004cf8cc(param_1,param_2,param_3);
  uVar1 = (**(code **)(*(int *)param_1[4] + 0x14))();
  return uVar1;
}

