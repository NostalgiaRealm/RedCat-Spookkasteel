/*
 * FUN_004177cc at 004177cc
 * int __register FUN_004177cc(char * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 004177cc-00417818
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004177cc(char *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(*(int *)(*(int *)(param_4 + -4) + 0x30) + 8);
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      iVar1 = FUN_00412384(*(undefined4 **)(*(int *)(param_4 + -4) + 0x30),iVar4);
      uVar2 = FUN_004097ac(*(char **)(iVar1 + 8),param_1);
      if ((char)uVar2 != '\0') {
        return iVar1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

