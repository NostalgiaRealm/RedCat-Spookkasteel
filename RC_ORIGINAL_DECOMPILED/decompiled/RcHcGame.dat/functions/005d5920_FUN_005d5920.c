/*
 * FUN_005d5920 at 005d5920
 * undefined FUN_005d5920(void)
 * Address ranges: 005d5920-005d5958
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005d5920(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[6];
  for (iVar2 = *(int *)(*(int *)(iVar1 + 0xd5cc) + 4 + param_2 * 0xc); -1 < iVar2;
      iVar2 = *(int *)(*(int *)(iVar1 + 0x1d5dc) + iVar2 * 4)) {
    *(undefined4 *)(*(int *)(iVar1 + 0xd5d4) + iVar2 * 4) = *param_1;
  }
  return;
}

