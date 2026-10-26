/*
 * FUN_004688e4 at 004688e4
 * int __register FUN_004688e4(int param_1, undefined * param_2)
 * Address ranges: 004688e4-00468924
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004688e4(int param_1,undefined *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 8);
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      iVar1 = FUN_00412384(*(undefined4 **)(param_1 + 4),iVar4);
      iVar2 = FUN_00409870(*(undefined **)(iVar1 + 0x2c),param_2);
      if (iVar2 == 0) {
        return iVar1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

