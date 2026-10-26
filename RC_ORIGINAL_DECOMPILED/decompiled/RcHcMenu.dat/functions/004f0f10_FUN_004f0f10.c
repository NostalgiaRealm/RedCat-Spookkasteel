/*
 * FUN_004f0f10 at 004f0f10
 * undefined4 __register FUN_004f0f10(int * param_1, int param_2)
 * Address ranges: 004f0f10-004f0f93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004f0f10(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (int *)0x0) {
    FUN_00403d94("OAC_ValidateControls2:  Parameter cannot be nil");
  }
  if (param_2 == 0) {
    FUN_00403d94("Assertion failure");
  }
  iVar1 = FUN_004487c4(param_1);
  if (*(int *)(iVar1 + 0x208) != 0) {
    iVar1 = FUN_004487c4(param_1);
    FUN_004f1158(*(int **)(iVar1 + 0x208));
  }
  FUN_004f0d84(param_1,param_2);
  uVar2 = FUN_004f09e0(param_1,param_2);
  return uVar2;
}

