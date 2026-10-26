/*
 * FUN_004f9e1c at 004f9e1c
 * undefined __register FUN_004f9e1c(int param_1, int param_2, undefined4 * param_3)
 * Address ranges: 004f9e1c-004f9ece
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f9e1c(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char local_14;
  char local_13;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  iVar3 = FUN_004f9d34(param_1,param_2);
  local_14 = (char)uVar1;
  local_13 = (char)((uint)uVar1 >> 8);
  if (iVar3 == -1) {
    if ((local_14 != '\0') || (local_13 != '\0')) {
      iVar3 = FUN_0045da14(*(int *)(param_1 + 8));
      FUN_0045d6f4(*(int **)(param_1 + 8),iVar3);
      pcVar4 = (char *)FUN_0045d430(*(int **)(param_1 + 8),iVar3);
      *pcVar4 = local_14;
      pcVar4[1] = local_13;
      *(undefined4 *)(pcVar4 + 4) = uVar2;
    }
  }
  else if ((local_13 == '\0') && (local_14 == '\0')) {
    FUN_0045d540(*(int **)(param_1 + 8),iVar3);
  }
  else {
    pcVar4 = (char *)FUN_0045d430(*(int **)(param_1 + 8),iVar3);
    *pcVar4 = local_14;
  }
  return;
}

