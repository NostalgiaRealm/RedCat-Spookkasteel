/*
 * FUN_005041e4 at 005041e4
 * undefined __register FUN_005041e4(int * param_1, int param_2)
 * Address ranges: 005041e4-0050421a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005041e4(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00403224((int *)param_1[0x8d],(int)&PTR_FUN_00503898);
  FUN_00503cf0(iVar1,param_2);
  (**(code **)(*param_1 + 0xe8))();
  return;
}

