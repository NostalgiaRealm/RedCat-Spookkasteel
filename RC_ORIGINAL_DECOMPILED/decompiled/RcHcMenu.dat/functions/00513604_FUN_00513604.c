/*
 * FUN_00513604 at 00513604
 * undefined __register FUN_00513604(int * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 00513604-00513642
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00513604(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    iVar1 = FUN_00403224((int *)param_1[0x8d],(int)&PTR_FUN_00512d68);
    FUN_005130d4(iVar1,extraout_EDX,extraout_ECX,param_4,param_5);
    (**(code **)(*param_1 + 0xe8))();
  }
  return;
}

