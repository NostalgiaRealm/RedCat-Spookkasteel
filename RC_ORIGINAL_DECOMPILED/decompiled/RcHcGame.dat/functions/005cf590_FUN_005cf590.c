/*
 * FUN_005cf590 at 005cf590
 * undefined FUN_005cf590(void)
 * Address ranges: 005cf590-005cf5ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005cf590(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (iVar3 < 1) {
    param_1[0xb] = (int)(param_1 + 0x39);
    return;
  }
  iVar1 = FUN_005e0580();
  if (0 < iVar3) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 0x8c;
      *(int *)(param_1[0x46] + -0x88 + iVar2) = iVar1;
      iVar1 = iVar1 + 0x30;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    param_1[0xb] = (int)(param_1 + 0x39);
    return;
  }
  param_1[0xb] = (int)(param_1 + 0x39);
  return;
}

