/*
 * FUN_00504bbc at 00504bbc
 * int __register FUN_00504bbc(undefined4 * param_1)
 * Address ranges: 00504bbc-00504c13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00504bbc(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  
  piVar1 = (int *)FUN_0048b528(param_1);
  iVar2 = FUN_00403224(piVar1,(int)&PTR_FUN_0050499c);
  if (param_1[0x12] != 0) {
    uVar3 = FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',extraout_ECX);
    *(undefined4 *)(iVar2 + 0x48) = uVar3;
    (**(code **)(**(int **)(iVar2 + 0x48) + 8))(*(int **)(iVar2 + 0x48),param_1[0x12]);
  }
  return iVar2;
}

