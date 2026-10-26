/*
 * FUN_00497450 at 00497450
 * undefined __register FUN_00497450(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00497450-00497496
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00497450(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  
  if (DAT_00571598 != (int *)0x0) {
    FUN_00403d94("Assertion failure");
    param_3 = extraout_ECX;
  }
  DAT_00571598 = FUN_004974d4((int *)&DAT_0049738c,'\x01',param_3);
  piVar1 = FUN_0045bee8(&DAT_0045bbbc,extraout_EDX,extraout_ECX_00);
  FUN_0045c024(piVar1,0x4973b4);
  return;
}

