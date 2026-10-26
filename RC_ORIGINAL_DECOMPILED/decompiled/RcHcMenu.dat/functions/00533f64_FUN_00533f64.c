/*
 * FUN_00533f64 at 00533f64
 * undefined __register FUN_00533f64(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00533f64-00533fd9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00533f64(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[0x68];
  iVar2 = param_1[0x69];
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  FUN_0043262c((int *)param_1[0xaf],0,param_3);
  FUN_004fe610(param_1);
  (**(code **)(*param_1 + 0x74))();
  (**(code **)(*param_1 + 0xb0))();
  param_1[0x68] = iVar1;
  param_1[0x69] = iVar2;
  return;
}

