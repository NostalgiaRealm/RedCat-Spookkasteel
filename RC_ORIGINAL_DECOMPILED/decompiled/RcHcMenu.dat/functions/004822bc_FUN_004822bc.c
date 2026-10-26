/*
 * FUN_004822bc at 004822bc
 * undefined __register FUN_004822bc(int param_1, undefined2 param_2)
 * Address ranges: 004822bc-004822f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004822bc(int param_1,undefined2 param_2)

{
  int *piVar1;
  int iVar2;
  
  *(undefined2 *)(param_1 + 0x3c) = param_2;
  iVar2 = *(int *)(*(int *)(param_1 + 0x28) + 8) + -1;
  if (-1 < iVar2) {
    do {
      piVar1 = (int *)FUN_00412384(*(undefined4 **)(param_1 + 0x28),iVar2);
      FUN_00483bf8(piVar1);
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return;
}

