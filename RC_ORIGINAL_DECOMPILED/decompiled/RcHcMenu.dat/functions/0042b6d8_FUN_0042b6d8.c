/*
 * FUN_0042b6d8 at 0042b6d8
 * undefined __register FUN_0042b6d8(int * param_1, int param_2)
 * Address ranges: 0042b6d8-0042b705
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042b6d8(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 8);
  *(int *)(iVar1 + 0x10) = param_1[0x7f];
  if (*(char *)((int)param_1 + 0x1fa) == '\x04') {
    (**(code **)(*param_1 + 0xc0))(param_1,*(undefined4 *)(iVar1 + 8),iVar1 + 0x10);
  }
  return;
}

