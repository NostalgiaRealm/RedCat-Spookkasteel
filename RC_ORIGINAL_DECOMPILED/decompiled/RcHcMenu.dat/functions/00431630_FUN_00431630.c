/*
 * FUN_00431630 at 00431630
 * undefined __register FUN_00431630(int param_1, int * param_2)
 * Address ranges: 00431630-00431648
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00431630(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00403224(param_2,(int)&PTR_FUN_0042e674);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}

