/*
 * FUN_00413dec at 00413dec
 * undefined __register FUN_00413dec(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00413dec-00413e1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00413dec(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2);
  (**(code **)(*param_1 + 0x44))(param_1,param_2);
  FUN_00413c0c(param_1,param_2,param_3,uVar1);
  return;
}

