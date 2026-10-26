/*
 * FUN_00448b48 at 00448b48
 * int __register FUN_00448b48(short param_1, undefined4 param_2, int param_3, int param_4)
 * Address ranges: 00448b48-00448bc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00448b48(short param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  undefined4 extraout_EDX;
  int iVar3;
  
  iVar3 = 0;
  if (*(char *)(param_4 + -5) == '\0') {
    if ((*(char *)(param_4 + -6) != '\0') &&
       (iVar1 = param_4, bVar2 = FUN_00448b14(param_1,param_2,param_3,param_4), param_3 = iVar1,
       param_2 = extraout_EDX, !bVar2)) {
      iVar3 = (**(code **)PTR_DAT_00572210)();
      return -(iVar3 - *(int *)(param_4 + -0xc));
    }
    if ((*(char *)(param_4 + -6) == '\0') &&
       (bVar2 = FUN_00448b14(param_1,param_2,param_3,param_4), bVar2)) {
      iVar3 = (**(code **)PTR_DAT_00572210)();
      iVar3 = iVar3 - *(int *)(param_4 + -0xc);
    }
  }
  return iVar3;
}

