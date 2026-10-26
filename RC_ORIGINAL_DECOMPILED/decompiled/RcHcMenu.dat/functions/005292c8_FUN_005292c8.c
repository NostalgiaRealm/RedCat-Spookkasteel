/*
 * FUN_005292c8 at 005292c8
 * undefined __register FUN_005292c8(int * param_1)
 * Address ranges: 005292c8-00529319
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005292c8(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_005233ac((int *)&PTR_FUN_00525c38,'\x01',param_1);
  param_1[0x9d] = iVar1;
  piVar2 = FUN_0052703c((int *)&PTR_FUN_00525ae0,'\x01',param_1);
  param_1[0x9f] = (int)piVar2;
  piVar2 = FUN_0051da58((int *)&PTR_FUN_0051b87c,'\x01',param_1);
  param_1[0xa1] = (int)piVar2;
  return;
}

