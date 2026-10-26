/*
 * FUN_0050b3c0 at 0050b3c0
 * undefined __register FUN_0050b3c0(int * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 0050b3c0-0050b3f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050b3c0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  iVar1 = FUN_00403224((int *)param_1[0x8d],(int)&PTR_FUN_00509aec);
  FUN_00509ec8(iVar1,extraout_EDX,extraout_ECX,param_4,param_5);
  (**(code **)(*param_1 + 0xe8))();
  return;
}

