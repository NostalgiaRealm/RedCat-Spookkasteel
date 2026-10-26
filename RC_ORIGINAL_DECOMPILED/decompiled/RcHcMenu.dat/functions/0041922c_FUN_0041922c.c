/*
 * FUN_0041922c at 0041922c
 * undefined __register FUN_0041922c(int param_1, int param_2, char param_3)
 * Address ranges: 0041922c-00419285
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041922c(int param_1,int param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((param_3 == '\x01') && (param_2 != 0)) {
    FUN_00419210(param_1,param_2);
  }
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 8), -1 < iVar2 + -1)) {
    iVar3 = 0;
    do {
      piVar1 = (int *)FUN_00412384(*(undefined4 **)(param_1 + 0x10),iVar3);
      (**(code **)(*piVar1 + 0x10))(piVar1,param_2,param_3);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

