/*
 * FUN_004aafc8 at 004aafc8
 * undefined __register FUN_004aafc8(int param_1, undefined4 * param_2, undefined4 param_3, int * param_4)
 * Address ranges: 004aafc8-004ab01d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004aafc8(int param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_18 [4];
  int local_8;
  
  puVar3 = local_18;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_8 = param_1;
  uVar1 = FUN_0040320c(param_4,(int)&PTR_FUN_004ac5f0);
  if ((char)uVar1 == '\0') {
    FUN_00403d94("Assertion failure");
  }
  *(int **)(local_8 + 0x128) = param_4;
  return;
}

