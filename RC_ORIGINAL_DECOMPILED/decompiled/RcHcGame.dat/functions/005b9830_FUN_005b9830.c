/*
 * FUN_005b9830 at 005b9830
 * undefined FUN_005b9830(void)
 * Address ranges: 005b9830-005b9894
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005b9830(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_2 + 200) == param_3) {
    return 1;
  }
  *(int *)(param_2 + 200) = param_3;
  *(undefined4 *)(param_1 + 0x10) = 1;
  iVar1 = *(int *)(param_1 + 0x18);
  iVar3 = *(int *)(param_2 + 0x40) * 0x50 + *(int *)(iVar1 + 0x110);
  iVar2 = *(int *)(iVar3 + 0x44);
  iVar3 = *(int *)(iVar3 + 0x48);
  *(char *)(iVar2 * 0x100 + iVar3 + 0xd5dc + iVar1) = (char)param_3;
  *(char *)(iVar3 * 0x100 + iVar2 + 0xd5dc + iVar1) = (char)param_3;
  return 1;
}

