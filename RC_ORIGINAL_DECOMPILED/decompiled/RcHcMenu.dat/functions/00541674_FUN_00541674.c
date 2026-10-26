/*
 * FUN_00541674 at 00541674
 * undefined __register FUN_00541674(int * param_1)
 * Address ranges: 00541674-005416bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00541674(int *param_1)

{
  int *piVar1;
  
  piVar1 = FUN_00540630((int *)&PTR_FUN_00540184,'\x01',param_1);
  param_1[0x9f] = (int)piVar1;
  piVar1 = FUN_0053e7cc((int *)&PTR_FUN_00540328,'\x01',param_1);
  param_1[0xa0] = (int)piVar1;
  FUN_0053f314(param_1[0xa0],0);
  return;
}

