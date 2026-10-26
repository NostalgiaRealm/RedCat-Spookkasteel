/*
 * FUN_004311c0 at 004311c0
 * undefined __register FUN_004311c0(int * param_1, int param_2, undefined4 param_3)
 * Address ranges: 004311c0-004311e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004311c0(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*param_1 == 0) {
    iVar1 = FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',param_3);
    *param_1 = iVar1;
  }
  FUN_004121d8((int *)*param_1,param_2);
  return;
}

