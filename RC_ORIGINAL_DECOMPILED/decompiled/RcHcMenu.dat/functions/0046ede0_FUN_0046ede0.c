/*
 * FUN_0046ede0 at 0046ede0
 * undefined __register FUN_0046ede0(int param_1, undefined1 param_2, undefined4 param_3, char param_4)
 * Address ranges: 0046ede0-0046ee2d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046ede0(int param_1,undefined1 param_2,undefined4 param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x28) + 8) + -1;
  if (-1 < iVar2) {
    do {
      piVar1 = (int *)FUN_00412384(*(undefined4 **)(param_1 + 0x28),iVar2);
      if (param_4 == *(char *)((int)piVar1 + 0x16)) {
        (**(code **)(*piVar1 + 0x14))(piVar1,param_2,param_3);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return;
}

