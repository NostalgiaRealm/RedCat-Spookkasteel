/*
 * FUN_005042f4 at 005042f4
 * undefined __register FUN_005042f4(int param_1, int * param_2)
 * Address ranges: 005042f4-00504322
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005042f4(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00403224(*(int **)(param_1 + 0x234),(int)&PTR_FUN_00503898);
  FUN_00403e04(param_2,*(undefined4 **)(iVar1 + 0xc));
  return;
}

