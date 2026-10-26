/*
 * FUN_00509f00 at 00509f00
 * undefined __register FUN_00509f00(int param_1, int * param_2)
 * Address ranges: 00509f00-00509f5d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00509f00(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_00509aec);
  if ((char)uVar1 == '\0') {
    FUN_00403d94("Assertion failure");
  }
  iVar2 = FUN_00403224(param_2,(int)&PTR_FUN_00509aec);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar2 + 0x14);
  FUN_00501164(param_1,(int)param_2);
  return;
}

