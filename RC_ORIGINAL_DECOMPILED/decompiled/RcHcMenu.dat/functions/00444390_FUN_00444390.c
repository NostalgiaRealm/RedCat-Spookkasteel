/*
 * FUN_00444390 at 00444390
 * undefined4 __register FUN_00444390(int * param_1, int param_2, char param_3)
 * Address ranges: 00444390-004443fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00444390(int *param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (((param_3 == '\0') &&
      (uVar1 = FUN_0040320c(param_1,(int)&PTR_FUN_004404a0), (char)uVar1 != '\0')) &&
     (iVar2 = (**(code **)(*param_1 + 0x34))(), param_2 == iVar2)) {
    uVar3 = FUN_004455f8((int)param_1);
  }
  else {
    for (iVar2 = FUN_00444360((int)param_1); (iVar2 != 0 && (*(int *)(iVar2 + 0x48) == 0));
        iVar2 = *(int *)(iVar2 + 0x58)) {
    }
    if (iVar2 != 0) {
      uVar3 = *(undefined4 *)(iVar2 + 0x48);
    }
  }
  return uVar3;
}

