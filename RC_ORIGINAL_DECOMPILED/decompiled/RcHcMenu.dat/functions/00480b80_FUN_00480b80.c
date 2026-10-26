/*
 * FUN_00480b80 at 00480b80
 * undefined4 __register FUN_00480b80(int param_1, undefined * param_2)
 * Address ranges: 00480b80-00480bd2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00480b80(int param_1,undefined *param_2)

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
      if (((*(int *)(iVar1 + 0x70) != 0) &&
          (iVar2 = FUN_00409870(*(undefined **)(iVar1 + 0x88),param_2), iVar2 == 0)) &&
         (*(char *)(iVar1 + 0x69) != '\0')) {
        return *(undefined4 *)(iVar1 + 0x70);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

