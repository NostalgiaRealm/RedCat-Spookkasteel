/*
 * FUN_00480b14 at 00480b14
 * int __register FUN_00480b14(int param_1, undefined * param_2, int param_3)
 * Address ranges: 00480b14-00480b7e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00480b14(int param_1,undefined *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_3 != 0) && (iVar4 = *(int *)(*(int *)(param_1 + 0x28) + 8), -1 < iVar4 + -1)) {
    iVar3 = 0;
    do {
      iVar1 = FUN_00412384(*(undefined4 **)(param_1 + 0x28),iVar3);
      if (((*(int *)(iVar1 + 4) == param_3) && (*(char *)(iVar1 + 0x69) != '\0')) &&
         (iVar2 = FUN_00409870(*(undefined **)(iVar1 + 0x88),param_2), iVar2 == 0)) {
        return iVar1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = FUN_00480ac0(param_1,param_2);
  return iVar4;
}

