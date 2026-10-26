/*
 * FUN_00480ac0 at 00480ac0
 * int __register FUN_00480ac0(int param_1, undefined * param_2)
 * Address ranges: 00480ac0-00480b12
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00480ac0(int param_1,undefined *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 8);
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      iVar1 = FUN_00412384(*(undefined4 **)(param_1 + 0x28),iVar4);
      if (((*(int *)(iVar1 + 0x88) != 0) || (*(char *)(iVar1 + 0x62) != '\0')) &&
         (iVar2 = FUN_00409870(*(undefined **)(iVar1 + 0x88),param_2), iVar2 == 0)) {
        return iVar1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

