/*
 * FUN_00434828 at 00434828
 * undefined __register FUN_00434828(int param_1, int * param_2)
 * Address ranges: 00434828-00434849
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00434828(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  FUN_00431630(param_1,param_2);
  uVar1 = FUN_00403224(param_2,(int)&PTR_FUN_0042ebec);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  return;
}

