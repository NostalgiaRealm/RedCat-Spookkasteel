/*
 * FUN_00510eb4 at 00510eb4
 * undefined __register FUN_00510eb4(int * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 00510eb4-00510ee9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00510eb4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  iVar1 = FUN_00403224((int *)param_1[0x8d],(int)&PTR_FUN_0050fc3c);
  FUN_00510144(iVar1,extraout_EDX,extraout_ECX,param_4,param_5);
  (**(code **)(*param_1 + 0xe8))();
  return;
}

