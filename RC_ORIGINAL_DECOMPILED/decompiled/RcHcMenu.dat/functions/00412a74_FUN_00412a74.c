/*
 * FUN_00412a74 at 00412a74
 * undefined __register FUN_00412a74(int * param_1, undefined4 * param_2)
 * Address ranges: 00412a74-00412a85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00412a74(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(param_2,param_1);
    return;
  }
  FUN_00412a88(param_1,(int *)0x0);
  return;
}

