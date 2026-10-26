/*
 * FUN_0041ed60 at 0041ed60
 * undefined __register FUN_0041ed60(int param_1, int param_2)
 * Address ranges: 0041ed60-0041eda5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041ed60(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 8) + -1;
  if (-1 < iVar3) {
    do {
      iVar1 = FUN_00412384(*(undefined4 **)(param_1 + 4),iVar3);
      uVar2 = thunk_FUN_004032a4(iVar1,param_2);
      if ((char)uVar2 != '\0') {
        FUN_00412224(*(int **)(param_1 + 4),iVar3);
        FUN_00412224(*(int **)(param_1 + 8),iVar3);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return;
}

